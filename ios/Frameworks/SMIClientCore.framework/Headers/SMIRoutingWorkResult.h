//
//  SMIRoutingWorkResult.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-10-14.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIRoutingWorkTypes.h>

@protocol SMIConversationEntry;

NS_ASSUME_NONNULL_BEGIN

/// Represents a routing work result within an `SMIConversationEntry`.
NS_SWIFT_NAME(RoutingWorkResult)
@protocol SMIRoutingWorkResult <SMIEntryPayload>

/// The work type for the work result.
/// @see `SMIRoutingWorkTypes`
@property (nonatomic, readonly, strong) SMIRoutingWorkTypes workType;

@end

NS_ASSUME_NONNULL_END
