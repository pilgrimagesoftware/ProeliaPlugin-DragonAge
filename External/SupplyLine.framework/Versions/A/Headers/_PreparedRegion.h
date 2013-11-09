// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PreparedRegion.h instead.

#import <CoreData/CoreData.h>
#import "AbstractRegion.h"

extern const struct PreparedRegionAttributes {
} PreparedRegionAttributes;

extern const struct PreparedRegionRelationships {
	__unsafe_unretained NSString *preparedEncounter;
} PreparedRegionRelationships;

extern const struct PreparedRegionFetchedProperties {
} PreparedRegionFetchedProperties;

@class PreparedEncounter;


@interface PreparedRegionID : NSManagedObjectID {}
@end

@interface _PreparedRegion : AbstractRegion {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PreparedRegionID*)objectID;





@property (nonatomic, strong) PreparedEncounter* preparedEncounter;

//- (BOOL)validatePreparedEncounter:(id*)value_ error:(NSError**)error_;





@end

@interface _PreparedRegion (CoreDataGeneratedAccessors)

@end

@interface _PreparedRegion (CoreDataGeneratedPrimitiveAccessors)



- (PreparedEncounter*)primitivePreparedEncounter;
- (void)setPrimitivePreparedEncounter:(PreparedEncounter*)value;


@end
