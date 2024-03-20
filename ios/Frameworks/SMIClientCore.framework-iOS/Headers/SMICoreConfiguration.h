//
//  SMICoreConfiguration.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 3/6/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol SMIAuthorization;

NS_ASSUME_NONNULL_BEGIN

/// This class stores configuration information that is necessary when creating an `SMICoreClient` instance using the `SMICoreFactory` class.
NS_SWIFT_NAME(Configuration)
@interface SMICoreConfiguration : NSObject<NSCopying>

/// The base endpoint we are connecting to for all API requests.
@property (nonatomic, readonly, strong) NSURL *serviceAPI;

/// The 15 character Salesforce org ID.
@property (nonatomic, readonly, strong) NSString *organizationId;

/// The API Name for the embedded service deployment associated with this configuration.
@property (nonatomic, readonly, strong) NSString *developerName;

/// Indicates whether this configuration requires user verification.
@property (nonatomic, readonly, assign, getter=isUserVerificationRequired) BOOL userVerificationRequired;

/// This constructor is not available.
- (instancetype)init NS_UNAVAILABLE;

/// Creates a configuration object that can be used to instantiate an `SMICoreClient` object using `SMICoreFactory`.
/// @param url The URL to the JSON config file.
- (nullable instancetype)initWithURL:(NSURL *)url;

/// Creates a configuration object that can be used to instantiate an `SMICoreClient` object using `SMICoreFactory`.
/// @param url The URL to the JSON config file.
/// @param userVerificationRequired Whether or not authorization connections are intended to be configured for User Verification.
- (nullable instancetype)initWithURL:(NSURL *)url userVerificationRequired:(BOOL)userVerificationRequired;

/// Creates a configuration object that can be used to instantiate an `SMICoreClient` object using `SMICoreFactory`.
/// @param serviceAPI The base endpoint we are connecting to for all API requests.
/// @param organizationId The Salesforce org ID.
/// @param developerName The API Name for the embedded service deployment associated with this configuration.
- (instancetype)initWithServiceAPI:(NSURL *)serviceAPI
                    organizationId:(NSString *)organizationId
                     developerName:(NSString *)developerName;

/// Creates a configuration object that can be used to instantiate an `SMICoreClient` object using `SMICoreFactory`.
/// @param serviceAPI The base endpoint we are connecting to for all API requests.
/// @param organizationId The Salesforce org ID.
/// @param developerName The API Name for the embedded service deployment associated with this configuration.
/// @param userVerificationRequired Whether or not authorization connections are intended to be configured for User Verification.
- (instancetype)initWithServiceAPI:(NSURL *)serviceAPI
                    organizationId:(NSString *)organizationId
                     developerName:(NSString *)developerName
          userVerificationRequired:(BOOL)userVerificationRequired NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
