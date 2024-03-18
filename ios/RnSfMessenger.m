// RnSfMessenger.m

#import "RnSfMessenger.h"
#import <React/RCTViewManager.h>
#import <MapKit/MapKit.h>

@implementation RnSfMessenger

RCT_EXPORT_MODULE(RnSfMessenger)

- (UIView *)view
{
  return [[MKMapView alloc] init];
}


RCT_EXPORT_METHOD(sampleMethod:(NSString *)stringArgument numberParameter:(nonnull NSNumber *)numberArgument callback:(RCTResponseSenderBlock)callback)
{
    // TODO: Implement some actually useful functionality
    callback(@[[NSString stringWithFormat: @"numberArgument: %@ stringArgument: %@", numberArgument, stringArgument]]);
}

@end
