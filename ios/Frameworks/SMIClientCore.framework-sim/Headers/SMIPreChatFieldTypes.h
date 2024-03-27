//
//  SMIPreChatFieldType.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-05-17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The pre-chat field type. Possible values:
/// * `SMIPreChatFieldTypesText`
/// * `SMIPreChatFieldTypesTextArea`
/// * `SMIPreChatFieldTypesEmail`
/// * `SMIPreChatFieldTypesNumber`
/// * `SMIPreChatFieldTypesPhone`
/// * `SMIPreChatFieldTypesCheckbox`
/// * `SMIPreChatFieldTypesChoiceList`
typedef NSString *SMIPreChatFieldTypes NS_TYPED_ENUM
NS_SWIFT_NAME(PreChatFieldTypes);

/// A text pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesText;
/// A text area pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesTextArea;
/// An email pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesEmail;
/// A number pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesNumber;
/// A phone pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesPhone;
/// A checkbox pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesCheckbox;
/// A choice list pre-chat field.
FOUNDATION_EXPORT SMIPreChatFieldTypes const SMIPreChatFieldTypesChoiceList;

NS_ASSUME_NONNULL_END
