//
//  SMIPreChatConfiguration.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2022-05-06.
//

#import <SMIClientCore/SMIPreChatField.h>
#import <SMIClientCore/SMIHiddenPreChatField.h>
#import <SMIClientCore/SMIPreChatConfigurationFormTypes.h>

@class SMIPreChatField;

NS_ASSUME_NONNULL_BEGIN

/// Represents a pre-chat field.
NS_SWIFT_NAME(PreChatConfiguration)
@protocol SMIPreChatConfiguration

/// The formType for the pre-chat configuration.
@property (nonatomic, readonly, copy) SMIPreChatConfigurationFormTypes formType;

/// The list of pre-chat fields that are associated with a given configuration.
@property (nonatomic, readonly, strong) NSArray<id<SMIPreChatField>> *preChatFields;

/// The list of hidden pre-chat fields that are associated with a given configuration.
@property (nonatomic, readonly, strong) NSArray<id<SMIHiddenPreChatField>> *hiddenPreChatFields;

@end

NS_ASSUME_NONNULL_END
