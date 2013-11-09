//
//  ETAbstractEncounterService.h
//  Proelia
//
//  Created by Paul Schifferer on 5/1/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SLModelClasses.h"


typedef struct _SLEncounterCounts {
    NSInteger playerCharacters;
    NSInteger adversaries;
    NSInteger objects;
    NSInteger regions;
} SLEncounterCounts;

typedef enum _SLEncounterState {
    EncounterStateUnknown,
    EncounterStatePreparing,
    EncounterStateRunning,
    EncounterStateComplete,
} SLEncounterState;

@interface SLAbstractEncounterService : NSObject

// -- Collections --

- (NSArray*)allEncounters;
- (NSSet*)categories;

// -- Type information --

+ (SLEncounterType)typeForEncounter:(id)encounter;
+ (SLEncounterState)stateForEncounter:(id)encounter;

@end
