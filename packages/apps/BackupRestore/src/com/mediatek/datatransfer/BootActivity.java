package com.mediatek.datatransfer;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.widget.Toast;
import android.app.ActionBar;

import com.mediatek.datatransfer.utils.SDCardUtils;

public class BootActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
	// M: ckt zhouwei 20150814  ,optimize app when start it with a flash 
	ActionBar actionBar = getActionBar(); 
	if (actionBar != null) { 
		getActionBar().hide(); 
	} 
	// M : end
	
        super.onCreate(savedInstanceState);

        if (SDCardUtils.getExternalStoragePath(this) == null) {
            Toast.makeText(this, R.string.nosdcard_notice, Toast.LENGTH_SHORT).show();
            BootActivity.this.finish();
        }
        Intent intent = new Intent(this, MainActivity.class);
        this.startActivity(intent);
	// M: ckt zhouwei 20150814 , optimize app when start it with a flash
	overridePendingTransition(0, 0); 
	// M: end
        this.finish();
    }
}
