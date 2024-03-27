//
//  SMIPreChatField.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-05-14.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIPreChatFieldTypes.h>
#import <SMIClientCore/SMIPreChatErrorTypes.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a pre-chat field.
NS_SWIFT_NAME(PreChatField)
@protocol SMIPreChatField

/// The conversation ID, which is used to associate all messages and events with a given conversation.
@property (nonatomic, readonly, strong) NSString *identifier;

/// The pre-chat field type.
/// @see `SMIPreChatFieldTypes`
@property (nonatomic, readonly, copy) SMIPreChatFieldTypes type;

/// The pre-chat field label.
@property (nonatomic, readonly, copy) NSString *label;

/// The pre-chat field name.
@property (nonatomic, readonly, copy) NSString *name;

/// Indicates whether the pre-chat field is required.
@property (nonatomic, readonly, assign, getter=isRequired) BOOL required;

/// The maximum length for this pre-chat field.
@property (nonatomic, readonly, assign) NSUInteger maxLength;

/// The sequence order of this pre-chat field.
@property (nonatomic, readonly, assign) NSUInteger order;

/// The value of this pre-chat field.
@property (nullable, nonatomic, readwrite, strong) NSString *value;

/// Indicates whether the pre-chat field is hidden.
@property (nonatomic, readonly, assign, getter=isHidden) BOOL isHidden;

/// Indicaties if the pre-chat field is editable, defaults to true.
@property (nonatomic, readwrite, assign, getter=isEditable) BOOL editable;

/// Validates the pre-chat field.
- (SMIPreChatErrorTypes)validate;

@end

NS_ASSUME_NONNULL_END
