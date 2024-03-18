//
//  SMIFormSelectedOptionsInputValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormInputValue.h>
#import <SMIClientCore/SMIFormSelectedOption.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents the selected response values of a multi-option form input.
NS_SWIFT_NAME(FormSelectedOptionsInputValue)
@protocol SMIFormSelectedOptionsInputValue <SMIFormInputValue>

/// A list of selected responses.
/// @see `SMIFormSelectedOption`
@property (nonatomic, readonly, strong, nullable) NSArray<id<SMIFormSelectedOption>> *selectedOptions;

@end

NS_ASSUME_NONNULL_END
