//
//  SMIEntryTypeFormMessage.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-21.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a secure form message within an `SMIConversationEntry`.
NS_SWIFT_NAME(EntryTypeFormMessage)
@protocol SMIEntryTypeFormMessage <SMIEntryPayload, SMIEntryTypeMessage>
@end

NS_ASSUME_NONNULL_END
