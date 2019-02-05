/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __HWMSEN_CHIP_INFO_H__
#define __HWMSEN_CHIP_INFO_H__
//ºê¶\u0161Òå
#define DEBUG_FOR_CUSTOM_SENSOR	(0)
#define MAX_SENSOR_NAME_SIZE	(33)
// \u017e÷ÖÖÊôÐÔÎÄ\u0152þµÄÂ·\u0178¶ ËÕ ÓÂ 2013Äê08ÔÂ01ÈÕ 14:21:42
#define NAME_FILE_FOR_ORIENTATION			"/sys/bus/platform/drivers/msensor/chipinfo"
#define NAME_FILE_FOR_MAGNETIC				"/sys/bus/platform/drivers/msensor/chipinfo"
#define NAME_FILE_FOR_ACCELEROMETER			"/sys/bus/platform/drivers/gsensor/chipinfo"
#define NAME_FILE_FOR_PROXIMITY				"/sys/bus/platform/drivers/als_ps/chipinfo"
#define NAME_FILE_FOR_LIGHT					"/sys/bus/platform/drivers/als_ps/chipinfo"
#define NAME_FILE_FOR_GYROSCOPE				"/sys/bus/platform/drivers/gyroscope/chipinfo"
#define NAME_FILE_FOR_BAROMETER				"/sys/bus/platform/drivers/barometer/chipinfo"

#define GetSensorNameForOrientation(a)		GetSensorNameHelp(a, NAME_FILE_FOR_ORIENTATION)
#define GetSensorNameForMagnetic(a)			GetSensorNameHelp(a, NAME_FILE_FOR_MAGNETIC)
#define GetSensorNameForAccelerometer(a) 	GetSensorNameHelp(a, NAME_FILE_FOR_ACCELEROMETER)
#define GetSensorNameForProximity(a)               GetSensorNameHelp(a,NAME_FILE_FOR_PROXIMITY)
#define GetSensorNameForLight(a)                      GetSensorNameHelp(a,NAME_FILE_FOR_LIGHT)
#define GetSensorNameForGyroscope(a)     	       GetSensorNameHelp(a, NAME_FILE_FOR_GYROSCOPE)
#define GetSensorNameForBarometer(a)     	       GetSensorNameHelp(a, NAME_FILE_FOR_BAROMETER)

#if (DEBUG_FOR_CUSTOM_SENSOR)	// ËÕ ÓÂ 2013Äê08ÔÂ01ÈÕ 09:46:18
#define CUSTOM_SENSOR_LOG(fmt, arg...)		   \
	do										   \
	{										   \
		ALOGD("[%s]"fmt, __FUNCTION__, ##arg); \
	} while(0)
#else
#define CUSTOM_SENSOR_LOG
#endif /* DEBUG_FOR_CUSTO_SENSOR */


#define MAX_NUM_SENSOR      (SENSORS_NUM)

typedef struct sensor_table
{
	const char	*name; // ÔÚÏµÍ³ÎÄ\u0152þÖÐµÄÃû×Ö ËÕ ÓÂ 2013Äê08ÔÂ01ÈÕ 14:24:25
	int type; // \u017d«\u017eÐÆ÷µÄÀàÐÍ ËÕ ÓÂ 2013Äê08ÔÂ01ÈÕ 14:24:30
	// ËÕ ÓÂ 2013Äê08ÔÂ01ÈÕ 11:20:43    int             index; // ÔÚÖÐsSensorListAllInOneµÄÎ»ÖÃ,Ä¿Ç°Ã»ÓÐÊ¹ÓÃ,²ÉÓÃµÄÊÇÎ»ÖÃÒ»ÖÂÀ\u017d±£Ö\u20acµÄ ËÕ ÓÂ 2013Äê08ÔÂ01ÈÕ 14:25:04
} CUSTOM_SENSOR_TABLE;

//º¯Êý¶\u0161Òå
int GenpSensor(void);


#endif

