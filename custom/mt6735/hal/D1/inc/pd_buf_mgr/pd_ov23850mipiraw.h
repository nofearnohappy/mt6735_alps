#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "pd_buf_mgr.h"


namespace NS3A
{

class PD_OV23850MIPIRAW : protected PDBufMgr
{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Ctor/Dtor.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private:    ////    Disallowed.
	MUINT32  m_PDBufSz;
	MUINT16 *m_PDBuf;

protected :
	/**
	* @brief checking current sensor is supported or not. 
	*/
    MBOOL IsSupport( SPDProfile_t &iPdProfile); 

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Operations.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public:
    PD_OV23850MIPIRAW();
    ~PD_OV23850MIPIRAW();

	static PDBufMgr* getInstance();


	
 	/**
	* @brief get PD calibration data size.
	*/
	MINT32 GetPDCalSz();
	/**
	* @brief convert PD data buffer format.
	*/
	MUINT16* ConvertPDBufFormat( MUINT32  i4Size, MUINT8 *ptrBufAddr, MUINT32 i4FrmCnt); 
  
};

};  //  namespace PDMGR

