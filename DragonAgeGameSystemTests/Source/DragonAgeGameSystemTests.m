//
//  DragonAgeGameSystemTests.m
//  DragonAgeGameSystemTests
//
//  Created by Paul Schifferer on 4/29/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import "DragonAgeGameSystemTests.h"

#import "DragonAgeGameSystem.h"
#import "DragonAgeConditionProvider.h"


@implementation DragonAgeGameSystemTests {
    
@private
    DragonAgeGameSystem* _gameSystem;
}

- (void)setUp {
    [super setUp];
    
    // Set-up code here.
    _gameSystem = [[DragonAgeGameSystem alloc] init];
}

- (void)tearDown {
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testSystemMetadata {
    
    NSString* name = [_gameSystem name];
    STAssertTrue([name isEqualToString:@"DragonAge"], @"Expecting name 'DragonAge' for game system; found '%@'", name);
    
    NSString* label = [_gameSystem label];
    STAssertTrue([label length] > 0, @"Expecting game system label of non-zero length");    
    
    NSString* shortLabel = [_gameSystem shortLabel];
    STAssertTrue([shortLabel length] > 0, @"Expecting game system short label of non-zero length");
    
    DragonAgeConditionProvider* provider = [_gameSystem conditionProvider];
    STAssertNotNil(provider, @"Expecting condition provider from game system");
}

- (void)testApplyCondition {
    
}

- (void)testEncounterManagement {
    
    // ordering
    NSComparisonResult ordering = [_gameSystem encounterOrdering];
    STAssertTrue(ordering == NSOrderedDescending, @"Expecting descending ordering (%ld); found %ld", NSOrderedDescending, ordering);
    
    // health
    
    // status
}

- (void)testEvents {
    
    // start of encounter
    {
        NSArray* events = [_gameSystem startOfEncounterEvents];
        STAssertTrue([events count] == 1, @"Expecting 1 event for DragonAge start of encounter; found %ld", [events count]);
    }
    
    // start of round
    {
        NSArray* events = [_gameSystem startOfRoundEvents];
        STAssertTrue([events count] == 0, @"Expecting 0 events for DragonAge start of round; found %ld", [events count]);
    }
    
    // start of turn
    {
        NSArray* events = [_gameSystem startOfTurnEvents];
        STAssertTrue([events count] == 1, @"Expecting 1 event for DragonAge start of turn; found %ld", [events count]);
    }
    
    // health changed
    {
        NSArray* events = [_gameSystem healthChangedEvents];
        STAssertTrue([events count] == 0, @"Expecting 0 events for DragonAge health change; found %ld", [events count]);
    }
    
    // end of turn
    {
        NSArray* events = [_gameSystem endOfTurnEvents];
        STAssertTrue([events count] == 1, @"Expecting 1 event for DragonAge end of turn; found %ld", [events count]);
    }
    
    // end of round
    {
        NSArray* events = [_gameSystem endOfRoundEvents];
        STAssertTrue([events count] == 0, @"Expecting 0 events for DragonAge end of round; found %ld", [events count]);
    }
    
    // end of encounter
    {
        NSArray* events = [_gameSystem endOfEncounterEvents];
        STAssertTrue([events count] == 0, @"Expecting 0 events for DragonAge end of encounter; found %ld", [events count]);
    }
}

@end
