//
//  MessagingController.swift
//

import SwiftUI

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


@objc(MessagingContainer)
class MessagingContainer: NSObject  {

    var controller = MessagingController()

    @objc
    override init() {
        //controller.init()
    }

    @objc
    func showScreen() {
        let swiftUIView = ContentView(controller: controller)

        let navigationItem = swiftUIView.navigationItem
        
        // Make the navigation bar's title with red text.
        let appearance = UINavigationBarAppearance()
        appearance.configureWithOpaqueBackground()
        appearance.backgroundColor = UIColor(rgb: 0x004E43)
        appearance.titleTextAttributes = [.foregroundColor: UIColor(rgb: 0xFFFFFF)] // With a red background, make the title more readable.
        navigationItem.standardAppearance = appearance
        navigationItem.scrollEdgeAppearance = appearance
        navigationItem.compactAppearance = appearance // For iPhone small navigation bar in landscape.

        let hostingViewController =  UIHostingController(rootView: swiftUIView)
        let scene = UIApplication.shared.connectedScenes
            .first(where: { $0.activationState == .foregroundActive }) as? UIWindowScene

        let rootViewController = scene?
            .windows.first(where: { $0.isKeyWindow })?
            .rootViewController
        rootViewController!.present(hostingViewController, animated: true, completion: nil)
        //controller.showScreen()
    }
    
    
    @objc
    func resetConfig(_ url: String, orgID: String, devName: String, uuid: String, clientID: String) {
       controller.resetConfig(url, orgID: orgID, devName: devName, uuid: uuid, clientID: clientID)
    }
}

@objc(DeviceTokenPassthrough)
class DeviceTokenPassthrough: NSObject  {

    @objc
    func provideDeviceToken(_ token: String) {
        CoreFactory.provide(deviceToken: token ?? "")
    }
}

/*
class HiddenPrechatDelegateImplementation: HiddenPreChatDelegate {

    // @objc
    // @Published var clientID: String

    //  @objc
    // init() {
    //     clientID = "Guest"
    // }

    // func setClientID(_ id: String) {
    //     NSLog("Setting client ID: %@", id)
    //     clientID = id;
    // }

    func core(_ core: CoreClient!,
                conversation: Conversation!,
                didRequestPrechatValues hiddenPreChatFields: [HiddenPreChatField]!,
                completionHandler: HiddenPreChatValueCompletion!) {

        // Use the conversation object to inspect info about the conversation
       // NSLog("CLIENT ID: %@", clientID)
        // Fill in all the hidden pre-chat fields
        for preChatField in hiddenPreChatFields {
            NSLog(preChatField.label)
            NSLog(preChatField.identifier)
            NSLog(preChatField.value!)
        // preChatField.label contains the label
        // preChatField.identifier contains the conversation identifier
        // preChatField.value is where you populate the field with a value

        preChatField.value = "HERE WE GO"
        }

        // Pass pre-chat fields back to SDK
        completionHandler(hiddenPreChatFields)
    }
}*/