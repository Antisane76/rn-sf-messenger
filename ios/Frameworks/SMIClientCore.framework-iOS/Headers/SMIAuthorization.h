//
//  SMIAuthConfig.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 3/6/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The type of authorization.
typedef NS_ENUM(NSUInteger, SMIAuthorizationTypes) {
    /// JWT-based user verification.
    SMIAuthorizationTypesJWT = 0,

    /// Unauthenticated.
    SMIAuthorizationTypesUnauthenticated,

    /// Invalid authorization type.
    SMIAuthorizationTypesInvalid
} NS_SWIFT_NAME(AuthorizationTypes);


/// Authorization class.
@protocol SMIAuthorization<NSObject, NSCopying>

/**
 * The type of authorization token.
 */
@property (nonatomic, readonly) SMIAuthorizationTypes type;

@end

NS_ASSUME_NONNULL_END
