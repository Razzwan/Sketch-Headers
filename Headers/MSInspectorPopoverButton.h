//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorButton.h"

@class NSString;

@interface MSInspectorPopoverButton : MSInspectorButton
{
    BOOL _indicateMultipleSelection;
    BOOL _indicateNoSelection;
    BOOL _indicateObjectHasChanged;
    NSString *_secondaryTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(nonatomic) BOOL indicateObjectHasChanged; // @synthesize indicateObjectHasChanged=_indicateObjectHasChanged;
@property(nonatomic) BOOL indicateNoSelection; // @synthesize indicateNoSelection=_indicateNoSelection;
@property(nonatomic) BOOL indicateMultipleSelection; // @synthesize indicateMultipleSelection=_indicateMultipleSelection;
- (struct NSEdgeInsets)alignmentRectInsets;
@property(nonatomic) BOOL useDefaultImageDrawing;
- (id)attributedSecondaryTitle;
- (id)attributedTitle;
- (void)mouseDown:(id)arg1;

@end

