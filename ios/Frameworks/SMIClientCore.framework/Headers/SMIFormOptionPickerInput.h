//
//  SMIFormOptionPickerInput.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormTitleOptionItem.h>
#import <SMIClientCore/SMIFormInput.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a selectable input on a form for a single selection.
NS_SWIFT_NAME(FormOptionPickerInput)
@protocol SMIFormOptionPickerInput <SMIFormInput>

/// The currently selected index.
@property (nonatomic, readonly, assign) NSUInteger selectedOptionIndex;

/// A list of selectable options.
/// @see `SMIFormTitleOptionItem`.
@property (nonatomic, readonly, strong) NSArray<id<SMIFormTitleOptionItem>> *optionItems;

/// The current selected value for this input.
/// @see `SMIFormTitleOptionItem`
@property (nonatomic, readwrite, nullable, strong) id<SMIFormTitleOptionItem> value;

@end

NS_ASSUME_NONNULL_END
