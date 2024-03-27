//
//  SMIImageAsset.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2022-05-09.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SMIClientCore/SMIFileAsset.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an image asset.
NS_SWIFT_NAME(ImageAsset)
@protocol SMIImageAsset <SMIFileAsset>

/// The content of the `SMIImageAsset`.
/// This is initially `nil`. You must call `fetchContentWithCompletion` to retrieve the data from disk.
@property (nullable, nonatomic, readonly, strong) UIImage *image;

/// The expected width in pixels of the image.
/// This is available before the image is fetched from disk, and can be used to shape the UI based on
/// the final image data.
@property (nonatomic, readonly, assign) CGFloat width;

/// The expected height in pixels of the image.
/// This is available before the image is fetched from disk, and can be used to shape the UI based on
/// the final image data.
@property (nonatomic, readonly, assign) CGFloat height;

@end

NS_ASSUME_NONNULL_END
