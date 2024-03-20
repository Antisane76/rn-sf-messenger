//
//  SMIFormSingleInputValue.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-04.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>
#import <SMIClientCore/SMIFormInputValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a response of a single value form input.
NS_SWIFT_NAME(FormSingleInputValue)
@protocol SMIFormSingleInputValue <SMIFormInputValue>

/// The display string that represents this value.
@property (nonatomic, readonly, strong, nullable) NSString *displayValue;

/// The value of the response.
/// @see `SMIFormSingleInputValue`
@property (nonatomic, readonly, strong, nullable) id<SMIFormResponseValue> value;

@end

NS_ASSUME_NONNULL_END
