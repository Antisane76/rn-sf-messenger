//
//  SMIFormResponseURLValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a URL value of an input response.
NS_SWIFT_NAME(FormResponseURLValue)
@protocol SMIFormResponseURLValue <SMIFormResponseValue>

/// The URL value of the response.
@property (nonatomic, readonly, strong) NSURL *urlValue;

@end

NS_ASSUME_NONNULL_END
