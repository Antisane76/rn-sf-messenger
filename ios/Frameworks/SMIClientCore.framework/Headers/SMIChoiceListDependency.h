//
//  SMIChoiceListDependency.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-09.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a dependency between a parent choice list and a child choice list.
NS_SWIFT_NAME(ChoiceListDependency)
@protocol SMIChoiceListDependency <NSObject>

/// ID of the parent choice list.
@property (nonatomic, readonly, strong) NSString *parentId;

/// ID of the dependent child choice list.
@property (nonatomic, readonly, strong) NSString *childId;

@end

NS_ASSUME_NONNULL_END
