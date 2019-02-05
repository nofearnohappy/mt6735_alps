package com.mediatek.engineermode.sensor;

import java.io.IOException;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import android.app.Activity;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.R;


public class PSsensorCalibration extends Activity implements OnClickListener{
	
	private static final String TAG = "PSsensorCalibration";
	private static final String FILE_PS_CONFIG = "/sys/bus/platform/drivers/als_ps/config";
	
    private static final int UPDATE_INTERVAL = 200;

    private static final int MSG_GET_OFFSET_VALUE = 0;

    private static final int MSG_DO_CALIBRARION = 2;
    private static final int MSG_CLEAR_CALIBRARION = 3;
    private static final int MSG_GET_DATA = 4;
    private static final int MSG_UPDATE_DATA = 5;


    private static final int MSG_CALCULATE_FAILURE = 7;
    private static final int MSG_GET_DATA_SUCCESS = 8;
    private static final int MSG_GET_DATA_FAILURE = 9;
    private static final int MSG_CALIBRARION_SUCCESS = 10;
    private static final int MSG_CALIBRARION_FAILURE = 11;
    private static final int MSG_CLEAR_SUCCESS = 12;
    private static final int MSG_CLEAR_FAILURE = 13;
    
    private Button mDoCalibration;
    private Button mClearCalibration;
    private TextView mCurrentData;
    private TextView mOffValue;

    private TextView mResult;
    
    private Toast mToast;
    
    private int mData = 0;
    private int mHigh = 0;
    private int mLow = 0;
    private int mOffset = 0;

    
    private final HandlerThread mHandlerThread = new HandlerThread("async_handler");
    private Handler mHandler;
    private Handler mUiHandler;
    
    private SensorManager mSensorManager = null;
    private Sensor mSensor = null;
    private SensorEventListener mSensorEventListener = new SensorEventListener() {
        @Override
        public void onSensorChanged(SensorEvent event) {
            // Do nothing
        }

        @Override
        public void onAccuracyChanged(Sensor sensor, int accuracy) {
            // Do nothing
        }
    };
    
	@Override
    public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
	    setContentView(R.layout.pssensor_calibration);
	
	
	
        mDoCalibration = (Button) findViewById(R.id.button_sensor_ps_calibration_do_cali);
        mClearCalibration = (Button) findViewById(R.id.button_sensor_ps_calibration_clear_cali);

        mDoCalibration.setOnClickListener(this);
        mClearCalibration.setOnClickListener(this);

        mCurrentData = (TextView) findViewById(R.id.text_sensor_ps_calibration_current_data);
        mOffValue = (TextView) findViewById(R.id.text_sensor_ps_calibration_offset_value);

        mResult = (TextView) findViewById(R.id.text_sensor_ps_calibration_result);

        mSensorManager = (SensorManager) getSystemService(SENSOR_SERVICE);
        mSensor = mSensorManager.getDefaultSensor(Sensor.TYPE_PROXIMITY);


        
        mUiHandler = new Handler() {
            public void handleMessage(Message msg) {
                switch (msg.what) {

                case MSG_GET_DATA_SUCCESS:
                    mCurrentData.setText(String.format(Locale.ENGLISH,
                            getString(R.string.sensor_ps_calibration_current_data_format),
                            mData, mHigh, mLow));
                    mOffValue.setText(String.valueOf(mOffset));
                    break;
                case MSG_GET_DATA_FAILURE:
                	Log.d(TAG, "get fail");
                    showToast("Get PS data failed");
                    break;
                case MSG_CALIBRARION_FAILURE:
                	Log.d(TAG, "cali fail");
                    showToast(getResources().getString(R.string.sensor_ps_calibration_result_failed));
                    mResult.setText(getResources().getString(R.string.sensor_ps_calibration_result_failed));
                    enableButtons(true);
                    break;
                case MSG_CALIBRARION_SUCCESS:
                	Log.d(TAG, "cali success");
                    showToast(getResources().getString(R.string.sensor_ps_calibration_result_succeed));
                    mResult.setText(getResources().getString(R.string.sensor_ps_calibration_result_succeed));
                    enableButtons(true);
                    break;
                case MSG_CLEAR_FAILURE:
                	Log.d(TAG, "clear fail");
                    showToast(getResources().getString(R.string.sensor_ps_calibration_clear_failed));
                    mResult.setText(getResources().getString(R.string.sensor_ps_calibration_clear_failed));
                    enableButtons(true);
                    break;
                case MSG_CLEAR_SUCCESS:
                	Log.d(TAG, "clear success");
                    showToast(getResources().getString(R.string.sensor_ps_calibration_clear_succeed));
                    mResult.setText(getResources().getString(R.string.sensor_ps_calibration_clear_succeed));
                    enableButtons(true);
                    break;
                default:
                }
            }
        };

