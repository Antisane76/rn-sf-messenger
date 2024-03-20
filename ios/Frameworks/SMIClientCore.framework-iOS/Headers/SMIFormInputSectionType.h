//
//  SMIFormInputSectionType.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An enum that describes possible `SMIFormInputSectionType` types.
/// Possible values:
/// * `SMIFormInputSectionTypeingleInputSection`
typedef NSString *SMIFormInputSectionType NS_TYPED_ENUM
NS_SWIFT_NAME(FormInputSectionType);

/// Represents a section which collects a single input.
FOUNDATION_EXPORT SMIFormInputSectionType const SMIFormInputSectionTypeSingleInputSection;

NS_ASSUME_NONNULL_END
