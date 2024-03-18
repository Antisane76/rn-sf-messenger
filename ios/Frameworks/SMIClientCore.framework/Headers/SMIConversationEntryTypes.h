//
//  SMIConversationEntryTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 10/28/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that describes a set of known conversation entry types.
/// Possible values:
/// * `SMIConversationEntryTypesTypingIndicator`
/// * `SMIConversationEntryTypesMessage`
/// * `SMIConversationEntryTypesChoice`
/// * `SMIConversationEntryTypesSelection`
/// * `SMIConversationEntryTypesParticipantChanged`
/// * `SMIConversationEntryTypesReadAck`
/// * `SMIConversationEntryTypesDeliveryAck`
/// * `SMIConversationEntryTypesRichMessage`
typedef NSString *SMIConversationEntryTypes NS_TYPED_ENUM
NS_SWIFT_NAME(ConversationEntryTypes);

/// Describes a Typing  type.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesTypingIndicator;

/// Describes a Message type.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesMessage;

/// Describes a Choice type.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesChoice;

/// Describes a Selection type.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesSelection;

/// Describes a Participant Changed type.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesParticipantChanged;

/// Describes a Read Ack.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesReadAck;

/// Describes a Delivery Ack.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesDeliveryAck;

/// Describes a RichMessage.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesRichMessage;

/// Describes a RoutingWorkResult
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesRoutingWorkResult;

/// Describes a RoutingResult
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesRoutingResult;

/// Describes a unknown or unspecified message type.
FOUNDATION_EXPORT SMIConversationEntryTypes const SMIConversationEntryTypesUnknown;

NS_ASSUME_NONNULL_END
