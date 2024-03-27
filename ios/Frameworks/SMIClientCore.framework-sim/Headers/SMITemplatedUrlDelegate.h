//
//  SMITemplatedUrlDelegate.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-10-31.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMITemplateable.h>

@protocol SMIConversationClient;
@protocol SMICoreClient;

NS_ASSUME_NONNULL_BEGIN

/// Completion block for a templated URL used by the auto-response messaging component.
typedef void (^SMITemplatedUrlParametersCompletion)(id<SMITemplateable>)
NS_SWIFT_NAME(URLParameterValueCompletion);

/// Delegate that handles requests for auto-response messaging component parameter values.
///
/// @see `SMICoreClient`
NS_SWIFT_NAME(TemplatedUrlDelegate)
@protocol SMITemplatedUrlDelegate

/// Delegate event that is triggered when created a templated URL for an auto-response messaging component.
///
/// @param core The `SMICoreClient` instance that is managing the current connection.
/// @param values The URL parameters that will be used by the auto-response messaging component.
/// @param completionHandler The 'SMITemplatedUrlParametersCompletion' that provides the values for the auto-response parameters.
- (void)core:(__weak id<SMICoreClient>)core didRequestTemplatedValues:(id<SMITemplateable>)values
                                                    completionHandler:(SMITemplatedUrlParametersCompletion)completionHandler;

@end

NS_ASSUME_NONNULL_END
