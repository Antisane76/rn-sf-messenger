//
//  SMIMessageReason.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-02-02.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that describes possible message reasons.
/// Possible values:
/// * `SMIMessageReasonAutomatedResponse`
/// * `SMIMessageReasonNone`
typedef NSString *SMIMessageReason NS_TYPED_ENUM
NS_SWIFT_NAME(MessageReason);

/// Describes a messaging reason set to Automated Response.
FOUNDATION_EXPORT SMIMessageReason const SMIMessageReasonAutomatedResponse;

/// Describes a messaging reason set to None.
FOUNDATION_EXPORT SMIMessageReason const SMIMessageReasonNone;

NS_ASSUME_NONNULL_END
