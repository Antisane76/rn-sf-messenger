//
//  SMIFormResponseErrorType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-05.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormResponseErrorType` errors returned due to a failed form submission.
/// Possible values:
/// * `SMIFormResponseErrorTypeInvalidFormResponse`
/// * `SMIFormResponseErrorTypeFormRequestExpired`
/// * `SMIFormResponseErrorTypeFormRequestExpired`
/// * `SMIFormResponseErrorTypeTypeInternalServerError`
typedef NSString *SMIFormResponseErrorType NS_TYPED_ENUM
NS_SWIFT_NAME(FormResponseErrorType);

/// A validation error occurred on the submitted form.
FOUNDATION_EXPORT SMIFormResponseErrorType const SMIFormResponseErrorTypeInvalidFormResponse;

/// The form is no longer eligible for submission.
FOUNDATION_EXPORT SMIFormResponseErrorType const SMIFormResponseErrorTypeFormRequestExpired;

/// An API error prevented the successful submission of the form.
FOUNDATION_EXPORT SMIFormResponseErrorType const SMIFormResponseErrorTypeTypeApiResultErrorCode;

/// An internal service error was triggered preventing the submission of the form.
FOUNDATION_EXPORT SMIFormResponseErrorType const SMIFormResponseErrorTypeTypeInternalServerError;

NS_ASSUME_NONNULL_END
