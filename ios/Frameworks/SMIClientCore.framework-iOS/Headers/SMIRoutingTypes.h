//
//  SMIRoutingResultRoutingType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-10-22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum which describes a set of routing types
/// Possible values:
/// * `SMIRoutingTypesInitial`
/// * `SMIRoutingTypesTransfer`
typedef NSString *SMIRoutingTypes NS_TYPED_ENUM
NS_SWIFT_NAME(RoutingTypes);

/// Describes an operation explaining a routing action has been initialized.
FOUNDATION_EXPORT SMIRoutingTypes const SMIRoutingTypesInitial;

/// Describes an operation explaining a routing action has been transfered.
FOUNDATION_EXPORT SMIRoutingTypes const SMIRoutingTypesTransfer;

NS_ASSUME_NONNULL_END
