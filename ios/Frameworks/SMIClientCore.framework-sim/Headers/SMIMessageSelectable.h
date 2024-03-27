//
//  SMIMessageSelectable.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2021-07-28.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIChoice.h>

NS_ASSUME_NONNULL_BEGIN

/// A message that has selectable choices.
@protocol SMIMessageSelectable

/// The selected choice(s).
/// @see `SMIChoice`
@property (nonatomic, readonly, nullable, strong) NSArray<id<SMIChoice>> *selected;

@end

NS_ASSUME_NONNULL_END
