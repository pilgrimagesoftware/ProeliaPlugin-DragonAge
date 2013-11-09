// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveMap.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMap.h"

extern const struct ActiveMapAttributes {
} ActiveMapAttributes;

extern const struct ActiveMapRelationships {
	__unsafe_unretained NSString *activeEncounter;
	__unsafe_unretained NSString *tiles;
} ActiveMapRelationships;

extern const struct ActiveMapFetchedProperties {
} ActiveMapFetchedProperties;

@class ActiveEncounter;
@class ActiveMapTile;


@interface ActiveMapID : NSManagedObjectID {}
@end

@interface _ActiveMap : AbstractMap {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveMapID*)objectID;





@property (nonatomic, strong) ActiveEncounter* activeEncounter;

//- (BOOL)validateActiveEncounter:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* tiles;

- (NSMutableSet*)tilesSet;





@end

@interface _ActiveMap (CoreDataGeneratedAccessors)

- (void)addTiles:(NSSet*)value_;
- (void)removeTiles:(NSSet*)value_;
- (void)addTilesObject:(ActiveMapTile*)value_;
- (void)removeTilesObject:(ActiveMapTile*)value_;

@end

@interface _ActiveMap (CoreDataGeneratedPrimitiveAccessors)



- (ActiveEncounter*)primitiveActiveEncounter;
- (void)setPrimitiveActiveEncounter:(ActiveEncounter*)value;



- (NSMutableSet*)primitiveTiles;
- (void)setPrimitiveTiles:(NSMutableSet*)value;


@end
