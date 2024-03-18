//
//  SMIFormTitleInteractionItemType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormTitleInteractionItemType` option types of a multi-option input.
/// Possible values:
/// * `SMIFormTitleInteractionItemTypeTitleOption`
typedef NSString *SMIFormTitleInteractionItemType NS_TYPED_ENUM
NS_SWIFT_NAME(FormTitleInteractionItemType);

/// Defines a selectable option that contains a `SMIFormTitleItem`.
FOUNDATION_EXPORT SMIFormTitleInteractionItemType const SMIFormTitleInteractionItemTypeTitleOption;

NS_ASSUME_NONNULL_END
