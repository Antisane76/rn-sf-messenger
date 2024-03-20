//
//  SMIFormTextInput.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SMIClientCore/SMIFormTextInputType.h>
#import <SMIClientCore/SMIFormInput.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a text input on a form.
NS_SWIFT_NAME(FormTextInput)
@protocol SMIFormTextInput <SMIFormInput>

/// The type of text expected for this input.
/// @see `SMIFormTextInputType`.
@property (nonatomic, readonly, nullable, strong) SMIFormTextInputType textInputType;

/// The maximum characters this text input accepts.
@property (nonatomic, readonly, assign) NSUInteger maximumCharacterCount;

/// Placeholder text displayed to users.
@property (nonatomic, readonly, nullable, strong) NSString *placeholder;

/// Text which is prefixed to the final output.
@property (nonatomic, readonly, nullable, strong) NSString *prefixText;

/// The content type for this input.
/// @see `UITextContentType`.
@property (nonatomic, readonly, nullable, strong) UITextContentType textContentType;

/// The suggested keyboard type which should be used to collect input from the user.
/// @see `UIKeyboardType`
@property (nonatomic, readonly, assign) UIKeyboardType keyboardType;

/// The current text value for this input.
@property (nonatomic, readwrite, strong, nullable) NSString *value;

@end

NS_ASSUME_NONNULL_END
