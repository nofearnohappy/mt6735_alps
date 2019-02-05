package com.mediatek.settings.plugin;

import android.app.ActionBar;
import android.app.Activity;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.ContentObserver;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.provider.Settings;
import android.telephony.PhoneStateListener;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.view.Gravity;
import android.view.LayoutInflater;

import android.widget.CompoundButton;
import android.widget.CompoundButton.OnCheckedChangeListener;
import android.widget.Switch;

import com.android.internal.telephony.ITelephony;
import com.android.internal.telephony.IccCardConstants;
import com.android.internal.telephony.PhoneConstants;
import com.android.internal.telephony.TelephonyIntents;
import com.android.internal.telephony.IccCardConstants.CardType;

import com.mediatek.internal.telephony.ITelephonyEx;
import com.mediatek.internal.telephony.ltedc.svlte.SvlteRatController;
import com.mediatek.op09.plugin.R;
import com.mediatek.telephony.TelephonyManagerEx;


/**
 * CT feature for add swith for LET data enable or not.
 */
public class UseLteDataSettings extends Activity {

    private static final String TAG = "UseLteDataSettings";

    private static final String INTENT_ACTION_FINISH_SWITCH_SVLTE_RAT_MODE =
            "com.mediatek.intent.action.FINISH_SWITCH_SVLTE_RAT_MODE";
    private static final String INTENT_ACTION_CARD_TYPE =
        "android.intent.action.CDMA_CARD_TYPE";
    private static final String MODE_STATUS = "mode_status";
    private static final String LTETDD_CDMA = "ltetdd_cdma";

    private static final int PROGRESS_DIALOG = 1000;

    private IntentFilter mIntentFilter;
    private Switch mSwitchBar;
    private boolean mSwitching;
    private boolean mSwitchBarChecked;
    private boolean mIsActiveWindow;
    private boolean mIsDialogShowing;
    private boolean isLTECardType;


