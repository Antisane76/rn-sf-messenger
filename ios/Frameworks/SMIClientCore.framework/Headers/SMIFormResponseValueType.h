//
//  SMIFormResponseValueType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-06.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormResponseValueType` form response types.
/// @see `SMIFormResponseInputs`
/// * `SMIFormResponseValueTypeTextValue`
/// * `SMIFormResponseValueTypeURLValue`
/// * `SMIFormResponseValueTypeDoubleValue`
/// * `SMIFormResponseValueTypeDoubleValue`
/// * `SMIFormResponseValueTypeIntegerValue`
/// * `SMIFormResponseValueTypeDateValue`
/// * `SMIFormResponseValueTypeDateTimeValue`
typedef NSString *SMIFormResponseValueType NS_TYPED_ENUM
NS_SWIFT_NAME(FormResponseValueType);

/// A text response.
FOUNDATION_EXPORT SMIFormResponseValueType const SMIFormResponseValueTypeTextValue;

/// A URL response.
FOUNDATION_EXPORT SMIFormResponseValueType const SMIFormResponseValueTypeURLValue;

/// A double type response.
FOUNDATION_EXPORT SMIFormResponseValueType const SMIFormResponseValueTypeDoubleValue;

/// An integer response.
FOUNDATION_EXPORT SMIFormResponseValueType const SMIFormResponseValueTypeIntegerValue;

/// A date response.
FOUNDATION_EXPORT SMIFormResponseValueType const SMIFormResponseValueTypeDateValue;

/// A datetime response.
FOUNDATION_EXPORT SMIFormResponseValueType const SMIFormResponseValueTypeDateTimeValue;

NS_ASSUME_NONNULL_END
