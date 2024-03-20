//
//  SMIFileAsset.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-05-09.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMINetworkMimeTypes.h>

NS_ASSUME_NONNULL_BEGIN

/// File fetch completion information.
typedef void (^SMIFileFetchCompletion)(NSError * _Nullable error)
NS_SWIFT_NAME(FileFetchCompletion);

/// A file asset.
NS_SWIFT_NAME(FileAsset)
@protocol SMIFileAsset

/// File name.
@property (nullable, nonatomic, readonly, strong) NSString *name;

/// Unique identifier.
@property (nonatomic, readonly, strong) NSString *identifier;

/// MIME type.
@property (nonatomic, readonly, strong) SMINetworkMimeTypes mimeType;

/// URL for file asset.
@property (nullable, nonatomic, readonly, strong) NSURL *url;

/// Parent entry.
@property (nonatomic, readonly, strong) NSString *parentEntryId;

/// File data.
@property (nullable, nonatomic, readonly, strong) NSData *file;

/// Fetch file contents.
- (void)fetchContentWithCompletion:(SMIFileFetchCompletion)completion;

@end

NS_ASSUME_NONNULL_END
