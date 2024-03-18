//
//  SMIRemoteConfiguration.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-05-13.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMISerializable.h>
#import <SMIClientCore/SMIPreChatField.h>
#import <SMIClientCore/SMIPreChatConfiguration.h>
#import <SMIClientCore/SMIChoiceListConfiguration.h>
#import <SMIClientCore/SMITermsAndConditions.h>

NS_ASSUME_NONNULL_BEGIN

/// Remote configuration information representing this embedded service deployment.
NS_SWIFT_NAME(RemoteConfiguration)
@protocol SMIRemoteConfiguration

/// The list of pre-chat configurations.
@property (nullable, nonatomic, readonly, strong) NSArray<id<SMIPreChatConfiguration>> *preChatConfiguration;

/// The name of this remote configuration.
@property (nonatomic, readonly, strong) NSString *name;

/// The deployment type of the remote configuration.
@property (nonatomic, readonly, strong) NSString *deploymentType;

/// The timestamp of the remote configuration.
@property (nonatomic, readonly, strong) NSDate *timestamp;

/// The choice list configuration.
@property (nullable, nonatomic, readonly, strong) id<SMIChoiceListConfiguration> choiceListConfiguration;

/// The Terms and Conditions.
@property (nullable, nonatomic, readonly, strong) id<SMITermsAndConditions> termsAndConditions;

@end

/// The completion block for returning all conversations stored in the database.
/// @param remoteConfiguration The remote configuration matching your configured embedded service deployment.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMIRemoteConfigurationCompletion)(id<SMIRemoteConfiguration> _Nullable remoteConfiguration, NSError * _Nullable error)
NS_SWIFT_NAME(RemoteConfigurationCompletion);

NS_ASSUME_NONNULL_END
