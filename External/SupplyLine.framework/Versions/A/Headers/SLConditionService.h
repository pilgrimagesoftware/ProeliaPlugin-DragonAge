//
//  SLConditionService.h
//  Proelia
//
//  Created by Paul Schifferer on 5/1/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Reinforcements/Reinforcements.h>

#import "CWLSynthesizeSingleton.h"

#import "SLModelClasses.h"


@interface SLConditionService : NSObject

CWL_DECLARE_SINGLETON_FOR_CLASS_WITH_ACCESSOR(SLConditionService, sharedConditionService)

// -- Collections --

+ (NSArray*)customConditions;

// -- Labels --

- (NSString*)typeLabelForCondition:(Condition*)condition;
+ (NSArray*)typeLabels;
- (NSString*)endLabelForCondition:(Condition*)condition;
+ (NSArray*)endLabels;

// -- Hashing --

- (NSUInteger)hashForCondition:(Condition*)condition;
- (NSString*)hashStringForCondition:(Condition*)condition;
- (NSString*)dictionaryKeyStringForCondition:(Condition*)condition;

// -- Duplication --

- (Condition*)duplicateCondition:(Condition*)condition;
- (Condition*)conditionFromName:(NSString*)conditionName
                  usingProvider:(id<PRConditionProvider>)conditionProvider;

// -- Participants --

- (Condition*)addConditionToParticipant:(id)participant
                                   name:(NSString*)conditionName
                                  label:(NSString*)conditionLabel
                                   type:(NSInteger)conditionType
                             adjustment:(CGFloat)conditionAdj
                                    end:(NSInteger)conditionEnd
                               endValue:(NSString*)conditionEndValue;

// -- Regions --

- (Condition*)addConditionToRegion:(id)region
                              name:(NSString*)conditionName
                             label:(NSString*)conditionLabel
                              type:(NSInteger)conditionType
                        adjustment:(CGFloat)conditionAdj
                               end:(NSInteger)end
                          endValue:(NSString*)endValue;


@end
