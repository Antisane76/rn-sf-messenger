//
//  SMIQueryCompletions.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-04-25.
//

#import <Foundation/Foundation.h>

@protocol SMIConversation;
@protocol SMIConversationEntry;
@protocol SMIParticipant;

NS_ASSUME_NONNULL_BEGIN

/// Completion block for queries returning `SMIConversationEntry` objects.
/// @param messages Array of `SMIConversationEntry` results, sorted by timestamp from newest to oldest. `nil` if no results are found.
/// @param conversation `SMIConversation` object associated with all returned entries.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMIFullQueryCompletion)(NSArray<id<SMIConversationEntry>> * _Nullable messages,
                                       id<SMIConversation> _Nullable conversation,
                                       NSError * _Nullable error)
NS_SWIFT_NAME(FullQueryCompletion);

/// Completion block for queries returning `SMIConversationEntry` object.
/// @param message `SMIConversationEntry` result, `nil` if no results are found.
/// @param conversation `SMIConversation` object associated with all returned entries.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMISingleEntryQueryCompletion)(id<SMIConversationEntry> _Nullable message,
                                              id<SMIConversation> _Nullable conversation,
                                              NSError * _Nullable error)
NS_SWIFT_NAME(SingleEntryQueryCompletion);

/// Completion block for queries returning `SMIParticipant` objects.
/// @param participants An unsorted array of `SMIParticipant` results `nil` if no results are found.
/// @param conversation `SMIConversation` object associated with all returned entries.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMIParticipantQueryCompletion)(NSArray<id<SMIParticipant>> * _Nullable participants,
                                              id<SMIConversation> _Nullable conversation,
                                              NSError * _Nullable error)
NS_SWIFT_NAME(ParticipantQueryCompletion);


/// The completion block for returning all conversations stored in the database.
/// @param conversation The `SMIConversation` objects, based on the given UUID.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMISingleConversationQueryCompletion)(id<SMIConversation> _Nullable conversation, NSError * _Nullable error)
NS_SWIFT_NAME(SingleConversationQueryCompletion);

/// The completion block for returning all conversations stored in the database.
/// @param conversations Array of conversation `SMIConversation` objects. Unsorted.
/// @param error If the query results in an error, it is returned here. An empty result is not considered an error.
typedef void (^SMIConversationQueryCompletion)(NSArray<id<SMIConversation>> * _Nullable conversations, NSError * _Nullable error)
NS_SWIFT_NAME(ConversationQueryCompletion);

NS_ASSUME_NONNULL_END
