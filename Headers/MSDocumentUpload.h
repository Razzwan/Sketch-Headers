//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSCloudUploadProvider-Protocol.h>
#import <SketchControllers/NSURLSessionTaskDelegate-Protocol.h>

@class NSProgress, SCKOrganization, SCKProject, SCKShare;
@protocol MSCloudExportableDocument, MSCloudUploadProviderDelegate;

@interface MSDocumentUpload : NSObject <MSCloudUploadProvider, NSURLSessionTaskDelegate>
{
    // Error parsing type: , name: document
    // Error parsing type: , name: delegate
    // Error parsing type: , name: existingShare
    // Error parsing type: , name: previousShare
    // Error parsing type: , name: createdShare
    // Error parsing type: , name: organization
    // Error parsing type: , name: project
    // Error parsing type: , name: cancelled
    // Error parsing type: , name: finalized
    // Error parsing type: , name: progress
    // Error parsing type: , name: progressObserver
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: versionId
    // Error parsing type: , name: $__lazy_storage_$_urlSession
}

- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)cancel;
- (void)startUpload;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 updatingShare:(id)arg2;
@property(nonatomic, readonly) NSProgress *progress; // @synthesize progress;
@property(nonatomic) BOOL finalized; // @synthesize finalized;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled;
@property(nonatomic, retain) SCKProject *project; // @synthesize project;
@property(nonatomic, retain) SCKOrganization *organization; // @synthesize organization;
@property(nonatomic, retain) SCKShare *createdShare; // @synthesize createdShare;
@property(nonatomic, readonly) SCKShare *previousShare; // @synthesize previousShare;
@property(nonatomic, readonly) SCKShare *existingShare; // @synthesize existingShare;
@property(nonatomic, retain) id <MSCloudUploadProviderDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <MSCloudExportableDocument> document; // @synthesize document;

@end
