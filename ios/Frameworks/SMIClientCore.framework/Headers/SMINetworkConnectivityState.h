//
//  SMINetworkConnectivityState.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2020-09-17.
//  Copyright © 2020 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The network connectivity status.
/// Possible values:
/// * `SMINetworkConnectivityStateOffline`
/// * `SMINetworkConnectivityStateConnected`
typedef NSString *SMINetworkConnectivityState NS_TYPED_ENUM
NS_SWIFT_NAME(NetworkConnectivityState);

/// Unable to connect to the network.
FOUNDATION_EXPORT SMINetworkConnectivityState const SMINetworkConnectivityStateOffline;

/// We have an active connection to the network.
FOUNDATION_EXPORT SMINetworkConnectivityState const SMINetworkConnectivityStateConnected;

NS_ASSUME_NONNULL_END
