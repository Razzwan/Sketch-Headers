//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSAssetCollectionViewDataSource, NSCollectionViewItem, NSIndexPath, NSString, NSView;
@protocol MSAsset;

@protocol MSAssetCollectionViewSourceItemProvider <NSObject>
- (NSView *)collectionViewSource:(MSAssetCollectionViewDataSource *)arg1 vendSupplementaryViewOfKind:(NSString *)arg2 forIndexPath:(NSIndexPath *)arg3;
- (NSCollectionViewItem *)collectionViewSource:(MSAssetCollectionViewDataSource *)arg1 vendItemForIndexPath:(NSIndexPath *)arg2 asset:(id <MSAsset>)arg3 name:(NSString *)arg4 highlighted:(BOOL)arg5;
@end
