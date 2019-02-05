package com.mediatek.engineermode.sensor;

import java.io.IOException;
import java.util.Locale;

import android.content.Context;
import android.content.Intent;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.preference.Preference;
import android.preference.PreferenceGroup;
import android.preference.PreferenceScreen;
import android.util.Log;
import android.widget.Toast;
import com.mediatek.engineermode.R;

public class SensorCalibrate extends MobileInfoPreferenceFragment
{
	private static final String LOG_TAG = "SensorCalibrate";
	private static final String FILE_ALSPS_INFO = "/sys/bus/platform/drivers/als_ps/chipinfo";
	private static final String FILE_GSENSOR_INFO = "/sys/bus/platform/drivers/gsensor/chipinfo";
	private static final String FILE_GYROSCOPE_INFO = "/sys/bus/platform/drivers/gyroscope/chipinfo";
	private static final String FILE_MSENSOR_INFO = "/sys/bus/platform/drivers/msensor/chipinfo";
	private static final String KEY_MSENSOR_CALIBRATE = "msensordata";
	private static final String KEY_GSENSOR_CALIBRATE = "gsensorcalibrate";
	private static final String KEY_LIGHT_DATA = "lightdata";
	private static final String KEY_PS_CALIBRATE = "pscalibrate";
	private static final String KEY_GYROSCOPE_CALIBRATE = "gyroscopecalibrate";
	
	private Preference mmSensorPreference = null;
	private Preference mgSensorPreference = null;
	private Preference mlightSensorPreference = null;
	private Preference mpsSensorPreference = null;
	private Preference mgyroscopeSensorPreference=null;
	
    private SensorManager mSensorManager = null;
    
    private Sensor mmSensor = null;
    private Sensor mgSensor = null;
    private Sensor mlightSensor = null;
    private Sensor mpsSensor = null;
    private Sensor mgyroscopeSensor=null;
    
    private Toast mToast;
    
    
    private Handler mUiHandler;
    
