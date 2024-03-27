//
//  SMIFormResponseInputs.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientcore/SMIEntryTypeFormResponseMessage.h>
#import <SMIClientCore/SMIFormInputValue.h>
#import <SMIClientCore/SMIFormTitleItem.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a form response.
NS_SWIFT_NAME(FormResponseInputs)
@protocol SMIFormResponseInputs <SMIEntryTypeFormResponseMessage>

/// The title of the form response.
/// @see `SMIFormTitleItem`
@property (nonatomic, readonly, nullable, strong) id<SMIFormTitleItem> formTitle;

/// The values collected from a user for each section of the form.
/// @see `SMIFormInputValue`
@property (nonatomic, readonly, strong) NSArray<id<SMIFormInputValue>> *inputValues;

@end

NS_ASSUME_NONNULL_END
