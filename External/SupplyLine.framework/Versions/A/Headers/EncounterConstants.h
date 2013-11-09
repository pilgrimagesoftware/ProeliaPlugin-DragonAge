//
//  EncounterConstants.h
//  Proelia
//
//  Created by Paul Schifferer on 1/21/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

typedef enum _SLEncounterSort {
    NameSort,
    CategorySort,
    CreationDateSort,
    ModifiedDateSort,
    TypeSort,
    GameSystemSort,
} SLEncounterSort;

typedef enum _SLEncounterType {
    ActiveEncounterType,
    PreparedEncounterType,
    ArchivedEncounterType,
    
    NoEncounterType,
} SLEncounterType;

#define MAP_BACKGROUND          (1L << 0)
#define MAP_GRID                (1L << 1)
#define MAP_BORDERS             (1L << 2)
#define MAP_CONDITIONS          (1L << 3)
#define MAP_REMOVED             (1L << 4)

