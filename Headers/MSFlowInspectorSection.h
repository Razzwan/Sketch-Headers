//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "MSCollapsibleHeaderInspectorItemTarget-Protocol.h"

@class MSFlowFixLayerInspectorItem, MSFlowHeaderInspectorItem, MSFlowInspectorItem, MSHeaderInspectorItem;

@interface MSFlowInspectorSection : MSBaseInspectorSection <MSCollapsibleHeaderInspectorItemTarget>
{
    MSHeaderInspectorItem *_initialHeaderItem;
    MSFlowHeaderInspectorItem *_headerItem;
    MSFlowInspectorItem *_flowItem;
    MSFlowFixLayerInspectorItem *_fixedLayerItem;
}

@property(retain, nonatomic) MSFlowFixLayerInspectorItem *fixedLayerItem; // @synthesize fixedLayerItem=_fixedLayerItem;
@property(retain, nonatomic) MSFlowInspectorItem *flowItem; // @synthesize flowItem=_flowItem;
@property(retain, nonatomic) MSFlowHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) MSHeaderInspectorItem *initialHeaderItem; // @synthesize initialHeaderItem=_initialHeaderItem;
- (void).cxx_destruct;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (BOOL)shouldShowFixedLayerView;
- (BOOL)isInFlowEventHandler;
- (void)updateItems;
- (void)addFlowAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
