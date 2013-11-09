//
//  SLImageService.h
//  Proelia
//
//  Created by Paul Schifferer on 5/2/12.
//  Copyright (c) 2012 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "CWLSynthesizeSingleton.h"


#define DEFAULT_GRID_PIXEL_SIZE (50.0f)

@interface SLImageService : NSObject

CWL_DECLARE_SINGLETON_FOR_CLASS_WITH_ACCESSOR(SLImageService, sharedImageService)

// -- Encounters --

- (NSImage*)typeImageForEncounter:(id)encounter;

// -- Participants --

- (NSImage*)imageForParticipant:(id)participant
                         ofSize:(NSSize)size
                        atScale:(CGFloat)scale
                 withConditions:(BOOL)showConditions
                        regions:(NSArray*)regions
                         border:(CGFloat)borderThickness;
- (NSImage*)tagImageForParticipant:(id)participant
                             width:(CGFloat)width;

// -- Regions --

- (NSImage*)imageForRegion:(id)region
                    ofSize:(NSSize)size
                   atScale:(CGFloat)scale
            withConditions:(BOOL)showConditions
                    border:(CGFloat)borderThickness;

@end
