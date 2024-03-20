//
//  SMIFormTitleOptionItem.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-22.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormTitleInteractionItem.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a selectable option which contains a title.
NS_SWIFT_NAME(FormInputOptionItem)
@protocol SMIFormTitleOptionItem <SMIFormTitleInteractionItem>

/// The unique option identifier for this selectable item.
@property (nonatomic, readonly, strong) NSString *optionIdentifier;

@end

NS_ASSUME_NONNULL_END
