//
//  SMIUnknownEntry.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-09-06.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIUnknownEntry.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an unknown conversation entry.
NS_SWIFT_NAME(UnknownEntry)
@protocol SMIUnknownEntry <SMIEntryPayload>

@end

NS_ASSUME_NONNULL_END
