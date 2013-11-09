//
//  EncounterCategory.h
//  Proelia
//
//  Created by Paul Schifferer on 7/16/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface EncounterCategory : NSObject {
    
    @private
    NSString* _name;
    NSMutableArray* _encounterArray;
    
    NSInteger _order;
}

@property (nonatomic, copy) NSString* name;
@property (nonatomic, assign) NSInteger order;

- (void)addEncounter:(id)encounter;
- (void)removeEncounter:(id)encounter;
- (NSArray*)encounters;

@end
