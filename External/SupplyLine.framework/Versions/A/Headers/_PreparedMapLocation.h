// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PreparedMapLocation.h instead.

#import <CoreData/CoreData.h>
#import "AbstractMapLocation.h"

extern const struct PreparedMapLocationAttributes {
} PreparedMapLocationAttributes;

extern const struct PreparedMapLocationRelationships {
} PreparedMapLocationRelationships;

extern const struct PreparedMapLocationFetchedProperties {
} PreparedMapLocationFetchedProperties;



@interface PreparedMapLocationID : NSManagedObjectID {}
@end

@interface _PreparedMapLocation : AbstractMapLocation {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PreparedMapLocationID*)objectID;






@end

@interface _PreparedMapLocation (CoreDataGeneratedAccessors)

@end

@interface _PreparedMapLocation (CoreDataGeneratedPrimitiveAccessors)


@end
