//
//  SMICoreDelegate.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 3/5/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIConversationEntryStatus.h>
#import <SMIClientCore/SMINetworkConnectivityState.h>
#import <SMIClientCore/SMIConversation.h>

@protocol SMICoreClient;
@protocol SMIConversationEntry;
@protocol SMIConversation;

NS_ASSUME_NONNULL_BEGIN

/// Delegate used to receive events for the `SMICoreClient` framework. Use this protocol to listen
/// for chat messages, receive message status changes, detect network status changes, and receive error messages.
///
/// @see `SMICoreClient`
/// @see `-[SMICoreClient addDelegate:]`
/// @see `-[SMICoreClient addDelegate:queue:]`
NS_SWIFT_NAME(CoreDelegate)
@protocol SMICoreDelegate <NSObject>
@optional

/// Delegate event that is triggered when an entry has been added to a conversation.
/// This fires for both inbound and outbound entries.
///
/// The subject on the sender can be checked to determine whether a message was sent by a local
/// participant.
///
/// Outbound entries are echoed back on this event due to the chance it could be modified
/// by any configured sensitive data rules. This event is also an acknowledgement that
/// the message has been cached locally.
///
/// The best practice, if choosing to display outgoing entries, is to wait for this event rather
/// than displaying entries directly.
///
/// @see `-core:conversation:didReceiveEntries:paged:`
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param entry The `SMIConversationEntry` data model which represents an incoming/outgoing message.
- (void)core:(__weak id<SMICoreClient>)core didReceiveEntry:(id<SMIConversationEntry>)entry
__deprecated_msg("Will be removed in a future version. Use `-core:conversation:didReceiveEntries:paged:` instead.");

/// Delegate event that is triggered when entries have been added to a conversation.
/// This fires for both inbound and outbound entries.
///
/// The subject on the sender can be checked to determine whether a specific entry was sent by a local
/// participant.
///
/// Outbound entries are echoed back on this event due to the chance it could be modified
/// by any configured sensitive data rules. This event is also an acknowledgement that
/// the entries have been cached locally.
///
/// The best practice, if choosing to display outgoing entries, is to wait for this event rather
/// than displaying entries directly.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param conversation The `SMIConversation` instance that owns the emitted entries.
/// @param entries The array of `SMIConversationEntry` data models. Each entry represents an incoming/outgoing message.
/// @param paged Indicates whether this event was fired as a result of a database paging request. These entries are a result of requesting additional or missing entries from the local database populated from the service.
- (void)core:(__weak id<SMICoreClient>)core conversation:(id<SMIConversation>)conversation
                                       didReceiveEntries:(NSArray<id<SMIConversationEntry>> *)entries
                                                   paged:(BOOL)paged;

/// Delegate event that is triggered when a message's status has been updated.
/// It is recommended that any current references to an entry with a matching ID are refreshed.
/// It is possible for entries to change type entirely due to backend translation, and any consuming UI
/// should account for that.
///
/// @see `-core:conversation:didUpdateEntries:`
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param entry The `SMIConversationEntry` data model that represents an incoming/outgoing message.
- (void)core:(__weak id<SMICoreClient>)core didUpdateEntry:(id<SMIConversationEntry>)entry
__deprecated_msg("Will be removed in a future version. Use `-core:conversation:didUpdateEntries:` instead.");

/// Delegate event that is triggered when a message's status has been updated.
/// It is recommended that any current references to an entry with a matching ID are refreshed.
/// It is possible for entries to change type entirely due to backend translation, and any consuming UI
/// should account for that.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param conversation The `SMIConversation` instance that owns the emitted entries.
/// @param entries The array of `SMIConversationEntry` data models. Each entry represents an incoming/outgoing message.
- (void)core:(__weak id<SMICoreClient>)core conversation:(id<SMIConversation>)conversation didUpdateEntries:(NSArray<id<SMIConversationEntry>> *)entries;


/// Delegate event that is triggered when the active participants on a conversation have changed.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param conversation The `SMIConversation` instance that owns the emitted entries.
/// @param activeParticipants  The array of active `SMIParticipant` data models.
- (void)core:(__weak id<SMICoreClient>)core conversation:(id<SMIConversation>)conversation
                             didUpdateActiveParticipants:(NSArray<id<SMIParticipant>> *)activeParticipants;

/// Delegate event that is triggered when receiving a typing started event from another participant.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param event The `SMIConversationEntry` which contains the typing event as a payload.
- (void)core:(__weak id<SMICoreClient>)core didReceiveTypingStartedEvent:(id<SMIConversationEntry>)event;

/// Delegate event that is triggered when receiving a typing stopped event from another participant.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param event The `SMIConversationEntry` which contains the typing event as a payload.
- (void)core:(__weak id<SMICoreClient>)core didReceiveTypingStoppedEvent:(id<SMIConversationEntry>)event;

/// Delegate event that is triggered by a change in the status of the network.
/// Based on the status change, you can decide how to convey
/// this information to the UI.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param state The current `SMINetworkConnectivityState` status of the network
- (void)core:(__weak id<SMICoreClient>)core didChangeNetworkState:(SMINetworkConnectivityState)state;

/// Delegate event that is triggered if an unhandled error is detected as part
/// of the normal activity of the In-App Messaging client.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param error The `NSError` which triggered this event.
- (void)core:(__weak id<SMICoreClient>)core didError:(NSError *)error;

/// Delegate event that is triggered if an unhandled error is detected as part
/// of the normal activity of the In-App Messaging client.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param conversation The conversation
- (void)core:(__weak id<SMICoreClient>)core didCreateConversation:(id<SMIConversation>)conversation;

/// Delegate event that is triggered when the conversation is updated.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param conversation The conversation.
- (void)core:(__weak id<SMICoreClient>)core didUpdateConversation:(id<SMIConversation>)conversation;

@end

NS_ASSUME_NONNULL_END
