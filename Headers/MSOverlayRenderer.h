//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSOverlayItemDataSource-Protocol.h>

@class NSString;
@protocol MSTiledRendererHostView;

@interface MSOverlayRenderer : NSObject <MSOverlayItemDataSource>
{
    BOOL _hidden;
    id <MSTiledRendererHostView> _hostView;
}

@property(nonatomic) __weak id <MSTiledRendererHostView> hostView; // @synthesize hostView=_hostView;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (id)overlayItems:(unsigned long long)arg1 zoomScale:(double)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (void)setNeedsDisplay;
- (BOOL)updateCursorWithLocation:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)trackMouseWithLocation:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

