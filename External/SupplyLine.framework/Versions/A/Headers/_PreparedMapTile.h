// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PreparedMapTile.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMapTile.h"

extern const struct PreparedMapTileAttributes {
} PreparedMapTileAttributes;

extern const struct PreparedMapTileRelationships {
	__unsafe_unretained NSString *preparedMap;
} PreparedMapTileRelationships;

extern const struct PreparedMapTileFetchedProperties {
} PreparedMapTileFetchedProperties;

@class PreparedMap;


@interface PreparedMapTileID : NSManagedObjectID {}
@end

@interface _PreparedMapTile : AbstractMapTile {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PreparedMapTileID*)objectID;





@property (nonatomic, strong) PreparedMap* preparedMap;

//- (BOOL)validatePreparedMap:(id*)value_ error:(NSError**)error_;





@end

@interface _PreparedMapTile (CoreDataGeneratedAccessors)

@end

@interface _PreparedMapTile (CoreDataGeneratedPrimitiveAccessors)



- (PreparedMap*)primitivePreparedMap;
- (void)setPrimitivePreparedMap:(PreparedMap*)value;


@end
