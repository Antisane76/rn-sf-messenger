//
//  SMIMessageChoices.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2023-11-23.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIChoice.h>

NS_ASSUME_NONNULL_BEGIN

/// A message that has selectable choices.
@protocol SMIMessageChoices

/// The list of possible choices.
/// @see `SMIChoice`
@property (nonatomic, readonly, strong) NSArray<id<SMIChoice>> *choices;

@end

NS_ASSUME_NONNULL_END
