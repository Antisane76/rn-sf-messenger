//
//  SMIEntryPayload.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 1/10/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIConversationFormatTypes.h>
#import <SMIClientCore/SMIConversationEntryTypes.h>
#import <SMIClientCore/SMIConversationEntryMessageTypes.h>

@protocol SMIConversationEntry;

NS_ASSUME_NONNULL_BEGIN

/// Common interface for the content of an `SMIConversationEntry` object.
NS_SWIFT_NAME(EntryPayload)
@protocol SMIEntryPayload <NSCopying>

/// The format of the message content for the associated `SMIConversationEntry`.
@property (class, nonatomic, readonly, strong) SMIConversationFormatTypes format;

/// The type of message content for the associated `SMIConversationEntry`.
@property (class, nonatomic, readonly, strong) SMIConversationEntryTypes type;

/// The type of message content for the associated `SMIConversationEntry`.
@property (class, nonatomic, readonly, strong) SMIConversationEntryMessageTypes messageType;

/// The identifier for the message content for the associated `SMIConversationEntry`.
@property (nonatomic, readonly, strong) NSString *identifier;

/// The unique identifier of a specific `SMIConversationEntry` that this payload is a reply to.
@property (nonatomic, readonly, nullable, strong) NSString *inReplyToEntryId;

/// The `SMIConversationEntry` that the payload is a reply to.
@property (nonatomic, readonly, nullable, strong) id<SMIConversationEntry> replyTo;

@end

NS_ASSUME_NONNULL_END