    private static final int MSG_GET_MSENSOR_DATA_SUCCESS = 0;
    private static final int MSG_GET_MSENSOR_DATA_FAILURE = 1;
    private static final int MSG_GET_GSENSOR_DATA_SUCCESS = 2;
    private static final int MSG_GET_GSENSOR_DATA_FAILURE = 3;
    private static final int MSG_GET_LIGTHSENSOR_DATA_SUCCESS = 4;
    private static final int MSG_GET_LIGHTSENSOR_DATA_FAILURE = 5;
    private static final int MSG_GET_PSSENSOR_DATA_SUCCESS = 6;
    private static final int MSG_GET_PSSENSOR_DATA_FAILURE = 7;
    private static final int MSG_GET_GYROSCOPESENSOR_DATA_SUCCESS = 8;
    private static final int MSG_GET_GYROSCOPESENSOR_DATA_FAILURE = 9;
    
    
    private String mMSensorString;
    private String mGSensorString;
    private String mLightSensorString;
    private String mPSSensorString;
    private String mGyroscopeSensorString;
    
	
	public SensorCalibrate() {
		// TODO Auto-generated constructor stub
	}
	@Override
    public void onCreate(Bundle icicle) {
        super.onCreate(icicle);
        addPreferencesFromResource(R.xml.sensorcalibrate);
        
        PreferenceScreen myPreferenceScreen=getPreferenceScreen();
        
        updataPreferences(myPreferenceScreen,KEY_GSENSOR_CALIBRATE,FILE_GSENSOR_INFO);
        updataPreferences(myPreferenceScreen,KEY_MSENSOR_CALIBRATE,FILE_MSENSOR_INFO);
        updataPreferences(myPreferenceScreen,KEY_LIGHT_DATA,FILE_ALSPS_INFO);
        updataPreferences(myPreferenceScreen,KEY_PS_CALIBRATE,FILE_ALSPS_INFO);
        
        updataPreferences(myPreferenceScreen,KEY_GYROSCOPE_CALIBRATE,FILE_GYROSCOPE_INFO);
        
        mgSensorPreference=findPreference(KEY_GSENSOR_CALIBRATE);
        mmSensorPreference=findPreference(KEY_MSENSOR_CALIBRATE);
        mlightSensorPreference=findPreference(KEY_LIGHT_DATA);
        mpsSensorPreference=findPreference(KEY_PS_CALIBRATE);
        mgyroscopeSensorPreference=findPreference(KEY_GYROSCOPE_CALIBRATE);
        
        mSensorManager = (SensorManager) getActivity().getSystemService(Context.SENSOR_SERVICE);
		if(mmSensorPreference !=null)
        {
	        mmSensor = mSensorManager.getDefaultSensor(Sensor.TYPE_MAGNETIC_FIELD);
	    }
        if(mgSensorPreference !=null)
        {
	        mgSensor = mSensorManager.getDefaultSensor(Sensor.TYPE_ACCELEROMETER);
	    }
	    if(mlightSensorPreference !=null)
        {
	        mlightSensor = mSensorManager.getDefaultSensor(Sensor.TYPE_LIGHT);
	    }
	    if(mpsSensorPreference !=null)
        {
	        mpsSensor = mSensorManager.getDefaultSensor(Sensor.TYPE_PROXIMITY);
	    }
	    if(mgyroscopeSensorPreference !=null)
        {
	        mgyroscopeSensor = mSensorManager.getDefaultSensor(Sensor.TYPE_GYROSCOPE);
	    }
	    
	    
	    mUiHandler = new Handler() {
            public void handleMessage(Message msg) {
                switch (msg.what) {

                case MSG_GET_MSENSOR_DATA_SUCCESS:
                	mmSensorPreference.setSummary(mMSensorString);
                    break;
                case MSG_GET_MSENSOR_DATA_FAILURE:
                    break;
                case MSG_GET_GSENSOR_DATA_SUCCESS:
               		mgSensorPreference.setSummary(mGSensorString);
                    break;
                case MSG_GET_GSENSOR_DATA_FAILURE:
                    break;
                case MSG_GET_LIGTHSENSOR_DATA_SUCCESS:
                    mlightSensorPreference.setSummary(mLightSensorString);
                    break;
                case MSG_GET_LIGHTSENSOR_DATA_FAILURE:
                    break;
                case MSG_GET_PSSENSOR_DATA_SUCCESS:
                    mpsSensorPreference.setSummary(mPSSensorString);
                    break;
                case MSG_GET_PSSENSOR_DATA_FAILURE:
                    break;
                case MSG_GET_GYROSCOPESENSOR_DATA_SUCCESS:
                    mgyroscopeSensorPreference.setSummary(mGyroscopeSensorString);
                	break;
                case MSG_GET_GYROSCOPESENSOR_DATA_FAILURE:
                    break;
                default:
                }
            }
        };
	}
	
