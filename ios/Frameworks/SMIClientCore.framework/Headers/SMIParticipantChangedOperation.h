//
//  SMIParticipantChangedOperation.h
//  SMIClientCore
//
//  Created by Aaron on 2020-11-17.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <SMIClientCore/SMISerializable.h>
#import <SMIClientCore/SMIParticipant.h>
#import <SMIClientCore/SMIParticipantChangedOperationTypes.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an operation that describes a participant change.
NS_SWIFT_NAME(ParticipantChangedOperation)
@protocol SMIParticipantChangedOperation

/// Enum that describes the operation type.
/// @see `SMIParticipantChangedOperationTypes`
@property (nonatomic, readonly, strong) SMIParticipantChangedOperationTypes type;

/// The `SMIParticipant` impacted by this operation.
@property (nonatomic, readonly, strong) SMISerializable<SMIParticipant> *participant;

@end

NS_ASSUME_NONNULL_END
