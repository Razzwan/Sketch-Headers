#import "_MSLayer.h"

#import "BCOutlineViewNode.h"
#import "MSLayerContainment.h"
#import "MSLayerManipulation.h"
#import "MSLayerTraits.h"
#import "MSRectDelegate.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MSAbsoluteRect, NSAffineTransform, NSDictionary, NSMenu, NSString;

@interface MSLayer : _MSLayer <BCOutlineViewNode, MSLayerContainment, MSLayerManipulation, MSLayerTraits, NSCoding, NSCopying, MSRectDelegate>
{
    long long skipDrawingSelectionCounter;
    BOOL _isHovering;
    BOOL _isAlreadyCaching;
    BOOL _isSelected;
    NSAffineTransform *_lightweightTransform;
    unsigned long long _traits;
    MSAbsoluteRect *_absoluteRect;
    id _undoRefreshTimer;
    struct CGRect _lightweightDrawableFrame;
    struct CGRect _lightweightAbsoluteRect;
    struct CGRect _cachedInfluenceRectForBounds;
}

+ (void)makeLayerNamesUnique:(id)arg1;
+ (id)layersSeparatedByGroups:(id)arg1;
+ (id)keyPathsForValuesAffectingUserVisibleRotation;
+ (void)alignLayers:(id)arg1 toValue:(double)arg2 forKey:(id)arg3;
+ (struct CGRect)alignmentRectForLayers:(id)arg1;
+ (void)alignLayers:(id)arg1 withMode:(unsigned long long)arg2 toKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)keyPathsForValuesAffectingHasHighlight;
+ (unsigned long long)traits;
@property(nonatomic) struct CGRect cachedInfluenceRectForBounds; // @synthesize cachedInfluenceRectForBounds=_cachedInfluenceRectForBounds;
@property(retain, nonatomic) id undoRefreshTimer; // @synthesize undoRefreshTimer=_undoRefreshTimer;
@property(retain, nonatomic) MSAbsoluteRect *absoluteRect; // @synthesize absoluteRect=_absoluteRect;
@property(nonatomic) struct CGRect lightweightAbsoluteRect; // @synthesize lightweightAbsoluteRect=_lightweightAbsoluteRect;
@property(nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(retain, nonatomic) NSAffineTransform *lightweightTransform; // @synthesize lightweightTransform=_lightweightTransform;
@property(nonatomic) struct CGRect lightweightDrawableFrame; // @synthesize lightweightDrawableFrame=_lightweightDrawableFrame;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL isAlreadyCaching; // @synthesize isAlreadyCaching=_isAlreadyCaching;
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
- (void).cxx_destruct;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1;
- (void)groupDidRemoveThisLayer:(id)arg1;
- (void)groupDidAddThisLayer:(id)arg1;
- (BOOL)canRotate;
- (BOOL)isFrameEqualForSync:(id)arg1;
- (BOOL)isLayerExportable;
- (void)assignWithOriginalLinkedStyleIfNecessary;
- (id)layerWithID:(id)arg1;
- (void)setHeightRespectingProportions:(double)arg1;
- (void)setWidthRespectingProportions:(double)arg1;
- (void)setMid:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGRect rect;
@property(nonatomic) struct CGRect frameInArtboard;
- (void)setFrameInArtboard:(struct CGRect)arg1 insertingIntoGroup:(id)arg2;
- (BOOL)calculateHasBlendedLayer;
- (BOOL)canBeSelectedOnCanvas;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)canBeTransformed;
- (void)setRotation:(double)arg1;
- (void)setIsFlippedVertical:(BOOL)arg1;
- (void)setIsFlippedHorizontal:(BOOL)arg1;
- (void)multiplyBy:(double)arg1;
- (void)clearInfluenceCache;
- (void)concatAncestorTransforms;
- (id)ancestorTransforms;
- (id)transform;
- (struct CGAffineTransform)CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
@property(nonatomic) struct _CHTransformStruct transformStruct;
- (struct CGRect)convertRectToAbsoluteCoordinates:(struct CGRect)arg1;
- (struct CGPoint)convertPointToLayerCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParentRoot:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToParentRoot:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (id)allLayersWithForcedClickThrough:(BOOL)arg1;
- (BOOL)isOpenForFindingAllLayers:(BOOL)arg1;
- (id)children;
- (id)ancestors;
- (id)parentArtboard;
- (id)parentRoot;
- (id)parentPage;
- (BOOL)isOpen;
- (BOOL)handleDoubleClick;
- (void)removeFromParent;
- (void)invalidateLightweightCopy:(id)arg1;
- (BOOL)isUndoingModelObjectChange;
- (void)refreshForPropertyChanged;
- (void)objectDidChange;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (void)calculateProportions;
- (BOOL)isRectIntegral;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
- (void)setAbsolutePosition:(struct CGPoint)arg1;
- (struct CGPoint)absolutePosition;
- (BOOL)closePath;
- (void)hideSelectionTemporarily;
- (id)bezierPathWithTransforms;
- (id)bezierPath;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (struct CGRect)translateInfluenceRectFromBoundsToFrame:(struct CGRect)arg1;
- (BOOL)hasTransforms;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)layerDidChange;
- (struct CGRect)absoluteInfluenceRect;
- (struct CGRect)calculateInfluenceRectForBounds;
- (struct BCEdgePaddings)influenceRectEdgePaddingsThatDoNotCascade;
- (double)influenceRectPaddingThatCascadesToContainedLayers;
- (struct BCEdgePaddings)influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct CGRect)influenceRectForFrameFromBoundsInfluenceRect:(struct CGRect)arg1;
- (struct CGRect)influenceRectForFrame;
- (struct CGRect)influenceRectForBounds;
- (id)cachedImageSetUsingBlock:(CDUnknownBlockType)arg1;
- (id)cachedImage;
- (void)clearCachedImage;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (void)setIgnoreNextClickThrough:(BOOL)arg1;
- (BOOL)useProportionalResizingFromCorner:(long long)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (void)parentWillResizeLayerToRect:(struct CGRect)arg1;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 force:(BOOL)arg2 zoomValue:(double)arg3;
- (BOOL)includeInLayersBelowPoint;
- (BOOL)hitTest:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)isTooSmallForHitTesting:(double)arg1;
- (long long)selectedCorner:(struct CGPoint)arg1 zoom:(double)arg2;
- (void)setLayerListExpandedType:(long long)arg1;
@property(readonly, nonatomic) BOOL isExpanded;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2;
- (BOOL)containsSelectedItem;
- (BOOL)flattenIfNecessary;
- (void)layerFinishedResize;
- (void)layerWillResize;
- (struct CGRect)boundsRect;
@property(readonly, nonatomic) struct CGRect bounds;
@property(retain, nonatomic) NSString *name;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) double proportions;
@property(nonatomic) BOOL constrainProportions;
- (unsigned long long)selectionCornerMaskWithZoomValue:(double)arg1;
- (BOOL)shouldDrawSelection;
- (struct CGRect)frameForTransforms;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
- (void)prepareObjectCopy:(id)arg1;
- (Class)classToUseForNameCounter;
- (id)layersSharingStyle:(id)arg1;
- (id)rootForNameUniqueing;
- (id)namesOfAllLayersInContainer:(id)arg1;
- (void)makeNameUnique;
- (id)defaultName;
- (id)objectIDsForSelfAncestorsAndChildren;
- (BOOL)isLine;
- (BOOL)isSharedObject;
- (id)usedStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)objectDidInit;
- (void)initEmptyObject;
- (id)handlerName;
- (BOOL)canBeHidden;
- (BOOL)canFlatten;
- (id)CSSStringFromFloat:(double)arg1;
- (id)CSSAttributes;
- (id)CSSRotation;
- (id)CSSAttributeString;
- (BOOL)canSmartRotate;
- (BOOL)shouldFlattenAfterRotate;
- (void)toggleClosePath;
- (void)layerDidResizeFromInspector;
@property(nonatomic) double userVisibleRotation;
- (id)inspectorViewControllers;
- (id)inspectorViewControllerNames;
- (BOOL)canBeHovered;
- (id)bezierPathForHover;
- (id)colorForHover;
- (void)drawHoverWithZoom:(double)arg1;
- (void)writeBitmapImageToFile:(id)arg1;
- (id)parentForInsertingLayers;
- (id)displayName;
- (void)changeColor:(id)arg1;
- (BOOL)supportsInnerOuterBorders;
- (BOOL)canSplitPaths;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (id)snapItemForDrawing;
- (id)snapLines;
- (Class)layerSnapperObjectClass;
- (BOOL)canSnapSizeToLayer:(id)arg1;
- (BOOL)canSnapToLayer:(id)arg1;
- (BOOL)booleanOperationCanBeReset;
- (id)duplicate;
- (struct CGRect)absoluteDirtyRect;
@property(readonly, nonatomic) BOOL shouldCachePreview;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
- (id)badgeMapWithBaseName:(id)arg1;
- (void)addBadgeImageNamed:(id)arg1 toMap:(id)arg2 withKey:(id)arg3;
- (id)badgeNameLookup;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isMasked;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
@property(readonly, nonatomic) BOOL selectedInLayerList;
@property(readonly, nonatomic) BOOL expandableInLayerList;
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItem;
@property(readonly, nonatomic) NSMenu *badgeMenu;
@property(readonly, nonatomic) NSDictionary *previewImages;
- (id)previewImageWithSelectedState:(BOOL)arg1;
@property(readonly, nonatomic) NSDictionary *badgeMap;
@property(readonly, nonatomic) BOOL hasHighlight;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) unsigned long long filterType;
@property(readonly, nonatomic) unsigned long long displayType;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)closestClippingLayer;
- (id)candidatesForMasking;
- (BOOL)isPartOfClippingMask;
- (BOOL)hasClippingMask;
- (id)parentRootForAbsoluteRect;
- (id)sharedObjectOfType:(unsigned long long)arg1;
- (id)closestSymbolInstance;
- (BOOL)isInstanceOfSameSymbolAs:(id)arg1;
- (BOOL)isSymbol;
- (BOOL)containsSymbols;
- (BOOL)parentOrSelfIsSymbol;
- (BOOL)canBePartOfSymbol;
- (BOOL)canBeUsedAsSymbolDirectly;
- (void)removeAllLayers;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (void)addLayers:(id)arg1;
- (void)replaceLayersWithLayers:(id)arg1;
- (void)setupWithLayerBuilderDictionary:(id)arg1;
- (unsigned long long)shouldDraw;
- (BOOL)transparencyLayerUseRectCondition;
- (BOOL)shouldRenderInTransparencyLayer;
- (Class)rendererClass;
- (id)renderBitmapEffects:(id)arg1;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;
- (id)svgStyle;
- (void)addGradientsToDocument:(id)arg1;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (BOOL)shouldIncludeLayerInSlice:(id)arg1;
- (BOOL)intersectsSlice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
