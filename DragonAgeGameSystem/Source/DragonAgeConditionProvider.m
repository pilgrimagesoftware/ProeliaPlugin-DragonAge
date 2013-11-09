//
//  DragonAgeConditionProvider.m
//  EncounterTracker
//
//  Created by Paul Schifferer on 11/21/10.
//  Copyright 2010 Pilgrimage Software. All rights reserved.
//

#import "DragonAgeConditionProvider.h"

#import <SupplyLine/SLModelClasses.h>


@implementation DragonAgeConditionProvider

#pragma mark - Initialization methods

- (id)init {
    
    if((self = [super init])) {
        _conditionNames = [NSArray arrayWithObjects:
                           @"blinded", @"dazed", @"deafened", @"dominated", @"dying",
                           @"grabbed", @"helpless", @"immobilized", @"marked", @"petrified",
                           @"prone", @"removed", @"restrained", @"slowed", @"stunned",
                           @"surprised", @"unconscious", @"weakened",
                           nil];
        _conditions = [NSDictionary dictionaryWithObjectsAndKeys:
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"blinded", @"name",
                        @"Blinded", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"blinded",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"bloodied", @"name",
                        @"Bloodied", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"bloodied",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"dazed", @"name",
                        @"Dazed", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"dazed",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"deafened", @"name",
                        @"Deafened", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"deafened",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"dominated", @"name",
                        @"Dominated", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"dominated",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"dying", @"name",
                        @"Dying", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"dying",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"grabbed", @"name",
                        @"Grabbed", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"grabbed",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"helpless", @"name",
                        @"Helpless", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"helpless",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"immobilized", @"name",
                        @"Immobilized", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"immobilized",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"marked", @"name",
                        @"Marked", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"marked",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"petrified", @"name",
                        @"Petrified", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"petrified",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"prone", @"name",
                        @"Prone", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"prone",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"removed", @"name",
                        @"Removed from play", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"removed",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"restrained", @"name",
                        @"Restrained", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"restrained",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"slowed", @"name",
                        @"Slowed", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"slowed",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"stunned", @"name",
                        @"Stunned", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"stunned",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"surprised", @"name",
                        @"Surprised", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"surprised",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"unconscious", @"name",
                        @"Unconscious", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"unconscious",
                       [NSDictionary dictionaryWithObjectsAndKeys:
                        @"weakened", @"name",
                        @"Weakened", @"label",
                        [NSNumber numberWithInt:CONDITION_TYPE_NORMAL], @"type",
                        [NSNumber numberWithInt:0], @"adjustment",
                        [NSNumber numberWithInt:CONDITION_END_ENCOUNTER], @"end",
                        @"", @"description",
                        nil], @"weakened",
                       nil];
    }
    
    return self;
}


#pragma mark - Condition provider methods

- (NSArray*)conditionNames {
    return _conditionNames;
}

- (NSArray*)additionalConditionNamesForParticipant:(ActiveParticipant*)activeParticipant {
    
    NSMutableArray* conditionsNamesArray = [[NSMutableArray alloc] init];
    
    double currentHealth = [activeParticipant currentHealthValue];
    double maxHealth = [activeParticipant maxHealthValue];
    
    if(currentHealth <= (maxHealth / 2.0f)) {
        [conditionsNamesArray addObject:@"bloodied"];
    }
    
    return conditionsNamesArray;
}

- (NSInteger)numberOfConditions {
    return [_conditionNames count];
}

- (NSString*)conditionImageNameForIndex:(NSInteger)theIndex {
    return [NSString stringWithFormat:@"condition-%@.png", [_conditionNames objectAtIndex:theIndex]];            
}

- (NSString*)conditionImageNameForName:(NSString*)name {
    return [NSString stringWithFormat:@"condition-%@.png", name];            
}

- (NSString*)conditionOnImageNameForIndex:(NSInteger)theIndex {
    return [NSString stringWithFormat:@"condition-%@-on.png", [_conditionNames objectAtIndex:theIndex]];            
}

- (NSString*)conditionOnImageNameForName:(NSString *)name {
    return [NSString stringWithFormat:@"condition-%@-on.png", name];            
}

- (NSString*)conditionOffImageNameForIndex:(NSInteger)theIndex {
    return [NSString stringWithFormat:@"condition-%@-off.png", [_conditionNames objectAtIndex:theIndex]];            
}

- (NSString*)conditionOffImageNameForName:(NSString *)name {
    return [NSString stringWithFormat:@"condition-%@-off.png", name];            
}

- (NSString*)conditionNameForIndex:(NSInteger)theIndex {
    return [_conditionNames objectAtIndex:theIndex];            
}

- (NSString*)conditionLabelForName:(NSString*)name {
    return NSLocalizedString([[_conditions objectForKey:name] objectForKey:@"label"], @"");
}

- (NSString*)conditionLabelForIndex:(NSInteger)theIndex {
    return [self conditionLabelForName:[_conditionNames objectAtIndex:theIndex]];
}

- (NSInteger)conditionTypeForName:(NSString*)name {
    return [(NSNumber*)[[_conditions objectForKey:name] objectForKey:@"type"] integerValue];
}

- (NSInteger)conditionTypeForIndex:(NSInteger)theIndex {
    return [self conditionTypeForName:[_conditionNames objectAtIndex:theIndex]];
}

- (CGFloat)conditionAdjustmentForName:(NSString*)name {
    return [[[_conditions objectForKey:name] objectForKey:@"adjustment"] floatValue];
}

- (CGFloat)conditionAdjustmentForIndex:(NSInteger)theIndex {
    return [self conditionAdjustmentForName:[_conditionNames objectAtIndex:theIndex]];
}

- (NSString*)conditionDescriptionForName:(NSString*)name {
    return NSLocalizedString([[_conditions objectForKey:name] objectForKey:@"description"], @"");
}

- (NSString*)conditionDescriptionForIndex:(NSInteger)theIndex {
    return [self conditionDescriptionForName:[_conditionNames objectAtIndex:theIndex]];
}

- (NSInteger)conditionEndForName:(NSString*)name {
    return [(NSNumber*)[[_conditions objectForKey:name] objectForKey:@"end"] integerValue];
}

- (NSInteger)conditionEndForIndex:(NSInteger)theIndex {
    return [self conditionEndForName:[_conditionNames objectAtIndex:theIndex]];
}

@end
