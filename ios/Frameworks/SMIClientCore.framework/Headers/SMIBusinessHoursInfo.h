//
//  SMIBusinessHoursInfo.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIBusinessHours.h>

NS_ASSUME_NONNULL_BEGIN

/// The information needed to determine a deployment's business hours.
NS_SWIFT_NAME(BusinessHoursInfo)
@protocol SMIBusinessHoursInfo

/// The name of the business hours in Setup.
@property (nonatomic, readonly, strong) NSString *name;

/// Determines if the business hours are active.
@property (nonatomic, readonly, assign, getter=isActive) BOOL active;

/// A list of `SMIBusinessHours` representing intervals across a 24-hour period.
@property (nonatomic, readonly, strong) NSArray<id<SMIBusinessHours>> *businessHours;

/// Current request timestamp of the business hours request.
@property (nonatomic, readonly, assign) NSDate *requestTimestamp;

/// Determines if the user is currently within the set business hours.
/// @param comparisonTime Used to check if the time current time is within business hours.
-(BOOL)isWithinBusinessHours:(nullable NSDate *)comparisonTime NS_SWIFT_NAME(isWithinBusinessHours(comparisonTime:));

@end

/// Completion block for returning the business hours of a deployment.
/// @param businessHoursInfo The business hours set for a deployment.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMIBusinessHoursInfoCompletion)(id<SMIBusinessHoursInfo> _Nullable businessHoursInfo, NSError * _Nullable error)
NS_SWIFT_NAME(BusinessHoursInfoCompletion);

NS_ASSUME_NONNULL_END
