//
//  SMIFormDatePickerInput.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-06-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIFormInput.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a date input on a form.
NS_SWIFT_NAME(FormDatePickerInput)
@protocol SMIFormDatePickerInput <SMIFormInput>

/// Required. The string format of the date.
@property (nonatomic, readonly, nullable, strong) NSString *dateFormat;

/// The latest allowable date this input accepts.
@property (nonatomic, readonly, nullable, strong) NSDate *maximumDate;

/// The earliest allowable date this input accepts.
@property (nonatomic, readonly, nullable, strong) NSDate *minimumDate;

/// The initial default value for the date assigned to this input.
@property (nonatomic, readonly, nullable, strong) NSDate *startDate;

/// A flag that indicates whether the `FormDatePickerInput` is a date or a date and time picker.
@property (nonatomic, readonly, assign) BOOL isDateAndTime;

/// The current value of the date for this input.
@property (nonatomic, readwrite, strong, nullable) NSDate *value;

@end

NS_ASSUME_NONNULL_END
