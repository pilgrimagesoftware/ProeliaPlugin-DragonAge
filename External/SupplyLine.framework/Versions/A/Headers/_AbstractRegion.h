// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AbstractRegion.h instead.

#import <CoreData/CoreData.h>


extern const struct AbstractRegionAttributes {
	__unsafe_unretained NSString *color;
	__unsafe_unretained NSString *height;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
	__unsafe_unretained NSString *width;
	__unsafe_unretained NSString *x;
	__unsafe_unretained NSString *y;
} AbstractRegionAttributes;

extern const struct AbstractRegionRelationships {
	__unsafe_unretained NSString *conditions;
} AbstractRegionRelationships;

extern const struct AbstractRegionFetchedProperties {
} AbstractRegionFetchedProperties;

@class Condition;









@interface AbstractRegionID : NSManagedObjectID {}
@end

@interface _AbstractRegion : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AbstractRegionID*)objectID;




@property (nonatomic, strong) NSString *color;


//- (BOOL)validateColor:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *height;


@property int16_t heightValue;
- (int16_t)heightValue;
- (void)setHeightValue:(int16_t)value_;

//- (BOOL)validateHeight:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *width;


@property int16_t widthValue;
- (int16_t)widthValue;
- (void)setWidthValue:(int16_t)value_;

//- (BOOL)validateWidth:(id*)value_ error:(NSError**)error_;




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





@property (nonatomic, strong) NSSet* conditions;

- (NSMutableSet*)conditionsSet;





@end

@interface _AbstractRegion (CoreDataGeneratedAccessors)

- (void)addConditions:(NSSet*)value_;
- (void)removeConditions:(NSSet*)value_;
- (void)addConditionsObject:(Condition*)value_;
- (void)removeConditionsObject:(Condition*)value_;

@end

@interface _AbstractRegion (CoreDataGeneratedPrimitiveAccessors)


- (NSString *)primitiveColor;
- (void)setPrimitiveColor:(NSString *)value;




- (NSNumber *)primitiveHeight;
- (void)setPrimitiveHeight:(NSNumber *)value;

- (int16_t)primitiveHeightValue;
- (void)setPrimitiveHeightValue:(int16_t)value_;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;




- (NSNumber *)primitiveWidth;
- (void)setPrimitiveWidth:(NSNumber *)value;

- (int16_t)primitiveWidthValue;
- (void)setPrimitiveWidthValue:(int16_t)value_;




- (NSNumber *)primitiveX;
- (void)setPrimitiveX:(NSNumber *)value;

- (int16_t)primitiveXValue;
- (void)setPrimitiveXValue:(int16_t)value_;




- (NSNumber *)primitiveY;
- (void)setPrimitiveY:(NSNumber *)value;

- (int16_t)primitiveYValue;
- (void)setPrimitiveYValue:(int16_t)value_;





- (NSMutableSet*)primitiveConditions;
- (void)setPrimitiveConditions:(NSMutableSet*)value;


@end