        mHandlerThread.start();
        mHandler = new Handler(mHandlerThread.getLooper()) {
            public void handleMessage(Message msg) {
                calibration(msg.what);
            }
        };
	}
	
	private void getCurrentData() {
		Log.d(TAG, "getCurrentData()");
		mUiHandler.removeMessages(MSG_GET_DATA_SUCCESS);
		int [] result = new int [2];

//        if(EmSensor.cktGetPsensorData(result)==EmSensor.RET_SUCCESS)
//        {
//        	mData=result[0];
//        }
//        else
//        {
//        	mData=-1;
//        }
        
//        Log.d(TAG, String.format("cktGetPsensorData(), ret %d  %d",mData,result[0]));
        
        
        if(EmSensor.cktGetPsensorOffData(result)==EmSensor.RET_SUCCESS)
        {
        	mOffset=result[0];
        }
        else
        {
        	mOffset=-1;
        }

        Log.d(TAG, String.format("cktGetPsensorOffData(), ret %d  %d",mOffset,result[0]));
        
        cktGetPsensorThreshold(result);
        Log.d(TAG, String.format("cktGetPsensorThreshold(), ret %d, %d", result[0], result[1]));
        mHigh = result[0];
        mLow = result[1];

        
        Message m = mUiHandler.obtainMessage(MSG_GET_DATA_SUCCESS);
        mUiHandler.sendMessage(m);
    }
	
	private void calibration(int what) {
		int result = 0;
		int [] temp = new int [3];
        if (what != MSG_UPDATE_DATA) {
        	Log.d(TAG, String.format("calibration(), operation %d", what));
        }
        
        Message m;
          	switch (what) {
	        case MSG_GET_DATA:
	        	mHandler.removeMessages(MSG_GET_DATA);
	            getCurrentData();
	            
	            m = mHandler.obtainMessage(MSG_UPDATE_DATA);
	            mHandler.sendMessageDelayed(m,UPDATE_INTERVAL);

	            break;
	        case MSG_UPDATE_DATA:
	        	mHandler.removeMessages(MSG_UPDATE_DATA);
	            if(EmSensor.cktGetPsensorData(temp)==EmSensor.RET_SUCCESS)
	            {
	            	mData=temp[0];
	            }
	            else
	            {
	                mData=-1;
	            }
	 //           Log.d(TAG, String.format("cktGetPsensorData %d %d", mData,temp[0]));
	            m = mUiHandler.obtainMessage(MSG_GET_DATA_SUCCESS);
	            mUiHandler.sendMessage(m);

	            m = mHandler.obtainMessage(MSG_UPDATE_DATA);
	            mHandler.sendMessageDelayed(m,UPDATE_INTERVAL);

	            break;
	        case MSG_DO_CALIBRARION:

	        	if(EmSensor.doCktPsensorCalibration(temp)==EmSensor.RET_SUCCESS)
	        	{
//	        		getCurrentData();
	        		
	        		m = mUiHandler.obtainMessage(MSG_CALIBRARION_SUCCESS);
		            mUiHandler.sendMessage(m);
	        	}
	        	else
	        	{
	        		m = mUiHandler.obtainMessage(MSG_CALIBRARION_FAILURE);
		            mUiHandler.sendMessage(m);
	        	}
	        	
	        	m = mHandler.obtainMessage(MSG_GET_DATA);
		        mHandler.sendMessage(m);

	            break;
	            
	        case MSG_CLEAR_CALIBRARION:

	            
	        	if(EmSensor.clearCktPsensorCalibration(temp)==EmSensor.RET_SUCCESS)
	        	{
//	        		getCurrentData();
	        		m = mUiHandler.obtainMessage(MSG_CLEAR_SUCCESS);
		            mUiHandler.sendMessage(m);
	        	}
	        	else
	        	{
	        		m = mUiHandler.obtainMessage(MSG_CLEAR_FAILURE);
		            mUiHandler.sendMessage(m);
	        	}
	        	m = mHandler.obtainMessage(MSG_GET_DATA);
		        mHandler.sendMessage(m);
	            break;
	 
	        default:
	            break;
	        }

        if (what != MSG_UPDATE_DATA) {
        	Log.d(TAG, String.format("calibration(), ret %d", result));
        }
	}
	
    @Override
    protected void onResume() {
        super.onResume();
        Log.d(TAG, "onResume()");
        
        mSensorManager.registerListener(mSensorEventListener, mSensor, SensorManager.SENSOR_DELAY_UI);
        
        Message m = mHandler.obtainMessage(MSG_GET_DATA);
        mHandler.sendMessage(m);
    }

    @Override
    protected void onPause() {
    	Log.d(TAG, "onPause()");
        mSensorManager.unregisterListener(mSensorEventListener);
        mHandler.removeMessages(MSG_UPDATE_DATA);
        mHandler.removeMessages(MSG_GET_DATA);
        mHandler.removeMessages(MSG_DO_CALIBRARION);
        mHandler.removeMessages(MSG_CLEAR_CALIBRARION);
        super.onPause();
    }
    
	@Override
    public void onClick(View arg0) {
		enableButtons(false);
		Message m;
		
    	mHandler.removeMessages(MSG_UPDATE_DATA);
        mHandler.removeMessages(MSG_GET_DATA);
        mHandler.removeMessages(MSG_DO_CALIBRARION);
        mHandler.removeMessages(MSG_CLEAR_CALIBRARION);
        
        if (arg0.getId() == mDoCalibration.getId()) {
        	Log.d(TAG, "do calibration");
            m = mHandler.obtainMessage(MSG_DO_CALIBRARION);
            mHandler.sendMessage(m);
            
        } else if (arg0.getId() == mClearCalibration.getId()) {
        	Log.d(TAG, "clear calibration");
        	m = mHandler.obtainMessage(MSG_CLEAR_CALIBRARION);
            mHandler.sendMessage(m);
        }
    }
	
    private void enableButtons(boolean enable) {
        mDoCalibration.setClickable(enable);
        mClearCalibration.setClickable(enable);
    }
    
    private void showToast(String msg) {
//        if (mToast != null) {
//            mToast.cancel();
//        }
//        mToast = Toast.makeText(this, msg, Toast.LENGTH_SHORT);
//        mToast.show();
    }
    
    
    private void cktGetPsensorThreshold(int[] result)
    {
    	String st;
    	result[0]=0;
    	result[1]=0;
    	try {
    		st=MobileInfoPreferenceFragment.readLine(FILE_PS_CONFIG);
        } catch (IOException e) {
//            Log.d(LOG,
//                "IO Exception when SetSummaryFromlineFile",
//                e);
        	return;
        }
    	
    	
    	String st2[] = st.split(" ");
    			
//    	for(String s : st2){
//    		Log.d(TAG, s);
//    	}
    	
    	try {
            result[0] = Integer.parseInt(st2[4]);
            result[1] = Integer.parseInt(st2[5]);
        } catch (NumberFormatException e) {
            // Let it return RET_FAILED
        	Log.e(TAG, "cktGetPsensorThreshold return NumberFormatException");
        }
    }
}
