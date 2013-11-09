// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Condition.h instead.

#import <CoreData/CoreData.h>


extern const struct ConditionAttributes {
	__unsafe_unretained NSString *adjustment;
	__unsafe_unretained NSString *applied;
	__unsafe_unretained NSString *custom;
	__unsafe_unretained NSString *endType;
	__unsafe_unretained NSString *endValue;
	__unsafe_unretained NSString *label;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
	__unsafe_unretained NSString *source;
	__unsafe_unretained NSString *type;
} ConditionAttributes;

extern const struct ConditionRelationships {
} ConditionRelationships;

extern const struct ConditionFetchedProperties {
} ConditionFetchedProperties;













@interface ConditionID : NSManagedObjectID {}
@end

@interface _Condition : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (ConditionID*)objectID;




@property (nonatomic, strong) NSNumber *adjustment;


@property float adjustmentValue;
- (float)adjustmentValue;
- (void)setAdjustmentValue:(float)value_;

//- (BOOL)validateAdjustment:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *applied;


@property BOOL appliedValue;
- (BOOL)appliedValue;
- (void)setAppliedValue:(BOOL)value_;

//- (BOOL)validateApplied:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *custom;


@property BOOL customValue;
- (BOOL)customValue;
- (void)setCustomValue:(BOOL)value_;

//- (BOOL)validateCustom:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *endType;


@property int16_t endTypeValue;
- (int16_t)endTypeValue;
- (void)setEndTypeValue:(int16_t)value_;

//- (BOOL)validateEndType:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *endValue;


//- (BOOL)validateEndValue:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *label;


//- (BOOL)validateLabel:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *source;


@property int16_t sourceValue;
- (int16_t)sourceValue;
- (void)setSourceValue:(int16_t)value_;

//- (BOOL)validateSource:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *type;


@property int16_t typeValue;
- (int16_t)typeValue;
- (void)setTypeValue:(int16_t)value_;

//- (BOOL)validateType:(id*)value_ error:(NSError**)error_;






@end

@interface _Condition (CoreDataGeneratedAccessors)

@end

@interface _Condition (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber *)primitiveAdjustment;
- (void)setPrimitiveAdjustment:(NSNumber *)value;

- (float)primitiveAdjustmentValue;
- (void)setPrimitiveAdjustmentValue:(float)value_;




- (NSNumber *)primitiveApplied;
- (void)setPrimitiveApplied:(NSNumber *)value;

- (BOOL)primitiveAppliedValue;
- (void)setPrimitiveAppliedValue:(BOOL)value_;




- (NSNumber *)primitiveCustom;
- (void)setPrimitiveCustom:(NSNumber *)value;

- (BOOL)primitiveCustomValue;
- (void)setPrimitiveCustomValue:(BOOL)value_;




- (NSNumber *)primitiveEndType;
- (void)setPrimitiveEndType:(NSNumber *)value;

- (int16_t)primitiveEndTypeValue;
- (void)setPrimitiveEndTypeValue:(int16_t)value_;




- (NSString *)primitiveEndValue;
- (void)setPrimitiveEndValue:(NSString *)value;




- (NSString *)primitiveLabel;
- (void)setPrimitiveLabel:(NSString *)value;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;




- (NSNumber *)primitiveSource;
- (void)setPrimitiveSource:(NSNumber *)value;

- (int16_t)primitiveSourceValue;
- (void)setPrimitiveSourceValue:(int16_t)value_;




- (NSNumber *)primitiveType;
- (void)setPrimitiveType:(NSNumber *)value;

- (int16_t)primitiveTypeValue;
- (void)setPrimitiveTypeValue:(int16_t)value_;




@end
