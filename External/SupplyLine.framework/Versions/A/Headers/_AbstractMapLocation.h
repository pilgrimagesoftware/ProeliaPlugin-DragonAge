// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AbstractMapLocation.h instead.

#import <CoreData/CoreData.h>


extern const struct AbstractMapLocationAttributes {
	__unsafe_unretained NSString *height;
	__unsafe_unretained NSString *width;
	__unsafe_unretained NSString *x;
	__unsafe_unretained NSString *y;
	__unsafe_unretained NSString *z;
} AbstractMapLocationAttributes;

extern const struct AbstractMapLocationRelationships {
	__unsafe_unretained NSString *conditions;
	__unsafe_unretained NSString *map;
} AbstractMapLocationRelationships;

extern const struct AbstractMapLocationFetchedProperties {
} AbstractMapLocationFetchedProperties;

@class Condition;
@class AbstractMap;







@interface AbstractMapLocationID : NSManagedObjectID {}
@end

@interface _AbstractMapLocation : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AbstractMapLocationID*)objectID;




@property (nonatomic, strong) NSNumber *height;


@property int16_t heightValue;
- (int16_t)heightValue;
- (void)setHeightValue:(int16_t)value_;

//- (BOOL)validateHeight:(id*)value_ error:(NSError**)error_;




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




@property (nonatomic, strong) NSNumber *z;


@property int16_t zValue;
- (int16_t)zValue;
- (void)setZValue:(int16_t)value_;

//- (BOOL)validateZ:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet* conditions;

- (NSMutableSet*)conditionsSet;




@property (nonatomic, strong) AbstractMap* map;

//- (BOOL)validateMap:(id*)value_ error:(NSError**)error_;





@end

@interface _AbstractMapLocation (CoreDataGeneratedAccessors)

- (void)addConditions:(NSSet*)value_;
- (void)removeConditions:(NSSet*)value_;
- (void)addConditionsObject:(Condition*)value_;
- (void)removeConditionsObject:(Condition*)value_;

@end

@interface _AbstractMapLocation (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber *)primitiveHeight;
- (void)setPrimitiveHeight:(NSNumber *)value;

- (int16_t)primitiveHeightValue;
- (void)setPrimitiveHeightValue:(int16_t)value_;




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




- (NSNumber *)primitiveZ;
- (void)setPrimitiveZ:(NSNumber *)value;

- (int16_t)primitiveZValue;
- (void)setPrimitiveZValue:(int16_t)value_;





- (NSMutableSet*)primitiveConditions;
- (void)setPrimitiveConditions:(NSMutableSet*)value;



- (AbstractMap*)primitiveMap;
- (void)setPrimitiveMap:(AbstractMap*)value;


@end
