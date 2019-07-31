//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class NSColorSpace, NSImage, NSMenuItem, NSPopUpButtonCell;

@protocol MSSharedObjectStyling <NSObject>
- (void)applyStyleToMenuItem:(NSMenuItem *)arg1 withColorSpace:(NSColorSpace *)arg2;
- (void)generatePreviewImageAtSize:(struct CGSize)arg1 backingScale:(double)arg2 colorSpace:(NSColorSpace *)arg3 completionHandler:(void (^)(NSImage *))arg4;
- (void)generatePreviewForSyncSheetWithSize:(struct CGSize)arg1 backingScale:(double)arg2 shadow:(BOOL)arg3 colorSpace:(NSColorSpace *)arg4 completionBlock:(void (^)(NSImage *))arg5;
- (NSImage *)generatePreviewForManageSheetWithBackingScale:(double)arg1 completionBlock:(void (^)(NSImage *))arg2;
- (NSImage *)generatePreviewForPopup:(NSPopUpButtonCell *)arg1 backingScale:(double)arg2 completionBlock:(void (^)(NSImage *))arg3;
- (NSImage *)generatePreviewForMenuItem:(NSMenuItem *)arg1 withColorSpace:(NSColorSpace *)arg2 backingScale:(double)arg3 completionBlock:(void (^)(NSImage *))arg4;
@end

