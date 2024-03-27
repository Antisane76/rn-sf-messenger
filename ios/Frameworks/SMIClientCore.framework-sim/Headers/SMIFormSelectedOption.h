//
//  SMIFormSelectedOption.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SMIClientCore/SMIFormTitleItem.h>
#import <SMIClientCore/SMIFormInputType.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a selected response of a multi-option form input.
NS_SWIFT_NAME(SelectedOption)
@protocol SMIFormSelectedOption <NSObject>

/// The unique identifier for this response.
@property (nonatomic, readonly, strong) NSString *optionIdentifier;

/// The title of this selected response.
/// @see `SMIFormTitleItem`
@property (nonatomic, readonly, strong) id<SMIFormTitleItem> optionTitle;

@end

NS_ASSUME_NONNULL_END
