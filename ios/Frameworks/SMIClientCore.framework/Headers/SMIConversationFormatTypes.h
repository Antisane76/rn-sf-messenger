//
//  SMIConversationFormatTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 1/14/20.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that describes a set of known conversation entry formats.
/// Possible values:
/// * `SMIConversationFormatTypesTextMessage`
/// * `SMIConversationFormatTypesImageMessage`
/// * `SMIConversationFormatTypesRichLink`
/// * `SMIConversationFormatTypesListPicker`
/// * `SMIConversationFormatTypesQuickReplies`
/// * `SMIConversationFormatTypesSelections`
/// * `SMIConversationFormatTypesAttachments`
/// * `SMIConversationFormatTypesWebView`
/// * `SMIConversationFormatTypesUnspecified`
typedef NSString *SMIConversationFormatTypes NS_TYPED_ENUM
NS_SWIFT_NAME(ConversationFormatTypes);

/// Describes a Text Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesTextMessage;

/// Describes an Image Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesImageMessage;

/// Describes a Rich Link Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesRichLink;

/// Describes a ListPicker Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesListPicker;

/// Describes a QuickReply Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesQuickReplies;

/// Describes a Selections Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesSelections;

/// Describes an Attachement Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesAttachments;

/// Describes a Carousel Message format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesCarousel;

/// Describes a webview formated message.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesWebView;

/// Describes a Form Message Inputs format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesInputs;

/// Describes a Form Message Response Result format.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesResult;

/// This format is unknown or unspecified. This applies to certain ephemeral events.
FOUNDATION_EXPORT SMIConversationFormatTypes const SMIConversationFormatTypesUnspecified;

NS_ASSUME_NONNULL_END
