//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSAction.h>

#import "MSWindowBadgeAction-Protocol.h"

@class NSAttributedString, NSColor, NSString;

@interface MSDebugBadgeActionTypeA : MSAction <MSWindowBadgeAction>
{
}

- (BOOL)validate;
@property(readonly, nonatomic) NSColor *badgeTint;
@property(readonly, nonatomic) unsigned long long numberOfBadges;
- (id)label;
- (void)doPerformAction:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSAttributedString *badgeTitle; // @dynamic badgeTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

