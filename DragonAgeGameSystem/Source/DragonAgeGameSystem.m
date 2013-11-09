//
//  DragonAgeGameSystem.m
//  Proelia
//
//  Created by Paul Schifferer on 1/12/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

#import "DragonAgeGameSystem.h"

#import <SupplyLine/SLModelClasses.h>
#import <SupplyLine/SLConstants.h>


@implementation DragonAgeGameSystem

#pragma mark - Initialization methods

- (id)init {
    if ((self = [super init])) {
        // Initialization code here.
    }
    
    return self;
}


#pragma mark - GameSystem informational methods

+ (NSString*)name {
    return @"da";
}

- (NSString*)name {
    return [DragonAgeGameSystem name];
}

+ (NSString*)label {
    return @"Dragon Age";
}

- (NSString*)label {
    return [DragonAgeGameSystem label];
}

+ (NSString*)shortLabel {
    return @"DA";
}

- (NSString*)shortLabel {
    return [DragonAgeGameSystem shortLabel];
}


#pragma mark - GameSystem condition methods

- (id<PRConditionProvider>)conditionProvider {
    
    if(_conditionProvider == nil) {
        _conditionProvider = [[DragonAgeConditionProvider alloc] init];
    }
    
    return _conditionProvider;
}

- (BOOL)shouldApplyCondition:(id)condition
              forParticipant:(id)activeParticipant
                 duringEvent:(PRGameSystemEvent)event {

    if(event == GameSystemEventAdjustConditionsEnd) {
        // get condition adjustment value
        double adj = [condition adjustmentValue];
        if(adj != 0.0f) {
            // if adjustment is non-zero at the end of the turn, don't apply the condition
            return NO;
        }
    }
    
    return YES;
}


#pragma mark - GameSystem ordering methods

- (NSComparisonResult)encounterOrdering {
    return NSOrderedDescending;
}


#pragma mark - GameSystem event methods

- (NSArray*)startOfEncounterEvents {
    return [NSArray arrayWithObjects:
            [NSNumber numberWithInt:GameSystemEventSetOrder],
            nil];
}

- (NSArray*)startOfRoundEvents {
    return [NSArray arrayWithObjects:
            nil];
}

- (NSArray*)startOfTurnEvents {
    return [NSArray arrayWithObjects:
            [NSNumber numberWithInt:GameSystemEventAdjustConditionsStart],
            nil];
}

- (NSArray*)healthChangedEvents {
    return [NSArray arrayWithObjects:
            nil];
}

- (NSArray*)endOfTurnEvents {
    return [NSArray arrayWithObjects:
            [NSNumber numberWithInt:GameSystemEventAdjustConditionsEnd],
            nil];
}

- (NSArray*)endOfRoundEvents {
    return [NSArray arrayWithObjects:
            nil];
}

- (NSArray*)endOfEncounterEvents {
    return [NSArray arrayWithObjects:
            nil];
}


#pragma mark - GameSystem health methods

- (void)participant:(id)activeParticipant
     adjustHealthBy:(double)adjustment {
    
    double currentHealth = [[activeParticipant valueForKey:@"currentHealth"] doubleValue];   
    double maxHealth = [[activeParticipant valueForKey:@"maxHealth"] doubleValue];   
    double tempHealth = [[activeParticipant valueForKey:@"tempHealth"] doubleValue];  
    
    if(adjustment < 0) {
        // subtract from temp health, then current health
        if(fabs(adjustment) >= tempHealth) {
            currentHealth -= (fabs(adjustment) - tempHealth);
            tempHealth = 0.0f;
        }
        else {
            tempHealth += adjustment;
        }
    }
    else {
        currentHealth += adjustment;      
        if(currentHealth > maxHealth) {
            currentHealth = maxHealth;
        }
    }
    
    [activeParticipant setValue:[NSNumber numberWithDouble:currentHealth]
                         forKey:@"currentHealth"];
    [activeParticipant setValue:[NSNumber numberWithDouble:tempHealth]
                         forKey:@"tempHealth"];
}

- (PRActiveEncounterStatus)encounterStatusForParticipant:(id)activeParticipant {
    
    double deadHealth = 0.0f;
    double currentHealth = [[activeParticipant valueForKey:@"currentHealth"] doubleValue];
    
    switch ([[activeParticipant valueForKey:@"type"] integerValue]) {
        case PARTICIPANT_TYPE_PC:
            deadHealth = -([[activeParticipant valueForKey:@"maxHealth"] doubleValue] / 2.0f);
            if(currentHealth < deadHealth) {
                return ActiveEncounterStatusRemoved;
            }
            break;
            
        case PARTICIPANT_TYPE_NPC:
            if(currentHealth <= 0.0f) {
                return ActiveEncounterStatusRemoved;
            }
            break;
            
        case PARTICIPANT_TYPE_OBJECT:
            if(currentHealth <= 0.0f) {
                return ActiveEncounterStatusRemoved;
            }
            break;
    }
    
    // check for "removed" condition
    for(Condition* c in [activeParticipant valueForKey:@"conditions"]) {
        if([[c valueForKey:@"name"] isEqualToString:@"removed"]) {
            return ActiveEncounterStatusRemoved;
        }
    }
    
    return ActiveEncounterStatusActive;
}

@end
