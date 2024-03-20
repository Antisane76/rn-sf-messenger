//
//  SMIFormResult.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-05.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResultType.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a result of a `SMIFormResponseInputs` submission.
NS_SWIFT_NAME(FormResult)
@protocol SMIFormResult <NSObject>

/// The type of result response
/// @see `SMIFormResultType`
@property (nonatomic, readonly, strong) SMIFormResultType resultType;

@end

NS_ASSUME_NONNULL_END
