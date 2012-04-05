//
//  CheckerClass.h
//  KXKM
//
//  Created by Snow Leopard User on 14/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CheckerClass : NSObject {
    
    NSTimer *timerChecker;
    
    int lastSync;
    int lastTab;
    int timeHere;
    int batteryRefresh;
    int broadcastRefresh;
}


- (void) start;
- (void) beat;
- (void) userAct: (int) tim;
- (void) syncAct;

@end
