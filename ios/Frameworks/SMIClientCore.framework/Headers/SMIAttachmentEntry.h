//
//  SMIAttachmentEntry.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-05-09.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIFileAsset.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>
#import <SMIClientCore/SMIAttachments.h>

NS_ASSUME_NONNULL_BEGIN

/// Attachment entry.
NS_SWIFT_NAME(AttachmentEntry)
@protocol SMIAttachmentEntry <SMIEntryPayload, SMIEntryTypeMessage, SMIAttachments>

/// Text that describes this attachment entry.
@property (nullable, nonatomic, readonly, strong) NSString *text;

@end

NS_ASSUME_NONNULL_END
