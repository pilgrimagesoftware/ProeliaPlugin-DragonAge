// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to StoredMapLocation.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMapLocation.h"

extern const struct StoredMapLocationAttributes {
} StoredMapLocationAttributes;

extern const struct StoredMapLocationRelationships {
} StoredMapLocationRelationships;

extern const struct StoredMapLocationFetchedProperties {
} StoredMapLocationFetchedProperties;



@interface StoredMapLocationID : NSManagedObjectID {}
@end

@interface _StoredMapLocation : AbstractMapLocation {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (StoredMapLocationID*)objectID;






@end

@interface _StoredMapLocation (CoreDataGeneratedAccessors)

@end

@interface _StoredMapLocation (CoreDataGeneratedPrimitiveAccessors)


@end
