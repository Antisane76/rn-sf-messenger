//
//  SMIFormResponseResult.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <SMIClientcore/SMIEntryTypeFormResponseMessage.h>
#import <SMIClientCore/SMIFormResult.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a form response result message within an `SMIConversationEntry`.
NS_SWIFT_NAME(FormResponseResult)
@protocol SMIFormResponseResult <SMIEntryTypeFormResponseMessage>

/// The result of the form response.
/// @see `SMIFormResult`
@property(nonatomic, readonly, strong) id<SMIFormResult> result;

@end

NS_ASSUME_NONNULL_END
