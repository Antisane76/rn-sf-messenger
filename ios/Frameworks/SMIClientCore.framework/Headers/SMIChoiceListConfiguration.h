//
//  SMIChoiceListConfiguration.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-09.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIChoiceList.h>
#import <SMIClientCore/SMIChoiceListDependency.h>

NS_ASSUME_NONNULL_BEGIN

/// Information about choice lists that can appear in a pre-chat form. This object contains an array of choice lists, along with their dependencies.
NS_SWIFT_NAME(ChoiceListConfiguration)
@protocol SMIChoiceListConfiguration <NSObject>

/// Choice lists that come back from Salesforce.
@property (nullable, nonatomic, readonly, strong) NSArray<id<SMIChoiceList>> *choiceLists;

/// Choice list dependencies that are used for for parent-child relationships between lists.
@property (nonatomic, readonly, strong) NSArray<id<SMIChoiceListDependency>> *valueDependencies;

@end

NS_ASSUME_NONNULL_END
