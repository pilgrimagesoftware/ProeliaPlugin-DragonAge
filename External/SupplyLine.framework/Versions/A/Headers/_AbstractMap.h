// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AbstractMap.h instead.

#import <CoreData/CoreData.h>


extern const struct AbstractMapAttributes {
	__unsafe_unretained NSString *backgroundData;
	__unsafe_unretained NSString *backgroundScale;
	__unsafe_unretained NSString *flags;
	__unsafe_unretained NSString *gridHeight;
	__unsafe_unretained NSString *gridLineColor;
	__unsafe_unretained NSString *gridLineStyle;
	__unsafe_unretained NSString *gridLineThickness;
	__unsafe_unretained NSString *gridLineXOffset;
	__unsafe_unretained NSString *gridLineYOffset;
	__unsafe_unretained NSString *gridSideLength;
	__unsafe_unretained NSString *gridWidth;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *notes;
	__unsafe_unretained NSString *scale;
} AbstractMapAttributes;

extern const struct AbstractMapRelationships {
	__unsafe_unretained NSString *locations;
} AbstractMapRelationships;

extern const struct AbstractMapFetchedProperties {
} AbstractMapFetchedProperties;

@class AbstractMapLocation;
















@interface AbstractMapID : NSManagedObjectID {}
@end

@interface _AbstractMap : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AbstractMapID*)objectID;




@property (nonatomic, strong) NSData *backgroundData;


//- (BOOL)validateBackgroundData:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *backgroundScale;


@property double backgroundScaleValue;
- (double)backgroundScaleValue;
- (void)setBackgroundScaleValue:(double)value_;

//- (BOOL)validateBackgroundScale:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *flags;


@property int64_t flagsValue;
- (int64_t)flagsValue;
- (void)setFlagsValue:(int64_t)value_;

//- (BOOL)validateFlags:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridHeight;


@property int16_t gridHeightValue;
- (int16_t)gridHeightValue;
- (void)setGridHeightValue:(int16_t)value_;

//- (BOOL)validateGridHeight:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *gridLineColor;


//- (BOOL)validateGridLineColor:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridLineStyle;


@property int16_t gridLineStyleValue;
- (int16_t)gridLineStyleValue;
- (void)setGridLineStyleValue:(int16_t)value_;

//- (BOOL)validateGridLineStyle:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridLineThickness;


@property double gridLineThicknessValue;
- (double)gridLineThicknessValue;
- (void)setGridLineThicknessValue:(double)value_;

//- (BOOL)validateGridLineThickness:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridLineXOffset;


@property int16_t gridLineXOffsetValue;
- (int16_t)gridLineXOffsetValue;
- (void)setGridLineXOffsetValue:(int16_t)value_;

//- (BOOL)validateGridLineXOffset:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridLineYOffset;


@property int16_t gridLineYOffsetValue;
- (int16_t)gridLineYOffsetValue;
- (void)setGridLineYOffsetValue:(int16_t)value_;

//- (BOOL)validateGridLineYOffset:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridSideLength;


@property int16_t gridSideLengthValue;
- (int16_t)gridSideLengthValue;
- (void)setGridSideLengthValue:(int16_t)value_;

//- (BOOL)validateGridSideLength:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *gridWidth;


@property int16_t gridWidthValue;
- (int16_t)gridWidthValue;
- (void)setGridWidthValue:(int16_t)value_;

//- (BOOL)validateGridWidth:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSString *name;


//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSData *notes;


//- (BOOL)validateNotes:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSNumber *scale;


@property double scaleValue;
- (double)scaleValue;
- (void)setScaleValue:(double)value_;

//- (BOOL)validateScale:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet* locations;

- (NSMutableSet*)locationsSet;





@end

@interface _AbstractMap (CoreDataGeneratedAccessors)

- (void)addLocations:(NSSet*)value_;
- (void)removeLocations:(NSSet*)value_;
- (void)addLocationsObject:(AbstractMapLocation*)value_;
- (void)removeLocationsObject:(AbstractMapLocation*)value_;

@end

@interface _AbstractMap (CoreDataGeneratedPrimitiveAccessors)


- (NSData *)primitiveBackgroundData;
- (void)setPrimitiveBackgroundData:(NSData *)value;




- (NSNumber *)primitiveBackgroundScale;
- (void)setPrimitiveBackgroundScale:(NSNumber *)value;

- (double)primitiveBackgroundScaleValue;
- (void)setPrimitiveBackgroundScaleValue:(double)value_;




- (NSNumber *)primitiveFlags;
- (void)setPrimitiveFlags:(NSNumber *)value;

- (int64_t)primitiveFlagsValue;
- (void)setPrimitiveFlagsValue:(int64_t)value_;




- (NSNumber *)primitiveGridHeight;
- (void)setPrimitiveGridHeight:(NSNumber *)value;

- (int16_t)primitiveGridHeightValue;
- (void)setPrimitiveGridHeightValue:(int16_t)value_;




- (NSString *)primitiveGridLineColor;
- (void)setPrimitiveGridLineColor:(NSString *)value;




- (NSNumber *)primitiveGridLineStyle;
- (void)setPrimitiveGridLineStyle:(NSNumber *)value;

- (int16_t)primitiveGridLineStyleValue;
- (void)setPrimitiveGridLineStyleValue:(int16_t)value_;




- (NSNumber *)primitiveGridLineThickness;
- (void)setPrimitiveGridLineThickness:(NSNumber *)value;

- (double)primitiveGridLineThicknessValue;
- (void)setPrimitiveGridLineThicknessValue:(double)value_;




- (NSNumber *)primitiveGridLineXOffset;
- (void)setPrimitiveGridLineXOffset:(NSNumber *)value;

- (int16_t)primitiveGridLineXOffsetValue;
- (void)setPrimitiveGridLineXOffsetValue:(int16_t)value_;




- (NSNumber *)primitiveGridLineYOffset;
- (void)setPrimitiveGridLineYOffset:(NSNumber *)value;

- (int16_t)primitiveGridLineYOffsetValue;
- (void)setPrimitiveGridLineYOffsetValue:(int16_t)value_;




- (NSNumber *)primitiveGridSideLength;
- (void)setPrimitiveGridSideLength:(NSNumber *)value;

- (int16_t)primitiveGridSideLengthValue;
- (void)setPrimitiveGridSideLengthValue:(int16_t)value_;




- (NSNumber *)primitiveGridWidth;
- (void)setPrimitiveGridWidth:(NSNumber *)value;

- (int16_t)primitiveGridWidthValue;
- (void)setPrimitiveGridWidthValue:(int16_t)value_;




- (NSString *)primitiveName;
- (void)setPrimitiveName:(NSString *)value;




- (NSData *)primitiveNotes;
- (void)setPrimitiveNotes:(NSData *)value;




- (NSNumber *)primitiveScale;
- (void)setPrimitiveScale:(NSNumber *)value;

- (double)primitiveScaleValue;
- (void)setPrimitiveScaleValue:(double)value_;





- (NSMutableSet*)primitiveLocations;
- (void)setPrimitiveLocations:(NSMutableSet*)value;


@end
