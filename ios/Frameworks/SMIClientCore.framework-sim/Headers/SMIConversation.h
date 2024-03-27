//
//  SMIConversation.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2/24/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMISerializable.h>
#import <SMIClientCore/SMIConversationStatus.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMIPreChatField.h>
#import <SMIClientCore/SMIHiddenPreChatField.h>
#import <SMIClientCore/SMITermsAndConditions.h>

@class SMIParticipant;
@class SMIPreChatField;

NS_ASSUME_NONNULL_BEGIN

/// Protocol that represents a conversation.
NS_SWIFT_NAME(Conversation)
@protocol SMIConversation

/// The conversation ID, which is used to associate all messages and events with a given conversation.
@property (nonatomic, readonly, strong) NSUUID *identifier;

/// The list of participants that are associated with a given conversation.
@property (nonatomic, readonly, strong) NSArray<id<SMIParticipant>> *participants;

/// The list of active participants that are associated with a given conversation.
@property (nonatomic, readonly, strong) NSArray<id<SMIParticipant>> *activeParticipants;

/// The list of pre-chat fields that are associated with a given conversation.
@property (nonatomic, readonly, strong) NSArray<id<SMIPreChatField>> *preChatFields;

/// The list of hidden pre-chat fields that are associated with a given conversation.
@property (nonatomic, readonly, strong) NSArray<id<SMIHiddenPreChatField>> *hiddenPreChatFields;

/// The timestamp of the last pre-chat submission.
@property (nullable, nonatomic, readonly, strong) NSDate *preChatSubmissionTimestamp;

// The timestamp when the conversation was first created.
@property (nullable, nonatomic, readonly, strong) NSDate *created;

/// The Terms and Conditions.
@property (nullable, nonatomic, readonly, strong) id<SMITermsAndConditions> termsAndConditions;

/// The API name for the embedded service deployment associated with this configuration.
@property (nonatomic, readonly, strong) NSString *developerName;

/// The current status of the conversation.
/// @see `SMIConversationStatus`
@property (nonatomic, readonly, assign) SMIConversationStatus status;

/// Holds a reference to a `SMIConversationEntry` representing what has been marked as read by the consuming client.
///
/// @note Outbound in this case refers to the direction of the read acknowledgement. It is the logical reverse of the direction of the message itself.
@property (nullable, nonatomic, readonly, strong) id<SMIConversationEntry> outboundHighWaterMark;

/// Holds a reference to a `SMIConversationEntry` representing what has been marked as read by the remote participant.
///
/// @note Inbound in this case refers to the direction of the read acknowledgement. It is the logical reverse of the direction of the message itself.
@property (nullable, nonatomic, readonly, strong) id<SMIConversationEntry> inboundHighWaterMark;

/// Returns the last conversation entry which is considered to represent activity.
@property (nullable, nonatomic, readonly, strong) id<SMIConversationEntry> lastActiveEntry;

@end

NS_ASSUME_NONNULL_END
