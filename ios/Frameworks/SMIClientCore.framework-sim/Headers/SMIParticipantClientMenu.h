//
//  SMIParticipantClientMenu.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2023-03-20.
//

#import <Foundation/Foundation.h>

@protocol SMIParticipant;
@protocol SMIParticipantClientMenuOption;

NS_ASSUME_NONNULL_BEGIN

/// Information about a participant client menu.
NS_SWIFT_NAME(ParticipantClientMenu)
@protocol SMIParticipantClientMenu

/// Array of participant client menu options.
@property (nonatomic, readonly, strong) NSArray<id<SMIParticipantClientMenuOption>> *options;

@end

NS_ASSUME_NONNULL_END
