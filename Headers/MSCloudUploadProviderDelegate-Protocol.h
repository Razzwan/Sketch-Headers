//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSProgress, SCKShare;
@protocol MSCloudUploadProvider;

@protocol MSCloudUploadProviderDelegate <NSObject>
- (void)uploadProvider:(id <MSCloudUploadProvider>)arg1 didChangeProgress:(NSProgress *)arg2;
- (void)uploadProvider:(id <MSCloudUploadProvider>)arg1 uploadDidFailWithError:(NSError *)arg2;
- (void)uploadProviderDidCancelUploading:(id <MSCloudUploadProvider>)arg1;
- (void)uploadProvider:(id <MSCloudUploadProvider>)arg1 didUploadShare:(SCKShare *)arg2;
@end

