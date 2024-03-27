//
//  SMITemplatedURL.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-10-20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a rich link within an `SMIConversationEntry`.
NS_SWIFT_NAME(TemplatedURL)
@protocol SMITemplatedURL <SMIEntryPayload, SMIEntryTypeMessage>

/// Title of the of corresponding link.
@property (nonatomic, readonly, strong) NSString *title;

/// The URL representing the website to open in a webview.
/// The URL is stored into the database as a templated URL and is fully-formed when called.
/// The parameters for the URL are retrieved from the delegate when the message is emitted as well as when fetching the entry from the database.
@property (nonatomic, readonly, strong, nullable) NSURL *url;

@end

NS_ASSUME_NONNULL_END
