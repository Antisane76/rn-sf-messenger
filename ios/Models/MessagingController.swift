//
//  MessagingController.swift
//

import SwiftUI
import SMIClientUI
import SMIClientCore

class MessagingController: NSObject, ObservableObject {

    @Published var uiConfig: UIConfiguration?

    override init() {
        super.init()
        self.resetConfig()
        self.setDebugLogging()
    }
    
    func resetConfig() {
        print("Initializing config file.")

        //         {
        //   "OrganizationId": "00DD10000001YW6",
        //   "DeveloperName": "Mobile",
        //   "Url": "https://mintbet--pt.sandbox.my.salesforce-scrt.com"
        // }

        // Get a URL for the service API path
        guard let serviceAPIURL = URL(string: "test") else {
            // TO DO: Handle error
            return
        }

        // Generate a random conversation ID
        // (But be sure to use the SAME conversation ID if you want
        // to continue this conversation across app restarts or
        // across devices!)
        let conversationID = UUID()

        // TO DO: Change the userVerificationRequired flag match the verification
        //        requirements of the endpoint.
        //        To learn more, see:
        // https://salesforce-async-messaging.github.io/messaging-in-app-ios/Classes/SMICoreConfiguration.html#/c:objc(cs)SMICoreConfiguration(py)userVerificationRequired
        // https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-user-verification.html
        
        let userVerificationRequired = false
        // Create a configuration object
        uiConfig = UIConfiguration(serviceAPI: serviceAPIURL,
                                    organizationId: "test",
                                    developerName: "test",
                                    userVerificationRequired: userVerificationRequired,
                                    conversationId: conversationID)
        
        
        uiConfig = UIConfiguration(url: configURL,
                                   
                                   conversationId: conversationID)

        guard let config = uiConfig else { return }
        
        // Handle pre-chat requests with a HiddenPreChatDelegate implementation.
        //CoreFactory.create(withConfig: config).setPreChatDelegate(delegate: self, queue: DispatchQueue.main)
        
        // Handle auto-response component requests with a TemplatedUrlDelegate implementation.
        //CoreFactory.create(withConfig: config).setTemplatedUrlDelegate(delegate: self, queue: DispatchQueue.main)
        
        // Handle user verification requests with a UserVerificationDelegate implementation.
        //CoreFactory.create(withConfig: config).setUserVerificationDelegate(delegate: self, queue: DispatchQueue.main)

        // Handle error messages from the SDK.
        CoreFactory.create(withConfig: config).addDelegate(delegate: self)

        print("Config created using conversation ID \(conversationID.description).")

        let chatVC = InterfaceViewController(config)
        self.present(chatVC, animated: true, completion: nil)
    }

    /// Sets the debug level to see more logs in the console.
    private func setDebugLogging() {
        #if DEBUG
            Logging.level = .debug
        #endif
    }
}