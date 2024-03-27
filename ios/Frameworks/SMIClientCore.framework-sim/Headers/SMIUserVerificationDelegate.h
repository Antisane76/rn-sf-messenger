//
//  SMIUserVerificationDelegate.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2022-10-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIUserVerification.h>

@protocol SMICoreClient;

NS_ASSUME_NONNULL_BEGIN

/// Completion block for user verification..
/// @param userVerification The `SMIUserVerification` object which contains the customer identity token used to verify the user identity.
typedef void (^SMIUserVerificationChallengeCompletion)(SMIUserVerification * _Nullable userVerification)
NS_SWIFT_NAME(UserVerificationChallengeCompletion);

/// Delegate that handles requests for user verification.
///
/// @see `SMICoreClient`
NS_SWIFT_NAME(UserVerificationDelegate)
@protocol SMIUserVerificationDelegate <NSObject>

/// Delegate event that is triggered when a user verification token is required to be provided by the app.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param reason The `SMIChallengeReason` which generated this user verification challenge.
/// @param completion The completion that provides a user verification token.
/// @note To cancel you can return `nil` to the completion block. This event may still fire several times when a challenge is required even if cancelled.
- (void)core:(__weak id<SMICoreClient>)core userVerificationChallengeWithReason:(SMIChallengeReason)reason
  completionHandler:(SMIUserVerificationChallengeCompletion)completion;

@end

NS_ASSUME_NONNULL_END
