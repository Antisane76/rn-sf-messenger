//
//  SMIDataTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 10/22/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

/// Completion for data store operations.
/// @param error Any errors associated with this operation. `nil` if successful.
typedef void (^SMIDataOperationCompletion)(NSError * _Nullable error)
NS_SWIFT_NAME(DataOperationCompletion);

NS_ASSUME_NONNULL_END
