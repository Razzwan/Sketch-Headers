//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

@class MSStyleBlur;

@interface MSZoomBlurEventHandler : MSPointsEventHandler
{
    MSStyleBlur *_blurStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSStyleBlur *blurStyle; // @synthesize blurStyle=_blurStyle;
- (void)documentDidChange:(id)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (id)currentGroup;
- (id)points;

@end

