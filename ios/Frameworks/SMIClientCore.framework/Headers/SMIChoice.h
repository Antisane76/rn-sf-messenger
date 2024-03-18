//
//  SMIItem.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-07-09.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>

NS_ASSUME_NONNULL_BEGIN

/// A response type that represents a specific choice.
NS_SWIFT_NAME(Choice)
@protocol SMIChoice <NSObject>

/// The ID of this option.
@property (nonatomic, readonly, strong) NSString *optionId;

/// The title of this choice.
@property (nonatomic, readonly, strong) NSString *title;

/// The string for this choice that will be displayed in the chat feed.
@property (nonatomic, readonly, strong) NSString *optionValue;

/// The ID of the parent entry for this choice.
@property (nonatomic, readonly, nullable, strong) NSString *parentEntryId;

@end

NS_ASSUME_NONNULL_END
