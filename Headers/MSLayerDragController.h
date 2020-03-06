//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSToolController.h>

#import <SketchControllers/_TtP17SketchControllers36MSLayerPositioningSnapTargetProvider_-Protocol.h>

@class MSLayerPositioningTool, NSArray, NSNumber, _TtC17SketchControllers21MSLayerSnappingResult;
@protocol MSDragLayerToolUserInterface;

@interface MSLayerDragController : MSToolController <_TtP17SketchControllers36MSLayerPositioningSnapTargetProvider_>
{
    BOOL _duplicating;
    BOOL _snappingEnabled;
    MSLayerPositioningTool *_positioningTool;
    NSArray *_originalLayers;
    double _zoomScale;
    unsigned long long _snapMask;
    NSNumber *_alignmentAxis;
    _TtC17SketchControllers21MSLayerSnappingResult *_snappingResult;
    id <MSDragLayerToolUserInterface> _userInterface;
    struct CGRect _visibleRect;
}

@property(nonatomic) __weak id <MSDragLayerToolUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(retain, nonatomic) _TtC17SketchControllers21MSLayerSnappingResult *snappingResult; // @synthesize snappingResult=_snappingResult;
@property(retain, nonatomic) NSNumber *alignmentAxis; // @synthesize alignmentAxis=_alignmentAxis;
@property(nonatomic) unsigned long long snapMask; // @synthesize snapMask=_snapMask;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) BOOL snappingEnabled; // @synthesize snappingEnabled=_snappingEnabled;
@property(readonly, copy, nonatomic) NSArray *originalLayers; // @synthesize originalLayers=_originalLayers;
@property(readonly, nonatomic, getter=isDuplicating) BOOL duplicating; // @synthesize duplicating=_duplicating;
@property(readonly, nonatomic) MSLayerPositioningTool *positioningTool; // @synthesize positioningTool=_positioningTool;
- (void).cxx_destruct;
- (void)layerPositioningTool:(id)arg1 provideTargetsToSnapper:(id)arg2;
- (void)endDuplicating:(BOOL)arg1;
- (void)beginDuplicating;
- (void)reset;
- (void)updateWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 duplicate:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *layers;
- (void)beginWithLayers:(id)arg1 location:(struct CGPoint)arg2;
- (id)init;

@end

