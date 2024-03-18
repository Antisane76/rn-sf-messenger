//
//  SMICoreFactory.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 3/6/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMICoreClient.h>

@class SMICoreConfiguration;
@class SMICoreClient;

NS_ASSUME_NONNULL_BEGIN

/// This factory class allows you to create an instance of `SMICoreClient ` using an `SMICoreConfiguration` config object.
NS_SWIFT_NAME(CoreFactoryProtocol)
@protocol SMICoreFactory

/// Returns an `SMICoreClient` object for a given configuration.
///
/// This method returns the same instance of `SMICoreClient` if the configuration object does not change.
/// However, if passed in a different configuration object, the existing core is stopped, deallocated, and a new core is returned.
/// Call this method any time your configuration has changed, and then update
/// any references to the `SMICoreClient` object that this method returns.
///
/// @param config The `SMICoreConfiguration` configuration object that determines the behavior of `SMICoreClient `.
/// @return The `SMICoreClient ` object instantiated with the config object.
+ (__weak id<SMICoreClient>)createWithConfig:(SMICoreConfiguration *)config;

@end

/// This factory class allows you to create an instance of `SMICoreClient ` using an `SMICoreConfiguration` config object.
/// For additional documentation, refer to the protocol documentation for `SMICoreFactory`.
/// @see `SMICoreFactory`
NS_SWIFT_NAME(CoreFactory)
@interface SMICoreFactory : NSObject<SMICoreFactory>

/// The current Core SDK version.
@property (class, nonatomic, nullable, readonly, strong) NSString *sdkVersion;

/// This constructor is unavailable.
- (instancetype)init NS_UNAVAILABLE;

/// Provide the APNS token which will be forwarded to the In-App services to forward notifications related to conversations.
/// @param deviceToken The APNS device token.
/// @note This method is idempotent. It is safe to call whenever the application receives or retrieves an APNS device token.
/// The token will not be uploaded to our services until needed. Executing this method does not result in any network traffic directly.
+ (void)provideDeviceToken:(NSString *)deviceToken NS_SWIFT_NAME(provide(deviceToken:));
@end

NS_ASSUME_NONNULL_END
