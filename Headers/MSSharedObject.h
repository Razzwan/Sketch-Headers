//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSSharedObject.h>

#import <SketchModel/BCSortable-Protocol.h>

@class NSString;

@interface MSSharedObject : _MSSharedObject <BCSortable>
{
}

+ (id)defaultName;
- (id)parentGroup;
- (unsigned long long)type;
- (BOOL)isOutOfSyncWithInstance:(id)arg1;
- (id)initWithName:(id)arg1 sharedObjectID:(id)arg2 value:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

