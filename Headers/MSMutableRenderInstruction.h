//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchRendering/MSRenderInstruction.h>

@class MSImmutableDocumentData, MSOverlayItemContainer, MSOverlaySettings, NSDictionary;
@protocol MSRenderingContextCacheProvider;

@interface MSMutableRenderInstruction : MSRenderInstruction
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *overlayItemImages; // @dynamic overlayItemImages;
@property(retain, nonatomic) MSOverlayItemContainer *overlayItemContainer; // @dynamic overlayItemContainer;
@property(retain, nonatomic) MSOverlaySettings *overlaySettings; // @dynamic overlaySettings;
@property(nonatomic) struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @dynamic cacheProvider;
@property(nonatomic) struct MSRenderingParameters renderingParameters; // @dynamic renderingParameters;
@property(retain, nonatomic) MSImmutableDocumentData *documentData; // @dynamic documentData;

@end