    private final BroadcastReceiver mReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Log.i(TAG, "on receive broadcast action = " + action);
            if (action.equals(Intent.ACTION_AIRPLANE_MODE_CHANGED)) {
                Log.i(TAG, "action.equals(Intent.ACTION_AIRPLANE_MODE_CHANGED) udpateSwitch");
                updateSwitch();
            } else if (TelephonyIntents.ACTION_SIM_STATE_CHANGED.equals(action)) {
                int slotId = intent.getIntExtra(PhoneConstants.SLOT_KEY, 0);
                if (slotId == PhoneConstants.SIM_ID_1) {
                    Log.i(TAG, "TelephonyIntents.ACTION_SIM_STATE_CHANGED udpateSwitch");
                    updateSwitch();
                }
            } else if (INTENT_ACTION_FINISH_SWITCH_SVLTE_RAT_MODE.equals(action)) {
                mSwitching = false;
                updateSwitch();
                hideProgressDlg();
            } else if (TelephonyIntents.ACTION_CDMA_CARD_TYPE.equals(intent.getAction())) {
                CardType cardType = (CardType)
                intent.getExtra(TelephonyIntents.INTENT_KEY_CDMA_CARD_TYPE);
                if (cardType.equals(IccCardConstants.CardType.CT_4G_UICC_CARD)) {
                    isLTECardType = true;
                } else {
                    isLTECardType = false;
                }
                Log.i(TAG, "intent cardType = " + cardType.toString()
                        + ", isLTECardType " + isLTECardType);
                updateSwitch();
            }
        }
    };

    private ContentObserver mDataConnectionObserver = new ContentObserver(new Handler()) {
        @Override
        public void onChange(boolean selfChange) {
            Log.d(TAG, "onChange selfChange=" + selfChange);
            if (!selfChange) {
                updateSwitch();
            }
        }
    };

    @Override
    public void onCreate(Bundle icicle) {
        super.onCreate(icicle);
        setContentView(R.layout.use_lte_data_settings);
        initialize();
    }

    private void initialize() {
        LayoutInflater inflater = (LayoutInflater) getSystemService(
                Context.LAYOUT_INFLATER_SERVICE);
        mSwitchBar = new Switch(inflater.getContext());
        int padding = getResources().getDimensionPixelSize(R.dimen.action_bar_switch_padding);
        mSwitchBar.setPadding(0, 0, padding, 0);
        getActionBar().setDisplayOptions(ActionBar.DISPLAY_SHOW_CUSTOM,
                ActionBar.DISPLAY_SHOW_CUSTOM);
        getActionBar().setCustomView(mSwitchBar,
              new ActionBar.LayoutParams(ActionBar.LayoutParams.WRAP_CONTENT,
                      ActionBar.LayoutParams.WRAP_CONTENT,
                      Gravity.CENTER_VERTICAL | Gravity.END));
        mIntentFilter = new IntentFilter(Intent.ACTION_AIRPLANE_MODE_CHANGED);
        mIntentFilter.addAction(TelephonyIntents.ACTION_SIM_STATE_CHANGED);
        mIntentFilter.addAction(INTENT_ACTION_FINISH_SWITCH_SVLTE_RAT_MODE);
        mIntentFilter.addAction(INTENT_ACTION_CARD_TYPE);
        this.getContentResolver().registerContentObserver(
                Settings.Global.getUriFor(Settings.Global.LTE_ON_CDMA_RAT_MODE),
                true, mDataConnectionObserver);
        int pattern = Settings.Global.getInt(this.getContentResolver(),
                Settings.Global.LTE_ON_CDMA_RAT_MODE, TelephonyManagerEx.SVLTE_RAT_MODE_4G);
        if (pattern == TelephonyManagerEx.SVLTE_RAT_MODE_3G) {
            mSwitchBarChecked = false;
        } else {
            mSwitchBarChecked = true;
        }
        mSwitchBar.setChecked(mSwitchBarChecked);
        mSwitchBar.setOnCheckedChangeListener(mSwitchBarListener);
    }

    private OnCheckedChangeListener mSwitchBarListener = new OnCheckedChangeListener() {
        @Override
        public void onCheckedChanged(CompoundButton buttonView,
                boolean isChecked) {
            Log.i(TAG, "isChecked = " + isChecked);
            switchSvlteRatMode(isChecked);
        }
    };

    @Override
    public void onResume() {
        super.onResume();
        mIsActiveWindow = true;
        mSwitching = false;
        updateSwitch();
        registerReceiver(mReceiver, mIntentFilter);
        TelephonyManager telephonyManager =
            (TelephonyManager) UseLteDataSettings.this.getSystemService(Context.TELEPHONY_SERVICE);
        telephonyManager.listen(mPhoneStateListener,
                PhoneStateListener.LISTEN_CALL_STATE | PhoneStateListener.LISTEN_SERVICE_STATE);
    }

    private PhoneStateListener mPhoneStateListener = new PhoneStateListener() {
        @Override
        public void onCallStateChanged(int state, String incomingNumber) {
            super.onCallStateChanged(state, incomingNumber);
            Log.d(TAG, "onCallStateChanged, new state = " + state);
            updateSwitch();
        }

        @Override
        public void onServiceStateChanged(ServiceState serviceState) {
            Log.d(TAG, "onServiceStateChanged, new state = " + serviceState);
            updateSwitch();
        }
    };

    private void updateSwitch() {
        boolean simInserted = isSIMInserted(PhoneConstants.SIM_ID_1);
        boolean airPlaneMode = isAirPlaneMode();
        boolean radioOn = isTargetSimRadioOn(PhoneConstants.SIM_ID_1);
        boolean callStateIdle = isCallStateIDLE();
        boolean simStateIsReady = isSimStateReady(UseLteDataSettings.this, PhoneConstants.SIM_ID_1);
		
		if ((simInserted && !airPlaneMode && radioOn
                && callStateIdle && !mSwitching
                && simStateIsReady && isLTECardType) 
                || (useCTTestcard()))  {
            mSwitchBar.setEnabled(true);
        } else {
            mSwitchBar.setEnabled(false);
        }
        int pattern = Settings.Global.getInt(this.getContentResolver(),
                Settings.Global.LTE_ON_CDMA_RAT_MODE, TelephonyManagerEx.SVLTE_RAT_MODE_4G);
        if (pattern == TelephonyManagerEx.SVLTE_RAT_MODE_3G) {
            mSwitchBarChecked = false;
        } else {
            mSwitchBarChecked = true;
        }
        
        Log.d(TAG, "updateSwitch() simInserted=" + simInserted
                + ", airPlaneMode=" + airPlaneMode
                + ", radioOn=" + radioOn
                + ", callStateIdle=" + callStateIdle
                + ", mSwitching=" + mSwitching
                + ", mSwitchBarChecked =" + mSwitchBarChecked
                + ", simStateIsReady = " + simStateIsReady
                + ", isLTECardType = " + isLTECardType);
        mSwitchBar.setChecked(mSwitchBarChecked);
    }

    @Override
    public void onPause() {
        super.onPause();
        mIsActiveWindow = false;
        unregisterReceiver(mReceiver);
        TelephonyManager.getDefault().listen(
                mPhoneStateListener, PhoneStateListener.LISTEN_NONE);
    }

    private void switchSvlteRatMode(boolean isChecked) {
        if (mIsActiveWindow) {
            try {
                showProgressDlg();
                saveData(isChecked);
                switchSvlte(isChecked);
            } catch (RemoteException e) {
                hideProgressDlg();
                Log.i(TAG, "telephony.switchSvlteRatMode() has exception");
            }
            mSwitching = true;
            updateSwitch();
        }
    }

    private void saveData(boolean isChecked) throws RemoteException {
        if (!isChecked) {
            int lastMode = Settings.Global.getInt(this.getContentResolver(), Settings.Global.LTE_ON_CDMA_RAT_MODE, TelephonyManagerEx.SVLTE_RAT_MODE_4G);
            Log.i(TAG, "saveData isChecked = false lastMode = " + lastMode);
            this.getSharedPreferences(MODE_STATUS, Context.MODE_PRIVATE)
                .edit().putInt(LTETDD_CDMA, lastMode).commit();
            Settings.Global.putInt(this.getContentResolver(),
                    Settings.Global.LTE_ON_CDMA_RAT_MODE,
                        TelephonyManagerEx.SVLTE_RAT_MODE_3G);
        } else {
            int lte_cdma = this.getSharedPreferences(MODE_STATUS, Context.MODE_PRIVATE)
                .getInt(LTETDD_CDMA, -1);
            Log.i(TAG, "saveData isChecked = true lte_cdma = " + lte_cdma);
            if (lte_cdma != -1) {
                Settings.Global.putInt(this.getContentResolver(),
                        Settings.Global.LTE_ON_CDMA_RAT_MODE,
                        lte_cdma);
            } else {
                Settings.Global.putInt(this.getContentResolver(),
                        Settings.Global.LTE_ON_CDMA_RAT_MODE,
                        TelephonyManagerEx.SVLTE_RAT_MODE_4G);
            }
        }
    }

    private void switchSvlte(boolean isChecked) throws RemoteException {
        ITelephonyEx telephony = ITelephonyEx.Stub.asInterface(
                  ServiceManager.getService(Context.TELEPHONY_SERVICE_EX));
        if (null != telephony) {
            if (!isChecked) {
                Log.i(TAG, "switchSvlte isChecked = false switchSvlteRatMode 3g");
                telephony.switchRadioTechnology(SvlteRatController.RAT_MODE_SVLTE_2G
                              | SvlteRatController.RAT_MODE_SVLTE_3G);
                Log.i(TAG, "switchSvlte switchRadioTechnology 1, value= " +
                        (SvlteRatController.RAT_MODE_SVLTE_2G
                         | SvlteRatController.RAT_MODE_SVLTE_3G));
            } else {
                int lte_cdma = this.getSharedPreferences(MODE_STATUS,
                        Context.MODE_PRIVATE).getInt(LTETDD_CDMA, -1);
                
                Log.i(TAG, "switchSvlte isChecked = true last mode lte_cdma = " + lte_cdma);
                if (lte_cdma != -1) {
                    Log.i(TAG, "switchSvlte saveData isChecked = true put LTETDD_CDMA = -1");
                    this.getSharedPreferences(MODE_STATUS, Context.MODE_PRIVATE)
                        .edit().putInt(LTETDD_CDMA, -1).commit();
                    
                    if (lte_cdma == TelephonyManagerEx.SVLTE_RAT_MODE_4G_DATA_ONLY) {
                        Log.i(TAG, "switchSvlte last mode SVLTE_RAT_MODE_4G_DATA_ONLY");
                        telephony.switchRadioTechnology(SvlteRatController.RAT_MODE_SVLTE_4G);
                        Log.i(TAG, "switchSvlte 4G_DATA_ONLY, value= " + SvlteRatController.RAT_MODE_SVLTE_4G);
                    } else if (lte_cdma == TelephonyManagerEx.SVLTE_RAT_MODE_4G){
                        Log.i(TAG, "switchSvlte last mode SVLTE_RAT_MODE_4G");
                        telephony.switchRadioTechnology((SvlteRatController.RAT_MODE_SVLTE_2G
                            | SvlteRatController.RAT_MODE_SVLTE_3G
                            | SvlteRatController.RAT_MODE_SVLTE_4G));                    
                        Log.i(TAG, "switchSvlte RAT_MODE_4G, value= " + (SvlteRatController.RAT_MODE_SVLTE_2G
                                                | SvlteRatController.RAT_MODE_SVLTE_3G
                                                | SvlteRatController.RAT_MODE_SVLTE_4G));              
                    } else {
                        Log.i(TAG, "switchSvlte last mode error, do open 4G mode");
                        telephony.switchRadioTechnology(SvlteRatController.RAT_MODE_SVLTE_2G
                            | SvlteRatController.RAT_MODE_SVLTE_3G
                            | SvlteRatController.RAT_MODE_SVLTE_4G);                        
                        Log.i(TAG, "switchSvlte mode error, value= " + (SvlteRatController.RAT_MODE_SVLTE_2G
                                                | SvlteRatController.RAT_MODE_SVLTE_3G
                                                | SvlteRatController.RAT_MODE_SVLTE_4G));                                                  
                    }                                               
                } else {
                    telephony.switchRadioTechnology(SvlteRatController.RAT_MODE_SVLTE_2G
                            | SvlteRatController.RAT_MODE_SVLTE_3G
                            | SvlteRatController.RAT_MODE_SVLTE_4G);
                    Log.i(TAG, "switchSvlte switchRadioTechnology 2, value= " +
                            (SvlteRatController.RAT_MODE_SVLTE_2G
                              | SvlteRatController.RAT_MODE_SVLTE_3G
                              | SvlteRatController.RAT_MODE_SVLTE_4G));
                }
            }
        }
    }

    private void showProgressDlg() {
        Log.d(TAG, "showProgressDlg() with dialogMsg");
        mIsDialogShowing = true;
        showDialog(PROGRESS_DIALOG);
    }

    @Override
    public Dialog onCreateDialog(int id) {
        switch (id) {
        case PROGRESS_DIALOG:
            ProgressDialog dialog = new ProgressDialog(this);
            dialog.setMessage(getResources().getString(
                    R.string.gemini_data_connection_progress_message));
            dialog.setIndeterminate(true);
            dialog.setCancelable(false);
            return dialog;
        default:
            return null;
        }
    }

    private void hideProgressDlg() {
        Log.d(TAG, "hideProgressDlg()");
        if (mIsDialogShowing) {
            dismissDialog(PROGRESS_DIALOG);
            mIsDialogShowing = false;
        }
    }

    ///return true if air plane mode on
    private boolean isAirPlaneMode() {
        return Settings.System.getInt(this.getContentResolver(),
                Settings.System.AIRPLANE_MODE_ON, -1) == 1;
    }

    ///return true if sim one is insert
    private boolean isSIMInserted(int slotId) {
        try {
            ITelephony tmex = ITelephony.Stub.asInterface(android.os.ServiceManager
                    .getService(Context.TELEPHONY_SERVICE));
            Log.i(TAG, "isSIMInserted = " + (tmex != null && tmex.hasIccCardUsingSlotId(slotId)));
            return (tmex != null && tmex.hasIccCardUsingSlotId(slotId));
        } catch (RemoteException e) {
            Log.i(TAG, "isSIMInserted = false because RemoteException");
            return false;
        }
    }

    ///one sim can has one or more slot id
    private boolean isTargetSimRadioOn(int simId) {
        int[] targetSubId = SubscriptionManager.getSubId(simId);
        if (targetSubId != null && targetSubId.length > 0) {
            for (int i = 0; i < targetSubId.length; i++) {
               if (isTargetSlotRadioOn(targetSubId[i])) {
                   Log.i(TAG, "isTargetSimRadioOn true simId = " + simId);
                   return true;
               }
            }
            Log.i(TAG, "isTargetSimRadioOn false simId = " + simId);
            return false;
        } else {
            Log.i(TAG, "isTargetSimRadioOn false because" +
                    " targetSubId[] = null or targetSubId[].length is 0  simId =" + simId);
            return false;
        }
    }

    ///return true if sim one is Radio on
    static boolean isTargetSlotRadioOn(int subId) {
        boolean radioOn = true;

        try {
            ITelephony iTel = ITelephony.Stub.asInterface(
                    ServiceManager.getService(Context.TELEPHONY_SERVICE));
            if (null == iTel) {
                Log.i(TAG, "isTargetSlotRadioOn = false because iTel = null");
                return false;
            }
            Log.i(TAG, "isTargetSlotRadioOn = " + iTel.isRadioOnForSubscriber(subId));
            radioOn = iTel.isRadioOnForSubscriber(subId);
        } catch (RemoteException ex) {
            ex.printStackTrace();
        }
        Log.i(TAG, "isTargetSlotRadioOn radioOn = " + radioOn);
        return radioOn;
    }

    ///return true if sim one SIM_STATE_READY
    /**
     * judge if sim state is ready.
     * sim state:SIM_STATE_UNKNOWN = 0;SIM_STATE_ABSENT = 1
     * SIM_STATE_PIN_REQUIRED = 2;SIM_STATE_PUK_REQUIRED = 3;
     * SIM_STATE_NETWORK_LOCKED = 4;SIM_STATE_READY = 5;
     * SIM_STATE_CARD_IO_ERROR = 6;
     * @param context Context
     * @param simId sim id
     * @return true if is SIM_STATE_READY
     */
    private boolean isSimStateReady(int simId) {
        TelephonyManager telephonyManager = TelephonyManager.from(this);
        Log.i(TAG, "isSimStateReady = " + telephonyManager.getSimState(simId)
                + ", sim_state_ready == 5");
        return telephonyManager.getSimState(simId) == TelephonyManager.SIM_STATE_READY;
    }

    private boolean isCallStateIDLE() {
        TelephonyManager telephonyManager =
            (TelephonyManager) UseLteDataSettings.this.getSystemService(Context.TELEPHONY_SERVICE);
        int currPhoneCallState = telephonyManager.getCallState();
        Log.i(TAG, "use lte isCallStateIDLE = " +
                (currPhoneCallState == TelephonyManager.CALL_STATE_IDLE));
        return currPhoneCallState == TelephonyManager.CALL_STATE_IDLE;
    }

    /**
     * judge if sim state is ready.
     * sim state:SIM_STATE_UNKNOWN = 0;SIM_STATE_ABSENT = 1
     * SIM_STATE_PIN_REQUIRED = 2;SIM_STATE_PUK_REQUIRED = 3;
     * SIM_STATE_NETWORK_LOCKED = 4;SIM_STATE_READY = 5;
     * SIM_STATE_CARD_IO_ERROR = 6;
     * @param context Context
     * @param simId sim id
     * @return true if is SIM_STATE_READY
     */
    static boolean isSimStateReady(Context context, int simId) {
        int simState = TelephonyManager.from(context).getSimState(simId);
        Log.i(TAG, "isSimStateReady simState=" + simState);
        return simState == TelephonyManager.SIM_STATE_READY;
    }


    public boolean useCTTestcard() {
	    String value = SystemProperties.get("sys.forcttestcard");    
        Log.d(TAG, "useCTTestcard: value = " + value);
		if (value.equals("1")) {
            return true;
		} else {
		    return false;
        }
    }		
}
