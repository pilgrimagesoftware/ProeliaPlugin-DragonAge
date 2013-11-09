// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AbstractParticipant.h instead.

#import <CoreData/CoreData.h>


extern const struct AbstractParticipantAttributes {
	__unsafe_unretained NSString *color;
	__unsafe_unretained NSString *currentHealth;
	__unsafe_unretained NSString *externalKey;
	__unsafe_unretained NSString *guid;
	__unsafe_unretained NSString *image;
	__unsafe_unretained NSString *marker;
	__unsafe_unretained NSString *maxHealth;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
	__unsafe_unretained NSString *order;
	__unsafe_unretained NSString *rawData;
	__unsafe_unretained NSString *size;
	__unsafe_unretained NSString *summary;
	__unsafe_unretained NSString *tag;
	__unsafe_unretained NSString *tempHealth;
	__unsafe_unretained NSString *type;
	__unsafe_unretained NSString *x;
	__unsafe_unretained NSString *y;
	__unsafe_unretained NSString *z;
} AbstractParticipantAttributes;

extern const struct AbstractParticipantRelationships {
	__unsafe_unretained NSString *conditions;
} AbstractParticipantRelationships;

extern const struct AbstractParticipantFetchedProperties {
} AbstractParticipantFetchedProperties;

@class Condition;





















@interface AbstractParticipantID : NSManagedObjectID {}
@end

@interface _AbstractParticipant : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AbstractParticipantID*)objectID;




@property (nonatomic, strong) NSString *color;


//- (BOOL)validateColor:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *currentHealth;


@property float currentHealthValue;
- (float)currentHealthValue;
- (void)setCurrentHealthValue:(float)value_;

//- (BOOL)validateCurrentHealth:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *externalKey;


//- (BOOL)validateExternalKey:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *guid;


//- (BOOL)validateGuid:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *image;


//- (BOOL)validateImage:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *marker;


//- (BOOL)validateMarker:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *maxHealth;


@property float maxHealthValue;
- (float)maxHealthValue;
- (void)setMaxHealthValue:(float)value_;

//- (BOOL)validateMaxHealth:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *order;


@property int16_t orderValue;
- (int16_t)orderValue;
- (void)setOrderValue:(int16_t)value_;

//- (BOOL)validateOrder:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *rawData;


//- (BOOL)validateRawData:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *size;


@property int16_t sizeValue;
- (int16_t)sizeValue;
- (void)setSizeValue:(int16_t)value_;

//- (BOOL)validateSize:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *summary;


//- (BOOL)validateSummary:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *tag;


//- (BOOL)validateTag:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *tempHealth;


@property float tempHealthValue;
- (float)tempHealthValue;
- (void)setTempHealthValue:(float)value_;

//- (BOOL)validateTempHealth:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *type;


@property int16_t typeValue;
- (int16_t)typeValue;
- (void)setTypeValue:(int16_t)value_;

//- (BOOL)validateType:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *x;


@property int16_t xValue;
- (int16_t)xValue;
- (void)setXValue:(int16_t)value_;

//- (BOOL)validateX:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *y;


@property int16_t yValue;
- (int16_t)yValue;
- (void)setYValue:(int16_t)value_;

//- (BOOL)validateY:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *z;


@property int16_t zValue;
- (int16_t)zValue;
- (void)setZValue:(int16_t)value_;

//- (BOOL)validateZ:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet* conditions;

- (NSMutableSet*)conditionsSet;





@end

@interface _AbstractParticipant (CoreDataGeneratedAccessors)

- (void)addConditions:(NSSet*)value_;
- (void)removeConditions:(NSSet*)value_;
- (void)addConditionsObject:(Condition*)value_;
- (void)removeConditionsObject:(Condition*)value_;

@end

@interface _AbstractParticipant (CoreDataGeneratedPrimitiveAccessors)


- (NSString *)primitiveColor;
- (void)setPrimitiveColor:(NSString *)value;




- (NSNumber *)primitiveCurrentHealth;
- (void)setPrimitiveCurrentHealth:(NSNumber *)value;

- (float)primitiveCurrentHealthValue;
- (void)setPrimitiveCurrentHealthValue:(float)value_;




- (NSString *)primitiveExternalKey;
- (void)setPrimitiveExternalKey:(NSString *)value;




- (NSString *)primitiveGuid;
- (void)setPrimitiveGuid:(NSString *)value;




- (NSData *)primitiveImage;
- (void)setPrimitiveImage:(NSData *)value;




- (NSString *)primitiveMarker;
- (void)setPrimitiveMarker:(NSString *)value;




- (NSNumber *)primitiveMaxHealth;
- (void)setPrimitiveMaxHealth:(NSNumber *)value;

- (float)primitiveMaxHealthValue;
- (void)setPrimitiveMaxHealthValue:(float)value_;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;




- (NSNumber *)primitiveOrder;
- (void)setPrimitiveOrder:(NSNumber *)value;

- (int16_t)primitiveOrderValue;
- (void)setPrimitiveOrderValue:(int16_t)value_;




- (NSData *)primitiveRawData;
- (void)setPrimitiveRawData:(NSData *)value;




- (NSNumber *)primitiveSize;
- (void)setPrimitiveSize:(NSNumber *)value;

- (int16_t)primitiveSizeValue;
- (void)setPrimitiveSizeValue:(int16_t)value_;




- (NSString *)primitiveSummary;
- (void)setPrimitiveSummary:(NSString *)value;




- (NSString *)primitiveTag;
- (void)setPrimitiveTag:(NSString *)value;




- (NSNumber *)primitiveTempHealth;
- (void)setPrimitiveTempHealth:(NSNumber *)value;

- (float)primitiveTempHealthValue;
- (void)setPrimitiveTempHealthValue:(float)value_;




- (NSNumber *)primitiveType;
- (void)setPrimitiveType:(NSNumber *)value;

- (int16_t)primitiveTypeValue;
- (void)setPrimitiveTypeValue:(int16_t)value_;




- (NSNumber *)primitiveX;
- (void)setPrimitiveX:(NSNumber *)value;

- (int16_t)primitiveXValue;
- (void)setPrimitiveXValue:(int16_t)value_;




- (NSNumber *)primitiveY;
- (void)setPrimitiveY:(NSNumber *)value;

- (int16_t)primitiveYValue;
- (void)setPrimitiveYValue:(int16_t)value_;




- (NSNumber *)primitiveZ;
- (void)setPrimitiveZ:(NSNumber *)value;

- (int16_t)primitiveZValue;
- (void)setPrimitiveZValue:(int16_t)value_;





- (NSMutableSet*)primitiveConditions;
- (void)setPrimitiveConditions:(NSMutableSet*)value;


@end
