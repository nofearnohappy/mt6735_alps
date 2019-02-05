/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#define LOG_TAG "MtkCam/CamAdapter"
//
#include <cutils/properties.h>      // [debug] should be remove
//
#include <inc/CamUtils.h>
using namespace android;
using namespace MtkCamUtils;
//
#include <camera_custom_zsd.h>
#include <camera_custom_vt.h>

#include <camera/MtkCamera.h>
//
#include <inc/ImgBufProvidersManager.h>
//
#include <mtkcam/v1/IParamsManager.h>
#include <mtkcam/v1/ICamAdapter.h>
#include <inc/BaseCamAdapter.h>
#include <inc/BCRCamAdapter.h>
using namespace NSBCRCamAdapter;
//
#include <mtkcam/hal/IHalSensor.h>
using namespace NSCam;
//
#include <mtkcam/hwutils/CamManager.h>
using namespace NSCam::Utils;
//
#include <cutils/properties.h>
//
#include <mtkcam/hwutils/CameraProfile.h>
using namespace CPTool;
//
/******************************************************************************
*
*******************************************************************************/
#define MY_LOGV(fmt, arg...)        CAM_LOGV("(%d)(%d)(%s)[%s] " fmt, ::gettid(), getOpenId(), getName(), __FUNCTION__, ##arg)
#define MY_LOGD(fmt, arg...)        CAM_LOGD("(%d)(%d)(%s)[%s] " fmt, ::gettid(), getOpenId(), getName(), __FUNCTION__, ##arg)
#define MY_LOGI(fmt, arg...)        CAM_LOGI("(%d)(%d)(%s)[%s] " fmt, ::gettid(), getOpenId(), getName(), __FUNCTION__, ##arg)
#define MY_LOGW(fmt, arg...)        CAM_LOGW("(%d)(%d)(%s)[%s] " fmt, ::gettid(), getOpenId(), getName(), __FUNCTION__, ##arg)
#define MY_LOGE(fmt, arg...)        CAM_LOGE("(%d)(%d)(%s)[%s] " fmt, ::gettid(), getOpenId(), getName(), __FUNCTION__, ##arg)
//
#define MY_LOGV_IF(cond, arg...)    if (cond) { MY_LOGV(arg); }
#define MY_LOGD_IF(cond, arg...)    if (cond) { MY_LOGD(arg); }
#define MY_LOGI_IF(cond, arg...)    if (cond) { MY_LOGI(arg); }
#define MY_LOGW_IF(cond, arg...)    if (cond) { MY_LOGW(arg); }
#define MY_LOGE_IF(cond, arg...)    if (cond) { MY_LOGE(arg); }

/******************************************************************************
*
*******************************************************************************/
bool
CamAdapter::
previewEnabled() const
{
    return (    mpStateManager->isState(IState::eState_Preview)||
                recordingEnabled());
}


/******************************************************************************
*
*******************************************************************************/
status_t
CamAdapter::
startPreview()
{
    return  mpStateManager->getCurrentState()->onStartPreview(this);
}


/******************************************************************************
*
*******************************************************************************/
void
CamAdapter::
stopPreview()
{
    mpStateManager->getCurrentState()->onStopPreview(this);
}


