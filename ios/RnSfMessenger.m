// RnSfMessenger.m

#import "RnSfMessenger.h"
#import "MessagingController.h"

@implementation RnSfMessenger

@property (nonatomic, strong) MessagingController *controller;

RCT_EXPORT_MODULE(RnSfMessenger)

RCT_EXPORT_METHOD(sampleMethod:(NSString *)stringArgument numberParameter:(nonnull NSNumber *)numberArgument callback:(RCTResponseSenderBlock)callback)
{
    // TODO: Implement some actually useful functionality
    callback(@[[NSString stringWithFormat: @"numberArgument: %@ stringArgument: %@", numberArgument, stringArgument]]);
}

@end
