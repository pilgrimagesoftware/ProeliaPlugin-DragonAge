//
//  DragonAgeGameSystem.h
//  Proelia
//
//  Created by Paul Schifferer on 1/12/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Reinforcements/Reinforcements.h>
#import "DragonAgeConditionProvider.h"


@interface DragonAgeGameSystem : NSObject <PRGameSystem> {
    
@private
    DragonAgeConditionProvider* _conditionProvider;

}

@end
