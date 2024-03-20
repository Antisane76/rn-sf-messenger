//
//  SMIParticipantRole.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2022-09-16.
//

#import <Foundation/Foundation.h>

/// Participant roles.
/// Possible values:
/// * `SMIParticipantRoleSystem`
/// * `SMIParticipantRoleUser`
/// * `SMIParticipantRoleAgent`
/// * `SMIParticipantRoleChatbot`
/// * `SMIParticipantRoleSupervisor`
typedef NSString *const SMIParticipantRole NS_TYPED_ENUM
NS_SWIFT_NAME(ParticipantRole);

/// Participant system role.
FOUNDATION_EXPORT SMIParticipantRole SMIParticipantRoleSystem;

/// Participant user role.
FOUNDATION_EXPORT SMIParticipantRole SMIParticipantRoleUser;

/// Participant agent role.
FOUNDATION_EXPORT SMIParticipantRole SMIParticipantRoleAgent;

/// Participant chatbot  role.
FOUNDATION_EXPORT SMIParticipantRole SMIParticipantRoleChatbot;

/// Participant supervisor  role.
FOUNDATION_EXPORT SMIParticipantRole SMIParticipantRoleSupervisor;
