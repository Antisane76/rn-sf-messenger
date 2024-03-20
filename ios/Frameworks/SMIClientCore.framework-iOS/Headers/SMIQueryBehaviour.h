//
//  SMIQueryBehaviour.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-09-15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The offline and network behaviour of an entry query.
/// * `SMIQueryBehaviourLocalWithNetwork`
/// * `SMIQueryBehaviourLocalOnly`
/// * `SMIQueryBehaviourWaitForNetwork`
typedef NS_ENUM(NSUInteger, SMIQueryBehaviour) {

    /// Will return locally cached entities immediately within the completion of the query.
    /// Additional entities may be resolved with a network check, if this results in any net-new entities being found.
    /// They will be emittied with a delegate event.
    /// This is useful if you want to immediately return the local cache without having to wait for a network operation.
    SMIQueryBehaviourLocalWithNetwork,

    /// Similar to `SMIQueryBehaviourLocalWithNetwork` this will return locally cached entities as well as attempt to resolve any
    /// missing entities and update the local cache.
    /// The primary difference is that the completion will wait for the result of the network check and return all entities at a single time.
    /// Note: Any newly cached entries will still be emitted via a delegate event.
    SMIQueryBehaviourWaitForNetwork,

    /// Will return locally cached entities immediately within the completion of the query.
    /// This is a purely offline operation and will not result in any network calls.
    SMIQueryBehaviourLocalOnly
} NS_SWIFT_NAME(QueryBehaviour);

NS_ASSUME_NONNULL_END
