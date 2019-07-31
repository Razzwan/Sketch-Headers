//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSContentDrawViewDelegate-Protocol.h"

@class MSContentDrawView, MSDocument, MSFlashController, MSRulerView, NSLayoutConstraint, NSString, NSView;

@interface MSContentDrawViewController : NSViewController <MSContentDrawViewDelegate>
{
    MSContentDrawView *_contentDrawView;
    MSRulerView *_horizontalRuler;
    MSRulerView *_verticalRuler;
    NSView *_rulerCornerView;
    NSLayoutConstraint *_rulerWidthConstraint;
    NSLayoutConstraint *_rulerHeightConstraint;
    MSFlashController *_flashController;
    MSDocument *_document;
}

@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MSFlashController *flashController; // @synthesize flashController=_flashController;
@property(nonatomic) __weak NSLayoutConstraint *rulerHeightConstraint; // @synthesize rulerHeightConstraint=_rulerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *rulerWidthConstraint; // @synthesize rulerWidthConstraint=_rulerWidthConstraint;
@property(retain, nonatomic) NSView *rulerCornerView; // @synthesize rulerCornerView=_rulerCornerView;
@property(retain, nonatomic) MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(retain, nonatomic) MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
@property(retain, nonatomic) MSContentDrawView *contentDrawView; // @synthesize contentDrawView=_contentDrawView;
- (void).cxx_destruct;
- (void)prepareForDealloc;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

