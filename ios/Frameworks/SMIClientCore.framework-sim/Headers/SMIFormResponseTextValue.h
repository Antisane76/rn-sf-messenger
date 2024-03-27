//
//  SMIFormResponseTextValue.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResponseValue.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a text value of an input response.
NS_SWIFT_NAME(FormResponseTextValue)
@protocol SMIFormResponseTextValue <SMIFormResponseValue>

/// The text value of the response.
@property (nonatomic, readonly, strong) NSString *textValue;

@end

NS_ASSUME_NONNULL_END
