// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to ActiveParticipant.h instead.

#import <CoreData/CoreData.h>
#import "AbstractParticipant.h"

extern const struct ActiveParticipantAttributes {
	__unsafe_unretained NSString *actualOrder;
	__unsafe_unretained NSString *status;
} ActiveParticipantAttributes;

extern const struct ActiveParticipantRelationships {
	__unsafe_unretained NSString *encounter;
	__unsafe_unretained NSString *targets;
} ActiveParticipantRelationships;

extern const struct ActiveParticipantFetchedProperties {
} ActiveParticipantFetchedProperties;

@class ActiveEncounter;
@class ActiveParticipant;




@interface ActiveParticipantID : NSManagedObjectID {}
@end

@interface _ActiveParticipant : AbstractParticipant {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ActiveParticipantID*)objectID;




@property (nonatomic, strong) NSNumber *actualOrder;


@property int16_t actualOrderValue;
- (int16_t)actualOrderValue;
- (void)setActualOrderValue:(int16_t)value_;

//- (BOOL)validateActualOrder:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *status;


@property int16_t statusValue;
- (int16_t)statusValue;
- (void)setStatusValue:(int16_t)value_;

//- (BOOL)validateStatus:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) ActiveEncounter* encounter;

//- (BOOL)validateEncounter:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* targets;

- (NSMutableSet*)targetsSet;





@end

@interface _ActiveParticipant (CoreDataGeneratedAccessors)

- (void)addTargets:(NSSet*)value_;
- (void)removeTargets:(NSSet*)value_;
- (void)addTargetsObject:(ActiveParticipant*)value_;
- (void)removeTargetsObject:(ActiveParticipant*)value_;

@end

@interface _ActiveParticipant (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber *)primitiveActualOrder;
- (void)setPrimitiveActualOrder:(NSNumber *)value;

- (int16_t)primitiveActualOrderValue;
- (void)setPrimitiveActualOrderValue:(int16_t)value_;




- (NSNumber *)primitiveStatus;
- (void)setPrimitiveStatus:(NSNumber *)value;

- (int16_t)primitiveStatusValue;
- (void)setPrimitiveStatusValue:(int16_t)value_;





- (ActiveEncounter*)primitiveEncounter;
- (void)setPrimitiveEncounter:(ActiveEncounter*)value;



- (NSMutableSet*)primitiveTargets;
- (void)setPrimitiveTargets:(NSMutableSet*)value;


@end
