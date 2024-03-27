//
//  MessagingController.swift
//

import SwiftUI
import SMIClientUI
import SMIClientCore
import Foundation

extension UIColor {

    convenience init(rgb: UInt) {
        self.init(rgb: rgb, alpha: 1.0)
    }

    convenience init(rgb: UInt, alpha: CGFloat) {
        self.init(
            red: CGFloat((rgb & 0xFF0000) >> 16) / 255.0,
            green: CGFloat((rgb & 0x00FF00) >> 8) / 255.0,
            blue: CGFloat(rgb & 0x0000FF) / 255.0,
            alpha: CGFloat(alpha)
        )
    }
}

/**
 Implementation of the CoreDelegate
 To learn more, see
 https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-core-sdk.html#listen-for-events
 */
extension MessagingController: CoreDelegate {
    // Called when errors are returned from the SDK.
    func core(_ core: CoreClient, didError error: Error) {
        print("ERROR: " + error.localizedDescription)
    }
}

/**
 Implementation of HiddenPreChatDelegate for hidden pre-chat.
 To learn more, see
 https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-pre-chat.html
 */
// extension MessagingController: HiddenPreChatDelegate {
//     // Invoked automatically when hidden pre-chat fields are being sent
//     func core(_ core: CoreClient,
//               conversation: Conversation,
//               didRequestPrechatValues hiddenPreChatFields: [HiddenPreChatField],
//               completionHandler: HiddenPreChatValueCompletion) {

//         for it in hiddenPreChatFields {
//             switch it.name {
//             case "Client_ID": it.value = clientID
//             default: print("Unknown hidden prechat field: \(it.name)")
//             }
//         }

//         completionHandler(hiddenPreChatFields)
//     }
// }

class HiddenPrechatDelegateImplementation: HiddenPreChatDelegate {

    @objc
    @Published var clientID: String

     @objc
    init() {
        clientID = "Guest"
    }

    func setClientID(_ id: String) {
        NSLog("Setting client ID: %@", id)
        clientID = id;
    }

    func core(_ core: CoreClient!,
                conversation: Conversation!,
                didRequestPrechatValues hiddenPreChatFields: [HiddenPreChatField]!,
                completionHandler: HiddenPreChatValueCompletion!) {

        // Use the conversation object to inspect info about the conversation
        NSLog("CLIENT ID: %@", clientID)
        // Fill in all the hidden pre-chat fields
        for preChatField in hiddenPreChatFields {
            NSLog(preChatField.label)
            NSLog(preChatField.identifier)
            NSLog(preChatField.value!)
        // preChatField.label contains the label
        // preChatField.identifier contains the conversation identifier
        // preChatField.value is where you populate the field with a value

        preChatField.value = clientID
        }

        // Pass pre-chat fields back to SDK
        completionHandler(hiddenPreChatFields)
    }
}

/**
 Implementation of TemplatedUrlDelegate for the auto-response component.
 To learn more, see
 https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-auto-response.html
 */
extension MessagingController: TemplatedUrlDelegate {
    // Invoked automatically when values are needed for a given TemplatedUrl
    func core(_ core: CoreClient,
              didRequestTemplatedValues templatable: SMITemplateable,
              completionHandler: URLParameterValueCompletion) {

        for key in templatable.keys {
            switch key {
            case "<YOUR_PATH_KEY>": templatable.setValue("<YOUR_PATH_VALUE>", forKey: key)
            case "<YOUR_QUERY_KEY>": templatable.setValue("<YOUR_QUERY_VALUE>", forKey: key)
            default: print("Unknown template key: \(key)")
            }
        }

        completionHandler(templatable)
    }
}

/**
 Implementation of UserVerificationDelegate for user verification.
 To learn more, see
 https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-user-verification.html
 */
extension MessagingController: UserVerificationDelegate {
    
    // Invoked automatically when credentials are required for authorizing a verified user
    func core(_ core: CoreClient,
              userVerificationChallengeWith reason: ChallengeReason,
              completionHandler completion: @escaping UserVerificationChallengeCompletion) {

        var token: String!

        // TO DO: Fill in all <YOUR_CUSTOMER_IDENTITY_TOKEN> fields with a valid identity token.
        // this demo app.
        switch reason {
            // Salesforce doesn't currently have your customer identity token.
            // Please provide one now.
        case .initial: token = "<YOUR_CUSTOMER_IDENTITY_TOKEN>"

            // Salesforce needs to renew this user's authorization token.
            // Please provide a customer identity token.
            // Note: If your current token is nearing expiry, it may make sense to issue a new token at this time.
        case .refresh: token = "<YOUR_CUSTOMER_IDENTITY_TOKEN>"

            // The current customer identity token you've provided has expired.
            // Please provide a newly issued customer identity token.
        case .expired: token = "<YOUR_NEW_CUSTOMER_IDENTITY_TOKEN>"

            // Something is wrong with the token you provided.
            // Log an error and perhaps retry with a newly issued customer identity token.
        case .malformed: token = "<YOUR_CORRECTED_CUSTOMER_IDENTITY_TOKEN>"

        default: print("nothing to do")
        }

        completion(UserVerification(customerIdentityToken: token, type: .JWT))
    }
}

extension UIViewController {
    @objc
    func navigateBack() {
        self.dismiss(animated: true, completion: nil)
    }
}

@objc(MessagingController)
class MessagingController: NSObject, ObservableObject  {

    @objc
    @Published var uiConfig: UIConfiguration?

    @objc
    override init() {
        super.init()
        //self.resetConfig(for: "")
        self.setDebugLogging()
    }

