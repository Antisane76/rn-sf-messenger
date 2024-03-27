//
//  SMIConversationDelegate.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-05-26.
//

#import <Foundation/Foundation.h>
#import <PDFKit/PDFKit.h>
#import <SMIClientCore/SMIConversationEntryStatus.h>

@protocol SMIConversationClient;
@protocol SMIConversationEntry;
@protocol SMIConversation;
@protocol SMIParticipant;

NS_ASSUME_NONNULL_BEGIN

/// Delegate that handles events related to a conversation.
/// @see `SMIConversationClient`
NS_SWIFT_NAME(ConversationClientDelegate)
@protocol SMIConversationClientDelegate <NSObject>
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
/// @see `-client:didReceiveEntries:paged:`
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param entry The `SMIConversationEntry` data model which represents an incoming/outgoing message.
- (void)client:(__weak id<SMIConversationClient>)client didReceiveEntry:(id<SMIConversationEntry>)entry
__deprecated_msg("Will be removed in a future version. Use `-client:didReceiveEntries:paged:` instead.");

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
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param entries The array of `SMIConversationEntry` data models. Each entry represents an incoming/outgoing message.
/// @param paged Indicates whether this event was fired as a result of a database paging request. These entries are a result of requesting additional or missing entries from the local database populated from the service.
- (void)client:(__weak id<SMIConversationClient>)client didReceiveEntries:(NSArray<id<SMIConversationEntry>> *)entries paged:(BOOL)paged;

/// Delegate event that is triggered when a message's status has been updated.
/// It is recommended that any current references to an entry with a matching ID are refreshed.
/// It is possible for entries to change type entirely due to backend translation, and any consuming UI
/// should account for that.
///
/// @see `-client:didUpdateEntries:`
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param entry The `SMIConversationEntry` data model that represents an incoming/outgoing message.
- (void)client:(__weak id<SMIConversationClient>)client didUpdateEntry:(id<SMIConversationEntry>)entry
__deprecated_msg("Will be removed in a future version. Use `-client:didUpdateEntries:` instead.");

/// Delegate event that is triggered when a message's status has been updated.
/// It is recommended that any current references to an entry with a matching ID are refreshed.
/// It is possible for entries to change type entirely due to backend translation, and any consuming UI
/// should account for that.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param entries The array of `SMIConversationEntry` data models. Each entry represents an incoming/outgoing message.
/// 
- (void)client:(__weak id<SMIConversationClient>)client didUpdateEntries:(NSArray<id<SMIConversationEntry>> *)entries;

/// Delegate event that is triggered when the active participants on a conversation have changed.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param activeParticipants The array of active `SMIParticipant` data models.
- (void)client:(__weak id<SMIConversationClient>)client didUpdateActiveParticipants:(NSArray<id<SMIParticipant>> *)activeParticipants;

/// Delegate event that is triggered when receiving a typing started event from another participant.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param event The `SMIConversationEntry` which contains the typing event as a payload.
- (void)client:(__weak id<SMIConversationClient>)client didReceiveTypingStartedEvent:(id<SMIConversationEntry>)event;

/// Delegate event that is triggered when receiving a typing stopped event from another participant.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param event The `SMIConversationEntry` which contains the typing event as a payload.
- (void)client:(__weak id<SMIConversationClient>)client didReceiveTypingStoppedEvent:(id<SMIConversationEntry>)event;

/// Delegate event that is triggered by the creation of a conversation for the conversationId associated with the client.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param conversation The `SMIConversation` object which represents the newly created conversation.
- (void)client:(__weak id<SMIConversationClient>)client didCreateConversation:(id<SMIConversation>)conversation;

/// Delegate event that is triggered if an unhandled error is detected as part
/// of the normal activity of the In-App Messaging client.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param error The `NSError` which triggered this event.
- (void)client:(__weak id<SMIConversationClient>)client didError:(NSError *)error;

/// Delegate event that is triggered when the conversation is updated.
///
/// @param client The `SMIConversationClient` instance that is managing the current connection.
/// @param conversation The conversation.
- (void)client:(__weak id<SMIConversationClient>)client didUpdateConversation:(id<SMIConversation>)conversation;

@end

NS_ASSUME_NONNULL_END