	private void updataPreferences(PreferenceGroup preferenceGroup,String preference,String filename) {
		String st=getResources().getString(R.string.device_info_default);
		try {
			st=readLine(filename);
        } catch (IOException e) {
//            Log.d(LOG_TAG,
//                "IO Exception when updataPreferences",
//                e);
        }
		delIfStIsBlank(preferenceGroup,preference, st);
	}
	
	  
	@Override
    public boolean onPreferenceTreeClick(PreferenceScreen preferenceScreen, Preference preference) {
		showToast((String) preference.getTitle());
		if (preference.getKey().equals(KEY_GSENSOR_CALIBRATE)) {
			Intent i = new Intent(getActivity(), SensorCalibration.class);
            startActivity(i);  
            return true;
        }
		if (preference.getKey().equals(KEY_PS_CALIBRATE)) {
			Intent i = new Intent(getActivity(), PSsensorCalibration.class); 
            startActivity(i);  
            return true;
        }
		
		return super.onPreferenceTreeClick(preferenceScreen, preference);
	}



    
	public final SensorEventListener mSensorEventListener = new SensorEventListener() {

		// from the android.hardware.SensorEventListener interface
		@Override
		public void onSensorChanged(SensorEvent event) {
			int type = event.sensor.getType();
			float result=0;
			if (type == Sensor.TYPE_MAGNETIC_FIELD) {
//					Log.d(LOG_TAG, "(" + type + ")" + event.values[0]);


					float x = event.values[0];
					float y = event.values[1];
					float z = event.values[2];
					result = (float) Math
							.sqrt((double) (x * x + y * y + z * z));
//					mmSensorPreference.setSummary("MSensor Data: " + result );
					
//					mmSensorPreference.setSummary(String.format(Locale.ENGLISH,"MSensor Data: %+8.4f,%+8.0f,%+8.0f,%+8.0f",result,event.values[0], event.values[1], event.values[2]));
					mMSensorString=String.format(Locale.ENGLISH, getString(R.string.m_sensor_data) + "%+8.4f,%+8.0f,%+8.0f,%+8.0f",result,event.values[0], event.values[1], event.values[2]);
					mUiHandler.sendEmptyMessage(MSG_GET_MSENSOR_DATA_SUCCESS);
					
			}
			else if (type == Sensor.TYPE_ACCELEROMETER) {

//				mgSensorPreference.setSummary(String.format(Locale.ENGLISH,"g Sensor Data: %+8.4f,%+8.4f,%+8.4f",event.values[0], event.values[1], event.values[2]));
				mGSensorString=String.format(getString(R.string.g_sensor_data) + "%+8.4f,%+8.4f,%+8.4f",event.values[0], event.values[1], event.values[2]);
				mUiHandler.sendEmptyMessage(MSG_GET_GSENSOR_DATA_SUCCESS);
			}
			else if(type == Sensor.TYPE_LIGHT)
			{
//				mlightSensorPreference.setSummary("Light Data: "+event.values[0]);
				mLightSensorString= getString(R.string.light_data) + event.values[0];
				mUiHandler.sendEmptyMessage(MSG_GET_LIGTHSENSOR_DATA_SUCCESS);
			}
			else if(type == Sensor.TYPE_PROXIMITY)
			{
//				mpsSensorPreference.setSummary("Ps Data: "+event.values[0]);
				mPSSensorString= getString(R.string.ps_data) + event.values[0];
				mUiHandler.sendEmptyMessage(MSG_GET_PSSENSOR_DATA_SUCCESS);
			}
			else if(type == Sensor.TYPE_GYROSCOPE)
			{
//				mgyroscopeSensorPreference.setSummary(String.format(Locale.ENGLISH,"gyroscope Sensor Data: %+8.4f,%+8.4f,%+8.4f",event.values[0], event.values[1], event.values[2]));
				mGyroscopeSensorString=String.format(Locale.ENGLISH,"gyroscope Sensor Data: %+8.4f,%+8.4f,%+8.4f",event.values[0], event.values[1], event.values[2]);
				mUiHandler.sendEmptyMessage(MSG_GET_GYROSCOPESENSOR_DATA_SUCCESS);
			}
		}

		// from the android.hardware.SensorListener interface
		@Override
		public void onAccuracyChanged(Sensor sensor, int accuracy) {

		}

	};

    
	@Override
	public void onResume() {
        super.onResume();
        
		Log.d(LOG_TAG, "registerListener");
        if (mmSensor != null) {
             mSensorManager.registerListener(mSensorEventListener, mmSensor, SensorManager.SENSOR_DELAY_UI);
        }

        if (mgSensor != null) {
            mSensorManager.registerListener(mSensorEventListener, mgSensor, SensorManager.SENSOR_DELAY_UI);
        }

 
        if (mlightSensor != null) {
            mSensorManager.registerListener(mSensorEventListener, mlightSensor, SensorManager.SENSOR_DELAY_UI);
        }

        if (mpsSensor != null) {
            mSensorManager.registerListener(mSensorEventListener, mpsSensor, SensorManager.SENSOR_DELAY_UI);
        }

        if (mgyroscopeSensor != null) {
            mSensorManager.registerListener(mSensorEventListener, mgyroscopeSensor, SensorManager.SENSOR_DELAY_UI);
        }
    }

    @Override
    public void onPause() {
    	Log.d(LOG_TAG, "unregisterListener");
        mSensorManager.unregisterListener(mSensorEventListener);
        super.onPause();
    }
    
    private void showToast(String msg) {
//        if (mToast != null) {
//            mToast.cancel();
//        }
//        mToast = Toast.makeText(getActivity(), msg, Toast.LENGTH_SHORT);
//        mToast.show();
    }
}
