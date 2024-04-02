// RnSfMessenger.m

#import "RnSfMessenger.h"

//RCT_EXTERN_MODULE(MessagingController, NSObject, ObservableObject)

@implementation RnSfMessenger

RCT_EXPORT_MODULE(RnSfMessenger)

RCT_EXPORT_METHOD(registerDeviceToken:(NSString *)token)
{
  // Call the Messaging for In-App SDK with token info
  DeviceTokenPassthrough *dvtp = [DeviceTokenPassthrough alloc]; 
  [dvtp provideDeviceToken: token];
  //[SMICoreFactory provideDeviceToken:token];
}

RCT_EXPORT_METHOD(initiateChat:(NSString *)url :(NSString *)orgID :(NSString *)devName :(NSString *)uuid :(NSString *)clientID)
{
     //dispatch_async(dispatch_get_main_queue(), ^{
      MessagingContainer *container = [MessagingContainer alloc];
      //NSLog(@"Values: %s %s %s %s %s", url, orgID, devName, uuid, clientID);
      NSLog(@"Here!");
      [container init];
      [container resetConfig: url orgID:orgID devName:devName uuid:uuid clientID:clientID];
      dispatch_async(dispatch_get_main_queue(), ^{
        [container showScreen];
     });
    // TODO: Implement some actually useful functionality
    //callback(@[[NSString stringWithFormat: @"numberArgument: %@ stringArgument: %@", numberArgument, stringArgument]]);
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
