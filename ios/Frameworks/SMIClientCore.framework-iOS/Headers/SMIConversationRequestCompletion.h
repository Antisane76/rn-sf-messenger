//
//  SMIConversationRequestCompletion.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2024-01-19.
//

#import <Foundation/Foundation.h>
#import <PDFKit/PDFKit.h>

NS_ASSUME_NONNULL_BEGIN

/// The completion block for returning a conversation transcript.
/// @param conversationTranscript A PDF document containing a transcript of the conversation.
/// @param error If the conversation transcript request results in an error, it is returned here.
typedef void (^SMITranscriptRequestCompletion)(PDFDocument * _Nullable conversationTranscript, NSError * _Nullable error)
NS_SWIFT_NAME(TranscriptRequestCompletion);

NS_ASSUME_NONNULL_END
