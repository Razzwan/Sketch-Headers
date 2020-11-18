//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Sketch28MSSelectionOverlayController.h"

@interface _TtC6Sketch28MSSelectionOverlayController (Sketch)
@property(nonatomic, readonly) BOOL canRotate;
- (long long)indexOfLinePointForHandleOfKind:(id)arg1;
- (id)collectionOverlay:(id)arg1 overlayItemContainerForSupplementaryElementOfKind:(id)arg2 layoutAttributes:(id)arg3 parameters:(struct MSRenderingParameters)arg4;
- (id)collectionOverlay:(id)arg1 overlayItemContainerForItemAtIndexPath:(id)arg2 layoutAttributes:(id)arg3 parameters:(struct MSRenderingParameters)arg4;
- (id)collectionOverlay:(id)arg1 overlayItemImagesForColorSpace:(struct CGColorSpace *)arg2 backingScale:(double)arg3;
- (long long)collectionOverlay:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionOverlay:(id)arg1;
- (void)selectionOverlayWithDidFinishAdjustingHandle:(id)arg1;
- (void)selectionOverlay:(id)arg1 willBeginAdjustingHandleOfKind:(id)arg2 at:(id)arg3 location:(struct CGPoint)arg4 modifierFlags:(unsigned long long)arg5;
- (void)selectionOverlay:(id)arg1 adjustHandleOfKind:(id)arg2 at:(id)arg3 to:(struct CGPoint)arg4 modifierFlags:(unsigned long long)arg5;
- (void)selectionOverlay:(id)arg1 trackedMouse:(struct CGPoint)arg2;
- (id)selectionOverlay:(id)arg1 cursorForHandleOfKind:(id)arg2 at:(id)arg3 location:(struct CGPoint)arg4 modifierFlags:(unsigned long long)arg5;
- (BOOL)selectionOverlay:(id)arg1 selectItemAt:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3;
- (struct CGRect)selectionOverlay:(id)arg1 layout:(id)arg2 rectForStackElementAt:(id)arg3;
- (struct CGSize)selectionOverlay:(id)arg1 layout:(id)arg2 sizeForHandleOfKind:(id)arg3 atIndexPath:(id)arg4;
- (BOOL)selectionOverlay:(id)arg1 layout:(id)arg2 shouldHideItemAt:(id)arg3;
- (struct CGAffineTransform)selectionOverlay:(id)arg1 layout:(id)arg2 transformForItemAt:(id)arg3;
- (struct CGRect)selectionOverlay:(id)arg1 layout:(id)arg2 frameForItemAt:(id)arg3;
@property(nonatomic, readonly) BOOL shouldShowSelectedOverrides;
@property(nonatomic) BOOL preferencesWantSelection;
@property(nonatomic) BOOL currentEventHandlerWantsStandardSelectionControls;
- (void)beginToolWithHandleOfKind:(id)arg1;
- (void)beginToolWithHandle:(long long)arg1;
- (void)beginToolWithHiddenHandles;
- (void)resetMode;
- (BOOL)isStackSpacingHandleAtPoint:(struct CGPoint)arg1;
@end

