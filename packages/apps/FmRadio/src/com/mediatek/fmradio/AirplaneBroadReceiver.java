package com.mediatek.fmradio;
import android.content.SharedPreferences;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.mediatek.fmradio.FmRadioActivity;
import android.app.ActivityManager;
import java.util.List;
import android.content.ComponentName;
import android.widget.Toast;

public class AirplaneBroadReceiver extends BroadcastReceiver
{
	private static final String TAG = "Airplane_receiver";
        private static final String AIRPLANE_NAME = "Airplane";
         private static final String FmRadioService_name="com.mediatek.fmradio.FmRadioService";
        private static final String FLAG_AIRPLANE_NAME = "FAirplane";
      // protected boolean mAirplaneModeEnabled = false; 
        private FmRadioService mService = null;
	private Context context = null;

        public static boolean isServiceExisted(Context context, String className) {
        ActivityManager activityManager = (ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
        List<ActivityManager.RunningServiceInfo> serviceList = activityManager.getRunningServices(Integer.MAX_VALUE);

        if(!(serviceList.size() > 0)) {
            return false;
        }

        for(int i = 0; i < serviceList.size(); i++) {
            ActivityManager.RunningServiceInfo serviceInfo = serviceList.get(i);
            ComponentName serviceName = serviceInfo.service;

            if(serviceName.getClassName().equals(className)) {
                return true;
            }
        } 
        return false;
        }
      public void onReceive(Context context, Intent intent) {
             String action = intent.getAction();
              //  Log.d("ly", "mAirplaneModeEnabled"+FmRadioActivity.mAirplaneModeEnabled);
             // mService.powerDownAsync();
         
        if (Intent.ACTION_AIRPLANE_MODE_CHANGED.equals(action)) {
                FmRadioActivity.mAirplaneModeEnabled = intent.getBooleanExtra("state", false);
               // powerDownFM();
                 Log.d(TAG, "isServiceExisted"+isServiceExisted(context,FmRadioService_name));
                  if((FmRadioActivity.mAirplaneModeEnabled==true)&&(isServiceExisted(context,FmRadioService_name)==true))
                  {
                   Toast.makeText(context, R.string.Airplan_text, Toast.LENGTH_LONG).show();
                   context.stopService(new Intent(context, FmRadioService.class));
                  }
                 SharedPreferences sharedPreferences =context.getSharedPreferences(AIRPLANE_NAME,0);
                 SharedPreferences.Editor editor = sharedPreferences.edit();
                 editor.putBoolean(FLAG_AIRPLANE_NAME, FmRadioActivity.mAirplaneModeEnabled);
                 editor.commit();
                Log.d(TAG, "mAirplaneModeEnabled"+FmRadioActivity.mAirplaneModeEnabled);
                return;
            }
 
    
     }

}
