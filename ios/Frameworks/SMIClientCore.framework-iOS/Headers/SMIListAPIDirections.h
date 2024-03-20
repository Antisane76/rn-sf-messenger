//
//  SMIListAPIDirections.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-10-11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Describes the way that the list is ordered.
NS_SWIFT_NAME(ListAPIDirections)
typedef NSString *SMIListAPIDirections NS_TYPED_ENUM;

/// Conversation lists should display in ascending order.
FOUNDATION_EXPORT SMIListAPIDirections const SMIListAPIDirectionsAscending;

/// Conversation lists should display in descending order.
FOUNDATION_EXPORT SMIListAPIDirections const SMIListAPIDirectionsDescending;

NS_ASSUME_NONNULL_END
