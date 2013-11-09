// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to StoredMap.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMap.h"

extern const struct StoredMapAttributes {
} StoredMapAttributes;

extern const struct StoredMapRelationships {
} StoredMapRelationships;

extern const struct StoredMapFetchedProperties {
} StoredMapFetchedProperties;



@interface StoredMapID : NSManagedObjectID {}
@end

@interface _StoredMap : AbstractMap {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (StoredMapID*)objectID;






@end

@interface _StoredMap (CoreDataGeneratedAccessors)

@end

@interface _StoredMap (CoreDataGeneratedPrimitiveAccessors)


@end
