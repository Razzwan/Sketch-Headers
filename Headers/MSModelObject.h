#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class MSModelObjectCache;

@interface MSModelObject : NSObject <NSCopying, NSCoding>
{
    MSModelObjectCache *_cache;
    id _objectID;
}

+ (void)clearInstanceCount;
+ (void)printInstanceCount:(id)arg1;
+ (void)addImageOwnersInCollection:(id)arg1 toSet:(id)arg2;
+ (id)imageOwnersInCollection:(id)arg1;
+ (id)imageHashesInCollection:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasCache;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyIncludingObjectIDS;
@property(readonly, nonatomic) BOOL isLightweightCopy;
- (void)invalidateLightweightCopy:(id)arg1;
@property(readonly, nonatomic) MSModelObject *lightweightCopy;
- (id)migrationsInList:(SEL *)arg1;
- (SEL *)migrationListForClass:(Class)arg1;
- (SEL *)allocateMigrationListForClass:(Class)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)decodePropertiesUsingMigrationWithCoder:(id)arg1;
- (void)performMigrationsWithCoder:(id)arg1;
- (void)enumerateMigrations:(SEL *)arg1 fromVersion:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeObjectIDWithCoder:(id)arg1;
- (void)didCatchException:(id)arg1 duringEncodeWithCoder:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (id)primitiveObjectID;
- (void)setPrimitiveObjectID:(id)arg1;
@property(copy, nonatomic) id objectID; // @synthesize objectID=_objectID;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (BOOL)hasObjectID;
- (id)generateObjectID;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)objectDidInit;
- (void)fillInEmptyObjects;
- (void)initEmptyObject;
- (id)initWithNoSetup;
- (id)init;
- (void)clearCachedValueForKey:(id)arg1;
- (void)clearCache;
- (void)updateCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 setUsingBlock:(CDUnknownBlockType)arg2;
- (id)cachedValueForKey:(id)arg1;
- (id)description;
- (id)treeAsDictionary;
- (id)simpleTreeStructure;
- (id)treeStructure;
- (void)appendTreeStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)appendSimpleStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)recordDeallocation;
- (void)recordAllocation;
- (void)addImageOwnersToSet:(id)arg1;
- (id)imageOwners;
- (id)imageHashes;

@end
