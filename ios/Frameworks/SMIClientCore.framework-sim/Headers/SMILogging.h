//
//  SMILogging.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-08-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMILoggingLevel.h>
#import <SMIClientCore/SMILoggingCategory.h>

NS_ASSUME_NONNULL_BEGIN

/// Contains information about logging.
NS_SWIFT_NAME(LoggingProtocol)
@protocol SMILogging

/// The logging level. Value set to `SMILoggingLevelNone` by default.
@property (class) SMILoggingLevel level;

@end

/// Contains information about logging.
NS_SWIFT_NAME(Logging)
@interface SMILogging : NSObject<SMILogging>

/// This constructor is unavailable.
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
