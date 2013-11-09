// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to StandbyGroup.h instead.

#import <CoreData/CoreData.h>


extern const struct StandbyGroupAttributes {
	__unsafe_unretained NSString *created;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
} StandbyGroupAttributes;

extern const struct StandbyGroupRelationships {
	__unsafe_unretained NSString *participants;
} StandbyGroupRelationships;

extern const struct StandbyGroupFetchedProperties {
} StandbyGroupFetchedProperties;

@class StandbyParticipant;





@interface StandbyGroupID : NSManagedObjectID {}
@end

@interface _StandbyGroup : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (StandbyGroupID*)objectID;




@property (nonatomic, strong) NSDate *created;


//- (BOOL)validateCreated:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet* participants;

- (NSMutableSet*)participantsSet;





@end

@interface _StandbyGroup (CoreDataGeneratedAccessors)

- (void)addParticipants:(NSSet*)value_;
- (void)removeParticipants:(NSSet*)value_;
- (void)addParticipantsObject:(StandbyParticipant*)value_;
- (void)removeParticipantsObject:(StandbyParticipant*)value_;

@end

@interface _StandbyGroup (CoreDataGeneratedPrimitiveAccessors)


- (NSDate *)primitiveCreated;
- (void)setPrimitiveCreated:(NSDate *)value;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;





- (NSMutableSet*)primitiveParticipants;
- (void)setPrimitiveParticipants:(NSMutableSet*)value;


@end
