//
//  SMIModelParticipant.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 10/25/19.
//  Copyright © 2019 Salesforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIParticipantRole.h>
#import <SMIClientCore/SMIParticipantClientMenu.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a participant in a conversation.
NS_SWIFT_NAME(Participant)
@protocol SMIParticipant

/// The unique identifier for an `SMIParticipant` object.
@property (nonatomic, readonly, strong) NSString *subject;

/// The role assigned to an `SMIParticipant` determines the access a participant has for administrative
/// or other operations on a conversation.
@property (nonatomic, readonly, strong) SMIParticipantRole role;

/// Indicates whether the `SMIParticipant` represents the local device user in the conversation.
@property (nonatomic, readonly, assign, getter=isLocal) BOOL local;

/// The non-unique string that determines how a participant is displayed within the UI.
@property (nullable, nonatomic, readonly, strong) NSString *displayName;

/// The `SMIParticipantClientMenu` associated with this participant.
@property (nullable, nonatomic, readonly, strong) id<SMIParticipantClientMenu> clientMenu;

@end

NS_ASSUME_NONNULL_END
