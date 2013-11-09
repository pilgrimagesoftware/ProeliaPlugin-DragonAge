// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PreparedParticipant.h instead.

#import <CoreData/CoreData.h>
#import "AbstractParticipant.h"

extern const struct PreparedParticipantAttributes {
} PreparedParticipantAttributes;

extern const struct PreparedParticipantRelationships {
	__unsafe_unretained NSString *encounter;
} PreparedParticipantRelationships;

extern const struct PreparedParticipantFetchedProperties {
} PreparedParticipantFetchedProperties;

@class PreparedEncounter;


@interface PreparedParticipantID : NSManagedObjectID {}
@end

@interface _PreparedParticipant : AbstractParticipant {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PreparedParticipantID*)objectID;





@property (nonatomic, strong) PreparedEncounter* encounter;

//- (BOOL)validateEncounter:(id*)value_ error:(NSError**)error_;





@end

@interface _PreparedParticipant (CoreDataGeneratedAccessors)

@end

@interface _PreparedParticipant (CoreDataGeneratedPrimitiveAccessors)



- (PreparedEncounter*)primitiveEncounter;
- (void)setPrimitiveEncounter:(PreparedEncounter*)value;


@end
