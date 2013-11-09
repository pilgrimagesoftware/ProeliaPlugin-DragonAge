// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AbstractMapTile.h instead.

#import <CoreData/CoreData.h>


extern const struct AbstractMapTileAttributes {
	__unsafe_unretained NSString *data;
	__unsafe_unretained NSString *scale;
	__unsafe_unretained NSString *x;
	__unsafe_unretained NSString *y;
} AbstractMapTileAttributes;

extern const struct AbstractMapTileRelationships {
} AbstractMapTileRelationships;

extern const struct AbstractMapTileFetchedProperties {
} AbstractMapTileFetchedProperties;







@interface AbstractMapTileID : NSManagedObjectID {}
@end

@interface _AbstractMapTile : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AbstractMapTileID*)objectID;




@property (nonatomic, strong) NSData *data;


//- (BOOL)validateData:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *scale;


@property double scaleValue;
- (double)scaleValue;
- (void)setScaleValue:(double)value_;

//- (BOOL)validateScale:(id*)value_ error:(NSError**)error_;




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






@end

@interface _AbstractMapTile (CoreDataGeneratedAccessors)

@end

@interface _AbstractMapTile (CoreDataGeneratedPrimitiveAccessors)


- (NSData *)primitiveData;
- (void)setPrimitiveData:(NSData *)value;




- (NSNumber *)primitiveScale;
- (void)setPrimitiveScale:(NSNumber *)value;

- (double)primitiveScaleValue;
- (void)setPrimitiveScaleValue:(double)value_;




- (NSNumber *)primitiveX;
- (void)setPrimitiveX:(NSNumber *)value;

- (int16_t)primitiveXValue;
- (void)setPrimitiveXValue:(int16_t)value_;




- (NSNumber *)primitiveY;
- (void)setPrimitiveY:(NSNumber *)value;

- (int16_t)primitiveYValue;
- (void)setPrimitiveYValue:(int16_t)value_;




@end
