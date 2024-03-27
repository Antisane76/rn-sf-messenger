//
//  SMIFormTitleItemType.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormTitleItemType` types to decorate form fields or responses.
/// * `SMIFormTitleItemTypeTitleItem`
typedef NSString *SMIFormTitleItemType NS_TYPED_ENUM
NS_SWIFT_NAME(FormTitleItemType);

/// Represents a set of strings comprised of a title (required) and optional decorators and subtitles.
FOUNDATION_EXPORT SMIFormTitleItemType const SMIFormTitleItemTypeTitleItem;

NS_ASSUME_NONNULL_END
