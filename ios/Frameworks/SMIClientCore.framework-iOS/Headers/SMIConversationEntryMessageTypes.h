//
//  SMIConversationEntryMessageTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 10/29/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that describes a set of known conversation entry types.
/// Possible values:
/// * `SMIConversationEntryMessageTypesStaticContent`
/// * `SMIConversationEntryMessageTypesChoicesResponse`
/// * `SMIConversationEntryMessageTypesChoices`
/// * `SMIConversationEntryMessageTypesFormMessage`
/// * `SMIConversationEntryMessageTypesFormResponseMessage`
typedef NSString *SMIConversationEntryMessageTypes NS_TYPED_ENUM
NS_SWIFT_NAME(ConversationEntryMessageTypes);

/// Describes a Static Content  Message.
FOUNDATION_EXPORT SMIConversationEntryMessageTypes const SMIConversationEntryMessageTypesStaticContent;

/// Describes a Choices Response  Message.
FOUNDATION_EXPORT SMIConversationEntryMessageTypes const SMIConversationEntryMessageTypesChoicesResponse;

/// Describes a Choices Message.
FOUNDATION_EXPORT SMIConversationEntryMessageTypes const SMIConversationEntryMessageTypesChoices;

/// Describes a Form Message.
FOUNDATION_EXPORT SMIConversationEntryMessageTypes const SMIConversationEntryMessageTypesFormMessage;

/// Describes a Form Response Message.
FOUNDATION_EXPORT SMIConversationEntryMessageTypes const SMIConversationEntryMessageTypesFormResponseMessage;

/// Used when the message type is unknown or unspecified
FOUNDATION_EXPORT SMIConversationEntryMessageTypes const SMIConversationEntryMessageTypesUnspecified;

NS_ASSUME_NONNULL_END
