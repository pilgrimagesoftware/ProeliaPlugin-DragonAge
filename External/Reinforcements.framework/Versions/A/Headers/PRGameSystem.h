//
//  GameSystem.h
//  Proelia
//
//  Created by Paul Schifferer on 1/12/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "PRConditionProvider.h"


// Encounter event constants.
typedef enum _GameSystemEvent {
    GameSystemEventSetOrder = 1,
    GameSystemEventAdjustConditions = 2,
    GameSystemEventAdjustConditionsStart = 3,
    GameSystemEventAdjustConditionsEnd = 4,
} PRGameSystemEvent;

// Encounter status values
typedef enum _ActiveEncounterStatus {
    ActiveEncounterStatusActive = 0,
    ActiveEncounterStatusRemoved = 1,
} PRActiveEncounterStatus;

typedef enum _ActiveEncounterState {
    ActiveEncounterStateNormal = 0,
    ActiveEncounterStateOrderUpdate = 1,
    ActiveEncounterStateConditionUpdate = 2,
} PRActiveEncounterState;

// Game system protocol.
@protocol PRGameSystem <NSObject>

// Informational
+ (NSString*)label;
- (NSString*)label;
+ (NSString*)shortLabel;
- (NSString*)shortLabel;
+ (NSString*)name;
- (NSString*)name;

// Conditions
- (id<PRConditionProvider>)conditionProvider;
- (BOOL)shouldApplyCondition:(id)condition
              forParticipant:(id)activeParticipant
                 duringEvent:(PRGameSystemEvent)event;

// Ordering
- (NSComparisonResult)encounterOrdering;

// Events
- (NSArray*)startOfEncounterEvents;
- (NSArray*)startOfRoundEvents;
- (NSArray*)startOfTurnEvents;
- (NSArray*)healthChangedEvents;
- (NSArray*)endOfTurnEvents;
- (NSArray*)endOfRoundEvents;
- (NSArray*)endOfEncounterEvents;

// Health
- (void)participant:(id)activeParticipant
     adjustHealthBy:(double)adjustment;

// Encounter status
- (PRActiveEncounterStatus)encounterStatusForParticipant:(id)activeParticipant;

@end
