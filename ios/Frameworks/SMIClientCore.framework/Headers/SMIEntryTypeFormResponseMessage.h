//
//  SMIFormResponse.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-04.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a form response message within an `SMIConversationEntry`.
NS_SWIFT_NAME(EntryTypeFormResponseMessage)
@protocol SMIEntryTypeFormResponseMessage <SMIEntryPayload, SMIEntryTypeMessage>
@end

NS_ASSUME_NONNULL_END
