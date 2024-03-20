//
//  SMIFormInputType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that describes possible `SMIFormInputType` types.
/// Possible values:
/// * `SMIFormInputTypeSelectInput`
/// * `SMIFormInputTypeOptionPickerInput`
/// * `SMIFormInputTypeDatePickerInput`
/// * `SMIFormInputTypeTextInput`
typedef NSString *SMIFormInputType NS_TYPED_ENUM
NS_SWIFT_NAME(FormInputType);

/// Represents a form input selection that you can configure to have single or multiple selections.
FOUNDATION_EXPORT SMIFormInputType const SMIFormInputTypeSelectInput;

/// Represents a form input where the user can select only one option.
FOUNDATION_EXPORT SMIFormInputType const SMIFormInputTypeOptionPickerInput;

/// Represents a date picker input.
FOUNDATION_EXPORT SMIFormInputType const SMIFormInputTypeDatePickerInput;

/// Represents a text input.
FOUNDATION_EXPORT SMIFormInputType const SMIFormInputTypeTextInput;


NS_ASSUME_NONNULL_END
