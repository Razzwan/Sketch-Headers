//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSImmutableStyleFill.h>

@interface MSImmutableStyleFill : _MSImmutableStyleFill
{
}

+ (id)defaultName;
+ (id)stylePartPasteboardType;
- (BOOL)patternFillHasOpacity;
@property(readonly, nonatomic) BOOL hasOpacity;
- (id)NSImage;
- (void)performInitWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV115OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV74OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV56OrEarlierWithUnarchiver:(id)arg1;

@end

