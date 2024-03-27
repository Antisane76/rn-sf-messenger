//
//  SMIRichLinkMessage.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-04-23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMIImageAsset.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a rich link within an `SMIConversationEntry`.
NS_SWIFT_NAME(RichLinkMessage)
@protocol SMIRichLinkMessage <SMIEntryPayload, SMIEntryTypeMessage>

/// Title of the rich link message.
@property (nonatomic, readonly, strong) NSString *title;

/// The URL representing the website pointed to by the rich link.
@property (nonatomic, readonly, strong, nullable) NSURL *url;

/// The associated image asset for the rich link.
@property (nonatomic, readonly, strong, nullable) id<SMIImageAsset> asset;

@end

NS_ASSUME_NONNULL_END
