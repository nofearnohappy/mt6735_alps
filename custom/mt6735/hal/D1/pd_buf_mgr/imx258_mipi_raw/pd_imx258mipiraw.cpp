#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include <pd_imx258mipiraw.h>
#include <aaa_log.h>
#include <cutils/properties.h>
#include <stdlib.h>

#define LOG_TAG "pd_buf_mgr_imx258mipiraw"

 
namespace NS3A
{

PDBufMgr* 
PD_IMX258MIPIRAW::getInstance()
{
    static PD_IMX258MIPIRAW singleton;
    return &singleton;

}


PD_IMX258MIPIRAW::PD_IMX258MIPIRAW()
{ 	
	MY_LOG("[PD Mgr] IMX258\n");
	m_PDBufSz = 0;
	m_PDBuf = NULL;
}

PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW()
{
	if( m_PDBuf)
		delete m_PDBuf;

	m_PDBufSz = 0;
	m_PDBuf = NULL;
}


MBOOL PD_IMX258MIPIRAW::IsSupport( SPDProfile_t &iPdProfile)
{
	MBOOL ret = MFALSE;

	//enable/disable debug log	
    char value[PROPERTY_VALUE_MAX] = {'\0'};
    property_get("debug.af_mgr.enable", value, "0");
    m_bDebugEnable = atoi(value);


	//all-pixel mode is supported.
	if( iPdProfile.u4IsZSD!=0)
	{
		ret = MTRUE;
	}
	else
	{
		MY_LOG("PDAF Mode is not Supported (%d, %d)\n", iPdProfile.uImgXsz, iPdProfile.uImgYsz);
	}
	return ret;

}

MINT32 PD_IMX258MIPIRAW::GetPDCalSz()
{
	return 0x54c;//126
}


MUINT16* PD_IMX258MIPIRAW::ConvertPDBufFormat( MUINT32  i4Size, MUINT8 *ptrBufAddr, MUINT32 i4FrmCnt)
{
	//Input :
	// i4Size        - DMA buffer size
	// ptrBufAddr - data buffer from dma 
	// i4FrmCnt   - current frame number


	MY_LOG("[%s]\n", __FUNCTION__);


	MUINT16 *ptr2Bbuf = (MUINT16 *)ptrBufAddr;
	MINT32   sz2Bbuf  = i4Size/2; //because using 2byte pointer.
	

	//----------------------------------------------------------------------------------

	//decide width and height of pd datam
	MINT32   pdW  = 0; 
	MINT32   pdH  = 0;
	MINT32   pdSz = 0;
	MINT32   cntW = 0;
	MINT32   cntH = 0;
	MBOOL    iswaitLS  = MTRUE; // waiting to meet the first element of one line
	
	for( MINT32 i=0; i<sz2Bbuf; i++)
	{
		if( ptr2Bbuf[i]!=0)
		{
			cntW++;
			cntH += iswaitLS ? 1 : 0; //count how many lines by counting how many first element is got 
			iswaitLS = false;
		}
		else
		{
			//latch how many elements are in one line
			if( iswaitLS==false)
			{
				if( pdW!=cntW && pdW!=0)
					MY_LOG("w size is not the same %d %d!!\n", pdW, cntW);
				pdW = cntW;
			}

			//rest counter
			cntW = 0;
			iswaitLS = true;
		}
	}

	pdH  = cntH;
	pdSz = pdW*pdH;

	MY_LOG_IF( m_bDebugEnable, "PD data size, W=%d H=%d, SZ=%d\n", pdW, pdH, pdSz);


	//----------------------------------------------------------------------------------
	//first in allocate local PD buffer directly.
	if( m_PDBuf==NULL)
	{
		//vaild pd data size
		m_PDBufSz = pdSz;
		m_PDBuf = new MUINT16 [m_PDBufSz];
	}
	//check PD buffer size.
	if( m_PDBufSz!=pdSz)
	{
		MY_LOG("CurPDSZ(%d) != PrePDSZ(%d)\n", pdSz, m_PDBufSz);
		if( m_PDBuf)
			delete m_PDBuf;
		m_PDBuf=NULL;
			
		m_PDBufSz = pdSz;
		m_PDBuf = new MUINT16 [m_PDBufSz];
	}
	//----------------------------------------------------------------------------------


	//extract pd data from dam buffer
	int k=0;
	MUINT16 *tmpbuf = new MUINT16 [m_PDBufSz];
	for( int i=0; i<sz2Bbuf; i++)
	{
		if(ptr2Bbuf[i]!=0)
		{
			tmpbuf[k] = ptr2Bbuf[i];
			k++;
		}
	}
	if( k!=m_PDBufSz)
	{		
		MY_LOG("Auto detect PD data size fail : PD data size %d %d\n", k, m_PDBufSz);
	}


	//separate L and R pd data
	MUINT16 **ptr=NULL;
	MUINT16 *ptrL =  m_PDBuf;
	MUINT16 *ptrR = &m_PDBuf[(pdH/2)*pdW];

	for ( int i=0; i < pdH; i++ )
    {
    	//LRRL
		if(i%4==0 || i%4==3)
			ptr = &ptrL;
		else
			ptr = &ptrR;


		for ( int j=0; j < pdW; j++ )
		{
			(*ptr)[j] = tmpbuf[i*pdW+j];
		}
		(*ptr) += pdW;
	}


	delete tmpbuf;
	tmpbuf=NULL;



	//store debug information.
	char value[200] = {'\0'};
	property_get("vc.dump.enable", value, "0");
	MBOOL bEnable = atoi(value);
	if (bEnable)
	{
		char fileName[64];
		sprintf(fileName, "/sdcard/vc/%d_pd.raw", i4FrmCnt);
		FILE *fp = fopen(fileName, "w");
		if ( fp!=NULL)
		{
			fwrite(reinterpret_cast<void *>(m_PDBuf), 1, m_PDBufSz*2, fp);
			fclose(fp);
		}	 

		sprintf(fileName, "/sdcard/vc/%d_in.raw", i4FrmCnt);
		fp = fopen(fileName, "w");
		if (fp!=NULL)
		{
			fwrite(reinterpret_cast<void *>(ptrBufAddr), 1, i4Size, fp);
			fclose(fp);
		}	 
	}














































	return m_PDBuf;

}


};  //  namespace PDMGR

