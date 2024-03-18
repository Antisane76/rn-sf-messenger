//
//  SMIConversationEntryStatus.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 3/30/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Describes a set of known statuses applied to an `SMIConversationEntry` object.
/// Possible values:
/// * `SMIConversationEntryStatusError`
/// * `SMIConversationEntryStatusSending`
/// * `SMIConversationEntryStatusSent`
/// * `SMIConversationEntryStatusDelivered`
/// * `SMIConversationEntryStatusRead`
typedef NSString *SMIConversationEntryStatus NS_TYPED_ENUM
NS_SWIFT_NAME(ConversationEntryStatus);

/// There was some form of error when sending an `SMIConversationEntry` object.
FOUNDATION_EXPORT SMIConversationEntryStatus const SMIConversationEntryStatusError;

/// The initial state of an `SMIConversationEntry` when created.
FOUNDATION_EXPORT SMIConversationEntryStatus const SMIConversationEntryStatusSending;

/// The  `SMIConversationEntry` has been confirmed to have been received by the messaging service.
FOUNDATION_EXPORT SMIConversationEntryStatus const SMIConversationEntryStatusSent;

/// The `SMIConversationEntry` is confirmed to have been delivered to the other participant's client.
FOUNDATION_EXPORT SMIConversationEntryStatus const SMIConversationEntryStatusDelivered;

/// The `SMIConversationEntry` is confirmed to have been read by the other participant.
FOUNDATION_EXPORT SMIConversationEntryStatus const SMIConversationEntryStatusRead;

/// The `SMIConversationEntry` has failed when sent to a bot
FOUNDATION_EXPORT SMIConversationEntryStatus const SMIConversationEntryStatusAttachmentError __deprecated_enum_msg("Use `SMIConversationEntryStatusError`");

NS_ASSUME_NONNULL_END
