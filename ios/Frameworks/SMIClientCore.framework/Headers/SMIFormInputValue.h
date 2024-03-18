//
//  SMIFormInputValue.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-04.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormInputValueType.h>
#import <SMIClientCore/SMIFormTitleItem.h>
#import <SMIClientCore/SMIFormTitleOptionItem.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a static form input value.
NS_SWIFT_NAME(SMIFormInputValue)
@protocol SMIFormInputValue <NSObject>

/// The unique identifier for this input.
@property (nonatomic, readonly, strong) NSString *inputId;

/// The value type for this static input.
/// @see `SMIFormInputValueType`
@property (nonatomic, readonly, strong) SMIFormInputValueType inputValueType;

/// The title of this static input.
/// @see `SMIFormTitleItem`
@property (nonatomic, readonly, strong, nullable) id<SMIFormTitleItem> inputLabel;

@end

NS_ASSUME_NONNULL_END
