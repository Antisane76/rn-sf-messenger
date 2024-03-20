//
//  SMILoggingCategory.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-08-23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Logging category information.
typedef NSString *SMILoggingCategory NS_TYPED_ENUM
NS_SWIFT_NAME(LoggingCategory);

/// Logging message associated with general network operations.
FOUNDATION_EXPORT SMILoggingCategory const SMILoggingCategoryNetworking;

/// Logging message associated with core API operations.
FOUNDATION_EXPORT SMILoggingCategory const SMILoggingCategoryAPI;

/// Logging message associated with local database operations.
FOUNDATION_EXPORT SMILoggingCategory const SMILoggingCategoryDatabase;

NS_ASSUME_NONNULL_END
