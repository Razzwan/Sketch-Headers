//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSTextInputEventHandler.h"

@class MSImmutableTextStyle, MSOverrideRepresentation, MSOverrideValue, MSSymbolInstance, MSTextLayer;

@interface MSTextOverrideEventHandler : MSTextInputEventHandler
{
    MSSymbolInstance *_instance;
    MSOverrideRepresentation *_override;
    MSOverrideValue *_overrideValue;
    MSTextLayer *_textLayer;
    MSImmutableTextStyle *_style;
}

@property(retain, nonatomic) MSImmutableTextStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) MSTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) MSOverrideValue *overrideValue; // @synthesize overrideValue=_overrideValue;
@property(retain, nonatomic) MSOverrideRepresentation *override; // @synthesize override=_override;
@property(retain, nonatomic) MSSymbolInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (void)documentChanged:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (void)setupSelectedOverride;
- (id)toolbarIdentifier;
- (id)defaultTextStyle;
- (id)stringValue;
- (id)attributedStringValue;
- (struct CGRect)absoluteFrameForRect;
- (id)immutableTextLayer;

@end

