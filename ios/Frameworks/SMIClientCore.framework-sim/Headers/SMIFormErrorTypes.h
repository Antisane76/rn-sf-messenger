//
//  Header.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-09-15.
//

#import <Foundation/Foundation.h>

/// The type of pre-chat error.
typedef NS_ENUM(NSUInteger, SMIFormErrorType) {
    /// Required field not completed.
    SMIFormErrorTypeRequiredField,

    /// Field value exceeds the maximum length.
    SMIFormErrorTypeMaxLength,

    /// Email field doesn't have a valid email address.
    SMIFormErrorTypeEmailFormat,

    /// Email field doen't have a valid url
    SMIFormErrorTypeUrlFormat,

    /// No validation error detected.
    SMIFormErrorTypeNone
} NS_SWIFT_NAME(FormErrorType);
