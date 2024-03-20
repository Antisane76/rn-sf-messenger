//
//  SMICarousel.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-11-22.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIMessageSelectable.h>
#import <SMIClientCore/SMIAttachments.h>
#import <SMIClientCore/SMITitleLinkItem.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// A response type that represents a specific choice.
NS_SWIFT_NAME(Carousel)
@protocol SMICarousel <SMIEntryPayload, SMIMessageSelectable, SMIEntryTypeMessage, SMIAttachments>

/// An array of `SMITitleLinkItem` that will be displayed in the `SMICarousel`
@property (nonatomic, readonly, nullable, strong) NSArray<id<SMITitleLinkItem>> *items;

@end

NS_ASSUME_NONNULL_END
