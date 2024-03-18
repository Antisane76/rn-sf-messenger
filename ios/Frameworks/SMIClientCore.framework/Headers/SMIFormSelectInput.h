//
//  SMIFormSelectInput.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormTitleOptionItem.h>
#import <SMIClientCore/SMIFormInput.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a selectable input on a form for single or multiple selections.
NS_SWIFT_NAME(FormSelectInput)
@protocol SMIFormSelectInput <SMIFormInput>

/// Determines whether this input allows for multiple selections.
@property (nonatomic, readonly, assign) BOOL multipleSelection;

/// A list of selectable options.
/// @see `SMIFormTitleOptionItem`.
@property (nonatomic, readonly, strong) NSArray<id<SMIFormTitleOptionItem>> *optionItems;

/// The currently selected values for this input.
/// @see `SMIFormTitleOptionItem`
@property (nonatomic, readwrite, strong, nullable) NSArray<id<SMIFormTitleOptionItem>> *value;

@end

NS_ASSUME_NONNULL_END
