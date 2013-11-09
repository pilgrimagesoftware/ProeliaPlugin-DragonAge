//
//  SLActiveEncounterService.h
//  Proelia
//
//  Created by Paul Schifferer on 5/1/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "CWLSynthesizeSingleton.h"

#import "SLAbstractEncounterService.h"

#import "SLModelClasses.h"


@interface SLActiveEncounterService : SLAbstractEncounterService

CWL_DECLARE_SINGLETON_FOR_CLASS_WITH_ACCESSOR(SLActiveEncounterService, sharedActiveEncounterService)

// -- Collections --

- (NSArray*)activeEncounters;
- (NSArray*)archivedEncounters;
- (NSArray*)eventsForActiveParticipant:(ActiveParticipant*)activeParticipant;
- (NSArray*)activeEncountersForPreparedEncounter:(PreparedEncounter*)preparedEncounter;

// -- Creation --

- (ActiveEncounter*)createActiveEncounter:(PreparedEncounter*)preparedEncounter;
- (ActiveEncounterTimelineEntry*)createEntry:(NSString*)details
                           inActiveEncounter:(ActiveEncounter*)activeEncounter
                             withParticipant:(ActiveParticipant*)participant;
- (ActiveParticipant*)createActiveParticipant:(ActiveEncounter*)activeEncounter;
- (ActiveParticipant*)duplicateActiveParticipant:(ActiveParticipant*)activeParticipant
                                     inEncounter:(ActiveEncounter*)activeEncounter;
- (ActiveRegion*)createActiveRegion:(ActiveEncounter*)activeEncounter;
- (ActiveRegion*)duplicateActiveRegion:(ActiveRegion*)activeRegion
                           inEncounter:(ActiveEncounter*)activeEncounter;
- (ActiveMap*)activeEncounter:(ActiveEncounter*)activeEncounter
                     mapNamed:(NSString*)mapName;
- (NSArray*)activeEncounter:(ActiveEncounter*)activeEncounter
      regionsForParticipant:(ActiveParticipant*)activeParticipant;
- (ActiveMap*)createActiveMap:(ActiveEncounter*)activeEncounter;
- (NSImage*)imageForActiveMap:(ActiveMap*)activeMap
                         size:(NSSize)imageSize;
- (NSArray*)addStandbyGroup:(StandbyGroup*)standbyGroup
          toActiveEncounter:(ActiveEncounter*)activeEncounter;
- (ActiveParticipant*)addStandbyParticipant:(StandbyParticipant*)standbyParticipant
                          toActiveEncounter:(ActiveEncounter*)activeEncounter
                              usingSequence:(NSInteger)sequence;
- (SLEncounterCounts)activeEncounterCounts:(ActiveEncounter*)activeEncounter;
- (ActiveMapTile*)addMapTileForImage:(NSImage*)tileImage
                        withLocation:(NSPoint)location
                             atScale:(CGFloat)scale
                         toActiveMap:(ActiveMap*)activeMap;

- (NSArray*)regionsInActiveMap:(ActiveMap*)activeMap
   intersectingWithParticipant:(ActiveParticipant*)activeParticipant;

@end
