//
//  SMIConversationStatus.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2/3/21.
//  Copyright © 2021 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

/// The status of the conversation.
typedef NS_ENUM(NSUInteger, SMIConversationStatus) {
    /// Unknown conversation status.
    SMIConversationStatusUnknown = 0,
    /// Conversation is still open.
    SMIConversationStatusOpen,
    /// Conversation has closed.
    SMIConversationStatusClosed
} NS_SWIFT_NAME(ConversationStatus);
