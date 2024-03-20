//
//  SMIChoiceListValue.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-08.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a choice list value.
NS_SWIFT_NAME(ChoiceListValue)
@protocol SMIChoiceListValue <NSObject>

/// The ID of the choice list value.
@property (nonatomic, readonly, strong) NSString *valueId;

/// The order of the choice list value.
@property (nonatomic, readonly, assign) NSUInteger order;

/// The label of the choice list value.
@property (nullable, nonatomic, readonly, strong) NSString *label;

/// Determines if the value is the default value for the choice list.
@property (nonatomic, readonly, assign) BOOL isDefaultValue;

/// The field name of the choice list value.
@property (nonatomic, readonly, strong) NSString *valueName;

@end

NS_ASSUME_NONNULL_END


