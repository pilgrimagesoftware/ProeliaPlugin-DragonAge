//
//  PreparedEncounterListHeader.h
//  Proelia
//
//  Created by Paul Schifferer on 2/14/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface EncounterListHeader : NSObject {

@private
    NSString* name;
    NSImage* image;
    
}

@property (nonatomic, copy) NSString* name;
@property (nonatomic, retain) NSImage* image;

- (id)initWithName:(NSString*)headerName
             image:(NSImage*)headerImage;

@end
