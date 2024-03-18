//
//  SMIFailureTypes.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-05-05.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum which describes a set of routing failure types.
/// Possible values:
/// * `SMIFailureTypesNone`
/// * `SMIFailureTypesUnknown`
/// * `SMIFailureTypesSubmissionError`
/// * `SMIFailureTypesRoutingError`
/// * `SMIFailureTypesCancelled`
typedef NSString *SMIFailureTypes NS_TYPED_ENUM
NS_SWIFT_NAME(FailureTypes);

/// Describes a successful routing.
FOUNDATION_EXPORT SMIFailureTypes const SMIFailureTypesNone;

/// Describes an unknown error.
FOUNDATION_EXPORT SMIFailureTypes const SMIFailureTypesUnknown;

/// Describes an error that has a submission failure.
FOUNDATION_EXPORT SMIFailureTypes const SMIFailureTypesSubmissionError;

/// Describes an error that has a routing failure.
FOUNDATION_EXPORT SMIFailureTypes const SMIFailureTypesRoutingError;

/// Describes an error from canceled routing.
FOUNDATION_EXPORT SMIFailureTypes const SMIFailureTypesCancelled;

NS_ASSUME_NONNULL_END
