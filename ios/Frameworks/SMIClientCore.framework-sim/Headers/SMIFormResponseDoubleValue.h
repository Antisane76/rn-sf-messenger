//
//  SMIFormResponseDoubleValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a double value of an input response.
NS_SWIFT_NAME(FormResponseDoubleValue)
@protocol SMIFormResponseDoubleValue <SMIFormResponseValue>

/// The double value of the response.
@property (nonatomic, readonly, assign) CGFloat doubleValue;

@end

NS_ASSUME_NONNULL_END
