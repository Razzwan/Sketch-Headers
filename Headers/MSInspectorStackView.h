//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray;

@interface MSInspectorStackView : NSView
{
    NSArray *_sectionViewControllers;
    NSArray *_sectionViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sectionViews; // @synthesize sectionViews=_sectionViews;
@property(retain, nonatomic) NSArray *sectionViewControllers; // @synthesize sectionViewControllers=_sectionViewControllers;
- (id)enclosingStackView;
- (BOOL)isFlipped;
- (void)reloadWithViewControllers:(id)arg1;
- (void)subViewFrameDidChange:(id)arg1;
- (void)stack;
- (void)recalculateHeight:(id)arg1;
- (void)recalculateHeight;
- (void)layout;
- (void)reloadSubviews;
- (BOOL)clickShouldDismissPopover:(id)arg1;

@end

