#include "camera_custom_nvram.h"
#include "string.h"

int cust_NvramNeedCombineDef(int id)
{
    if((id==CAMERA_NVRAM_DATA_3A) || (id==CAMERA_NVRAM_DATA_STROBE) || (id == CAMERA_NVRAM_DATA_LENS))
    {
        return 1;
        //return 1;
    }
    else
    {
        return 0;
    }
}  
  
//def: bin or default of data
//nvram: read from nvram if it exists.
//purpose: combine def and nvram and output to def for data accessing
void cust_NvramCombine(int id, void* def, void* nvram)
{
  if(id==CAMERA_NVRAM_DATA_3A)
  {
    memcpy(& ((NVRAM_CAMERA_3A_STRUCT*)def)->rFlashAWBNVRAM.rCalibrationData, &((NVRAM_CAMERA_3A_STRUCT*)nvram)->rFlashAWBNVRAM.rCalibrationData, sizeof(FLASH_AWB_CALIBRATION_DATA_STRUCT));
  }
  else if(id==CAMERA_NVRAM_DATA_STROBE)
  {
    memcpy( ((NVRAM_CAMERA_STROBE_STRUCT*)def)->engTab.yTab, ((NVRAM_CAMERA_STROBE_STRUCT*)nvram)->engTab.yTab, 40*40*sizeof(short));
  }

  else if(id==CAMERA_NVRAM_DATA_LENS)
  {
    memcpy( &((NVRAM_LENS_PARA_STRUCT*)def)->rPDNVRAM.rCaliData, &((NVRAM_LENS_PARA_STRUCT*)nvram)->rPDNVRAM.rCaliData, sizeof(PD_CALIBRATION_DATA_T));
  }
}






