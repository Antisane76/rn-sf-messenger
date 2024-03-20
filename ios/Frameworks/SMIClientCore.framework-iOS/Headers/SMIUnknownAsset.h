//
//  SMIUnknownAsset.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2022-06-06.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMINetworkMimeTypes.h>
#import <SMIClientCore/SMIFileAsset.h>

NS_ASSUME_NONNULL_BEGIN

/// Describes an unknown asset.
NS_SWIFT_NAME(UnknownAsset)
@protocol SMIUnknownAsset <SMIFileAsset>

@end

NS_ASSUME_NONNULL_END
