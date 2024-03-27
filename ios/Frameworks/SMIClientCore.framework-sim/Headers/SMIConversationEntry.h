//
//  SMIConversationEntry.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 1/10/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <SMIClientCore/SMISerializable.h>
#import <SMIClientCore/SMIParticipant.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationFormatTypes.h>
#import <SMIClientCore/SMIConversationEntryTypes.h>
#import <SMIClientCore/SMIConversationEntryMessageTypes.h>
#import <SMIClientCore/SMIConversationEntryStatus.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an entry in a conversation. An entry can be a permanent record in a conversation
/// such as a message or a join event. Or it can represent more ephemeral events like a typing indicator.
NS_SWIFT_NAME(ConversationEntry)
@protocol SMIConversationEntry <NSObject>

/// The identifier for the `SMIConversation` that a given `SMIConversationEntry` is associated with.
@property (nonatomic, readonly, strong) NSUUID *conversationId;

/// The unique identifier of a given `SMIConversationEntry`.
@property (nonatomic, readonly, strong) NSString *identifier;

/// The timestamp of the `SMIConversationEntry`.
/// @note This timestamp is initially set with the time the entry was created, but updates
/// when the service confirms receipt of the message.
@property (nonatomic, readonly, strong) NSDate *timestamp;

/// The format of the `SMIEntryPayload` contained within a given `SMIConversationEntry`.
@property (nonatomic, readonly, strong) SMIConversationFormatTypes format;

/// The type of the `SMIEntryPayload` contained within a given `SMIConversationEntry`.
@property (nonatomic, readonly, strong) SMIConversationEntryTypes type;

/// The message type of the `SMIEntryPayload` contained within a given `SMIConversationEntry`.
@property (nonatomic, readonly, strong) SMIConversationEntryMessageTypes messageType;

/// The status of the `SMIConversationEntry`.
/// @note This status changes over the lifetime of a conversation as the message is propagated through the service.
@property (nonatomic, readonly, strong) SMIConversationEntryStatus status;

/// The `SMIEntryPayload` associated with a given `SMIConversationEntry`.
@property (nonatomic, readonly, strong) SMISerializable<SMIEntryPayload> *payload;

/// The `SMIParticipant` who is associated with a given `SMIConversationEntry`.
@property (nonatomic, readonly, strong) SMISerializable<SMIParticipant> *sender;

/// The error associated with the conversation entry.
@property (nullable, nonatomic, readonly, strong) NSError *error;

@end

NS_ASSUME_NONNULL_END
