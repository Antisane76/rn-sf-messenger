//
//  SMIErrorCodes.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-07-20.
//

#import <Foundation/Foundation.h>

/// List of error codes.
typedef NS_ENUM(NSInteger, SMIErrorCodes) {
    /// Error code when the error is unknown.
    SMIErrorCodesUnknown,

    /// Error code when the error is caused by a REST failure.
    SMIErrorCodesNetworkRESTFailure = 1000,

    /// Error  code when the user verification delegate has not been set using the `SMICoreClient.userVerificationDelegate` property.
    SMIErrorCodesUserVerificationNoDelegate = 2000,

    /// Error used if a secure form submission fails.
    SMIErrorCodesSecureFormSubmission = 3000,
} NS_SWIFT_NAME(ErrorCodes);
