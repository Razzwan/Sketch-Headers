//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

#import "BCPopoverDelegate-Protocol.h"

@class BCPopover, NSString, NSViewController;

@interface MSPopoverAction : MSDocumentAction <BCPopoverDelegate>
{
    BCPopover *_popover;
}

+ (Class)popoverClass;
- (void).cxx_destruct;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (void)windowDidResignMain:(id)arg1;
- (id)menu;
- (id)viewForAttachingPopover:(id)arg1;
- (void)closePopover;
- (void)popoverWillClose:(id)arg1;
- (void)showPopoverToForSender:(id)arg1 viewController:(id)arg2;
@property(readonly) NSViewController *popoverViewController;
@property(readonly) BOOL popoverVisible;
- (void)showPopover:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

