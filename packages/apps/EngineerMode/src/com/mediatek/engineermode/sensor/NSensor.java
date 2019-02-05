package com.mediatek.engineermode.sensor;

import com.mediatek.engineermode.R;
import android.app.Activity;
import android.app.FragmentManager;
import android.app.FragmentTransaction;
import android.os.Bundle;

public class NSensor extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.new_promixy_sensor);
	    FragmentManager fragmentManager = getFragmentManager();  
	    FragmentTransaction fragmentTransaction = fragmentManager.beginTransaction();
	    SensorCalibrate sensorCalibrate =new SensorCalibrate();
	    fragmentTransaction.replace(android.R.id.content, sensorCalibrate);
        //fragmentTransaction.addToBackStack(null);  
        fragmentTransaction.commit();
	}
	
}
