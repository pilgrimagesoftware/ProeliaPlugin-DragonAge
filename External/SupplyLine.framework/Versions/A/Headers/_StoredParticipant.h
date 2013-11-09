// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to StoredParticipant.h instead.

#import <CoreData/CoreData.h>
#import "AbstractParticipant.h"

extern const struct StoredParticipantAttributes {
} StoredParticipantAttributes;

extern const struct StoredParticipantRelationships {
} StoredParticipantRelationships;

extern const struct StoredParticipantFetchedProperties {
} StoredParticipantFetchedProperties;



@interface StoredParticipantID : NSManagedObjectID {}
@end

@interface _StoredParticipant : AbstractParticipant {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (StoredParticipantID*)objectID;






@end

@interface _StoredParticipant (CoreDataGeneratedAccessors)

@end

@interface _StoredParticipant (CoreDataGeneratedPrimitiveAccessors)


@end
