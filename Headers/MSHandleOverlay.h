//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s17SketchControllers19MSCollectionOverlayCN.h"

@class MSClickGestureRecognizer, MSDragHandleGestureRecognizer, NSSet;

@interface MSHandleOverlay : _$s17SketchControllers19MSCollectionOverlayCN
{
    // Error parsing type: , name: state
    // Error parsing type: , name: draggedIndexPaths
    // Error parsing type: , name: $__lazy_storage_$_dragGestureRecognizer
    // Error parsing type: , name: $__lazy_storage_$_clickGestureRecognizer
}

- (void).cxx_destruct;
- (id)initWithLayout:(id)arg1;
- (void)maybeEndEditing:(id)arg1;
@property(nonatomic, retain) MSClickGestureRecognizer *clickGestureRecognizer;
- (void)dragHandle:(id)arg1;
@property(nonatomic, retain) MSDragHandleGestureRecognizer *dragGestureRecognizer;
@property(nonatomic, copy) NSSet *draggedIndexPaths;

@end

