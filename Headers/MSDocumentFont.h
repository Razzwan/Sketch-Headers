//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/NSCopying-Protocol.h>

@class NSArray, NSFont, NSSet, NSString;

@interface MSDocumentFont : NSObject <NSCopying>
{
    BOOL _available;
    BOOL _used;
    BOOL _foreign;
    BOOL _embedded;
    BOOL _tooBig;
    BOOL _replaceable;
    NSString *_fontFamilyName;
    NSSet *_postscriptNames;
    NSArray *_fontReferences;
}

+ (id)documentFontWithReference:(id)arg1;
+ (id)documentFontWithUnavailableFontName:(id)arg1;
+ (id)documentFontKeyforPostscriptName:(id)arg1;
+ (id)embeddableFontsInDocument:(id)arg1;
+ (id)missingFontsInDocument:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *fontReferences; // @synthesize fontReferences=_fontReferences;
@property(nonatomic, getter=isReplaceable) BOOL replaceable; // @synthesize replaceable=_replaceable;
@property(nonatomic, getter=isTooBig) BOOL tooBig; // @synthesize tooBig=_tooBig;
@property(nonatomic, getter=isEmbedded) BOOL embedded; // @synthesize embedded=_embedded;
@property(nonatomic, getter=isForeign) BOOL foreign; // @synthesize foreign=_foreign;
@property(nonatomic, getter=isUsed) BOOL used; // @synthesize used=_used;
@property(nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(copy, nonatomic) NSSet *postscriptNames; // @synthesize postscriptNames=_postscriptNames;
@property(copy, nonatomic) NSString *fontFamilyName; // @synthesize fontFamilyName=_fontFamilyName;
- (long long)compareWithDocumentFont:(id)arg1;
- (unsigned long long)byteSizeForReference:(id)arg1;
- (unsigned long long)totalByteSizeOfAllReferences;
@property(readonly, copy, nonatomic) NSString *lookupKey;
@property(readonly, copy, nonatomic) NSFont *bestPreviewFont;
- (id)postScriptNameOrFamilyName;
@property(readonly, nonatomic) NSString *displayName;
- (id)displayNameForSystemFontName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)documentFontAddingReference:(id)arg1;

@end
