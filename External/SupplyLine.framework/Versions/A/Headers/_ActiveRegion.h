// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveRegion.h instead.

#import <CoreData/CoreData.h>
#import "AbstractRegion.h"

extern const struct ActiveRegionAttributes {
} ActiveRegionAttributes;

extern const struct ActiveRegionRelationships {
	__unsafe_unretained NSString *activeEncounter;
} ActiveRegionRelationships;

extern const struct ActiveRegionFetchedProperties {
} ActiveRegionFetchedProperties;

@class ActiveEncounter;


@interface ActiveRegionID : NSManagedObjectID {}
@end

@interface _ActiveRegion : AbstractRegion {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveRegionID*)objectID;





@property (nonatomic, strong) ActiveEncounter* activeEncounter;

//- (BOOL)validateActiveEncounter:(id*)value_ error:(NSError**)error_;





@end

@interface _ActiveRegion (CoreDataGeneratedAccessors)

@end

@interface _ActiveRegion (CoreDataGeneratedPrimitiveAccessors)



- (ActiveEncounter*)primitiveActiveEncounter;
- (void)setPrimitiveActiveEncounter:(ActiveEncounter*)value;


@end
