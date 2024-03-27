//
//  SMIRoutingResult.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-10-14.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIRoutingTypes.h>
#import <SMIClientCore/SMIFailureTypes.h>

@protocol SMIConversationEntry;

NS_ASSUME_NONNULL_BEGIN

/// Represents a routing result within an `SMIConversationEntry`.
NS_SWIFT_NAME(RoutingResult)
@protocol SMIRoutingResult <SMIEntryPayload>

/// The routing type.
@property (nonatomic, readonly, strong) SMIRoutingTypes routingType;

/// The routing failure type.
@property (nonatomic, readonly, strong) SMIFailureTypes failureType;

/// The reason for the routing failure
@property (nonatomic, readonly, strong) NSString *failureReason;

/// The record ID for the routing result.
@property (nonatomic, readonly, strong) NSString *recordId;

/// Estimated wait time in seconds.
/// A negative number means that EWT could not be calculated.
@property (nonatomic, readonly, assign) NSInteger estimatedWaitTime;

/// Determines if there is a valid EWT value available to use for displaying an approximate wait time for an agent to respond.
/// This is true if and only if isEWTRequest is true AND estimatedWaitTime is >= 0
@property (nonatomic, readonly, assign) BOOL isEWTAvailable;

/// Determines if an estimated wait time calculation was requested for this route request.
@property (nonatomic, readonly, assign) BOOL isEWTRequested;

@end

NS_ASSUME_NONNULL_END
