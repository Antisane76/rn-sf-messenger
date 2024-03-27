//
//  SMIQuickReply.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-05-14.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMISerializable.h>
#import <SMIClientCore/SMIMessageSelectable.h>
#import <SMIClientCore/SMIMessageChoices.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a quick reply message.
NS_SWIFT_NAME(QuickReply)
@protocol SMIQuickReply <SMIEntryPayload, SMIMessageSelectable, SMIEntryTypeMessage, SMIMessageChoices>

/// The question text for the quick reply.
@property (nonatomic, readonly, strong) NSString *text;

@end

NS_ASSUME_NONNULL_END
