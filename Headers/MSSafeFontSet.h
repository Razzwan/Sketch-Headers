//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface MSSafeFontSet : NSObject
{
    NSSet *_fontSet;
}

+ (id)sharedSet;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *fontSet; // @synthesize fontSet=_fontSet;
- (BOOL)isFontSafe:(id)arg1;
- (id)init;

@end

