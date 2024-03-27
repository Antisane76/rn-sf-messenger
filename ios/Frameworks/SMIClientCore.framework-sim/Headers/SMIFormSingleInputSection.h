//
//  SMIFormSection.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-22.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormInputSection.h>
#import <SMIClientCore/SMIFormInput.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a section of a form to collect user input for a single value.
NS_SWIFT_NAME(FormSingleInputSection)
@protocol SMIFormSingleInputSection <SMIFormInputSection>

/// The unique identifier of the next section in the form.
@property (nonatomic, readonly, nullable, strong) NSString *nextSectionInputId;

/// Determines whether this is the last section. Use this to inform the user that completing this section submits the form.
@property (nonatomic, readonly, assign) BOOL submitForm;

/// The input object which describes how the input will be presented and collected from a user.
/// @see `SMIFormInput`
@property (nonatomic, readonly, strong) id<SMIFormInput> input;

@end

NS_ASSUME_NONNULL_END
