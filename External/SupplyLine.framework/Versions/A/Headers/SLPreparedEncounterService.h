//
//  SLPreparedEncounterService.h
//  Proelia
//
//  Created by Paul Schifferer on 5/1/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "CWLSynthesizeSingleton.h"
#import "SLAbstractEncounterService.h"

#import "SLModelClasses.h"


@interface SLPreparedEncounterService : SLAbstractEncounterService

CWL_DECLARE_SINGLETON_FOR_CLASS_WITH_ACCESSOR(SLPreparedEncounterService, sharedPreparedEncounterService)

// -- Collections --

- (NSArray*)preparedEncounters;
- (NSArray*)recentPreparedEncounters:(NSUInteger)maxItems;
- (NSArray*)favoritePreparedEncounters:(NSUInteger)maxItems;

// -- Creation --

- (PreparedEncounter*)createPreparedEncounter;
- (PreparedEncounter*)createPreparedEncounterWithName:(NSString*)name
                                       gameSystemName:(NSString*)gameSystemName
                                         participants:(NSInteger)pcAmount
                                          adversaries:(NSInteger)adversaryAmount
                                              objects:(NSInteger)objectAmount
                                              regions:(NSInteger)regionAmount;
- (PreparedParticipant*)createPreparedParticipant:(PreparedEncounter*)preparedEncounter;
- (PreparedParticipant*)duplicatePreparedParticipant:(PreparedParticipant*)preparedParticipant
                                         inEncounter:(PreparedEncounter*)preparedEncounter;
- (PreparedRegion*)createPreparedRegion:(PreparedEncounter*)preparedEncounter;
- (PreparedRegion*)duplicatePreparedRegion:(PreparedRegion*)preparedRegion
                               inEncounter:(PreparedEncounter*)preparedEncounter;
- (PreparedMap*)preparedEncounter:(PreparedEncounter*)preparedEncounter
                         mapNamed:(NSString*)mapName;
- (PreparedMap*)createPreparedMap:(PreparedEncounter*)preparedEncounter;
- (NSImage*)imageForPreparedMap:(PreparedMap*)preparedMap
                           size:(NSSize)imageSize;
- (NSArray*)addStandbyGroup:(StandbyGroup*)standbyGroup
        toPreparedEncounter:(PreparedEncounter*)preparedEncounter;
- (PreparedParticipant*)addStandbyParticipant:(StandbyParticipant*)standbyParticipant
                          toPreparedEncounter:(PreparedEncounter*)preparedEncounter;
- (SLEncounterCounts)preparedEncounterCounts:(PreparedEncounter*)preparedEncounter;
- (PreparedMapTile*)addMapTileForImage:(NSImage*)tileImage
                          withLocation:(NSPoint)location
                               atScale:(CGFloat)scale
                         toPreparedMap:(PreparedMap*)preparedMap;

- (NSArray*)regionsInPreparedMap:(PreparedMap*)preparedMap
     intersectingWithParticipant:(PreparedParticipant*)preparedParticipant;

@end
