//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableLayerGroup.h>

#import <SketchModel/MSFlowContainmentCheck-Protocol.h>
#import <SketchModel/MSLayerGroup-Protocol.h>

@class NSArray;

@interface MSImmutableLayerGroup : _MSImmutableLayerGroup <MSFlowContainmentCheck, MSLayerGroup>
{
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
+ (id)createDetachedGroupFromMaster:(id)arg1 forInstance:(id)arg2 inDocument:(id)arg3;
- (id)defaultLayout;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (BOOL)layersAreEqualForDiffToLayersOfLayerGroup:(id)arg1;
- (struct CGRect)rectByApplyingEdgePaddingsToRect:(struct CGRect)arg1;
- (struct CGRect)influenceRectForFrameInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (id)calculatePathInBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (long long)booleanOperationForLayer:(id)arg1;
- (id)pathCombiningChildrenByApplyingBlock:(CDUnknownBlockType)arg1;
- (BOOL)allowsBlur;
- (BOOL)influenceRectClipsToBounds;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (unsigned long long)axesForInferredLayouts;
@property(readonly, nonatomic) BOOL hasInferredLayout;
- (id)firstFlowWithSymbolsFromDocument:(id)arg1 visited:(id)arg2;
@property(readonly, nonatomic) struct CGSize mirrorViewPortSize;
@property(readonly, nonatomic) double mirrorExportScale;
- (id)subObjectsForTreeDiff;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (BOOL)shadowsFollowRotation;
- (BOOL)childRectShouldResizeOnlyVertically:(struct CGRect)arg1 inParentOfSize:(struct CGSize)arg2;
- (BOOL)childRectShouldResizeOnlyHorizontally:(struct CGRect)arg1 inParentOfSize:(struct CGSize)arg2;
- (unsigned long long)constraintForLayer:(id)arg1;
- (void)migratePropertiesFromV112OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV109OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV90OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV78OrEarlierWithUnarchiver:(id)arg1;
- (BOOL)canOverridePoint:(id)arg1 withAncestors:(id)arg2;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;
- (id)detachedMasterFromInstance:(id)arg1 byApplyingOverrrides:(id)arg2 inDocument:(id)arg3 withCache_Detach:(id)arg4;
- (id)modifiedVersionByReplacingChildrenIn:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *layers;

@end

