/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2012. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

package com.mediatek.rcse.plugin.contacts;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.provider.ContactsContract.Contacts;
import android.provider.ContactsContract.Data;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.View.MeasureSpec;
import android.view.View.OnClickListener;
import android.view.ViewGroup.LayoutParams;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import com.android.contacts.quickcontact.ExpandingEntryCardView;
import com.android.contacts.quickcontact.ExpandingEntryCardView.Entry;
import com.android.contacts.quickcontact.ExpandingEntryCardView.EntryTag;
import com.android.contacts.quickcontact.ExpandingEntryCardView.ExpandingEntryCardViewListener;
import com.mediatek.common.PluginImpl;
import com.mediatek.contacts.ext.DefaultViewCustomExtension;
import com.mediatek.contacts.ext.IViewCustomExtension.ContactListItemViewCustom;
import com.mediatek.contacts.ext.IViewCustomExtension.QuickContactCardViewCustom;
import com.mediatek.contacts.ext.IViewCustomExtension.QuickContactScrollerCustom;
import com.mediatek.rcse.api.Logger;
import com.mediatek.rcse.plugin.contacts.ContactExtention.Action;
import com.mediatek.rcse.service.PluginApiManager;

import com.orangelabs.rcs.R;
import com.orangelabs.rcs.provider.settings.RcsSettings;

import java.util.ArrayList;
import java.util.List;

/**
 * The Class ContactViewCustomExtensionForRCS for RCS contact plugin.
 */
