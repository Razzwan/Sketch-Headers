//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingSource-Protocol.h"

@class MSExportPreviewViewModel, NSString;

@interface MSExportPreviewView : NSView <NSDraggingSource>
{
    MSExportPreviewViewModel *_viewModel;
}

@property(retain, nonatomic) MSExportPreviewViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)beginDragWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (struct CGRect)imageDrawRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

