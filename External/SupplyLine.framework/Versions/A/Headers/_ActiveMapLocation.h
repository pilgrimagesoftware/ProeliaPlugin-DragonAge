// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveMapLocation.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMapLocation.h"

extern const struct ActiveMapLocationAttributes {
} ActiveMapLocationAttributes;

extern const struct ActiveMapLocationRelationships {
} ActiveMapLocationRelationships;

extern const struct ActiveMapLocationFetchedProperties {
} ActiveMapLocationFetchedProperties;



@interface ActiveMapLocationID : NSManagedObjectID {}
@end

@interface _ActiveMapLocation : AbstractMapLocation {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveMapLocationID*)objectID;






@end

@interface _ActiveMapLocation (CoreDataGeneratedAccessors)

@end

@interface _ActiveMapLocation (CoreDataGeneratedPrimitiveAccessors)


@end
