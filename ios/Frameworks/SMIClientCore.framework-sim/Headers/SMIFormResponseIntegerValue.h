//
//  SMIFormResponseIntegerValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-08-04.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an integer value of an input response.
NS_SWIFT_NAME(FormResponseIntegerValue)
@protocol SMIFormResponseIntegerValue <SMIFormResponseValue>

/// The integer value of the response.
@property (nonatomic, readonly, assign) NSInteger integerValue;

@end

NS_ASSUME_NONNULL_END
