/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#define LOG_TAG "MtkCam/BCRCtrl"
//
#include <cutils/properties.h>      // [debug] should be remove
//
#include <CamUtils.h>
#include <mtkcam/Log.h>
#include <mtkcam/common.h>
using namespace NSCam;
//
#include <mtkcam/hwutils/CamManager.h>
using namespace NSCam::Utils;
//
#include <vector>
using namespace std;
//
#include <mtkcam/hal/IHalSensor.h>
//
#include <BCRCtrlNodeImpl.h>
using namespace NSCamNode;
//

/*******************************************************************************
*
********************************************************************************/
namespace NSCamNode {

/*******************************************************************************
*
********************************************************************************/
BCRCtrlNode*
BCRCtrlNode::
createInstance(
    const char*     userName)
{
    return new BCRCtrlNodeImpl(userName);
}


/*******************************************************************************
*
********************************************************************************/
void
BCRCtrlNode::
destroyInstance()
{
    delete this;
}


/*******************************************************************************
*
********************************************************************************/
BCRCtrlNode::
BCRCtrlNode()
    : ICamNode(LOG_TAG)
{
}


/*******************************************************************************
*
********************************************************************************/
BCRCtrlNode::
~BCRCtrlNode()
{
}


/*******************************************************************************
*
********************************************************************************/
BCRCtrlNodeImpl::
BCRCtrlNodeImpl(const char* userName)
    : muStateFlag(0)
    , mpIspSyncCtrl(NULL)
    , msName(userName)
    , mReplaceBufNumResize(0)
    , mReplaceBufNumFullsize(0)
    , mMode(MODE_IDLE)
    , mDequeueMagicNum(0)
{
    FUNC_NAME;

    //DATA
    addDataSupport( ENDPOINT_SRC, CONTROL_FULLRAW );
    addDataSupport( ENDPOINT_SRC, CONTROL_PURERAW );
    addDataSupport( ENDPOINT_DST, PASS2_PRV_DST_1);
    //notify
    addNotifySupport( CONTROL_STOP_PASS1 );
}


/*******************************************************************************
*
********************************************************************************/
BCRCtrlNodeImpl::
~BCRCtrlNodeImpl()
{
    FUNC_NAME;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
onInit()
{
    FUNC_START;
    //
    mpIspSyncCtrl = IspSyncControl::createInstance(getSensorIdx());
    if (mpIspSyncCtrl)
    {
        mpIspSyncCtrl->addPass1ReplaceBuffer(mReplaceBufNumFullsize, mReplaceBufNumResize);
    }
    //
    FUNC_END;
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
onUninit()
{
    FUNC_START;
    //
    if (mpIspSyncCtrl)
    {
        mpIspSyncCtrl->destroyInstance();
        mpIspSyncCtrl = NULL;
    }

    FUNC_END;
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
onStart()
{
    FUNC_START;
    // reset variables
    muStateFlag = FLAG_STARTED;
    //
    FUNC_END;
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
onStop()
{
    FUNC_START;
    //
    disableFlag(muStateFlag, FLAG_ALL);
    //
    FUNC_END;
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
onNotify(MUINT32 const msg, MUINT32 const ext1, MUINT32 const ext2)
{
    //FUNC_START;
    //
    MBOOL ret = MTRUE;
    //
    if (msg != PASS1_CONFIG_FRAME)
    {
        MY_LOGD("(0x%08X,0x%08X,0x%08X)",
                msg,
                ext1,
                ext2);
    }
    //
    switch (msg)
    {
        case PASS1_START_ISP:
        {
            MY_LOGD("PASS1_START_ISP");
            break;
        }
        case PASS1_STOP_ISP:
        {
            MY_LOGD("PASS1_STOP_ISP");
            break;
        }
        case PASS1_EOF:
        {
            MY_LOGD("PASS1_EOF");
            enableFlag(muStateFlag, FLAG_BUF_PREVIEW_OK);
            break;
        }
        case PASS1_CONFIG_FRAME:
        {
            MY_LOGD("PASS1_CONFIG_FRAME");
            break;
        }
        default:
        {
            ret = MTRUE;
        }
    }
    //
    //FUNC_END;
    return ret;
}

/*******************************************************************************
*
********************************************************************************/
MBOOL 
BCRCtrlNodeImpl::
onPostBuffer(MUINT32 const data, MUINTPTR const buf, MUINT32 const ext)
{
    //FUNC_START;
    MUINT32       dstdata;
    MUINT32       skipframeNumber = 30;
    MY_LOGV("(%d,0x%X,0x%08X)", data, buf, ext);

    switch (data)
    {
        case CONTROL_FULLRAW:
        {
            //MY_LOGD("pass CONTROL_FULLRAW to PASS2_PRV_DST_1", data);
            dstdata = PASS2_PRV_DST_1;
            break;
        }
        case CONTROL_PURERAW:
        {
            //MY_LOGD("pass CONTROL_PURERAW to PASS2_PRV_DST_1", data);
            dstdata = PASS2_PRV_DST_1;
            break;
        }
        default:
        {
            // drop frame
            MY_LOGD("drop data %d, buf 0x%08x", data, buf);
            handleReturnBuffer(data, buf);
            return MTRUE;
        }
    }

    MBOOL ret;
    ImgRequest outRequest;
    IImageBuffer* buffer = (IImageBuffer*)buf;
    ICamBufHandler* pBufHdl = getBufferHandler(dstdata);

    if ( !pBufHdl )
    {
        MY_LOGE("no buffer hdl for dstdata %d", dstdata);
        return MFALSE;
    }

    ret = pBufHdl->dequeBuffer(dstdata, &outRequest);
    if (!ret)
    {
        MY_LOGE("deque fail: dstdata %d, skip frame", dstdata);
        handleReturnBuffer(data, buf);
        return MTRUE;
        //return MFALSE;
    }

    //MY_LOGD("src[%d planes] dst[%d planes]", buffer->getPlaneCount(), outRequest.mBuffer->getPlaneCount());
    for (size_t i = 0; i < buffer->getPlaneCount(); i++)
    {
        MUINT8 *srcBuf = (MUINT8*)(buffer->getBufVA(i));
        MUINT8 *dstBuf = (MUINT8*)(outRequest.mBuffer->getBufVA(i));
        size_t srcSize = buffer->getBufSizeInBytes(i);
        size_t dstSize = outRequest.mBuffer->getBufSizeInBytes(i);

        //MY_LOGD("[%d-th plane] src size[%d] dst size[%d]", i, srcSize, dstSize);

        memcpy(dstBuf, srcBuf, srcSize);
    }

    handleReturnBuffer(data, buf);
    //
    //MY_LOGD("call handlePostBuffer(%d),(0x%X)", dstdata, outRequest.mBuffer);
    handlePostBuffer(dstdata, (MUINTPTR)(outRequest.mBuffer), ext);
    //
    //FUNC_END;
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
onReturnBuffer(MUINT32 const data, MUINTPTR const buf, MUINT32 const ext)
{
    //FUNC_START;
    MY_LOGV("(%d,0x%X,0x%08X)", data, buf, ext);
    switch (data)
    {
        case CONTROL_CAP_SRC:
        {
            handleReturnBuffer(CONTROL_FULLRAW, buf);
            break;
        }
        case CONTROL_PRV_SRC:
        {
            handleReturnBuffer(CONTROL_RESIZEDRAW, buf);
            break;
        }
        case CONTROL_PURERAW_SRC:
        {
            handleReturnBuffer(CONTROL_PURERAW, buf);
            break;
        }
        case PASS2_PRV_DST_1:
        {
            MBOOL ret;
            ImgRequest outRequest;
            IImageBuffer* buffer = (IImageBuffer*)buf;
            ICamBufHandler* pBufHdl = getBufferHandler(data);

            //MY_LOGD("data %d(PASS2_PRV_DST_1), buf 0x%x", data, buf);

            if ( !pBufHdl )
            {
                MY_LOGE("no buffer hdl for data %d, buf 0x%x", data, buf);
                return MFALSE;
            }
            ret = pBufHdl->enqueBuffer(data, buffer);
            if ( !ret )
            {
                MY_LOGE("enque fail: data %d, buf 0x%x", data, buf);
            }
            break;
        }
        default:
        {
            MY_LOGE("not support yet: %d", data);
            break;
        }
    }
    //FUNC_END;
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MVOID
BCRCtrlNodeImpl::
onDumpBuffer(const char* usr, MUINT32 const data, MUINTPTR const buf, MUINT32 const ext)
{
    //TBD
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
setConfig(CONFIG_INFO configInfo)
{
    MY_LOGD("RPBuf:Num RRZO(%d) IMGO(%d)",
            configInfo.replaceBufNumResize,
            configInfo.replaceBufNumFullsize);
    //
    mReplaceBufNumResize = configInfo.replaceBufNumResize;
    mReplaceBufNumFullsize = configInfo.replaceBufNumFullsize;
    //
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
setMode(MODE_TYPE mode)
{
    MY_LOGD("mode(%d->%d)",
            mMode,
            mode);
    //
    mMode = mode;
    //
    return MTRUE;
}


/*******************************************************************************
*
********************************************************************************/
MBOOL
BCRCtrlNodeImpl::
waitPreviewReady()
{
    MY_LOGD("start preview done -");
    return MTRUE;
}


////////////////////////////////////////////////////////////////////////////////
};  //namespace NSCamNode
