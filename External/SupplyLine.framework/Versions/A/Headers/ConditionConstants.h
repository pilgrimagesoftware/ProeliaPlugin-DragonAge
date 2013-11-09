/*
 *  ConditionConstants.h
 *  EncounterTracker
 *
 *  Created by Paul Schifferer on 11/27/10.
 *  Copyright 2010 Pilgrimage Software. All rights reserved.
 *
 */

#define CONDITION_TYPE_NORMAL           (0)
#define CONDITION_TYPE_ONGOING          (1)
#define CONDITION_TYPE_CUSTOM           (2)

#define CONDITION_END_SAVE              (0)
#define CONDITION_END_START_OF_TURN     (1)
#define CONDITION_END_END_OF_TURN       (2)
#define CONDITION_END_ENCOUNTER         (3)
#define CONDITION_END_REGION            (4)
#define CONDITION_END_FIXED             (5)

#define CONDITION_IMAGE_SIZE            (16.0f)

#define CONDITION_SOURCE_SELF           (0)
#define CONDITION_SOURCE_REGION         (1)
#define CONDITION_SOURCE_GAME_SYSTEM    (2)

typedef enum _SLConditionType {
    ConditionTypeNormal,
    ConditionTypeOngoing,
    ConditionTypeCustom,
} SLConditionType;

typedef enum _SLConditionEnd {
    ConditionEndSave,
    ConditionEndStartOfTurn,
    ConditionEndEndOfTurn,
    ConditionEndEndOfEncounter,
    ConditionEndRegion,
    ConditionEndFixed,
} SLConditionEnd;

