//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class NSStackView, NSTextField;

@interface _TtC6Sketch21ComponentGridViewItem : NSCollectionViewItem
{
    // Error parsing type: , name: stackView
    // Error parsing type: , name: pathField
    // Error parsing type: , name: metadataField
    // Error parsing type: , name: isInComponentsMode
    // Error parsing type: , name: searchResult
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) long long highlightState;
@property(nonatomic) BOOL selected;
- (BOOL)isSelected;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)prepareForReuse;
- (void)viewDidLoad;
@property(nonatomic, retain) NSTextField *metadataField; // @synthesize metadataField;
@property(nonatomic, retain) NSTextField *pathField; // @synthesize pathField;
@property(nonatomic, retain) NSStackView *stackView; // @synthesize stackView;

@end

