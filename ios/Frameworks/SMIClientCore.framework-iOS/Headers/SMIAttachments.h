//
//  SMIAttachments.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-12-06.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFileAsset.h>

NS_ASSUME_NONNULL_BEGIN

/// Attachment entry.
NS_SWIFT_NAME(Attachments)
@protocol SMIAttachments

/// Array of file attachments.
@property (nonatomic, readonly, strong) NSArray<id<SMIFileAsset>> *attachments;

@end

NS_ASSUME_NONNULL_END
