//
//  SMIFormRecordResult.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a record that has been updated or created as a result of a `SMIFormResponseInputs` submission.
NS_SWIFT_NAME(FormRecordResult)
@protocol SMIFormRecordResult <NSObject>

/// Indicates whether a record has been created as a result of form submission.
@property (nonatomic, readonly, assign) BOOL isCreated;

/// The ID for the relevant record.
@property (nonatomic, readonly, strong) NSString *recordReferenceId;

/// A message generated as a result of the creation of the record.
@property (nonatomic, readonly, nullable, strong) NSString *resultMessage;

@end

NS_ASSUME_NONNULL_END
