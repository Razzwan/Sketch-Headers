//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <SketchModel/MSCoding-Protocol.h>

@class NSString;

@interface NSArray (ModelSupport) <MSCoding>
- (void)enumerateDescendants:(CDUnknownBlockType)arg1 withAncestors:(id)arg2;
- (BOOL)hasDefaultValues;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)treeAsDictionary;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
@end

