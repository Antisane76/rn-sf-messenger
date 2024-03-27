//
//  SMIBusinessHours.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Describes a set of business hours.
NS_SWIFT_NAME(BusinessHours)
@protocol SMIBusinessHours

/// The start time for a given interval, in milliseconds since the epoch.
@property (nonatomic, readonly, assign) NSDate *startTime;

/// The end time for a given interval, in milliseconds since the epoch.
@property (nonatomic, readonly, assign) NSDate *endTime;

@end

NS_ASSUME_NONNULL_END
