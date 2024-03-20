//
//  SMIResponseValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValueType.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a value of an input response.
NS_SWIFT_NAME(FormResponseValue)
@protocol SMIFormResponseValue <NSObject>

/// The type of response value.
/// @see `SMIFormResponseValueType`
@property (nonatomic, readonly, strong) SMIFormResponseValueType valueType;

@end

NS_ASSUME_NONNULL_END
