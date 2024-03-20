//
//  SMITitleImageItem.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2024-01-24.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormTitleItem.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(TitleImageItem)
@protocol SMITitleImageItem <SMIFormTitleItem>

@property (nonatomic, readonly, strong) NSString *imageId;

@end

NS_ASSUME_NONNULL_END
