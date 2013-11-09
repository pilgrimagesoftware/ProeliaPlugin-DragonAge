//
//  SLGroupService.h
//  Proelia
//
//  Created by Paul Schifferer on 5/1/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CWLSynthesizeSingleton.h"

#import "SLModelClasses.h"


@interface SLGroupService : NSObject

CWL_DECLARE_SINGLETON_FOR_CLASS_WITH_ACCESSOR(SLGroupService, sharedGroupService)

// -- Collections --

+ (NSArray*)groups;

// -- Group creation --

/**
 * Creates a brand-new standby group.
 *
 * @return StandbyGroup*
 */
- (StandbyGroup*)createGroup;

// -- Participants --

/**
 * Create a new participant in the specified group.
 *
 * @param group The group in which to create the participant
 * @returns The new participant
 */
- (StandbyParticipant*)addParticipantToGroup:(StandbyGroup*)group;
/**
 * Creates a new participant in the specified group, using the provided PreparedParticipant.
 *
 * @param preparedParticipant The participant to copy
 * @param group The group in which to create the participant
 * @returns The new participant
 */
- (StandbyParticipant*)addPreparedParticipant:(PreparedParticipant*)preparedParticipant
                                      toGroup:(StandbyGroup*)group;
/**
 * <#description#>
 * @param <#parameter#>
 * @returns <#retval#>
 * @exception <#throws#>
 */
- (StandbyParticipant*)addActiveParticipant:(ActiveParticipant*)activeParticipant
                                    toGroup:(StandbyGroup*)group;

/**
 * <#description#>
 * @param <#parameter#>
 * @returns <#retval#>
 * @exception <#throws#>
 */
- (StandbyParticipant*)duplicateParticipant:(StandbyParticipant*)participant;

@end
