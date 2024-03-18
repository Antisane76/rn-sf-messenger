//
//  SMILoggingLevel.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-08-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Logging level values.
typedef NS_ENUM(NSUInteger, SMILoggingLevel) {
    
    /// No logging level.
    SMILoggingLevelNone,
    
    /// Debug logging level.
    SMILoggingLevelDebug
} NS_SWIFT_NAME(LoggingLevel);

NS_ASSUME_NONNULL_END
