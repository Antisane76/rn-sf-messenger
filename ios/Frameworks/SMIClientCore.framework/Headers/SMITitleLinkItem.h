//
//  SMIItem.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-11-22.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIChoice.h>
#import <SMIClientCore/SMIFormTitleItem.h>

NS_ASSUME_NONNULL_BEGIN

/// Representative of TitleLinkItem that will be used to respresent items in the chat feed.
NS_SWIFT_NAME(TitleLinkItem)
@protocol SMITitleLinkItem <NSObject>

/// An array of `SMIFormTitleOptionItem` that make up the `TitleLinkItem`.
@property (nonatomic, readonly, strong) NSArray<id<SMIChoice>> *interactionItems;

/// The `SMIFormTitleItem` that has text information about this `TitleLinkItem`.
@property (nonatomic, readonly, strong) id<SMIFormTitleItem> titleItem;

@end

NS_ASSUME_NONNULL_END
