//
//  SMITypingIndicator.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-02-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMITypingIndicatorTypes.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a typing indicator within an `SMIConversationEntry`.
NS_SWIFT_NAME(TypingIndicator)
@protocol SMITypingIndicator <SMIEntryPayload>

/// The timestamp for this typing indicator.
@property (nonatomic, readonly, strong) NSDate *timestamp;

/// The type of this typing indicator.
@property (nonatomic, readonly, strong) SMITypingIndicatorTypes type;

@end

NS_ASSUME_NONNULL_END
