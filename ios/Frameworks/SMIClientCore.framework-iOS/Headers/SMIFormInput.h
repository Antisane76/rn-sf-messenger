//
//  SMIFormInput.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SMIClientCore/SMIFormTitleItem.h>
#import <SMIClientCore/SMIFormInputType.h>
#import <SMIClientCore/SMIFormErrorTypes.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an input on a form. The type of input is variable based on the form configuration.
NS_SWIFT_NAME(FormInput)
@protocol SMIFormInput <NSObject>

/// The text to help explain the purpose of the input.
@property (nonatomic, readonly, nullable, strong) NSString *hintText;

/// The unique identifier for this input.
@property (nonatomic, readonly, strong) NSString *identifier;

/// Determines whether this input is required for the form.
@property (nonatomic, readonly, assign) BOOL required;

/// The data type of the input.
/// @see `SMIFormInputType`
@property (nonatomic, readonly, strong) SMIFormInputType inputType;

/// The title of this input.
/// @see `SMIFormTitleItem`
@property (nonatomic, readonly, strong) id<SMIFormTitleItem> label;

/// Use this validation to determine if the current value for this input is valid.
/// @see `SMIFormErrorType`
- (SMIFormErrorType)validate;

@end

NS_ASSUME_NONNULL_END
