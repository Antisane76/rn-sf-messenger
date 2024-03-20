// RnSfMessenger.m

#import "RnSfMessenger.h"
@import SMIClientCore;
@import SMIClientUI;

@implementation RnSfMessenger

RCT_EXPORT_MODULE(RnSfMessenger)

RCT_EXPORT_METHOD(sampleMethod:(NSString *)stringArgument numberParameter:(nonnull NSNumber *)numberArgument callback:(RCTResponseSenderBlock)callback)
{
     dispatch_async(dispatch_get_main_queue(), ^{
      MessagingController *controller = [[MessagingController alloc] init];
      [controller resetConfigFor:stringArgument];
      [controller showScreen];
     });
    // TODO: Implement some actually useful functionality
    callback(@[[NSString stringWithFormat: @"numberArgument: %@ stringArgument: %@", numberArgument, stringArgument]]);
}

// RCT_EXPORT_METHOD(sampleMethod:(NSString *)stringArgument numberParameter:(nonnull NSNumber *)numberArgument callback:(RCTResponseSenderBlock)callback)
// {
//     dispatch_async(dispatch_get_main_queue(), ^{
//       UIViewController *viewController = [[[[UIApplication sharedApplication] delegate] window] rootViewController];
      
      
//       if (viewController.presentedViewController && !viewController.presentedViewController.isBeingDismissed) {
//           viewController = viewController.presentedViewController;
//       }
//       UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"My Alert"
//                     message:@"This is an alert test."
//                     preferredStyle:UIAlertControllerStyleAlert];
//       // UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
//       //                 handler:^(UIAlertAction * action) {}];
//       // [alert addAction:defaultAction];
//       MessagingController *controller = [[MessagingController alloc] init];
//       //[controller resetConfig];
//       NSLog(@"Value of controller = %@", controller);
//       InterfaceViewController *chatVC = [controller setScreen];
//       NSLog(@"Value of chatVC = %@", chatVC);
//       //[navigationController pushViewController:alert animated:YES];
//       [viewController presentViewController:chatVC animated:YES completion:nil];
//     });
//     // TODO: Implement some actually useful functionality
//     callback(@[[NSString stringWithFormat: @"numberArgument: %@ stringArgument: %@", numberArgument, stringArgument]]);
// }

@end
