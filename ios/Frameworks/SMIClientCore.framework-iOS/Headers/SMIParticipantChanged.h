//
//  SMIParticipantChanged.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2020-11-18.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <SMIClientCore/SMIEntryPayload.h>

@protocol SMIParticipantChangedOperation;

NS_ASSUME_NONNULL_BEGIN

/// Represents a participant changed event. A participant changed event occurs whenever a participant joins or leaves a conversation.
NS_SWIFT_NAME(ParticipantChanged)
@protocol SMIParticipantChanged <SMIEntryPayload>

/// An array of `SMIParticipantChangedOperationType` objects. Each operation represents a participant joining or leaving the conversation.
@property (nonatomic, readonly, strong) NSArray<id<SMIParticipantChangedOperation>> *operations;

@end

NS_ASSUME_NONNULL_END
