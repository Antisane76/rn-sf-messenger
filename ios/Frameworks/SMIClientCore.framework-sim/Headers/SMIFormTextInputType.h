//
//  SMIFormTextInputType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormTextInputType` text input types.
/// Possible values:
/// * `SMIFormTextInputTypeSingleline`
/// * `SMIFormTextInputTypeMultiline`
typedef NSString *SMIFormTextInputType NS_TYPED_ENUM
NS_SWIFT_NAME(FormTextInputType);

/// Represents a single line input.
FOUNDATION_EXPORT SMIFormTextInputType const SMIFormTextInputTypeSingleline;

/// Represents a multiline input.
FOUNDATION_EXPORT SMIFormTextInputType const SMIFormTextInputTypeMultiline;

NS_ASSUME_NONNULL_END
