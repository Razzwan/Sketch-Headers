//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocumentController.h>

@interface MSDocumentController : NSDocumentController
{
}

- (void)closeAllDocumentsWithDelegate:(id)arg1 cancellingSheets:(BOOL)arg2 didCloseAllSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)defaultType;
- (void)noteNewRecentDocumentURL:(id)arg1;
- (void)noteNewRecentDocument:(id)arg1;
- (BOOL)shouldNoteRecentDocumentForType:(id)arg1;
- (void)reopenDocumentForURL:(id)arg1 withContentsOfURL:(id)arg2 display:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)decideOpenStrategyForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openCloudDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 displayDownloadProgress:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openLocalDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 displayDownloadProgress:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)makeDocumentWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)makeUntitledDocumentOfType:(id)arg1 error:(id *)arg2;
- (BOOL)documentCreationAllowed;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)cloudDocumentURLsInFolder:(id)arg1 shouldEnumerateSubDirectories:(BOOL)arg2;
- (id)init;
- (void)documentControllerWithDocController:(id)arg1 didReviewAll:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 context:(id)arg3 callback:(id)arg4;

@end

