//
//  SMIErrorNetworkHTTPUserInfoKeys.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-07-20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// A network response code error.
FOUNDATION_EXPORT NSErrorUserInfoKey const SMIErrorNetworkHTTPResponseCode NS_SWIFT_NAME(errorNetworkHTTPResponseCode);

/// A network response body error.
FOUNDATION_EXPORT NSErrorUserInfoKey const SMIErrorNetworkHTTPResponseBody NS_SWIFT_NAME(errorNetworkHTTPResponseBody);

/// A network file size limit error.
FOUNDATION_EXPORT NSErrorUserInfoKey const SMIErrorNetworkHTTPFileSizeLimit NS_SWIFT_NAME(errorNetworkHTTPFileSizeLimit);

/// A network API Result error.
FOUNDATION_EXPORT NSErrorUserInfoKey const SMIErrorNetworkHTTPApiResultErrorCode NS_SWIFT_NAME(errorNetworkHTTPApiResultErrorCode);

/// A network API Result type.
FOUNDATION_EXPORT NSErrorUserInfoKey const SMIErrorNetworkHTTPApiResultErrorType NS_SWIFT_NAME(errorNetworkHTTPApiResultErrorType
                                                                                               );

NS_ASSUME_NONNULL_END
