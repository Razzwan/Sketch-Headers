//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSFlashController, NSButton, NSImageView, NSMenu, NSScrollView, NSTextField, NSView, _TtC6Sketch19DocumentsBannerView, _TtC6Sketch23DocumentsCollectionView;

@interface _TtC6Sketch23DocumentsViewController : NSViewController
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: collectionViewContainer
    // Error parsing type: , name: collectionScrollView
    // Error parsing type: , name: emptyStateLabel
    // Error parsing type: , name: emptyStateImage
    // Error parsing type: , name: createFirstDocumentButton
    // Error parsing type: , name: recentDocumentsContextMenu
    // Error parsing type: , name: templatesContextMenu
    // Error parsing type: , name: flashController
    // Error parsing type: , name: bannerView
    // Error parsing type: , name: $__lazy_storage_$_previewImageCache
    // Error parsing type: , name: provider
    // Error parsing type: , name: delegate
    // Error parsing type: , name: downloadingItems
    // Error parsing type: , name: lastDocumentsLoadDate
    // Error parsing type: , name: refreshOnNextKey
    // Error parsing type: , name: dragAndDropMessage
    // Error parsing type: , name: bannerError
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)willPresentError:(id)arg1;
- (void)documentDidProcessNotification:(id)arg1;
- (void)boundsDidChangeNotification:(id)arg1;
- (void)downloadChangedNotificationHandler:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)deleteDocument:(id)arg1;
- (void)delete:(id)arg1;
- (void)clearRecentDocuments:(id)arg1;
- (void)confirmDocumentRename:(id)arg1;
- (void)renameDocument:(id)arg1;
- (void)confirm:(id)arg1;
- (void)refresh:(id)arg1;
- (void)documentCloudShareDidChange:(id)arg1;
- (void)uploadDidFinish:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)viewDidLayout;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) _TtC6Sketch19DocumentsBannerView *bannerView; // @synthesize bannerView;
@property(nonatomic, retain) MSFlashController *flashController; // @synthesize flashController;
@property(nonatomic, retain) NSMenu *templatesContextMenu; // @synthesize templatesContextMenu;
@property(nonatomic, retain) NSMenu *recentDocumentsContextMenu; // @synthesize recentDocumentsContextMenu;
@property(nonatomic, retain) NSButton *createFirstDocumentButton; // @synthesize createFirstDocumentButton;
@property(nonatomic, retain) NSImageView *emptyStateImage; // @synthesize emptyStateImage;
@property(nonatomic, retain) NSTextField *emptyStateLabel; // @synthesize emptyStateLabel;
@property(nonatomic, retain) NSScrollView *collectionScrollView; // @synthesize collectionScrollView;
@property(nonatomic, retain) NSView *collectionViewContainer; // @synthesize collectionViewContainer;
@property(nonatomic, retain) _TtC6Sketch23DocumentsCollectionView *collectionView; // @synthesize collectionView;

@end

