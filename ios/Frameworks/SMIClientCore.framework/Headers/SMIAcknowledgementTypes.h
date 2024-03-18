//
//  SMIAcknowledgementTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-04-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Describes a set of types of an `SMIEntryAck` object.
typedef NS_ENUM(NSInteger, SMIAcknowledgementTypes) {
    /// An invalid or unknown acknowledgement type.
    SMIAcknowledgementTypesUnknown,

    /// A delivery acknowledgement for a given `SMIConversationEntry`.
    SMIAcknowledgementTypesDelivered,

    /// A read acknowledgement for a given `SMIConversationEntry`.
    SMIAcknowledgementTypesRead
} NS_SWIFT_NAME(AcknowledgementTypes);

NS_ASSUME_NONNULL_END
