// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PreparedMap.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMap.h"

extern const struct PreparedMapAttributes {
} PreparedMapAttributes;

extern const struct PreparedMapRelationships {
	__unsafe_unretained NSString *preparedEncounter;
	__unsafe_unretained NSString *tiles;
} PreparedMapRelationships;

extern const struct PreparedMapFetchedProperties {
} PreparedMapFetchedProperties;

@class PreparedEncounter;
@class PreparedMapTile;


@interface PreparedMapID : NSManagedObjectID {}
@end

@interface _PreparedMap : AbstractMap {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PreparedMapID*)objectID;





@property (nonatomic, strong) PreparedEncounter* preparedEncounter;

//- (BOOL)validatePreparedEncounter:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* tiles;

- (NSMutableSet*)tilesSet;





@end

@interface _PreparedMap (CoreDataGeneratedAccessors)

- (void)addTiles:(NSSet*)value_;
- (void)removeTiles:(NSSet*)value_;
- (void)addTilesObject:(PreparedMapTile*)value_;
- (void)removeTilesObject:(PreparedMapTile*)value_;

@end

@interface _PreparedMap (CoreDataGeneratedPrimitiveAccessors)



- (PreparedEncounter*)primitivePreparedEncounter;
- (void)setPrimitivePreparedEncounter:(PreparedEncounter*)value;



- (NSMutableSet*)primitiveTiles;
- (void)setPrimitiveTiles:(NSMutableSet*)value;


@end
