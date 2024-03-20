//
//  SMIPDFAsset.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-05-12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <PDFKit/PDFKit.h>
#import <SMIClientCore/SMIFileAsset.h>

NS_ASSUME_NONNULL_BEGIN

/// A PDF asset.
NS_SWIFT_NAME(PDFAsset)
@protocol SMIPDFAsset <SMIFileAsset>

/// PDF document for this asset.
@property (nullable, nonatomic, readonly, strong) PDFDocument *pdf;

@end

NS_ASSUME_NONNULL_END
