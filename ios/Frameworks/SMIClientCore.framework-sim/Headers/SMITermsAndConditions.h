//
//  SMITermsAndConditions.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-07-19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The Terms and Condtions for prechat.
NS_SWIFT_NAME(TermsAndConditions)
@protocol SMITermsAndConditions <NSObject>

/// The label for the Terms and Condtions.
@property (nullable, nonatomic, readonly, strong) NSAttributedString *label;

/// Determines if the Terms and Conditions acknowledgement is required.
@property (nonatomic, readonly, assign) BOOL isRequired;

/// Determines if the Terms and Conditions are enabled.
@property (nonatomic, readonly, assign) BOOL isEnabled;

@end

NS_ASSUME_NONNULL_END
