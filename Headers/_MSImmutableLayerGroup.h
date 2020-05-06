//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@class MSImmutableGroupLayout, NSArray, NSString;

@interface _MSImmutableLayerGroup : MSImmutableStyledLayer
{
    BOOL _hasClickThrough;
    NSString *_sharedObjectID;
    MSImmutableGroupLayout *_groupLayout;
    NSArray *_layers;
}

+ (Class)mutableClass;
+ (BOOL)hasClickThroughDefault;
+ (id)defaultLayout;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) MSImmutableGroupLayout *groupLayout; // @synthesize groupLayout=_groupLayout;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(nonatomic) BOOL hasClickThrough; // @synthesize hasClickThrough=_hasClickThrough;
- (void).cxx_destruct;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (void)copyPropertiesFromObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (BOOL)hasDefaultLayout;

@end

