//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSAssetLibraryDelegate-Protocol.h>
#import <SketchControllers/MSCloudAssetLibraryControllerDelegate-Protocol.h>

@class MSAssetLibraryUpdater, MSCloudAssetLibraryController, NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString;

@interface MSAssetLibraryController : NSObject <MSCloudAssetLibraryControllerDelegate, MSAssetLibraryDelegate>
{
    BOOL _includeCloudLibraries;
    NSMutableArray *_userLibraries;
    NSArray *_remoteLibraries;
    NSHashTable *_delegates;
    MSAssetLibraryUpdater *_assetLibraryUpdater;
    MSCloudAssetLibraryController *_cloudAssetLibraryController;
    NSString *_cloudUserID;
    NSMutableSet *_validatedCloudLibraries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *validatedCloudLibraries; // @synthesize validatedCloudLibraries=_validatedCloudLibraries;
@property(copy) NSString *cloudUserID; // @synthesize cloudUserID=_cloudUserID;
@property(readonly, nonatomic) MSCloudAssetLibraryController *cloudAssetLibraryController; // @synthesize cloudAssetLibraryController=_cloudAssetLibraryController;
@property(readonly, nonatomic) MSAssetLibraryUpdater *assetLibraryUpdater; // @synthesize assetLibraryUpdater=_assetLibraryUpdater;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSArray *remoteLibraries; // @synthesize remoteLibraries=_remoteLibraries;
@property(readonly, nonatomic) NSMutableArray *userLibraries; // @synthesize userLibraries=_userLibraries;
@property(nonatomic) BOOL includeCloudLibraries; // @synthesize includeCloudLibraries=_includeCloudLibraries;
- (void)loadVersionZeroLibrariesWithDispatchGroup:(id)arg1;
- (id)loadVersionZeroLibrariesFromUnarchiver:(id)arg1 forKey:(id)arg2 dispatchGroup:(id)arg3;
- (BOOL)shouldAttemptToLoadVersionZeroLibraries;
- (void)cloudDocumentAtLocalURL:(id)arg1 uploadedWithShare:(id)arg2;
- (void)linkCloudLibraryWithShare:(id)arg1 toCloudDocAtURL:(id)arg2;
- (id)remoteAssetLibraryForShare:(id)arg1;
- (void)createAssetLibraryFolder;
- (id)librariesWithUpdates;
- (void)addRemoteLibraryFromAppcastURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)addCloudLibraryFromShare:(id)arg1;
- (id)makeDuplicateRemoteLibraryError;
- (id)publicCloudLibraries;
- (id)cloudLibraryWithShare:(id)arg1;
- (id)remoteLibraryWithAppcast:(id)arg1;
- (void)updateAndLoadAssetLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelDownloadOfLibrary:(id)arg1;
- (void)startDownloadingAssetLibrary:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 downloadCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)checkForRemoteAssetLibraryUpdates;
@property(readonly, nonatomic) long long checkForLibraryUpdatesPeriod;
- (void)downloadAssetLibraryAppcasts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadAssetLibraryAppcastsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)documentDidUploadNotification:(id)arg1;
- (void)cloudAuthenticationDidChange:(id)arg1;
- (id)previewFromDocumentReader:(id)arg1;
- (void)generatePreviewImageForLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)libraryForShareableObject:(id)arg1;
- (void)enumerateForeignObjects:(id)arg1 inDocument:(id)arg2 includeDisabled:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (void)syncForeignObject:(id)arg1 withMaster:(id)arg2 fromLibrary:(id)arg3;
- (void)internalSyncForeignObject:(id)arg1 withMaster:(id)arg2 fromLibrary:(id)arg3;
- (id)importShareableObjectReference:(id)arg1 intoDocument:(id)arg2;
- (void)syncNestedSwatchesOf:(id)arg1 fromRemote:(id)arg2 fromLibrary:(id)arg3;
- (void)syncNestedSymbolsOf:(id)arg1 withMaster:(id)arg2 fromLibrary:(id)arg3;
- (id)symbolIDsMappingFrom:(id)arg1 toLibrary:(id)arg2;
- (void)migratePublicLibrariesWithDispatchGroup:(id)arg1;
- (BOOL)shouldMigratePublicCloudLibrary:(id)arg1;
- (BOOL)shouldLoadPreviouslySavedLibraries;
- (void)loadLibrariesWithDispatchGroup:(id)arg1;
- (void)setupInitialRemoteLibrariesWithDispatchGroup:(id)arg1;
- (void)copyInternalLibraryToApplicationSupport;
- (id)initialRemoteLibraryDefinitions;
- (id)loadLibrariesForKey:(id)arg1 dispatchGroup:(id)arg2;
- (void)assetLibraryEnableStateChanged:(id)arg1;
- (void)assetLibraryChangedOnDisk:(id)arg1;
- (void)reloadLibrary:(id)arg1;
- (void)notifyLibraryChange:(id)arg1;
- (void)addRemoteAssetLibrary:(id)arg1;
- (void)removeRemoteAssetLibrary:(id)arg1;
- (void)removeUserAssetLibrary:(id)arg1;
- (void)saveLibraries;
- (void)saveLibraries:(id)arg1 withLibrariesKey:(id)arg2;
- (void)removeAssetLibrary:(id)arg1;
- (long long)addAssetLibraryAtURL:(id)arg1;
- (BOOL)disableLibrariesMatchingLibrary:(id)arg1 afterAdding:(BOOL)arg2;
- (id)existingLibraryMatchingLibrary:(id)arg1;
- (void)cloudLibrariesDidFinishUpdate;
- (void)cloudLibrariesWillUpdate;
- (void)addCloudLibraryFromAppcastURL:(id)arg1 teamName:(id)arg2 libraryID:(id)arg3 updatingInfo:(id)arg4 editable:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateCloudLibraryShare:(id)arg1 editable:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateCloudLibraryShare:(id)arg1 editable:(BOOL)arg2;
- (id)existingLibraryForDocumentAtURL:(id)arg1;
- (id)shareableObjectReferenceForObject:(id)arg1 forDocument:(id)arg2;
- (id)embeddedFontReferencesExcludingDocumentID:(id)arg1;
@property(readonly, nonatomic) NSArray *libraries; // @dynamic libraries;
@property(readonly, nonatomic) NSArray *availableLibraries;
- (id)init;
- (id)swatchesLibraryURL;
- (BOOL)writeSwatchesLibraryDocumentData:(id)arg1;
- (id)readSwatchesLibraryDocumentData;
- (id)previewPageWithSwatches:(id)arg1;
- (id)swatchesLibraryPreviewPage;
- (void)migrateGlobalColorsToSwatches;
- (BOOL)shouldMigrateGlobalColorsToSwatches;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

