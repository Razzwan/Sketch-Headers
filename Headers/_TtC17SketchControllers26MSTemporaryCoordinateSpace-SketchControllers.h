//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/_TtC17SketchControllers26MSTemporaryCoordinateSpace.h>

@interface _TtC17SketchControllers26MSTemporaryCoordinateSpace (SketchControllers)
- (id)initWithLayer:(id)arg1;
- (struct CGAffineTransform)transformForConvertingFromCoordinateSpace:(id)arg1;
- (struct CGAffineTransform)transformForConvertingToCoordinateSpace:(id)arg1;
@property(nonatomic, readonly) struct CGAffineTransform transformForConvertingFromParentCoordinateSpace;
@property(nonatomic, readonly) struct CGAffineTransform transformForConvertingToParentCoordinateSpace;
- (struct CGVector)convertVector:(struct CGVector)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGVector)convertVector:(struct CGVector)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@end

