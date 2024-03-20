//
//  SMIFormInputSection.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-07-28.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormInputSectionType.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a section of a form to collect user input.
NS_SWIFT_NAME(FormInputSection)
@protocol SMIFormInputSection <NSObject>

/// The type of input contained in this section.
/// @see `SMIFormInputSectionType`
@property (nonatomic, readonly, strong) SMIFormInputSectionType sectionType;

@end

NS_ASSUME_NONNULL_END