@PluginImpl(interfaceName="com.mediatek.contacts.ext.IViewCustomExtension")
public class ContactViewCustomExtensionForRCS extends
        DefaultViewCustomExtension {
    private static final String TAG = "ContactViewCustomExtensionForRCS";
    private ContactExtention mContactPlugin = null;
    public static final String COMMD_FOR_RCS = "ExtenstionForRCS";
    private Drawable mExtenstionIcon;
    private Context mContext = null;
    private PluginApiManager mInstance = null;
    
    private final String[] mJoynActions = { "Send Joyn Message", "Send Message",
            "File Transfer", "Block Joyn Number" };
    private final String[] mJoynActionsIntegrated = { "Send Message",
            "Block Joyn Number" };
    
    /** 
     * Constant for invalid id. 
     */
    private static final int INVALID_ID = -1;
    public static final String RCS_DISPLAY_NAME = "rcs_display_name";
    public static final String RCS_PHONE_NUMBER = "rcs_phone_number";

    /**
     * Instantiates a new ContactViewCustomExtensionForRCS, called by Host app through plugin.
     *
     * @param context the context
     */
    public ContactViewCustomExtensionForRCS(Context context) {
        Logger.d(TAG, "[ContactViewCustomExtensionForRCS] constuctor entry "
                + context);
        mContext = context;
        mContactPlugin = new ContactExtention(mContext);
        mInstance = PluginApiManager.getInstance();
        Logger.d(TAG,
                "[ContactViewCustomExtensionForRCS] constuctor mInstance = "
                        + mInstance + " mContactPlugin = " + mContactPlugin);
        RcsSettings.createInstance(mContext);
    }

    /**
     * Interface implementation instance for Contact List API.
     *
     * @return the contact list item view custom
     */
    @Override
    public ContactListItemViewCustom getContactListItemViewCustom() {
        return mContactListItemViewCustom;
    }

    /**
     * Interface implementation instance for adding Joyn Group in QuickContactActivity.
     *
     * @return the quick contact card view custom
     */
    @Override
    public QuickContactCardViewCustom getQuickContactCardViewCustom() {
        return mQuickContactCardViewCustom;
    }

    /**
     * Interface implementation instance for adding Joyn Icon in scrollable item on top in QuickContactActivity.
     *
     * @return the quick contact scroller custom
     */
    @Override
    public QuickContactScrollerCustom getQuickContactScrollerCustom() {
        return mQuickContactScrollerCustom;
    }

    private ContactListItemViewCustom mContactListItemViewCustom = new ContactListItemViewCustom() {

        private ImageView mJoynIconView = null;
        private TextView mJoynUnreadTextView = null;
        private View mIconLayout = null;
        private int mJoynIconViewWidth;
        private int mJoynIconViewHeight;
        @Override
        public void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
            Logger.d(TAG, "[onMeasure] mJoynIconView:" + mJoynIconView);
            if(mContactPlugin == null){
                return;
            }
            if(mContactPlugin.isEnabled() == false){
                return;
            }
            if (isVisible(mJoynIconView)) {
               
                if (mContactPlugin != null) {
                    Drawable a = mContactPlugin.getAppIcon();
                    if (a != null) {
                        mJoynIconViewWidth = a.getIntrinsicWidth();
                        mJoynIconViewHeight = a.getIntrinsicHeight();
                        if(mJoynUnreadTextView != null && (mJoynUnreadTextView.getVisibility() == View.VISIBLE)){
                            mJoynUnreadTextView.measure(MeasureSpec.UNSPECIFIED, MeasureSpec.UNSPECIFIED);
                            int width = mJoynUnreadTextView.getMeasuredWidth();
                            mJoynIconViewWidth += width + 10 ; 
                        }
                        //mJoynIconView.measure(mJoynIconViewWidth, mJoynIconViewHeight);
                        mIconLayout.measure(mJoynIconViewWidth, mJoynIconViewHeight);
                    } else {
                        mJoynIconViewWidth = 0;
                        mJoynIconViewHeight = 0;
                    }
                } else {
                    mJoynIconViewWidth = 0;
                    mJoynIconViewHeight = 0;
                }
                Logger.d(TAG, "[onMeasure]  mJoynIconViewWidth : " + mJoynIconViewWidth
                        + " | mJoynIconViewHeight : " + mJoynIconViewHeight);
            } else {
                Logger.d(TAG, "[onMeasure] mJoynIconView not visible");
            }
            
        }

        @Override
        public void onLayout(boolean changed, int leftBound, int topBound,
                int rightBound, int bottomBound) {
            
            if(mContactPlugin == null){
                return;
            }
            if(mContactPlugin.isEnabled() == false){
                return;
            }
            if (isVisible(mJoynIconView)) {
                int photoTop1 = topBound + (bottomBound - topBound - mJoynIconViewHeight) / 2;
                /*mJoynIconView.layout(rightBound - (mJoynIconViewWidth), photoTop1, rightBound,
                        photoTop1 + mJoynIconViewHeight);*/
                mIconLayout.layout(rightBound - (mJoynIconViewWidth), photoTop1, rightBound,
                        photoTop1 + mJoynIconViewHeight);
            }
            
        }
        
        protected boolean isVisible(View view) {
            return view != null && view.getVisibility() == View.VISIBLE;
        }
        
        /**
         * Inflates the view from xml, set the image view and return layout to be added
         * @param contactId contactId of the contact in list
         * @return layout to be added
         */
        @Override
        public View createCustomView(long contactId) {
            Logger.d(TAG, "[createCustomView] contactId:" + contactId);
            Drawable rcsIcon = null;
            boolean canSetRCSIcon = false;
            if (mContactPlugin != null) {
                rcsIcon = mContactPlugin.getContactPresence(contactId);
                boolean isEnabled = mContactPlugin.isEnabled();
                Logger.d(TAG, "[createCustomView] isEnabled : " + isEnabled);
                if ((rcsIcon != null) && isEnabled) {
                    canSetRCSIcon = true;
                } else {
                    Logger.d(TAG, "[createCustomView] icon : " + rcsIcon
                            + " |isEnabled : " + isEnabled);
                    canSetRCSIcon = false;
                }
            } else {
                Logger.e(TAG, "[createCustomView] mContactPlugin is null ");
                canSetRCSIcon = false;
            }
            //canSetRCSIcon = true;//TODO
            //canSetRCSIcon true means contact is rcs contact, need to add imageview to viewgroup
            if (canSetRCSIcon) {
                try{
                Logger.d(TAG, "[createCustomView] inflating icon view");
                LayoutInflater mInflater;
                List<String> numbers = mContactPlugin.getNumbersByContactId(contactId);
                String number = null;
                if(numbers != null){
                    number = numbers.get(0);
                }
                mInflater = LayoutInflater.from(mContext);
                mIconLayout = mInflater.inflate(R.layout.rcs_icon_plugin, null);
                mJoynIconView = (ImageView) mIconLayout
                        .findViewById(R.id.rcs_icon);
                mJoynUnreadTextView = (TextView) mIconLayout
                .findViewById(R.id.rcs_unread_text);
                mJoynIconView.setVisibility(View.VISIBLE);
                mJoynIconView.setImageDrawable(mContactPlugin.getAppIcon());
                
                int unreadCount = mContactPlugin.getUnreadMessageCount(number);
                Log.i(TAG, "[createCustomView] unreadcount : " + unreadCount +" contact : "+ number);
                if(mJoynUnreadTextView != null)
                {
                    if(unreadCount != 0){
                        mJoynUnreadTextView.setVisibility(View.VISIBLE);
                        mJoynUnreadTextView.setTextColor(Color.BLACK);
                        mJoynUnreadTextView.setText(String.valueOf(unreadCount));
                    } else {
                        mJoynUnreadTextView.setVisibility(View.GONE);
                    }
                }
                
                }catch (Exception e) {
                    e.printStackTrace();
                }
            }else{
                return null;
            }
            return mIconLayout;
        }
    };

    private QuickContactCardViewCustom mQuickContactCardViewCustom = new QuickContactCardViewCustom() {
        /**
         * Create Joyn group and add items to it
         * @param lookupUri for extracting contactId
         * @return View created
         */
        private Intent mIntentMessaging = null;
        private Intent mIntentFt = null;
        private Drawable[] mJoynActionsDrawable = new Drawable[4];
        String mNumber = null;
        Context mActivityContext = null;
        
        
        @Override
        public View createCardView(View container, View anchorView, Uri lookupUri, Context context) {
            Drawable rcsIcon = null;
            long contactId = INVALID_ID;
            boolean canSetRCSIcon = false;
            Logger.d(TAG, "[createCardView] lookupUri:" + lookupUri);
            //try block
            try{
            mActivityContext = context;
            Action[] rcsActions = mContactPlugin.getContactActions();
            mIntentMessaging = rcsActions[0].intentAction;
            mIntentFt = rcsActions[1].intentAction;
            
            mJoynActionsDrawable[0]= rcsActions[0].icon;
            mJoynActionsDrawable[1]= mContactPlugin.getXMSDrawable();
            mJoynActionsDrawable[2]= rcsActions[1].icon;
            int mode = RcsSettings.getInstance().getMessagingUx();
            if(mContactPlugin == null){
                return null;
            }
            if(mContactPlugin.isEnabled() == false){
                return null;
            }
            if (mContactPlugin != null) {
                mContactPlugin.onContactDetailOpen(lookupUri);
            } else {
                Log.e(TAG, "[createCardView] mContactPlugin is null");
            }
            contactId = extractContactIdFromUri(lookupUri);
            if (mContactPlugin != null && contactId != INVALID_ID) {
                //find whether need to add joyn expanding view
                rcsIcon = mContactPlugin.getContactPresence(contactId);
                boolean isEnabled = mContactPlugin.isEnabled();
                Logger.d(TAG, "[createCardView] isEnabled : " + isEnabled + 
                        "contactId:" + contactId);
                if ((rcsIcon != null) && isEnabled) {
                    canSetRCSIcon = true;
                } else {
                    Logger.d(TAG, "[createCardView] icon : " + rcsIcon
                            + " |isEnabled : " + isEnabled);
                    canSetRCSIcon = false;
                }
            } else {
                Logger.e(TAG, "[createCardView] mContactPlugin : "
                        + mContactPlugin);
                canSetRCSIcon = false;
            }
            //canSetRCSIcon = true;
            if (canSetRCSIcon) {
                //true means need to add expanding view
                Logger.d(TAG, "[createCardView] adding card view mode:" + mode);
                ExpandingEntryCardView mJoynCard = new ExpandingEntryCardView(context);
                mJoynCard.setTitle("Joyn");
                if(mode == 1){
                    //fully integrated mode
                    mJoynCard.setOnClickListener(integratedClickListner);
                } else{
                    mJoynCard.setOnClickListener(covergedClickListner);
                }
                
                final List<List<Entry>> joynCardEntries;
                List<String> numbers = mContactPlugin.getNumbersByContactId(contactId);
                mNumber = numbers.get(0);
                mJoynActionsDrawable[3]= mContactPlugin.getBlockingDrawable(mNumber);
                if(mode == 1){
                    //fully integrated mode
                    joynCardEntries = createJoynEntriesIntegrated(mNumber);
                    Logger.d(TAG, "[createCardView] adding joyn card entries fully integrated" + joynCardEntries);
                    mJoynCard.initialize(joynCardEntries, 2, false, false, mExpandingEntryCardViewListener, null);
                } else{
                    //converged mode
                    joynCardEntries = createJoynEntriesConverged(mNumber);
                    Logger.d(TAG, "[createCardView] adding joyn card entries converged" + joynCardEntries);
                    mJoynCard.initialize(joynCardEntries, 4, false, false, mExpandingEntryCardViewListener, null);
                }
                
                LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(
                        LayoutParams.MATCH_PARENT, LayoutParams.WRAP_CONTENT);
                //params.setMarginStart(anchorView.getBottom());
                //params.addRule(LinearLayout., anchorView.getId());
                params.setMargins(14, 12, 14, 12);
                mJoynCard.setLayoutParams(params);
                mJoynCard.setElevation(2);
                //mJoynCard.setRadius(2);
                LinearLayout layout = (LinearLayout) container;
                layout.addView(mJoynCard, 2);
                return mJoynCard;
                }
            }catch(Exception e){
                    e.printStackTrace();
            }

            return null;
        }
        
        
        private OnClickListener covergedClickListner = new View.OnClickListener() {
            @Override
                    public void onClick(View v) {
                Logger.d(TAG, "[covergedClickListner] onClick:" + v);
                        EntryTag tag = (EntryTag)v.getTag();
                        int id = tag.getId();
                        Intent intent = tag.getIntent();
                Logger.d(TAG, "[covergedClickListner] id clicked:" + id);
                        switch(id){
                            case 0:
                                //send joyn message
                                intent.putExtra(RCS_DISPLAY_NAME, mNumber);
                                //for Joyn messaging ,need 9+++ extra to differentiate
                                intent.putExtra(RCS_PHONE_NUMBER, mNumber);
                                intent.putExtra("isjoyn", true);
                                //intent.putExtra("is_rcse_disabled", mIsRCSeDisabled);
                                mActivityContext.startActivity(intent);
                                break;
                            case 1:
                                //send xms message
                                intent.putExtra(RCS_DISPLAY_NAME, mNumber);
                                intent.putExtra(RCS_PHONE_NUMBER, mNumber);
                                intent.putExtra("isjoyn", false);
                                //intent.putExtra("is_rcse_disabled", mIsRCSeDisabled);
                                mActivityContext.startActivity(intent);
                                break;
                            case 2:
                                //file transfer
                                mIntentFt.putExtra(RCS_DISPLAY_NAME, mNumber);
                                mIntentFt.putExtra(RCS_PHONE_NUMBER, mNumber);
                                //mIntentFt.putExtra("is_rcse_disabled", mIsRCSeDisabled);
                                mActivityContext.startActivity(mIntentFt);
                                
                                break;
                            case 3:
                                //block number
                                blockNumber();
                                break;
                            default:
                        Logger.d(TAG, "[covergedClickListner] id default:" + id);
                                break;
                        }
                    }
        };

        private OnClickListener integratedClickListner = new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Logger.d(TAG, "[integratedClickListner] onClick:" + v);
                EntryTag tag = (EntryTag)v.getTag();
                int id = tag.getId();
                Intent intent = tag.getIntent();
                Logger.d(TAG, "[integratedClickListner] id clicked:" + id);
                switch(id){

                    case 0:
                        //send xms message
                        intent.putExtra(RCS_DISPLAY_NAME, mNumber);
                        intent.putExtra(RCS_PHONE_NUMBER, mNumber);
                        intent.putExtra("isjoyn", false);
                        //intent.putExtra("is_rcse_disabled", mIsRCSeDisabled);
                        mActivityContext.startActivity(intent);
                        break;
                    case 1:
                        //block number
                        blockNumber();
                        break;
                    default:
                        Logger.d(TAG, "[integratedClickListner] id default:" + id);
                        break;
                }
        }
        };
        
        public void blockNumber() {
            String blockTitle = mContactPlugin.getBlockingTitle();
            boolean blockedStatus = false;
            try{
                blockedStatus = mContactPlugin.getBlockedStatus(mNumber);
                Logger.d(TAG, "[blockNumber] number:" + mNumber + ",status="+ blockedStatus);
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
            if(blockedStatus) {
                //contact is already blocked
                AlertDialog.Builder alertDialogBuilder = new AlertDialog.Builder(
                        mActivityContext);
                alertDialogBuilder.setTitle("Contact is already blocked");
                alertDialogBuilder
                .setMessage(mNumber+" is already blocked by you. Do you wish to unblock?")
                .setCancelable(true)
                .setPositiveButton("Yes",new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog,int id) {
                            // if this button is clicked, unblock the contact
                           
                            try{
                                boolean isUnBlockedSuccess = mContactPlugin.blockContact(mNumber, false);
                                Logger.d(TAG, "[blockNumber] ,if case,isUnBlockedSuccess="+ isUnBlockedSuccess);
                                if(isUnBlockedSuccess == true)
                                {
                                    Toast.makeText(mActivityContext, mNumber + " successfully unblocked", Toast.LENGTH_LONG).show();
                                }
                            }
                            catch(Exception e){
                                e.printStackTrace();
                            }
                        }
                      })
                    .setNegativeButton("No",new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog,int id) {
                            // if this button is clicked, just close
                            // the dialog box and do nothing
                            dialog.cancel();
                        }
                    });
                AlertDialog alertDialog = alertDialogBuilder.create();
                 
                // show it
                alertDialog.show();
            }
            else {
                //block contact
            AlertDialog.Builder alertDialogBuilder = new AlertDialog.Builder(
                    mActivityContext);
     
                // set title
                alertDialogBuilder.setTitle("Block contact" + mNumber);
     
                // set dialog message
                alertDialogBuilder
                    .setMessage(blockTitle+ " " + mNumber)
                    .setCancelable(true)
                    .setPositiveButton("Yes",new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog,int id) {
                            // if this button is clicked, block the contact
                            
                            boolean isBlockedSuccess = false;
                            try{
                                isBlockedSuccess = mContactPlugin.blockContact(mNumber, true);
                                Logger.d(TAG, "[blockNumber] ,else case,isBlockedSuccess="+ isBlockedSuccess);
                                if(isBlockedSuccess == true)
                                {
                                    Toast.makeText(mActivityContext, mNumber + " successfully blocked", Toast.LENGTH_LONG).show();
                                }
                            }
                            catch(Exception e){
                                e.printStackTrace();
                            }
                        }
                      })
                    .setNegativeButton("No",new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog,int id) {
                            // if this button is clicked, just close
                            // the dialog box and do nothing
                            dialog.cancel();
                        }
                    });
     
                    // create alert dialog
                    AlertDialog alertDialog = alertDialogBuilder.create();
     
                    // show it
                    alertDialog.show();
            }
        }
        
        final ExpandingEntryCardViewListener mExpandingEntryCardViewListener
                = new ExpandingEntryCardViewListener() {
                @Override
                public void onCollapse(int heightDelta) {
                    //mScroller.prepareForShrinkingScrollChild(heightDelta);
                }
            
                @Override
                public void onExpand(int heightDelta) {
                    //mScroller.prepareForExpandingScrollChild();
                }
             };
        /**
         * extract contact id.
         *
         * @param Uri uri of the contact
         */
        public long extractContactIdFromUri(Uri uri){
            
            long contactId = INVALID_ID;
            if(mContext == null){
                return contactId;
            } else if(mContext.getContentResolver() == null){
                return contactId;
            }
            Cursor cursor = null;
            try {
                cursor = mContext.getContentResolver().query(uri, new String[] {
                    Contacts._ID
                }, null, null, null);
                if (null == cursor || !cursor.moveToFirst()) {
                    Logger.e(TAG, "extractContactIdFromUri() error when loading cursor");
                    return contactId;
                }
                int indexContactId = cursor.getColumnIndex(Contacts._ID);
                do {
                    contactId = cursor.getLong(indexContactId);
                } while (cursor.moveToNext());
            } finally {
                if (null != cursor) {
                    cursor.close();
                }
            }
            return contactId;
        }
        
        public List<List<Entry>> createJoynEntriesIntegrated(String number) {
            final List<List<Entry>> joynCardEntries = new ArrayList<>();

            final List<Entry> entries = new ArrayList<>();
            
            for (int i=0 ; i<2 ; i++) {
                entries.add(new Entry(/* id = */ i,
                        mJoynActionsDrawable[1],/*drawable*/
                        mJoynActionsIntegrated[i],
                        number,
                        null,
                        null,
                        null,
                        /* M: add sim icon @ { */
                        null,
                        null,
                        /* @ } */
                        null,
                        mIntentMessaging,
                        /* alternateIcon = */ null,
                        /* alternateIntent = */ null,
                        /* alternateContentDescription = */ null,
                        /* shouldApplyColor = */ true,
                        /* isEditable = */ false,
                        /* EntryContextMenuInfo = */ null,
                        /* thirdIcon = */ null,
                        /* thirdIntent = */ null,
                        /* thirdContentDescription = */ null,
                        0));
            }
            if (entries.size() > 0) {
                joynCardEntries.add(entries);
            }
            return joynCardEntries;
        }
        
        public List<List<Entry>> createJoynEntriesConverged(String number) {
            final List<List<Entry>> joynCardEntries = new ArrayList<>();

            final List<Entry> entries = new ArrayList<>();
            
            for (int i=0 ; i<4 ; i++) {
                entries.add(new Entry(/* id = */ i,
                        mJoynActionsDrawable[i],/*drawable*/
                        mJoynActions[i],
                        number,
                        null,
                        null,
                        null,
                        /* M: add sim icon @ { */
                        null,
                        null,
                        /* @ } */
                        null,
                        mIntentMessaging,
                        /* alternateIcon = */ null,
                        /* alternateIntent = */ null,
                        /* alternateContentDescription = */ null,
                        /* shouldApplyColor = */ true,
                        /* isEditable = */ false,
                        /* EntryContextMenuInfo = */ null,
                        /* thirdIcon = */ null,
                        /* thirdIntent = */ null,
                        /* thirdContentDescription = */ null,
                        0));
            }
            if (entries.size() > 0) {
                joynCardEntries.add(entries);
            }
            return joynCardEntries;
        }
    };

    private QuickContactScrollerCustom mQuickContactScrollerCustom = new QuickContactScrollerCustom() {
        private ImageView mJoynIconView = null;
        private TextView mLargeTextView = null;

       
        /**
         * Inflates icon layout, add it to container relative to anchorView
         * @param container main view in which need to add icon layout
         * @param anchorView icon is added relative to this view
         * @param lookupUri for extracting contactId
         * @return imageview added
         */
        @Override
        public View createJoynIconView(View container, View anchorView,
                Uri lookupUri) {
            Logger.d(TAG, "[createJoynIconView] Uri:" + lookupUri
                    + " container = " + container + " anchorView = "
                    + anchorView);
            if(mContactPlugin == null){
                return null;
            }
            if(mContactPlugin.isEnabled() == false){
                return null;
            }
            mLargeTextView = (TextView) anchorView;
            Drawable rcsIcon = null;
            long contactId = INVALID_ID;
            boolean canSetRCSIcon = false;
            //query contact presence
            if (mContactPlugin != null) {
                mContactPlugin.onContactDetailOpen(lookupUri);
            } else {
                Log.e(TAG, "[createJoynIconView] mContactPlugin is null");
            }
          //logic to extract contactId from contacts db from Uri
            contactId = extractContactIdFromUri(lookupUri);
            if (mContactPlugin != null && contactId != INVALID_ID) {
                //find whether need to add joyn icon view
                rcsIcon = mContactPlugin.getContactPresence(contactId);
                boolean isEnabled = mContactPlugin.isEnabled();
                Logger.d(TAG, "[createJoynIconView] isEnabled : " + isEnabled + 
                        "contactId:" + contactId);
                if ((rcsIcon != null) && isEnabled) {
                    canSetRCSIcon = true;
                } else {
                    Logger.d(TAG, "[createJoynIconView] icon : " + rcsIcon
                            + " |isEnabled : " + isEnabled);
                    canSetRCSIcon = false;
                }
            } else {
                Logger.e(TAG, "[createJoynIconView] mContactPlugin : "
                        + mContactPlugin);
                canSetRCSIcon = false;
            }

            //canSetRCSIcon = true;//TODO
            View iconLayout = null;
            FrameLayout layout = (FrameLayout) container;
            if (canSetRCSIcon) {
                //true means need to add Joyn icon view to container
                Logger.d(TAG,
                        "[createJoynIconView] adding icon view to container");
                try{
                LayoutInflater mInflater;
                mInflater = LayoutInflater.from(mContext);
                iconLayout = mInflater.inflate(R.layout.rcs_icon_plugin, null);
                mJoynIconView = (ImageView) iconLayout
                        .findViewById(R.id.rcs_icon);
                mJoynIconView.setVisibility(View.VISIBLE);
                mJoynIconView.setImageDrawable(mContactPlugin.getAppIcon());
                FrameLayout.LayoutParams params = new FrameLayout.LayoutParams(
                        LayoutParams.WRAP_CONTENT, LayoutParams.WRAP_CONTENT);
                params.setMarginStart(anchorView.getRight());
                layout.addView(iconLayout, params);
                }catch (Exception e) {
                    e.printStackTrace();
                }
            }
            return mJoynIconView;
        }
        
        /**
         * extract contact id.
         *
         * @param Uri uri of the contact
         */
        public long extractContactIdFromUri(Uri uri){
            
            long contactId = INVALID_ID;
            if(mContext == null){
                return contactId;
            } else if(mContext.getContentResolver() == null){
                return contactId;
            }
            Cursor cursor = null;
            try {
                cursor = mContext.getContentResolver().query(uri, new String[] {
                    Contacts._ID
                }, null, null, null);
                if (null == cursor || !cursor.moveToFirst()) {
                    Logger.e(TAG, "extractContactIdFromUri() error when loading cursor");
                    return contactId;
                }
                int indexContactId = cursor.getColumnIndex(Contacts._ID);
                do {
                    contactId = cursor.getLong(indexContactId);
                } while (cursor.moveToNext());
            } finally {
                if (null != cursor) {
                    cursor.close();
                }
            }
            return contactId;
        }
        
        
        /**
         * update the icon view as host view is scrolled by user
         */
        @Override
        public void updateJoynIconView() {
            Logger.d(TAG, "[updateJoynIconView] entry " + mJoynIconView);
            if(mContactPlugin == null){
                return;
            }
            if(mContactPlugin.isEnabled() == false){
                return;
            }
            int[] location = new int[2];
            if (mJoynIconView != null) {
                try{
                mJoynIconView.getLocationOnScreen(location);
                int joynBottom = location[1] + mLargeTextView.getHeight();
                Logger.d(TAG, "[updateJoynIconView] joynBottom =" + joynBottom);
                mLargeTextView.getLocationOnScreen(location);
                int largeTextTop = location[1];
                if (largeTextTop - joynBottom <= 0) {
                    Logger.d(TAG,
                            "[updateJoynIconView] visibility mJoynIconView gone");
                    mJoynIconView.setVisibility(View.GONE);
                } else {
                    Logger.d(TAG,
                            "[updateJoynIconView] visibility mJoynIconView true");
                    mJoynIconView.setVisibility(View.VISIBLE);
                }
                }catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    };

}
