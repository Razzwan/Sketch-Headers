//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSAssetLibrary.h>

#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL;

@interface MSAssetLibrary (Opening) <QLPreviewItem>
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canOpen;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;
@end

