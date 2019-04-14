//
//  BridgerObjC.h
//  Saily Package Manager
//
//  Created by Lakr Aream on 2019/4/14.
//  Copyright © 2019 Lakr Aream. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef BridgerObjC_h
#define BridgerObjC_h

@interface SailyCommonObject : NSObject

- (void)testCall;
- (NSString *)readUDID;
- (BOOL)has_tfp0_over_HSP4;
- (BOOL)isInRoot;

@end

#endif /* BridgerObjC_h */


