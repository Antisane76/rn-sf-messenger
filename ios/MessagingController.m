#import "MessagingController.h"

@property (nonatomic, strong) UIConfiguration *uiConfig;

- (void)resetConfig;
- (void)setDebugLogging;

@end

@implementation MessagingController

- (instancetype)init {
    self = [super init];
    if (self) {
        [self resetConfig];
        [self setDebugLogging];
    }
    return self;
}

- (void)resetConfig {
    NSLog(@"Initializing config file.");
    
    NSURL *serviceAPIURL = [NSURL URLWithString:@"https://mintbet--pt.sandbox.my.salesforce-scrt.com"];
    if (!serviceAPIURL) {
        // TO DO: Handle error
        return;
    }
    
    NSUUID *conversationID = [NSUUID UUID];
    
    BOOL userVerificationRequired = NO;
    
    self.uiConfig = [[UIConfiguration alloc] initWithServiceAPI:serviceAPIURL
                                                organizationId:@"00DD10000001YW6"
                                                 developerName:@"Mobile"
                                      userVerificationRequired:userVerificationRequired
                                                conversationId:conversationID];
    
    if (!self.uiConfig) {
        return;
    }
    
    [CoreFactory createWithConfig:self.uiConfig].addDelegate(delegate:self);
    
    NSLog(@"Config created using conversation ID %@.", [conversationID description]);
    
    InterfaceViewController *chatVC = [[InterfaceViewController alloc] initWithConfig:self.uiConfig];
    [self presentViewController:chatVC animated:YES completion:nil];
}

- (void)setDebugLogging {
#ifdef DEBUG
    Logging.level = LogLevelDebug;
#endif
}

@end

