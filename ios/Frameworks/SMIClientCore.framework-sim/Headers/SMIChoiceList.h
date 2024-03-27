//
//  SMIChoiceList.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-09.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIChoiceListValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Describes a set of choice list values.
NS_SWIFT_NAME(ChoiceList)
@protocol SMIChoiceList <NSObject>

/// The ID of a choice list.
@property (nonatomic, readonly, strong) NSString *identifier;

/// The array of choice list values.
@property (nonatomic, readonly, strong) NSArray<id<SMIChoiceListValue>> *values;

@end

NS_ASSUME_NONNULL_END
