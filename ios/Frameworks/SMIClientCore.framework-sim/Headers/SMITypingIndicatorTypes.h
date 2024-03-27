//
//  SMITypingIndicatorTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-02-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum which describes a set of typing indicator types
/// Possible values:
/// * `SMITypingIndicatorTypesStarted`
/// * `SMITypingIndicatorTypesStopped`
typedef NSString *SMITypingIndicatorTypes NS_TYPED_ENUM
NS_SWIFT_NAME(TypingIndicatorTypes);

/// Describes a typing started event.
FOUNDATION_EXPORT SMITypingIndicatorTypes const SMITypingIndicatorTypesStarted;

/// Describes a typing stopped event.
FOUNDATION_EXPORT SMITypingIndicatorTypes const SMITypingIndicatorTypesStopped;

NS_ASSUME_NONNULL_END
