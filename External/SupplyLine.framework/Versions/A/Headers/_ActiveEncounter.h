// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveEncounter.h instead.

#import <CoreData/CoreData.h>


extern const struct ActiveEncounterAttributes {
	__unsafe_unretained NSString *category;
	__unsafe_unretained NSString *created;
	__unsafe_unretained NSString *currentRound;
	__unsafe_unretained NSString *endDate;
	__unsafe_unretained NSString *gameSystemName;
	__unsafe_unretained NSString *modified;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
	__unsafe_unretained NSString *numberOfRounds;
	__unsafe_unretained NSString *numberOfTurns;
	__unsafe_unretained NSString *preparedEncounterName;
	__unsafe_unretained NSString *startDate;
	__unsafe_unretained NSString *state;
	__unsafe_unretained NSString *turnQueue;
} ActiveEncounterAttributes;

extern const struct ActiveEncounterRelationships {
	__unsafe_unretained NSString *maps;
	__unsafe_unretained NSString *participants;
	__unsafe_unretained NSString *preparedEncounter;
	__unsafe_unretained NSString *regions;
	__unsafe_unretained NSString *timeline;
} ActiveEncounterRelationships;

extern const struct ActiveEncounterFetchedProperties {
} ActiveEncounterFetchedProperties;

@class ActiveMap;
@class ActiveParticipant;
@class PreparedEncounter;
@class ActiveRegion;
@class ActiveEncounterTimelineEntry;
















@interface ActiveEncounterID : NSManagedObjectID {}
@end

@interface _ActiveEncounter : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveEncounterID*)objectID;




@property (nonatomic, strong) NSString *category;


//- (BOOL)validateCategory:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *created;


//- (BOOL)validateCreated:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *currentRound;


@property int16_t currentRoundValue;
- (int16_t)currentRoundValue;
- (void)setCurrentRoundValue:(int16_t)value_;

//- (BOOL)validateCurrentRound:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *endDate;


//- (BOOL)validateEndDate:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *gameSystemName;


//- (BOOL)validateGameSystemName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *modified;


//- (BOOL)validateModified:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *numberOfRounds;


@property int16_t numberOfRoundsValue;
- (int16_t)numberOfRoundsValue;
- (void)setNumberOfRoundsValue:(int16_t)value_;

//- (BOOL)validateNumberOfRounds:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *numberOfTurns;


@property int16_t numberOfTurnsValue;
- (int16_t)numberOfTurnsValue;
- (void)setNumberOfTurnsValue:(int16_t)value_;

//- (BOOL)validateNumberOfTurns:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *preparedEncounterName;


//- (BOOL)validatePreparedEncounterName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *startDate;


//- (BOOL)validateStartDate:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *state;


@property int16_t stateValue;
- (int16_t)stateValue;
- (void)setStateValue:(int16_t)value_;

//- (BOOL)validateState:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *turnQueue;


//- (BOOL)validateTurnQueue:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet* maps;

- (NSMutableSet*)mapsSet;




@property (nonatomic, strong) NSSet* participants;

- (NSMutableSet*)participantsSet;




@property (nonatomic, strong) PreparedEncounter* preparedEncounter;

//- (BOOL)validatePreparedEncounter:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* regions;

- (NSMutableSet*)regionsSet;




@property (nonatomic, strong) NSSet* timeline;

- (NSMutableSet*)timelineSet;





@end

@interface _ActiveEncounter (CoreDataGeneratedAccessors)

- (void)addMaps:(NSSet*)value_;
- (void)removeMaps:(NSSet*)value_;
- (void)addMapsObject:(ActiveMap*)value_;
- (void)removeMapsObject:(ActiveMap*)value_;

- (void)addParticipants:(NSSet*)value_;
- (void)removeParticipants:(NSSet*)value_;
- (void)addParticipantsObject:(ActiveParticipant*)value_;
- (void)removeParticipantsObject:(ActiveParticipant*)value_;

- (void)addRegions:(NSSet*)value_;
- (void)removeRegions:(NSSet*)value_;
- (void)addRegionsObject:(ActiveRegion*)value_;
- (void)removeRegionsObject:(ActiveRegion*)value_;

- (void)addTimeline:(NSSet*)value_;
- (void)removeTimeline:(NSSet*)value_;
- (void)addTimelineObject:(ActiveEncounterTimelineEntry*)value_;
- (void)removeTimelineObject:(ActiveEncounterTimelineEntry*)value_;

@end

@interface _ActiveEncounter (CoreDataGeneratedPrimitiveAccessors)


- (NSString *)primitiveCategory;
- (void)setPrimitiveCategory:(NSString *)value;




- (NSDate *)primitiveCreated;
- (void)setPrimitiveCreated:(NSDate *)value;




- (NSNumber *)primitiveCurrentRound;
- (void)setPrimitiveCurrentRound:(NSNumber *)value;

- (int16_t)primitiveCurrentRoundValue;
- (void)setPrimitiveCurrentRoundValue:(int16_t)value_;




- (NSDate *)primitiveEndDate;
- (void)setPrimitiveEndDate:(NSDate *)value;




- (NSString *)primitiveGameSystemName;
- (void)setPrimitiveGameSystemName:(NSString *)value;




- (NSDate *)primitiveModified;
- (void)setPrimitiveModified:(NSDate *)value;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;




- (NSNumber *)primitiveNumberOfRounds;
- (void)setPrimitiveNumberOfRounds:(NSNumber *)value;

- (int16_t)primitiveNumberOfRoundsValue;
- (void)setPrimitiveNumberOfRoundsValue:(int16_t)value_;




- (NSNumber *)primitiveNumberOfTurns;
- (void)setPrimitiveNumberOfTurns:(NSNumber *)value;

- (int16_t)primitiveNumberOfTurnsValue;
- (void)setPrimitiveNumberOfTurnsValue:(int16_t)value_;




- (NSString *)primitivePreparedEncounterName;
- (void)setPrimitivePreparedEncounterName:(NSString *)value;




- (NSDate *)primitiveStartDate;
- (void)setPrimitiveStartDate:(NSDate *)value;




- (NSNumber *)primitiveState;
- (void)setPrimitiveState:(NSNumber *)value;

- (int16_t)primitiveStateValue;
- (void)setPrimitiveStateValue:(int16_t)value_;




- (NSString *)primitiveTurnQueue;
- (void)setPrimitiveTurnQueue:(NSString *)value;





- (NSMutableSet*)primitiveMaps;
- (void)setPrimitiveMaps:(NSMutableSet*)value;



- (NSMutableSet*)primitiveParticipants;
- (void)setPrimitiveParticipants:(NSMutableSet*)value;



- (PreparedEncounter*)primitivePreparedEncounter;
- (void)setPrimitivePreparedEncounter:(PreparedEncounter*)value;



- (NSMutableSet*)primitiveRegions;
- (void)setPrimitiveRegions:(NSMutableSet*)value;



- (NSMutableSet*)primitiveTimeline;
- (void)setPrimitiveTimeline:(NSMutableSet*)value;


@end
