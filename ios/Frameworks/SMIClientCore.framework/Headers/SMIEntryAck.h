//
//  SMIEntryAck.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-04-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMIAcknowledgementTypes.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a single acknowledgement of an `SMIConversationEntry`.
NS_SWIFT_NAME(EntryAck)
@protocol SMIEntryAck <SMIEntryPayload>

/// The type of acknowledgement.
@property (nonatomic, readonly, assign) SMIAcknowledgementTypes ackType;

/// The `SMIConversationEntry` entry which was acknowledgd.
@property (nonatomic, readonly, strong) id<SMIConversationEntry> entry;

/// The `SMIParticipant` which has acknowledged the entry above.
@property (nonatomic, readonly, strong) id<SMIParticipant> from;

/// The time the message was acknowledged.
@property (nonatomic, readonly, strong) NSDate *timestamp;

@end

NS_ASSUME_NONNULL_END
