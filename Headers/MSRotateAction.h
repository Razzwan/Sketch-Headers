//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEventHandlerAction.h"

#import "MSRotationBarDelegate-Protocol.h"

@interface MSRotateAction : MSEventHandlerAction <MSRotationBarDelegate>
{
}

- (id)documentForRotationBar:(id)arg1;
- (id)label;
- (id)tooltip;
- (void)rotationBarAction:(id)arg1;
- (void)refreshTouchBarItem;
- (id)touchBarItem;
- (id)imageForMenu;
- (BOOL)validate;
- (void)doPerformAction:(id)arg1;
- (void)rotate:(id)arg1;

@end

