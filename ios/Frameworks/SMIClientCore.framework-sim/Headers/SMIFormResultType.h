//
//  SMIFormResultType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-05.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that defines `SMIFormResultTypeFormRecordsResult` types that can be returned from a form submission.
/// Possible values:
/// * `SMIFormResultTypeFormRecordsResult`
/// * `SMIFormResultTypeFormErrorResult`
typedef NSString *SMIFormResultType NS_TYPED_ENUM
NS_SWIFT_NAME(FormResponseResultType);

/// Represents a successful submission and contains references to objects that have been updated or created as a result.
FOUNDATION_EXPORT SMIFormResultType const SMIFormResultTypeFormRecordsResult;

/// Represents a failed submission and contains an array of errors that prevent the form submission.
FOUNDATION_EXPORT SMIFormResultType const SMIFormResultTypeFormErrorResult;

NS_ASSUME_NONNULL_END
