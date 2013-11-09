/*
 *  ParticipantConstants.h
 *  EncounterTracker
 *
 *  Created by Paul Schifferer on 11/21/10.
 *  Copyright 2010 Pilgrimage Software. All rights reserved.
 *
 */

#define PARTICIPANT_TYPE_PC         (0)
#define PARTICIPANT_TYPE_NPC        (1)
#define PARTICIPANT_TYPE_OBJECT     (2)

typedef enum _SLParticipantType {
    ParticipantTypePC,
    ParticipantTypeAdversary,
    ParticipantTypeObject,
} SLParticipantType;
