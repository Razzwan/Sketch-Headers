//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSColorInspectorSection.h"

#import "MSColorInspectorImageDataControllerDelegate-Protocol.h"
#import "MSFrequentImagesControllerDelegate-Protocol.h"

@class MSColorHeaderInspectorItem, MSColorInspectorImageDataController, MSDataSupplierManager, MSFrequentImagesController, MSGenericButtonController, MSMouseTracker, MSPatternImageCell, MSTileScaleViewController, NSArray, NSArrayController, NSButton, NSImageView, NSPopUpButton, NSString, NSViewController;

@interface MSColorInspectorSectionPattern : MSColorInspectorSection <MSFrequentImagesControllerDelegate, MSColorInspectorImageDataControllerDelegate>
{
    MSGenericButtonController *_frequentImagesButton;
    MSGenericButtonController *_dataImagesButton;
    MSGenericButtonController *_refreshDataButton;
    NSArray *_frequentImages;
    NSImageView *_patternWell;
    MSPatternImageCell *_imageCell;
    NSButton *_choosePatternButton;
    NSPopUpButton *_patternTileButton;
    NSArrayController *_stylesController;
    MSColorHeaderInspectorItem *_mainViewHeader;
    MSMouseTracker *_mouseTracker;
    MSFrequentImagesController *_frequentImagesController;
    MSColorInspectorImageDataController *_imageDataController;
    NSViewController *_noPatternController;
    MSTileScaleViewController *_scaleController;
}

+ (id)presetPickerVisibilityDefaultsKey;
- (void).cxx_destruct;
@property(retain, nonatomic) MSTileScaleViewController *scaleController; // @synthesize scaleController=_scaleController;
@property(retain, nonatomic) NSViewController *noPatternController; // @synthesize noPatternController=_noPatternController;
@property(retain, nonatomic) MSColorInspectorImageDataController *imageDataController; // @synthesize imageDataController=_imageDataController;
@property(retain, nonatomic) MSFrequentImagesController *frequentImagesController; // @synthesize frequentImagesController=_frequentImagesController;
@property(retain, nonatomic) MSMouseTracker *mouseTracker; // @synthesize mouseTracker=_mouseTracker;
@property(retain, nonatomic) MSColorHeaderInspectorItem *mainViewHeader; // @synthesize mainViewHeader=_mainViewHeader;
@property(retain, nonatomic) NSArrayController *stylesController; // @synthesize stylesController=_stylesController;
@property(retain, nonatomic) NSPopUpButton *patternTileButton; // @synthesize patternTileButton=_patternTileButton;
@property(retain, nonatomic) NSButton *choosePatternButton; // @synthesize choosePatternButton=_choosePatternButton;
@property(retain, nonatomic) MSPatternImageCell *imageCell; // @synthesize imageCell=_imageCell;
@property(retain, nonatomic) NSImageView *patternWell; // @synthesize patternWell=_patternWell;
@property(retain, nonatomic) NSArray *frequentImages; // @synthesize frequentImages=_frequentImages;
- (void)refreshIfNecessary:(id)arg1;
- (id)usableSupplierIdentifiers;
- (void)imageDataControllerMenuDidClose:(id)arg1;
- (void)imageDataControllerDidClearData:(id)arg1;
- (void)imageDataControllerDidRefreshData:(id)arg1;
- (void)imageDataController:(id)arg1 didChooseDataSupplier:(id)arg2;
- (void)frequentColorsControllerMenuDidClose:(id)arg1;
- (void)frequentImagesController:(id)arg1 didChooseImage:(id)arg2;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (BOOL)assetPickerController:(id)arg1 shouldChangeToDisplayMode:(unsigned long long)arg2;
- (BOOL)allowAlternativeDisplayModesForAssetPickerController:(id)arg1;
- (unsigned long long)assetType;
- (void)updatePatternWellImage;
- (id)createPresetFromCurrentSelection;
- (void)controlDidSelectAsset:(id)arg1;
- (void)fillModeAction:(id)arg1;
- (void)patternWellAction:(id)arg1;
- (void)choosePatternImage:(id)arg1;
- (void)setFillImage:(id)arg1;
- (void)validate;
- (BOOL)isTiled;
- (unsigned long long)fillType;
- (void)enableSectionButtonAction:(id)arg1;
- (id)assetPickerDataSources;
- (id)assetPickerHeaderAccessoryViews;
- (id)scrollableViews;
- (void)updateChooseImageButton;
- (void)mouseAction:(id)arg1;
@property(readonly) MSDataSupplierManager *dataSupplierManager;
- (id)parentLayer;
- (BOOL)doLayersHaveSameDataSupplier:(id)arg1;
- (id)styleFillForLayer:(id)arg1;
@property(readonly, nonatomic) NSArray *layersWithData;
- (BOOL)canApplyData;
@property(readonly, nonatomic) BOOL canRefreshData;
- (void)refreshData:(id)arg1;
- (void)showData:(id)arg1;
- (void)showFrequentImages:(id)arg1;
@property(readonly, nonatomic) MSGenericButtonController *refreshDataButton;
@property(readonly, nonatomic) MSGenericButtonController *dataImagesButton;
@property(readonly, nonatomic) MSGenericButtonController *frequentImagesButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

