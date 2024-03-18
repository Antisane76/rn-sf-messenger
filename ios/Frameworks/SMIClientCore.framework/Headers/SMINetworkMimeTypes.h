//
//  SMINetworkMimeTypes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2/13/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Network MIME type.
/// Possible values:
/// * `SMINetworkMimeTypesTextPlain`
/// * `SMINetworkMimeTypesTextEventStream`
/// * `SMINetworkMimeTypesApplicationJSON`
/// * `SMINetworkMimeTypesApplicationOctetStream`
/// * `SMINetworkMimeTypesImagePNG`
/// * `SMINetworkMimeTypesImageJPEG`
/// * `SMINetworkMimeTypesImageBMP`
/// * `SMINetworkMimeTypesImageGIF`
/// * `SMINetworkMimeTypesImageTIFF`
/// * `SMINetworkMimeTypesMultiPartForm`
/// * `SMINetworkMimeTypesGZIP`
/// * `SMINetworkMimeTypesApplicationPDF`
typedef NSString *const SMINetworkMimeTypes NS_TYPED_ENUM
NS_SWIFT_NAME(NetworkMimeTypes);

/// Plain text MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesTextPlain;

/// Event stream MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesTextEventStream;

/// JSON MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesApplicationJSON;

/// Octet stream MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesApplicationOctetStream;

/// PNG image MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesImagePNG;

/// JPEG image MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesImageJPEG;

/// BMP image MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesImageBMP;

/// GIF image MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesImageGIF;

/// TIFF image MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesImageTIFF;

/// Multi-part form MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesMultiPartForm;

/// GZIP MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesGZIP;

/// PDF MIME type.
FOUNDATION_EXPORT SMINetworkMimeTypes SMINetworkMimeTypesApplicationPDF;
