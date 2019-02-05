/******************* mobileinfo\src\com\ckt\mobileinfo\MobileInfoPreferenceFragment.java ************************
    ����ʱ��: 2013��08��20��  10:09:58
    ��Ҫ����: 
    ��    ��: �� �� 
    ��    ��: ��ʼ�汾   1.0
    ��    ��:       
******************************************************************/
package com.mediatek.engineermode.sensor;


import android.os.Build;
import android.os.Bundle;
import android.os.SELinux;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.preference.PreferenceFragment;
import android.preference.PreferenceGroup;
import android.preference.Preference;
import android.preference.PreferenceScreen;
import android.util.Log;
import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorManager;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.List;
import java.util.Locale;
import com.mediatek.engineermode.R;


public class MobileInfoPreferenceFragment extends PreferenceFragment {
	
	private static final String LOG_TAG = "MobileInfoPreferenceFragment";
	
	public void setValueSummary(PreferenceGroup preferenceGroup, String preference, String property) {
		setValueSummary( preferenceGroup,  preference,  property,  false);
    }
	
    public void setValueSummary(PreferenceGroup preferenceGroup, String preference, String property,boolean needDel) {
    	if(needDel)
    	{
    		delIfValueIsBlank(preferenceGroup,preference,property);
		}
        try {
            findPreference(preference).setSummary(
                   SystemProperties.get(property,
                            getResources().getString(R.string.device_info_default)));
        } catch (RuntimeException e) {
            // No recovery
        }
    }
   
    public boolean delIfValueIsBlank(PreferenceGroup preferenceGroup, String preference, String property)
    {
    	if (SystemProperties.get(property).equals("")) {
            // ���Բ��������ȥ��  �� �� 2013��08��20�� 10:10:13
	        try {
	            preferenceGroup.removePreference(findPreference(preference));
	            return true;
	        } catch (RuntimeException e) {
	            Log.d(LOG_TAG, "Property '" + property + "' missing and no '"
	                    + preference + "' preference");
	        }
	    }
    	return false;
    }
    
    
    
	public static String readLine(String filename) throws IOException {
	    BufferedReader reader = new BufferedReader(new FileReader(filename), 256);
	    StringBuilder total;
	    String line = null; 
	    try {
            total = new StringBuilder(reader.readLine());
            while ((line = reader.readLine()) != null) {
                total.append('\n');
                total.append(line);
            }

        } finally {
            reader.close();
        }

	    return total.toString();
	}
	public void SetSummaryFromlineFile(PreferenceGroup preferenceGroup,String preference,String filename) {
		 SetSummaryFromlineFile(preferenceGroup,preference,filename,false);
	}
	
	public void SetSummaryFromlineFile(PreferenceGroup preferenceGroup,String preference,String filename,boolean needDel) {
		String st=getResources().getString(R.string.device_info_default);
		try {
			st=readLine(filename);

        } catch (IOException e) {
//            Log.d(LOG_TAG,
//                "IO Exception when SetSummaryFromlineFile",
//                e);
        }
		
		if(needDel)
		{
			delIfStIsBlank(preferenceGroup,preference, st);
	    }

		{
			try {
	            findPreference(preference).setSummary(st);
	        } catch (RuntimeException e) {

	        }
		}
	}
	
	public boolean delIfStIsBlank(PreferenceGroup preferenceGroup,String preference,String st)
    {
		if (st.equals("")||st.equals(getResources().getString(R.string.device_info_default))) {
	        // ���Բ��������ȥ��  �� �� 2013��08��20�� 10:10:13
	        try {
	            preferenceGroup.removePreference(findPreference(preference));
	            return true;
	        } catch (RuntimeException e) {
	            Log.d(LOG_TAG, "string is null"   + preference + "preference");
	        }
		}else if(preference == "pscalibrate" && !getPSensorName().startsWith("tmd")){
			try {
	                    preferenceGroup.removePreference(findPreference(preference));
        	            return true;
                	} catch (RuntimeException e) {
	                    Log.d(LOG_TAG, "string is null"   + preference + "preference");
        	        }
	    	}
		//zhouwei start: we don't need Light data ,so remove it 
		else{
			try{
				if(preference == "lightdata" || preference =="msensordata")
					preferenceGroup.removePreference(findPreference(preference));
			}catch (RuntimeException e) {
				
			}
		}
		//zhouwei end
		return false;
    }
	
	private String getPSensorName(){
    		SensorManager sm = (SensorManager) getActivity().getApplicationContext().getSystemService(Context.SENSOR_SERVICE);
		Sensor sensor = sm.getDefaultSensor(Sensor.TYPE_PROXIMITY);
		String PSensorNam = sensor.getName();
		PSensorNam = PSensorNam.toLowerCase().trim();
		Log.d("david","PSensorName : " + PSensorNam);
		return PSensorNam;
    }

}



