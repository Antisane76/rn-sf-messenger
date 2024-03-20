//
//  SMIRoutingWorkTypes.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-10-22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum which describes a set of routing work result workTypes
/// Possible values:
/// * `SMIRoutingWorkTypesAssigned`
/// * `SMIRoutingWorkTypesAccepted`
/// * `SMIRoutingWorkTypesClosed`
typedef NSString *SMIRoutingWorkTypes NS_TYPED_ENUM
NS_SWIFT_NAME(RoutingWorkTypes);

/// Describes an operation for assigning a routing work result from an agent routing.
FOUNDATION_EXPORT SMIRoutingWorkTypes const SMIRoutingWorkTypesAssigned;

/// Describes an operation for accepted a routing work result from an agent routing.
FOUNDATION_EXPORT SMIRoutingWorkTypes const SMIRoutingWorkTypesAccepted;

/// Describes an operation for closing a routing work result from an agent routing.
FOUNDATION_EXPORT SMIRoutingWorkTypes const SMIRoutingWorkTypesClosed;

NS_ASSUME_NONNULL_END
