//
//  MessagingController.swift
//

import SwiftUI
import SMIClientUI
import SMIClientCore

extension UIWindow {
    func topViewController() -> UIViewController? {
        var top = self.rootViewController
        while true {
            if let presented = top?.presentedViewController {
                top = presented
            } else if let nav = top as? UINavigationController {
                top = nav.visibleViewController
            } else if let tab = top as? UITabBarController {
                top = tab.selectedViewController
            } else {
                break
            }
        }
        return top
    }
}

class MessagingController: NSObject, ObservableObject {

    @Published var uiConfig: UIConfiguration?
    @Published var clientID = "Guest"

    override init() {
        super.init()
        //self.resetConfig()
        self.setDebugLogging()
    }

    func showScreen() {
        // let scene = UIApplication.shared.connectedScenes
        //     .first(where: { $0.activationState == .foregroundActive }) as? UIWindowScene

        // let window = scene?.windows.first(where: { $0.isKeyWindow })
        // let topVC = window?.topViewController()

        // let rootViewController = scene?
        //     .windows.first(where: { $0.isKeyWindow })?
        //     .rootViewController
        // let chatVC = InterfaceViewController(uiConfig!)
        // //rootViewController!.present(chatVC, animated: true, completion: nil)
        // topVC!.pushViewController(chatVC, animated: true)
        // let swiftUIView = ContentView()
        // let hostingViewController =  UIHostingController(rootView: swiftUIView)
        // let scene = UIApplication.shared.connectedScenes
        //     .first(where: { $0.activationState == .foregroundActive }) as? UIWindowScene

        // let rootViewController = scene?
        //     .windows.first(where: { $0.isKeyWindow })?
        //     .rootViewController
        // rootViewController!.present(hostingViewController, animated: true, completion: nil)
        //self.navigationController?.pushViewController(hostingViewController, animated: true)
    }
    
    func resetConfig(_ url: String, orgID: String, devName: String, uuid: String, clientID: String) {
        print("Initializing config file.")


        // TO DO: Replace the config file in this app (configFile.json)
        //        with the config file you downloaded from your Salesforce org.
        //        To learn more, see:
        // https://help.salesforce.com/s/articleView?id=sf.miaw_deployment_mobile.htm

        //guard let configPath = Bundle.main.path(forResource: "configFile", ofType: "json") else {
        //    print("Unable to find configFile.json file.")
        //    return
        //}

        //let configURL = URL(fileURLWithPath: configPath)

        // This code uses a random UUID for the conversation ID, but
        // be sure to use the same ID if you want to continue the
        // same conversation after a restart.
        var conversationID = UUID()
        if uuid != "" {
            conversationID = UUID(uuidString:uuid as String)!
        }
        
        // TO DO: Change the userVerificationRequired flag match the verification
        //        requirements of the endpoint.
        //        To learn more, see:
        // https://salesforce-async-messaging.github.io/messaging-in-app-ios/Classes/SMICoreConfiguration.html#/c:objc(cs)SMICoreConfiguration(py)userVerificationRequired
        // https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-user-verification.html
//        let userVerificationRequired = false
//        uiConfig = UIConfiguration(url: configURL,
//                                   userVerificationRequired: userVerificationRequired,
//                                   conversationId: conversationID)
        guard let serviceAPIURL = URL(string: url) else {

                    // TO DO: Handle error
                    return
                }
        let userVerificationRequired = false
        // Create a configuration object
        uiConfig = UIConfiguration(serviceAPI: serviceAPIURL,
                                    organizationId: orgID,
                                    developerName: devName,
                                    userVerificationRequired: userVerificationRequired,
                                    conversationId: conversationID)

        guard let config = uiConfig else { return }
        
        self.clientID = clientID;
        // Handle pre-chat requests with a HiddenPreChatDelegate implementation.
        CoreFactory.create(withConfig: config).setPreChatDelegate(delegate: self, queue: DispatchQueue.main)

        // Handle auto-response component requests with a TemplatedUrlDelegate implementation.
        CoreFactory.create(withConfig: config).setTemplatedUrlDelegate(delegate: self, queue: DispatchQueue.main)
        
        // Handle user verification requests with a UserVerificationDelegate implementation.
        CoreFactory.create(withConfig: config).setUserVerificationDelegate(delegate: self, queue: DispatchQueue.main)

        // Handle error messages from the SDK.
        CoreFactory.create(withConfig: config).addDelegate(delegate: self)

        print("Config created using conversation ID \(conversationID.description).")
    }

    /// Sets the debug level to see more logs in the console.
    private func setDebugLogging() {
        #if DEBUG
            Logging.level = .debug
        #endif
    }
}
