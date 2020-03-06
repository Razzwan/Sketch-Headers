//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSOverlay.h>

@class MSSelectHandleGestureRecognizer, NSArray, NSSet, _TtC17SketchControllers25MSCollectionOverlayLayout;
@protocol _TtP17SketchControllers27MSCollectionOverlayDelegate_, _TtP17SketchControllers29MSCollectionOverlayDataSource_;

@interface _TtC17SketchControllers19MSCollectionOverlay : MSOverlay
{
    // Error parsing type: , name: layout
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: delegate
    // Error parsing type: , name: allowsSelection
    // Error parsing type: , name: allowsMultipleSelection
    // Error parsing type: , name: allowsEmptySelection
    // Error parsing type: , name: selectionIndexPaths
    // Error parsing type: , name: selectionGestureRecognizer.storage
    // Error parsing type: , name: cachedOverlayItems
}

- (void).cxx_destruct;
- (id)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (void)setNeedsDisplay;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
@property(nonatomic, retain) MSSelectHandleGestureRecognizer *selectionGestureRecognizer;
- (void)toggleSelectionOfItemAtIndexPath:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)deselectItemAtIndexPath:(id)arg1;
- (void)deselectItemsAtIndexPaths:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1;
- (void)selectItemsAtIndexPaths:(id)arg1;
@property(nonatomic, copy) NSSet *selectionIndexPaths; // @synthesize selectionIndexPaths;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadData;
@property(nonatomic) __weak id <_TtP17SketchControllers27MSCollectionOverlayDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <_TtP17SketchControllers29MSCollectionOverlayDataSource_> dataSource; // @synthesize dataSource;
@property(nonatomic, readonly) NSArray *indexPaths;
- (long long)numberOfItemsIn:(long long)arg1;
@property(nonatomic, readonly) long long numberOfSections;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
@property(nonatomic, retain) _TtC17SketchControllers25MSCollectionOverlayLayout *layout; // @synthesize layout;
- (id)init;
- (id)initWithLayout:(id)arg1;

@end
