// RnSfMessengerModule.java

package com.reactlibrary;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
//import com.apple.eawt.Application;
import com.facebook.react.bridge.Callback;
import com.reactlibrary.AppViewModel;
import android.app.Application;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.salesforce.android.smi.ui.UIClient;
import androidx.appcompat.app.AppCompatActivity;
import com.salesforce.android.smi.core.CoreClient;

public class RnSfMessengerModule extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;
    private AppViewModel viewModel;
    private Logger logger = Logger.getLogger("RnSfMessengerModule");
    public UIClient uiClient;
    // public tokenService FCMTokenService;

    public RnSfMessengerModule(ReactApplicationContext reactContext) {
        super(reactContext);
        this.reactContext = reactContext;
        Application app = (Application) reactContext.getApplicationContext();
        viewModel = new AppViewModel(app);
        // tokenService = new FCMTokenService();

    }

    @Override
    public String getName() {
        return "RnSfMessenger";
    }

    @ReactMethod
    public void initiateChat(String url, String orgID, String devName, String uuid, String clientID) {
        // TODO: Implement some actually useful functionality

        /**
         * Shows the UI for Messaging for In-App
         */

        // Create a UI client
        try {
            viewModel.resetMessagingConfig(url, orgID, devName, uuid, clientID);
            uiClient = viewModel.GetUIClient();
            if (uiClient != null) {
                uiClient.openConversationActivity((AppCompatActivity) getCurrentActivity());
            } else {
                logger.log(Level.INFO, "Dayum");
            }
        } catch (Exception e) {
            logger.log(Level.INFO, "Unable to create a conversation for messaging: " + e.getMessage());
        }
    }

    @ReactMethod
    public void registerDeviceToken(String token) {
        try {
            viewModel.registerDeviceToken((AppCompatActivity) getCurrentActivity(), token);
            // CoreClient.provideDeviceToken((AppCompatActivity) getCurrentActivity(),
            // token);
        } catch (Exception e) {
            logger.log(Level.INFO, "Error with provide device token: " + e.getMessage());
        }
    }
}