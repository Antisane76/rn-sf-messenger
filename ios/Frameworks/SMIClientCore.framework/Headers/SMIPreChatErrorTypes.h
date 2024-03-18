//
//  SMIPreChatErrorType.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-08-05.
//

#import <Foundation/Foundation.h>

/// The type of pre-chat error.
typedef NS_ENUM(NSUInteger, SMIPreChatErrorTypes) {
    /// Required field not completed.
    SMIPreChatErrorTypesRequiredField,

    /// Field value exceeds the maximum length.
    SMIPreChatErrorTypesMaxLength,

    /// Email field doesn't have a valid email address.
    SMIPreChatErrorTypesEmailFormat,

    /// Phone field doesn't have a valid phone number.
    SMIPreChatErrorTypesPhoneFormat,

    /// The check box is not selected.
    SMIPreChatErrorTypesCheckBoxSelected,

    /// Number field doesn't have a number.
    SMIPreChatErrorTypesNumberFormat,

    /// Boolean field doesn't have a boolean value.
    SMIPreChatErrorTypesBooleanFormat,

    /// No validation error detected.
    SMIPreChatErrorTypesNone
} NS_SWIFT_NAME(PreChatErrorTypes);