/******************************************************************************
*   CamAdapter::startPreview() -> IState::onStartPreview() ->
*   IStateHandler::onHandleStartPreview() -> CamAdapter::onHandleStartPreview()
*******************************************************************************/
status_t
CamAdapter::
onHandleStartPreview()
{
    //
    MY_LOGD("+");
    if (mpCpuCtrl)
    {
        CpuCtrl::CPU_CTRL_INFO cpuInfo;
        cpuInfo.bigCore = 4;
        cpuInfo.bigFreq = 1300000;
        cpuInfo.littleCore = 4;
        cpuInfo.littleFreq = 1300000;
        cpuInfo.timeout = 3;
        mpCpuCtrl->enable(cpuInfo);
    }
    //
    status_t ret = INVALID_OPERATION;
    MINT32 sensorFps = 0;
    MUINT32 pass1RingBufNum = 3;
    MUINT32 sensorScenario = SENSOR_SCENARIO_ID_NORMAL_PREVIEW;
    MUINT32 sensorDev = SENSOR_DEV_NONE;
    BCRCtrlNode::CONFIG_INFO configInfo;
    ResMgrDrv::MODE_STRUCT mode;
    //
    MUINT32 APFps = mpParamsMgr->getInt(CameraParameters::KEY_PREVIEW_FRAME_RATE); // default value
    MUINT32 mPreviewMaxFps = 54;
    //
    configInfo.replaceBufNumResize = 0;
    configInfo.replaceBufNumFullsize = 0;
    //
    if(mpResMgrDrv)
    {
        mpResMgrDrv->getMode(&mode);
        mode.scenSw = ResMgrDrv::SCEN_SW_CAM_PRV;
        mpResMgrDrv->setMode(&mode);
    }
    //
    IHalSensorList* const pHalSensorList = IHalSensorList::get();
    IHalSensor* pSensorHalObj = NULL;
    //
    if ( pHalSensorList != NULL )
    {
        sensorDev = pHalSensorList->querySensorDevIdx(getOpenId());
        pSensorHalObj = pHalSensorList->createSensor(
                                            LOG_TAG,
                                            getOpenId());

        if( pSensorHalObj != NULL )
        {
            pSensorHalObj->sendCommand(sensorDev,
                                SENSOR_CMD_GET_DEFAULT_FRAME_RATE_BY_SCENARIO,
                                (MINTPTR)&sensorScenario, (MINTPTR)&sensorFps, 0);
            MY_LOGE_IF(0 == sensorFps, "sensorFps in scenario(%d) is 0", sensorScenario);
            sensorFps /= 10; //NOTE: sensor default output frame rate is 10 base
            mPreviewMaxFps = (APFps <= sensorFps) ? APFps : sensorFps;
        }
        else
        {
            MY_LOGE("pSensorHalObj is NULL");
        }
    }
    else
    {
        MY_LOGE("pHalSensorList == NULL");
    }

    //
    if (mPreviewMaxFps > 30)
    {
        pass1RingBufNum += ((mPreviewMaxFps / 30) * 2 + 1);
        if(pass1RingBufNum > 15)
        {
            configInfo.replaceBufNumResize += (pass1RingBufNum - 15);
            pass1RingBufNum = 15;
        }
    }
    //
    MY_LOGD("Name(%s),sensorScenario(%d),pass1RingBufNum(%d),sensorFps(%d),APFps(%d),frameRate(%d)",
            mName.string(),
            sensorScenario,
            pass1RingBufNum,
            sensorFps,
            APFps,
            mPreviewMaxFps);
    //
    BCRPass1InitCfg bcrPass1InitCfg(
                        sensorScenario,
                        pass1RingBufNum,
                        mPreviewMaxFps);
    //
    if ( ! BaseCamAdapter::init() )
    {
        goto lbExit;
    }
    //
    mpCamGraph          = ICamGraph::createInstance(
                                        getOpenId(),
                                        mName.string());
    //
    mpBCRPass1         = BCRPass1::createInstance(bcrPass1InitCfg);
    //
    if (mpBCRCtrlNode)
    {
        mpBCRCtrlNode->setConfig(configInfo);
        mpBCRCtrlNode->setMode(BCRCtrlNode::MODE_NORMAL_PREVIEW);
    }
    //
    mpAllocBufHdl->init();
    //
    mpDefaultBufHdl->mapPort(DefaultBufHandler::eBuf_AP,        PASS2_PRV_DST_1);
    //
    mpCamGraph->setBufferHandler(   PASS1_FULLRAW,      mpAllocBufHdl);
    mpCamGraph->setBufferHandler(   PASS2_PRV_DST_1,    mpDefaultBufHdl);
    //
    mpCamGraph->connectData(    PASS1_FULLRAW,  CONTROL_FULLRAW,    mpBCRPass1,        mpBCRCtrlNode);
    //mpCamGraph->connectData(    PASS1_PURERAW,  CONTROL_PURERAW,    mpBCRPass1,        mpBCRCtrlNode);

    //
    if ( !mpCamGraph->init() ) {
        MY_LOGE("CamGraph:init");
        goto lbExit;
    }
    //
    if ( !mpCamGraph->start() ) {
        // use CAMERA_ERROR_SERVER_DIED callback to handle startPreview error
        mpCamMsgCbInfo->mNotifyCb(
                CAMERA_MSG_ERROR,
                CAMERA_ERROR_SERVER_DIED, 0,
                mpCamMsgCbInfo->mCbCookie
                );
        // do not return fail to avoid java exception
        mpStateManager->transitState(IState::eState_Preview);
        ret = OK;
        //
        MY_LOGE("CamGraph:start");
        goto lbExit;
    }
    //
    if ( !mpBCRCtrlNode->waitPreviewReady() )
    {
        MY_LOGE("wait preview ready failed");
        goto lbExit;
    }
    //
    mpStateManager->transitState(IState::eState_Preview);
    MY_LOGD("-");
    ret = OK;
    //
lbExit:
    if (pSensorHalObj)
    {
        pSensorHalObj->destroyInstance(LOG_TAG);
        pSensorHalObj = NULL;
    }
    //
    if (ret != OK)
    {
        forceStopAndCleanPreview();
    }
    //
    return ret;
}


/******************************************************************************
*   CamAdapter::stopPreview() -> IState::onStopPreview() ->
*   IStateHandler::onHandleStopPreview() -> CamAdapter::onHandleStopPreview()
*******************************************************************************/
status_t
CamAdapter::
onHandleStopPreview()
{
    return forceStopAndCleanPreview();
}


/******************************************************************************
*
*******************************************************************************/
status_t
CamAdapter::
forceStopAndCleanPreview()
{
    MY_LOGD("+");
    //
    if ( mpBCRCtrlNode != NULL)
    {
        mpBCRCtrlNode->setMode(BCRCtrlNode::MODE_IDLE);
    }
    //
    if ( mpCamGraph != NULL )
    {
        mpCamGraph->stop();
        mpCamGraph->uninit();
        mpCamGraph->disconnect();
        mpCamGraph->destroyInstance();
        mpCamGraph = NULL;
    }
    //
    if ( mpBCRPass1 != NULL )
    {
        mpBCRPass1->destroyInstance();
        mpBCRPass1 = NULL;
    }
    //
    if ( mpAllocBufHdl != NULL )
    {
        mpAllocBufHdl->uninit();
    }
    //
    if ( mpDefaultBufHdl != NULL )
    {
        mpDefaultBufHdl->unmapPort(DefaultBufHandler::eBuf_AP);
    }
    //
    MY_LOGD("transitState->eState_Idle");
    mpStateManager->transitState(IState::eState_Idle);
    //
    if (mpResMgrDrv)
    {
        ResMgrDrv::MODE_STRUCT mode;
        mpResMgrDrv->getMode(&mode);
        mode.scenSw = ResMgrDrv::SCEN_SW_CAM_IDLE;
        mpResMgrDrv->setMode(&mode);
    }
    //
    MY_LOGD("-");
    //
    return OK;
}
