//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSHistoryMaker, MSImmutableDocumentData, MSMoment, NSSet, NSString;

@protocol MSHistoryMakerDelegate
- (void)historyMaker:(MSHistoryMaker *)arg1 setCurrentDocumentData:(MSImmutableDocumentData *)arg2 selecting:(NSSet *)arg3 onPage:(NSString *)arg4;
- (MSImmutableDocumentData *)currentDocumentData:(MSHistoryMaker *)arg1;
- (void)historyMakerDidProgressHistory:(MSHistoryMaker *)arg1;
- (void)historyMakerDidRevertHistory:(MSHistoryMaker *)arg1;
- (void)historyMaker:(MSHistoryMaker *)arg1 privatelyUpdatedMoment:(MSMoment *)arg2;
- (void)historyMaker:(MSHistoryMaker *)arg1 didCommitMoment:(MSMoment *)arg2;
- (void)historyMaker:(MSHistoryMaker *)arg1 didApplyHistoryUpdate:(unsigned long long)arg2;
@end

