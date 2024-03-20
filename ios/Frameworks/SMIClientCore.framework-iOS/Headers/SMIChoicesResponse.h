//
//  SMIChoicesResponse.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-07-28.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

@protocol SMIChoice;
@protocol SMIConversationEntry;

NS_ASSUME_NONNULL_BEGIN

/// Represents a list of choices within an `SMIConversationEntry`.
NS_SWIFT_NAME(ChoicesResponse)
@protocol SMIChoicesResponse <SMIEntryPayload, SMIEntryTypeMessage>

/// The list of choices.
/// @see `SMIChoice`
@property (nonatomic, readonly, strong) NSArray<id<SMIChoice>> *selections;

@end

NS_ASSUME_NONNULL_END
