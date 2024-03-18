//
//  SMIChoiceListField.h
//  SMIClientCore
//
//  Created by Nigel Brown on 2023-03-08.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIPreChatField.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a pre-chat choice list field.
NS_SWIFT_NAME(PreChatChoiceListField)
@protocol SMIPreChatChoiceListField <SMIPreChatField>

/// Choice list field ID that can be used to reference a set of choice list values to a specific pre-chat choice list field.
@property (nonatomic, readonly, strong) NSString *choiceListId;

@end

NS_ASSUME_NONNULL_END
