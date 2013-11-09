// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to PreparedEncounter.h instead.

#import <CoreData/CoreData.h>


extern const struct PreparedEncounterAttributes {
	__unsafe_unretained NSString *category;
	__unsafe_unretained NSString *created;
	__unsafe_unretained NSString *favorite;
	__unsafe_unretained NSString *gameSystemName;
	__unsafe_unretained NSString *modified;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
} PreparedEncounterAttributes;

extern const struct PreparedEncounterRelationships {
	__unsafe_unretained NSString *maps;
	__unsafe_unretained NSString *participants;
	__unsafe_unretained NSString *regions;
} PreparedEncounterRelationships;

extern const struct PreparedEncounterFetchedProperties {
} PreparedEncounterFetchedProperties;

@class PreparedMap;
@class PreparedParticipant;
@class PreparedRegion;









@interface PreparedEncounterID : NSManagedObjectID {}
@end

@interface _PreparedEncounter : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PreparedEncounterID*)objectID;




@property (nonatomic, strong) NSString *category;


//- (BOOL)validateCategory:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *created;


//- (BOOL)validateCreated:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *favorite;


@property BOOL favoriteValue;
- (BOOL)favoriteValue;
- (void)setFavoriteValue:(BOOL)value_;

//- (BOOL)validateFavorite:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *gameSystemName;


//- (BOOL)validateGameSystemName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSDate *modified;


//- (BOOL)validateModified:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet* maps;

- (NSMutableSet*)mapsSet;




@property (nonatomic, strong) NSSet* participants;

- (NSMutableSet*)participantsSet;




@property (nonatomic, strong) NSSet* regions;

- (NSMutableSet*)regionsSet;





@end

@interface _PreparedEncounter (CoreDataGeneratedAccessors)

- (void)addMaps:(NSSet*)value_;
- (void)removeMaps:(NSSet*)value_;
- (void)addMapsObject:(PreparedMap*)value_;
- (void)removeMapsObject:(PreparedMap*)value_;

- (void)addParticipants:(NSSet*)value_;
- (void)removeParticipants:(NSSet*)value_;
- (void)addParticipantsObject:(PreparedParticipant*)value_;
- (void)removeParticipantsObject:(PreparedParticipant*)value_;

- (void)addRegions:(NSSet*)value_;
- (void)removeRegions:(NSSet*)value_;
- (void)addRegionsObject:(PreparedRegion*)value_;
- (void)removeRegionsObject:(PreparedRegion*)value_;

@end

@interface _PreparedEncounter (CoreDataGeneratedPrimitiveAccessors)


- (NSString *)primitiveCategory;
- (void)setPrimitiveCategory:(NSString *)value;




- (NSDate *)primitiveCreated;
- (void)setPrimitiveCreated:(NSDate *)value;




- (NSNumber *)primitiveFavorite;
- (void)setPrimitiveFavorite:(NSNumber *)value;

- (BOOL)primitiveFavoriteValue;
- (void)setPrimitiveFavoriteValue:(BOOL)value_;




- (NSString *)primitiveGameSystemName;
- (void)setPrimitiveGameSystemName:(NSString *)value;




- (NSDate *)primitiveModified;
- (void)setPrimitiveModified:(NSDate *)value;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;





- (NSMutableSet*)primitiveMaps;
- (void)setPrimitiveMaps:(NSMutableSet*)value;



- (NSMutableSet*)primitiveParticipants;
- (void)setPrimitiveParticipants:(NSMutableSet*)value;



- (NSMutableSet*)primitiveRegions;
- (void)setPrimitiveRegions:(NSMutableSet*)value;


@end
