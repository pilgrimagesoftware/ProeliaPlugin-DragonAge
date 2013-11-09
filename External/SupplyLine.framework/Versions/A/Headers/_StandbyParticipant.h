// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to StandbyParticipant.h instead.

#import <CoreData/CoreData.h>
#import "AbstractParticipant.h"

extern const struct StandbyParticipantAttributes {
} StandbyParticipantAttributes;

extern const struct StandbyParticipantRelationships {
	__unsafe_unretained NSString *group;
} StandbyParticipantRelationships;

extern const struct StandbyParticipantFetchedProperties {
} StandbyParticipantFetchedProperties;

@class StandbyGroup;


@interface StandbyParticipantID : NSManagedObjectID {}
@end

@interface _StandbyParticipant : AbstractParticipant {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (StandbyParticipantID*)objectID;





@property (nonatomic, strong) StandbyGroup* group;

//- (BOOL)validateGroup:(id*)value_ error:(NSError**)error_;





@end

@interface _StandbyParticipant (CoreDataGeneratedAccessors)

@end

@interface _StandbyParticipant (CoreDataGeneratedPrimitiveAccessors)



- (StandbyGroup*)primitiveGroup;
- (void)setPrimitiveGroup:(StandbyGroup*)value;


@end
