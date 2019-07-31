//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSWelcomeCollectionItemPreviewImageLoading-Protocol.h"

@class MSWelcomeWindowController, NSImage, NSString, NSURL;

@interface MSWelcomeCollectionItem : NSObject <MSWelcomeCollectionItemPreviewImageLoading>
{
    NSString *_title;
    MSWelcomeWindowController *_welcomeWindowController;
    NSImage *_cachedPreviewImage;
}

+ (id)userTemplatesDirectoryURL;
+ (id)bundledTemplatesDirectoryURL;
@property(retain, nonatomic) NSImage *cachedPreviewImage; // @synthesize cachedPreviewImage=_cachedPreviewImage;
@property(nonatomic) __weak MSWelcomeWindowController *welcomeWindowController; // @synthesize welcomeWindowController=_welcomeWindowController;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL providesPreviewImage;
@property(readonly, nonatomic) NSImage *placeholderImage;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;

@end

