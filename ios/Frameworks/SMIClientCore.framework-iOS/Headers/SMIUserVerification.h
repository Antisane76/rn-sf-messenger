//
//  SMIUserVerification.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2022-10-12.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIAuthorization.h>

NS_ASSUME_NONNULL_BEGIN

/// The reason for a credential challenge. Possible values:
/// * `SMIChallengeReasonNone`
/// * `SMIChallengeReasonInitial`
/// * `SMIChallengeReasonMalformed`
/// * `SMIChallengeReasonExpired`
/// * `SMIChallengeReasonRefresh`
typedef NS_ENUM(NSUInteger, SMIChallengeReason) {
    /// The verification token is valid. This is a terminating state for determining user identity.
    SMIChallengeReasonNone = 0,
    /// The initial challenge for an user verification token.
    SMIChallengeReasonInitial,
    /// The passed in token was malformed.
    SMIChallengeReasonMalformed,
    /// The passed in token has expired.
    SMIChallengeReasonExpired,
    /// The verification token from the server has expired and user verification is required again.
    SMIChallengeReasonRefresh
} NS_SWIFT_NAME(ChallengeReason);

/// This class contains information associated with a verified user.
NS_SWIFT_NAME(UserVerification)
@interface SMIUserVerification : NSObject <SMIAuthorization>

/// The customer identity token.
@property (nonatomic, readonly, strong) NSString *customerIdentityToken;

/// The type of authorization type for the customer identity token.
@property (nonatomic, readonly) SMIAuthorizationTypes type;

/// This constructor is not available.
- (instancetype)init NS_UNAVAILABLE;

/// Generates an instance of an `SMIUserVerification` object, which is used to pass in user verification credentials.
/// @param customerIdentityToken The authentication token that is used to verify the user with the service.
/// @param type The authorization type for the customer identity token.
- (instancetype)initWithCustomerIdentityToken:(NSString *)customerIdentityToken type:(SMIAuthorizationTypes)type NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