    @objc
    func showScreen() {
        let scene = UIApplication.shared.connectedScenes
            .first(where: { $0.activationState == .foregroundActive }) as? UIWindowScene

        let rootViewController = scene?
            .windows.first(where: { $0.isKeyWindow })?
            .rootViewController
        let chatVC = InterfaceViewController(uiConfig!)
        chatVC.title = "Live Support"
        let navControl = UINavigationController(rootViewController: chatVC)
        navControl.navigationBar.isTranslucent = false
        let navigationItem = chatVC.navigationItem
        
        // Make the navigation bar's title with red text.
        let appearance = UINavigationBarAppearance()
        appearance.configureWithOpaqueBackground()
        appearance.backgroundColor = UIColor(rgb: 0x004E43)
        appearance.titleTextAttributes = [.foregroundColor: UIColor(rgb: 0xFFFFFF)] // With a red background, make the title more readable.
        navigationItem.standardAppearance = appearance
        navigationItem.scrollEdgeAppearance = appearance
        navigationItem.compactAppearance = appearance // For iPhone small navigation bar in landscape.
        navigationItem.title = "Live Support"
        navControl.navigationBar.topItem!.title = "Live Support";
        // Make all buttons with green text.
        let buttonAppearance = UIBarButtonItemAppearance()
        buttonAppearance.normal.titleTextAttributes = [.foregroundColor: UIColor(rgb: 0xFFFFFF)]
        navigationItem.standardAppearance?.buttonAppearance = buttonAppearance
        navigationItem.compactAppearance?.buttonAppearance = buttonAppearance // For iPhone small navigation bar in landscape.


        // Make the done style button with yellow text.
        //let doneButtonAppearance = UIBarButtonItemAppearance()
        //doneButtonAppearance.normal.titleTextAttributes = [.foregroundColor: UIColor.systemYellow]
        //navigationItem.standardAppearance?.doneButtonAppearance = doneButtonAppearance
        //navigationItem.compactAppearance?.doneButtonAppearance = doneButtonAppearance // For iPhone small navigation bar in landscape.

        let config = UIImage.SymbolConfiguration(pointSize: 14.0, weight: .medium, scale: .medium)
        let image = UIImage(systemName: "chevron.left", withConfiguration: config)?.withTintColor(UIColor(rgb: 0xFFFFFF), renderingMode: .alwaysOriginal)

        // create back button
        // let backButton = UIButton(type: .custom)
        // backButton.addTarget(navControl, action: #selector(navControl.navigateBack), for: .touchUpInside)
        // backButton.setImage(image, for: .normal)
        // backButton.setTitle(" Back", for: .normal)
        // backButton.titleLabel?.font = .systemFont(ofSize: 14, weight: .medium)
        // backButton.setTitleColor(UIColor(rgb: 0xFFFFFF), for: .normal)
        // navigationItem.leftBarButtonItem = UIBarButtonItem(customView: backButton)
        // navigationItem.rightBarButtonItem = nil
        rootViewController!.present(navControl, animated: true, completion: nil)
        //rootViewController!.present(chatVC, animated: true, completion: nil)
    

   
}
    
    
    @objc
    func resetConfig(_ url: String, orgID: String, devName: String, uuid: String, clientID: String) {
        print("Initializing config file.")

        // Get a URL for the service API path
        guard let serviceAPIURL = URL(string: url) else {

            // TO DO: Handle error
            return
        }

        // Generate a random conversation ID
        // (But be sure to use the SAME conversation ID if you want
        // to continue this conversation across app restarts or
        // across devices!)
        print("UUID String:", uuid)

        var conversationID = UUID()
        if uuid != "" {
            conversationID = UUID(uuidString:uuid as String)!
        }
        
       
        print("ConversationID: ", conversationID.description);

        // TO DO: Change the userVerificationRequired flag match the verification
        //        requirements of the endpoint.
        //        To learn more, see:
        // https://salesforce-async-messaging.github.io/messaging-in-app-ios/Classes/SMICoreConfiguration.html#/c:objc(cs)SMICoreConfiguration(py)userVerificationRequired
        // https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-user-verification.html
        
        let userVerificationRequired = false
        // Create a configuration object
        uiConfig = UIConfiguration(serviceAPI: serviceAPIURL,
                                    organizationId: orgID,
                                    developerName: devName,
                                    userVerificationRequired: userVerificationRequired,
                                    conversationId: conversationID)
        

        guard let config = uiConfig else { return }
        
        // Handle pre-chat requests with a HiddenPreChatDelegate implementation.
        //CoreFactory.create(withConfig: config).setPreChatDelegate(delegate: self, queue: DispatchQueue.main)
        
        // Create an instance of the hidden pre-chat delegate
        let myPreChatDelegate = HiddenPrechatDelegateImplementation()
        myPreChatDelegate.setClientID(clientID)

        // Create a core client from a config
        let coreClient = CoreFactory.create(withConfig: config)

        // Assign the hidden pre-chat delegate
        coreClient.preChatDelegate = myPreChatDelegate

        // Handle auto-response component requests with a TemplatedUrlDelegate implementation.
        //CoreFactory.create(withConfig: config).setTemplatedUrlDelegate(delegate: self, queue: DispatchQueue.main)
        
        // Handle user verification requests with a UserVerificationDelegate implementation.
        //CoreFactory.create(withConfig: config).setUserVerificationDelegate(delegate: self, queue: DispatchQueue.main)

        // Handle error messages from the SDK.
        CoreFactory.create(withConfig: config).addDelegate(delegate: self)

        //print("Config created using conversation ID \(conversationID.description).")
    }

    /// Sets the debug level to see more logs in the console.
    @objc
    private func setDebugLogging() {
        #if DEBUG
            Logging.level = .debug
        #endif
    }
}
