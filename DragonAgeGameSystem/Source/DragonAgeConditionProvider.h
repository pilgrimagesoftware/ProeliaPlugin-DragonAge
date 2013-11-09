//
//  DragonAgeConditionProvider.h
//  EncounterTracker
//
//  Created by Paul Schifferer on 11/21/10.
//  Copyright 2010 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <Reinforcements/Reinforcements.h>


@interface DragonAgeConditionProvider : NSObject <PRConditionProvider> {
    
@private
    NSArray* _conditionNames;
    NSDictionary* _conditions;

}

@end
