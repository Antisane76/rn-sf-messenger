//
//  SMINetworkHTTPStatusCodes.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 1/25/21.
//  Copyright © 2021 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SMINetworkHTTPStatusCode) {
    SMINetworkHTTPStatusCodeContinue = 100,
    SMINetworkHTTPStatusCodeSwitchingProtocol = 101,
    SMINetworkHTTPStatusCodeProcessing = 102,
    SMINetworkHTTPStatusCodeEarlyHints = 103,

    SMINetworkHTTPStatusCodeOK = 200,
    SMINetworkHTTPStatusCodeCreated = 201,
    SMINetworkHTTPStatusCodeAccepted = 202,
    SMINetworkHTTPStatusCodeNonAuthoritaveInformation = 203,
    SMINetworkHTTPStatusCodeNoContent = 204,
    SMINetworkHTTPStatusCodeResetContent = 205,
    SMINetworkHTTPStatusCodePartialContent = 206,
    SMINetworkHTTPStatusCodeMultiStatus = 207,
    SMINetworkHTTPStatusCodeAlreadyReported = 208,
    SMINetworkHTTPStatusCodeIMUsed = 226,

    SMINetworkHTTPStatusCodeMultipleChoice = 300,
    SMINetworkHTTPStatusCodeMovedPermanently = 301,
    SMINetworkHTTPStatusCodeFound = 302,
    SMINetworkHTTPStatusCodeSeeOther = 303,
    SMINetworkHTTPStatusCodeNotModified = 304,
    SMINetworkHTTPStatusCodeUseProxy = 305,
    SMINetworkHTTPStatusCodeUnused = 306,
    SMINetworkHTTPStatusCodeTemporaryRedirect = 307,
    SMINetworkHTTPStatusCodePermanentRedirect = 308,

    SMINetworkHTTPStatusCodeBadRequest = 400,
    SMINetworkHTTPStatusCodeUnauthorized = 401,
    SMINetworkHTTPStatusCodePaymentRequired = 402,
    SMINetworkHTTPStatusCodeForbidden = 403,
    SMINetworkHTTPStatusCodeNotFound = 404,
    SMINetworkHTTPStatusCodeMethodNotAllowed = 405,
    SMINetworkHTTPStatusCodeNotAcceptable = 406,
    SMINetworkHTTPStatusCodeProxyAuthenticationRequired = 407,
    SMINetworkHTTPStatusCodeRequestTimeout = 408,
    SMINetworkHTTPStatusCodeConflict = 409,
    SMINetworkHTTPStatusCodeGone = 410,
    SMINetworkHTTPStatusCodeLengthRequired = 411,
    SMINetworkHTTPStatusCodePreconditionFailed = 412,
    SMINetworkHTTPStatusCodePayloadTooLarge = 413,
    SMINetworkHTTPStatusCodeURITooLong = 414,
    SMINetworkHTTPStatusCodeUnsupportedMediaType = 415,
    SMINetworkHTTPStatusCodeRangeNotSatisfiable = 416,
    SMINetworkHTTPStatusCodeExpectationFailed = 417,
    SMINetworkHTTPStatusCodeImATeapot = 418,
    SMINetworkHTTPStatusCodeMisdirectedRequest = 421,
    SMINetworkHTTPStatusCodeUnprocessableEntity = 422,
    SMINetworkHTTPStatusCodeLocked = 423,
    SMINetworkHTTPStatusCodeFailedDependency = 424,
    SMINetworkHTTPStatusCodeTooEarly = 425,
    SMINetworkHTTPStatusCodeUpgradeRequired = 426,
    SMINetworkHTTPStatusCodePreconditionRequired = 428,
    SMINetworkHTTPStatusCodeTooManyRequests = 429,
    SMINetworkHTTPStatusCodeRequestHeaderFieldsTooLarge = 431,
    SMINetworkHTTPStatusCodeUnavailableForLegalReasons = 451,

    SMINetworkHTTPStatusCodeInternalServerError = 500,
    SMINetworkHTTPStatusCodeNotImplemented = 501,
    SMINetworkHTTPStatusCodeBadGateway = 502,
    SMINetworkHTTPStatusCodeServiceUnavailable = 503,
    SMINetworkHTTPStatusCodeGatewayTimeout = 504,
    SMINetworkHTTPStatusCodeHTTPVersionNotSupported = 505,
    SMINetworkHTTPStatusCodeVariantAlsoNegotiates = 506,
    SMINetworkHTTPStatusCodeInsufficientStorage = 507,
    SMINetworkHTTPStatusCodeLoopDetected = 508,
    SMINetworkHTTPStatusCodeNotExtended = 510,
    SMINetworkHTTPStatusCodeNetworkAuthenticationRequired = 511
} NS_SWIFT_NAME(NetworkHTTPStatusCode);
