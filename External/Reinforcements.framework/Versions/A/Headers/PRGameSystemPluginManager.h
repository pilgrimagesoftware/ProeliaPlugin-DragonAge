//
//  GameSystemPluginManager.h
//  Proelia
//
//  Created by Paul Schifferer on 1/12/11.
//  Copyright 2011 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CWLSynthesizeSingleton.h"

#import "PRGameSystem.h"


@interface PRGameSystemPluginManager : NSObject {
    
@private
    NSMutableArray* _gameSystemClassNameArray;
    
    NSMutableDictionary* _pluginCache;
    
}

CWL_DECLARE_SINGLETON_FOR_CLASS_WITH_ACCESSOR(PRGameSystemPluginManager, sharedPluginManager)

- (void)registerPlugin:(NSString*)gameSystemClassName;

- (NSString*)defaultGameSystemClassName;
- (NSString*)defaultGameSystemName;
- (id<PRGameSystem>)defaultGameSystem;

- (NSString*)gameSystemClassNameForName:(NSString*)name;
- (NSString*)gameSystemNameForClassName:(NSString*)className;
- (id<PRGameSystem>)gameSystemForClassName:(NSString*)className;
- (id<PRGameSystem>)gameSystemForName:(NSString*)name;

- (NSArray*)gameSystemClassNames;
- (NSArray*)gameSystemNames;
- (NSArray*)gameSystems;

@end
