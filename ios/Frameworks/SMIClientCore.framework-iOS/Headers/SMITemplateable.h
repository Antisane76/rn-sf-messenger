//
//  SMITemplateable.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-11-22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an array of parameters for a templateable URL used by the auto-response messaging component.
@protocol SMITemplateable <NSObject>

/// Array of templateable keys.
@property (nonatomic, readonly, strong) NSArray<NSString *> *keys;

/// Sets a value for a key.
- (void)setValue:(NSString *)value forKey:(NSString *)key;

/// Gets the value for a particular key.
- (nullable NSString *)valueForKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
