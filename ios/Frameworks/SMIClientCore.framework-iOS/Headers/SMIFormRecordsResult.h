//
//  SMIFormRecordsResult.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-07-05.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormResult.h>
#import <SMIclientCore/SMIFormRecordResult.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a successful `SMIFormResponseInputs` submission.
NS_SWIFT_NAME(FormRecordsResult)
@protocol SMIFormRecordsResult <SMIFormResult>

/// The list of objects representing successful submission of the form.
/// @see `SMIFormRecordResult`
@property (nonatomic, readonly, strong) NSArray<id<SMIFormRecordResult>> *records;

@end

NS_ASSUME_NONNULL_END
