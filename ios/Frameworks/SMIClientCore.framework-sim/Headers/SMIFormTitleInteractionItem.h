//
//  SMIFormTitleInteractionItem.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>

#import <SMIClientCore/SMIFormTitleItem.h>
#import <SMIClientCore/SMIFormTitleInteractionItemType.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an object containing `SMIFormTitleItem` and is used as an interactive element on a form.
NS_SWIFT_NAME(FormTitleInteractionItem)
@protocol SMIFormTitleInteractionItem <NSObject>

/// The item type for this interaction item.
/// @see `SMIFormTitleInteractionItemType`
@property (nonatomic, readonly, strong) SMIFormTitleInteractionItemType itemType;

/// The title of this interaction item.
/// @see `SMIFormTitleItem`
@property (nonatomic, readonly, strong) id<SMIFormTitleItem> titleItem;

@end

NS_ASSUME_NONNULL_END
