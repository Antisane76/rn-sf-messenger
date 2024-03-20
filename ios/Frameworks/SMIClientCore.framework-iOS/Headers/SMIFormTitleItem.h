//
//  SMIFormTitleItem.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-22.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormTitleItemType.h>
#import <SMIClientCore/SMIImageAsset.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a title option displayed on components within a form.
NS_SWIFT_NAME(FormTitleItem)
@protocol SMIFormTitleItem <NSObject>

/// The type of title item this object represents.
/// @see `SMIFormTitleItemType`
@property (nonatomic, readonly, strong) SMIFormTitleItemType itemType;

/// The required title description for this item.
@property (nonatomic, readonly, strong) NSString *title;

/// Optional subtitle for this item.
@property (nullable, nonatomic, readonly, strong) NSString *subTitle;

/// Optional secondary subtitle for this item.
@property (nullable, nonatomic, readonly, strong) NSString *secondarySubTitle;

/// Optional tertiary subtitle for this item.
@property (nullable, nonatomic, readonly, strong) NSString *tertiarySubTitle;

/// Unique optional reference identifier for this item.
@property (nullable, nonatomic, readonly, strong) NSString *referenceId;

@end

NS_ASSUME_NONNULL_END
