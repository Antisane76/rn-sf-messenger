//
//  SMIFormResponseDateValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a date value of an input response.
NS_SWIFT_NAME(FormResponseDateValue)
@protocol SMIFormResponseDateValue <SMIFormResponseValue>

/// The date value of the response.
@property (nonatomic, readonly, strong) NSDate *dateValue;

@end

NS_ASSUME_NONNULL_END
