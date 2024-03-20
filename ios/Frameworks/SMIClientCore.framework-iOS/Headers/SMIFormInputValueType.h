//
//  SMIFormInputValueType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-04.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormInputValueType` form input value types.
/// Possible values:
/// * `SMIFormInputValueTypeSingleInputValue`
/// * `SMIFormInputValueTypeSelectedOptionsInputValue`
typedef NSString *SMIFormInputValueType NS_TYPED_ENUM
NS_SWIFT_NAME(FormInputValueType);

/// Represents a value of a single value form input.
FOUNDATION_EXPORT SMIFormInputValueType const SMIFormInputValueTypeSingleInputValue;

/// Represents a value from a form input with single or multiple options.
FOUNDATION_EXPORT SMIFormInputValueType const SMIFormInputValueTypeSelectedOptionsInputValue;

NS_ASSUME_NONNULL_END
