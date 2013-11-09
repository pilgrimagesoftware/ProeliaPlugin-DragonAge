//
//  DragonAgeConditionProviderTests.m
//  DragonAgeGameSystem
//
//  Created by Paul Schifferer on 4/29/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import "DragonAgeConditionProviderTests.h"

#import "DragonAgeConditionProvider.h"
#import "ConditionConstants.h"


#define CONDITION_0_NAME (@"blinded")

@implementation DragonAgeConditionProviderTests {
    
@private
    DragonAgeConditionProvider* _provider;
}

- (void)setUp {
    [super setUp];
    
    // Set-up code here.
    _provider = [[DragonAgeConditionProvider alloc] init];
}

- (void)tearDown {
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testConditionCollection {
    
    NSInteger count = [_provider numberOfConditions];
    STAssertTrue(count > 0, @"DnD 4 condition provider should have >0 conditions");
    
    NSArray* names = [_provider conditionNames];
    STAssertNotNil(names, @"DnD 4 condition provider names array should not be nil");
    STAssertTrue([names count] > 0, @"DnD 4 condition provider names array should have >0 entries");
    
    NSString* name = [_provider conditionNameForIndex:0];
    STAssertTrue([name isEqualToString:CONDITION_0_NAME], @"DnD 4 condition provider name for condition 0 should be '%@' (found '%@')", CONDITION_0_NAME, name);
}

- (void)testAdditionalConditions {
    
    NSArray* addlConditions = [_provider additionalConditionNamesForParticipant:nil];
    STAssertNotNil(addlConditions, @"DnD 4 condition provider additional names array should not be nil");
    STAssertTrue([addlConditions count] == 1, @"DnD 4 condition provider additional names array should have 1 item; found %ld", [addlConditions count]);
}

- (void)testConditionImages {
    
    // neutral names
    {
        NSString* imageName = [_provider conditionImageNameForIndex:0];
        STAssertNotNil(imageName, @"DnD 4 condition provider name for condition 0 shouldn't be nil");
        STAssertTrue([imageName length] > 0, @"DnD 4 condition provider name for condition 0 shouldn't be 0-length");
        
        NSString* start = [imageName substringToIndex:10];
        STAssertTrue([start isEqualToString:@"condition-"], @"DnD 4 condition provider name for condition 0 should start with 'condition-' (starts with '%@')", start);
        
        NSUInteger l = [imageName length];
        NSString* end = [imageName substringFromIndex:(l - 4)];
        STAssertTrue([end isEqualToString:@".png"], @"DnD 4 condition provider name for condition 0 should end with '.png' (ends with '%@')", end);
    }
    
    // on names
    {
        NSString* imageName = [_provider conditionOnImageNameForIndex:0];
        STAssertNotNil(imageName, @"DnD 4 condition provider name for condition 0 shouldn't be nil");
        STAssertTrue([imageName length] > 0, @"DnD 4 condition provider name for condition 0 shouldn't be 0-length");
        
        NSString* start = [imageName substringToIndex:10];
        STAssertTrue([start isEqualToString:@"condition-"], @"DnD 4 condition provider name for condition 0 should start with 'condition-' (starts with '%@')", start);
        
        NSUInteger l = [imageName length];
        NSString* end = [imageName substringFromIndex:(l - 7)];
        STAssertTrue([end isEqualToString:@"-on.png"], @"DnD 4 condition provider name for condition 0 should end with '.png' (ends with '%@')", end);
    }
    
    // off names
    {
        NSString* imageName = [_provider conditionOffImageNameForIndex:0];
        STAssertNotNil(imageName, @"DnD 4 condition provider name for condition 0 shouldn't be nil");
        STAssertTrue([imageName length] > 0, @"DnD 4 condition provider name for condition 0 shouldn't be 0-length");
        
        NSString* start = [imageName substringToIndex:10];
        STAssertTrue([start isEqualToString:@"condition-"], @"DnD 4 condition provider name for condition 0 should start with 'condition-' (starts with '%@')", start);
        
        NSUInteger l = [imageName length];
        NSString* end = [imageName substringFromIndex:(l - 8)];
        STAssertTrue([end isEqualToString:@"-off.png"], @"DnD 4 condition provider name for condition 0 should end with '.png' (ends with '%@')", end);
    }
}

- (void)testConditionMetadata {
    
    // description
    NSString* desc = [_provider conditionDescriptionForIndex:0];
    STAssertNotNil(desc, @"DnD 4 condition provider description for condition 0 should not be nil");
    
    // label
    NSString* label = [_provider conditionLabelForIndex:0];
    STAssertNotNil(label, @"DnD 4 condition provider label for condition 0 should not be nil");
    STAssertTrue([label length] > 0, @"DnD 4 condition provider label for condition 0 shouldn't be 0-length");
    
}

- (void)testConditionProperties {
    
    // type
    NSInteger type = [_provider conditionTypeForIndex:0];
    STAssertTrue(type == CONDITION_TYPE_NORMAL, @"DnD 4 condition provider type for condition 0 should be 'NORMAL'");
    
    // adjustment
    CGFloat adj = [_provider conditionAdjustmentForIndex:0];
    STAssertTrue(adj == 0.0f, @"DnD 4 condition provider type for condition 0 should be '0'");
    
    // end
    NSInteger end = [_provider conditionEndForIndex:0];
    STAssertTrue(end == CONDITION_END_ENCOUNTER, @"DnD 4 condition provider type for condition 0 should be 'ENCOUNTER'");
}

@end
