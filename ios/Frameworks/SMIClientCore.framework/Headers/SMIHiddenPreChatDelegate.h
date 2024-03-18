//
//  SMIHiddenPreChatDelegate.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-10-26.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIHiddenPreChatField.h>

@protocol SMIConversationClient;
@protocol SMICoreClient;
@protocol SMIConversation;

NS_ASSUME_NONNULL_BEGIN

/// Completion block for hidden pre-chat values.
typedef void (^SMIHiddenPreChatValueCompletion)(NSArray<id<SMIHiddenPreChatField>> *)
NS_SWIFT_NAME(HiddenPreChatValueCompletion);

/// Delegate that handles requests for hidden pre-chat values.
///
/// @see `SMICoreClient`
NS_SWIFT_NAME(HiddenPreChatDelegate)
@protocol SMIHiddenPreChatDelegate

/// Delegate event that is triggered when submitting pre-chat data.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param conversation The conversation.
/// @param hiddenPreChatFields The hidden pre-chat fields that require values.
/// @param completionHandler The 'SMIHiddenPreChatValueCompletion' that provides the values for the expected hidden pre-chat fields.
- (void)core:(__weak id<SMICoreClient>)core conversation:(id<SMIConversation>)conversation
                                 didRequestPrechatValues:(NSArray<id<SMIHiddenPreChatField>> *)hiddenPreChatFields
                                       completionHandler:(SMIHiddenPreChatValueCompletion)completionHandler;

@end

NS_ASSUME_NONNULL_END
