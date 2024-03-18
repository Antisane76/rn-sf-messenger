//
//  SMITextMessage.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 1/10/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a single text message within an `SMIConversationEntry`.
NS_SWIFT_NAME(TextMessage)
@protocol SMITextMessage <SMIEntryPayload, SMIEntryTypeMessage>

/// The content of the text message.
@property (nonatomic, readonly, strong) NSString *text;

@end

NS_ASSUME_NONNULL_END
