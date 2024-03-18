//
//  SMIFormResponseDateTimeValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a datetime value of an input response.
NS_SWIFT_NAME(FormResponseDateTimeValue)
@protocol SMIFormResponseDateTimeValue <SMIFormResponseValue>

/// The datetime value of the response.
@property (nonatomic, readonly, strong) NSDate *dateTimeValue;

@end

NS_ASSUME_NONNULL_END
