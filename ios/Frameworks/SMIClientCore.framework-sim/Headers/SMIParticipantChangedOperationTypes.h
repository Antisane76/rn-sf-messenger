//
//  SMIParticipantChangedOperationTypes.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2020-11-17.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum which describes a set of participant changed operations.
/// Possible values:
/// * `SMIParticipantChangedOperationTypesAdd`
/// * `SMIParticipantChangedOperationTypesRemove`
typedef NSString *SMIParticipantChangedOperationTypes NS_TYPED_ENUM
NS_SWIFT_NAME(ParticipantChangedOperationTypes);

/// Describes an operation for adding a participant to a conversation.
FOUNDATION_EXPORT SMIParticipantChangedOperationTypes const SMIParticipantChangedOperationTypesAdd;

/// Describes an operation for removing a participant from a conversation.
FOUNDATION_EXPORT SMIParticipantChangedOperationTypes const SMIParticipantChangedOperationTypesRemove;

NS_ASSUME_NONNULL_END
