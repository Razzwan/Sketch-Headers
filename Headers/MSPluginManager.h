//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchPluginManager/COFlowDelegate-Protocol.h>

@class MSPluginManagingState, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSTimer, NSURL;
@protocol MSPluginLogAction, MSPluginUpdater;

@interface MSPluginManager : NSObject <COFlowDelegate>
{
    NSDictionary *_plugins;
    BOOL _disableAllPlugins;
    BOOL _monitorForChanges;
    NSArray *_pluginsFolderURLs;
    long long _numberOfIncompatiblePluginsDisabled;
    NSArray *_pluginsWithSketchCompatipleUpdates;
    long long _updatesAddedToWarehouse;
    id <MSPluginLogAction> _logAction;
    NSURL *_metadataURL;
    NSDictionary *_metadata;
    NSMutableDictionary *_runningCommands;
    NSMutableDictionary *_runningCommandCallbacks;
    NSTimer *_sessionTimer;
    double _lastTimerInterval;
    id <MSPluginUpdater> _updater;
    NSArray *_folderMonitors;
    MSPluginManagingState *_pluginStateManager;
    NSMutableDictionary *_pluginVersions;
    NSMutableArray *_downloadPluginsErrors;
    NSDictionary *_incompatiblePluginVersions;
}

+ (BOOL)isPluginAtURL:(id)arg1 newerThanPluginAtURL:(id)arg2;
+ (id)warehousePluginFolderForIdentifier:(id)arg1 withVersion:(id)arg2;
+ (id)pluginsWarehouseURL;
+ (id)pluginsURLs;
+ (id)defaultPluginURL;
+ (id)mainPluginsFolderURL;
+ (void)initialisePlugins;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *incompatiblePluginVersions; // @synthesize incompatiblePluginVersions=_incompatiblePluginVersions;
@property(retain, nonatomic) NSMutableArray *downloadPluginsErrors; // @synthesize downloadPluginsErrors=_downloadPluginsErrors;
@property(retain, nonatomic) NSMutableDictionary *pluginVersions; // @synthesize pluginVersions=_pluginVersions;
@property(readonly, nonatomic) MSPluginManagingState *pluginStateManager; // @synthesize pluginStateManager=_pluginStateManager;
@property(readonly, nonatomic) BOOL monitorForChanges; // @synthesize monitorForChanges=_monitorForChanges;
@property(retain, nonatomic) NSArray *folderMonitors; // @synthesize folderMonitors=_folderMonitors;
@property(readonly, copy, nonatomic) id <MSPluginUpdater> updater; // @synthesize updater=_updater;
@property(nonatomic) double lastTimerInterval; // @synthesize lastTimerInterval=_lastTimerInterval;
@property(retain, nonatomic) NSTimer *sessionTimer; // @synthesize sessionTimer=_sessionTimer;
@property(retain, nonatomic) NSMutableDictionary *runningCommandCallbacks; // @synthesize runningCommandCallbacks=_runningCommandCallbacks;
@property(retain, nonatomic) NSMutableDictionary *runningCommands; // @synthesize runningCommands=_runningCommands;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(nonatomic) __weak id <MSPluginLogAction> logAction; // @synthesize logAction=_logAction;
@property(nonatomic) BOOL disableAllPlugins; // @synthesize disableAllPlugins=_disableAllPlugins;
@property(nonatomic) long long updatesAddedToWarehouse; // @synthesize updatesAddedToWarehouse=_updatesAddedToWarehouse;
@property(nonatomic) NSArray *pluginsWithSketchCompatipleUpdates; // @synthesize pluginsWithSketchCompatipleUpdates=_pluginsWithSketchCompatipleUpdates;
@property(nonatomic) long long numberOfIncompatiblePluginsDisabled; // @synthesize numberOfIncompatiblePluginsDisabled=_numberOfIncompatiblePluginsDisabled;
@property(readonly, copy, nonatomic) NSArray *pluginsFolderURLs; // @synthesize pluginsFolderURLs=_pluginsFolderURLs;
- (void)alertAboutUnsupportedPluginBundle:(id)arg1;
- (void)removePluginVersionsNotInIdentifiers:(id)arg1;
- (void)addDownloadAndDecompressPluginError:(id)arg1;
- (id)compatiblePluginUpdatesNotDownloaded;
- (id)latestPluginUpdatesNotDownloaded;
@property(readonly, nonatomic) long long numberOfPluginsWithUpdates;
@property(readonly, nonatomic) long long numberOfPluginsWithSketchCompatibleUpdates;
- (id)downloadedPluginURLWithIdentifier:(id)arg1 version:(id)arg2;
- (id)firstPluginBundleFoundInFolder:(id)arg1;
- (BOOL)installPluginAtURL:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (void)resetAllPluginMetadataToBeDisabled;
- (BOOL)contentsSameForSmallTextFiles:(id)arg1 file2:(id)arg2;
- (void)downloadRemotePluginsBlacklist;
- (BOOL)isPluginUpdateDownloadedWithIdentifier:(id)arg1 version:(id)arg2;
- (BOOL)installPluginWithIdentifier:(id)arg1 version:(id)arg2 error:(id *)arg3;
- (void)downloadAndInstallPluginWithIdentifier:(id)arg1 version:(id)arg2 downloadCompletionHandler:(CDUnknownBlockType)arg3;
- (void)downloadPluginUpdate:(id)arg1 withVersion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearPluginsCache;
- (void)cancelDownloadingPluginVersions;
- (void)downloadLatestPluginUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadCompatiblePluginUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadPluginUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)checkForPluginUpdatesWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkForPluginUpdates:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)shouldEnablePluginIdentifier:(id)arg1 withVersion:(id)arg2;
- (void)registerIncompatiblePlugins;
- (BOOL)isPluginWithIdentifier:(id)arg1 incompatibleWithVersion:(id)arg2;
- (BOOL)isIncompatiblePlugin:(id)arg1;
- (id)versionsForPlugin:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *incompatiblePluginsWithCompatibleUpdates;
@property(readonly, copy, nonatomic) NSDictionary *incompatiblePluginsWithUpdates;
@property(readonly, copy, nonatomic) NSArray *incompatiblePlugins;
- (id)disabledPlugins;
- (id)enabledPlugins;
- (void)disablePlugin:(id)arg1;
- (void)enablePlugin:(id)arg1;
- (void)addPluginsToMenu:(id)arg1 selector:(SEL)arg2;
- (void)addCommands:(id)arg1 toMenu:(id)arg2 fromDescription:(id)arg3 selector:(SEL)arg4;
- (void)sortMenu:(id)arg1 recursively:(BOOL)arg2;
- (void)runHandlerWithKey:(id)arg1 fromCommand:(id)arg2 inPlugin:(id)arg3 withContext:(id)arg4;
- (void)editBundle:(id)arg1;
- (void)didClearEventStack:(id)arg1;
- (void)cleanupFinishedCommands;
- (void)trackLongRunningCommand:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)stopTrackingLongRunningCommandWithSpecifier:(id)arg1;
- (id)commandWithSpecifier:(id)arg1;
@property(copy, nonatomic) NSDictionary *plugins;
- (void)setupFolderMonitoringWithVisitedURLs:(id)arg1;
- (void)clearFolderMonitors;
- (void)reloadPlugins;
- (id)pluginsFromResolvedFolderAtURL:(id)arg1 visitedURLs:(id)arg2 relativeFolderPath:(id)arg3 ignoredNames:(id)arg4;
- (id)pluginsByResolvingFolderAtURL:(id)arg1 visitedURLs:(id)arg2 relativeFolderPath:(id)arg3 ignoredNames:(id)arg4;
- (id)relativePathByDeletingCommonPathComponentsWithFileURL:(id)arg1 fromURL:(id)arg2;
- (id)folderNamesToIgnore;
@property(readonly, copy, nonatomic) NSURL *mainPluginsFolderURL;
- (void)dealloc;
- (id)initWithPluginsFolderURLs:(id)arg1 updater:(id)arg2 pluginStateManager:(id)arg3;
- (id)init;

@end

