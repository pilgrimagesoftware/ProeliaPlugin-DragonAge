// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveMapTile.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMapTile.h"

extern const struct ActiveMapTileAttributes {
} ActiveMapTileAttributes;

extern const struct ActiveMapTileRelationships {
	__unsafe_unretained NSString *activeMap;
} ActiveMapTileRelationships;

extern const struct ActiveMapTileFetchedProperties {
} ActiveMapTileFetchedProperties;

@class ActiveMap;


@interface ActiveMapTileID : NSManagedObjectID {}
@end

@interface _ActiveMapTile : AbstractMapTile {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveMapTileID*)objectID;





@property (nonatomic, strong) ActiveMap* activeMap;

//- (BOOL)validateActiveMap:(id*)value_ error:(NSError**)error_;





@end

@interface _ActiveMapTile (CoreDataGeneratedAccessors)

@end

@interface _ActiveMapTile (CoreDataGeneratedPrimitiveAccessors)



- (ActiveMap*)primitiveActiveMap;
- (void)setPrimitiveActiveMap:(ActiveMap*)value;


@end
