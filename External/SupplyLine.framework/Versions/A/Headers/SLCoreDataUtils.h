//
//  EntityFetcher.h
//  EncounterTracker
//
//  Created by Paul Schifferer on 12/30/10.
//  Copyright 2010 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface SLCoreDataUtils : NSObject {
    
@private

}

+ (void)initializeStackWithStore:(NSString*)storeFile;

+ (NSURL*)URLForObject:(NSManagedObject*)object;
+ (NSManagedObject*)objectWithID:(NSManagedObjectID*)objectID;
+ (NSManagedObject*)objectWithURL:(NSURL*)url;

@end
