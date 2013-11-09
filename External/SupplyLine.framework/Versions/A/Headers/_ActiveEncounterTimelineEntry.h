// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveEncounterTimelineEntry.h instead.

#import <CoreData/CoreData.h>


extern const struct ActiveEncounterTimelineEntryAttributes {
	__unsafe_unretained NSString *details;
	__unsafe_unretained NSString *ended;
	__unsafe_unretained NSString *notes;
	__unsafe_unretained NSString *round;
	__unsafe_unretained NSString *started;
} ActiveEncounterTimelineEntryAttributes;

extern const struct ActiveEncounterTimelineEntryRelationships {
	__unsafe_unretained NSString *encounter;
	__unsafe_unretained NSString *participant;
	__unsafe_unretained NSString *targets;
} ActiveEncounterTimelineEntryRelationships;

extern const struct ActiveEncounterTimelineEntryFetchedProperties {
} ActiveEncounterTimelineEntryFetchedProperties;

@class ActiveEncounter;
@class ActiveParticipant;
@class ActiveParticipant;







@interface ActiveEncounterTimelineEntryID : NSManagedObjectID {}
@end

@interface _ActiveEncounterTimelineEntry : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveEncounterTimelineEntryID*)objectID;




@property (nonatomic, strong) NSString *details;


//- (BOOL)validateDetails:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *ended;


//- (BOOL)validateEnded:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *round;


@property int16_t roundValue;
- (int16_t)roundValue;
- (void)setRoundValue:(int16_t)value_;

//- (BOOL)validateRound:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *started;


//- (BOOL)validateStarted:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) ActiveEncounter* encounter;

//- (BOOL)validateEncounter:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) ActiveParticipant* participant;

//- (BOOL)validateParticipant:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* targets;

- (NSMutableSet*)targetsSet;





@end

@interface _ActiveEncounterTimelineEntry (CoreDataGeneratedAccessors)

- (void)addTargets:(NSSet*)value_;
- (void)removeTargets:(NSSet*)value_;
- (void)addTargetsObject:(ActiveParticipant*)value_;
- (void)removeTargetsObject:(ActiveParticipant*)value_;

@end

@interface _ActiveEncounterTimelineEntry (CoreDataGeneratedPrimitiveAccessors)


- (NSString *)primitiveDetails;
- (void)setPrimitiveDetails:(NSString *)value;




- (NSDate *)primitiveEnded;
- (void)setPrimitiveEnded:(NSDate *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;




- (NSNumber *)primitiveRound;
- (void)setPrimitiveRound:(NSNumber *)value;

- (int16_t)primitiveRoundValue;
- (void)setPrimitiveRoundValue:(int16_t)value_;




- (NSDate *)primitiveStarted;
- (void)setPrimitiveStarted:(NSDate *)value;





- (ActiveEncounter*)primitiveEncounter;
- (void)setPrimitiveEncounter:(ActiveEncounter*)value;



- (ActiveParticipant*)primitiveParticipant;
- (void)setPrimitiveParticipant:(ActiveParticipant*)value;



- (NSMutableSet*)primitiveTargets;
- (void)setPrimitiveTargets:(NSMutableSet*)value;


@end
