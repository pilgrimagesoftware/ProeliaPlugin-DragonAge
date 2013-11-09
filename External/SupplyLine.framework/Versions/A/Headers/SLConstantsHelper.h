//
//  ConstantsHelper.h
//  Proelia
//
//  Created by Paul Schifferer on 8/28/11.
//  Copyright (c) 2011 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "SLModelClasses.h"

#import "SLConstants.h"


@interface SLConstantsHelper : NSObject

+ (NSArray*)sortTypes;
+ (NSString*)nameForSortType:(SLEncounterSort)sortType;

+ (NSArray*)conditionTypes;
+ (NSString*)labelForConditionType:(SLConditionType)type;
+ (NSImage*)imageForConditionType:(SLConditionType)type;
+ (NSArray*)conditionEnds;
+ (NSString*)labelForConditionEnd:(SLConditionEnd)end;
+ (NSImage*)imageForConditionEnd:(SLConditionEnd)end;

+ (NSString*)labelforCharacterInfo:(NSString*)name;

@end
