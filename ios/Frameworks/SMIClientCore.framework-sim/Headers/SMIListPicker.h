//
//  SMIListPicker.h
//  SMIClientCore
//
//  Created by Aaron Eisses on 2021-05-14.
//

#import <Foundation/Foundation.h>
#import <SMIClientCore/SMIEntryPayload.h>
#import <SMIClientCore/SMIConversationEntry.h>
#import <SMIClientCore/SMISerializable.h>
#import <SMIClientCore/SMIMessageSelectable.h>
#import <SMIClientCore/SMIMessageChoices.h>
#import <SMIClientCore/SMIEntryTypeMessage.h>

NS_ASSUME_NONNULL_BEGIN

/// The entry type that allows you to pick an item from a list.
NS_SWIFT_NAME(ListPicker)
@protocol SMIListPicker <SMIEntryPayload, SMIMessageSelectable, SMIEntryTypeMessage, SMIMessageChoices>

/// The  text for the ListPicker.
@property (nonatomic, readonly, strong) NSString *text;

@end

NS_ASSUME_NONNULL_END
