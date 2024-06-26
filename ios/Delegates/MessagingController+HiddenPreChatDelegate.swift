//
//  MessagingController+HiddenPreChatDelegate.swift
//

import Foundation
import SMIClientCore

/**
 Implementation of HiddenPreChatDelegate for hidden pre-chat.
 To learn more, see
 https://developer.salesforce.com/docs/service/messaging-in-app/guide/ios-pre-chat.html
 */

extension MessagingController: HiddenPreChatDelegate {
    // Invoked automatically when hidden pre-chat fields are being sent
    func core(_ core: CoreClient,
              conversation: Conversation,
              didRequestPrechatValues hiddenPreChatFields: [HiddenPreChatField],
              completionHandler: HiddenPreChatValueCompletion) {

        for it in hiddenPreChatFields {
            switch it.name {
                
            case "Client_ID": it.value = self.clientID
            default: print("Unknown hidden prechat field: \(it.name)")
            }
        }

        completionHandler(hiddenPreChatFields)
    }
    
}
