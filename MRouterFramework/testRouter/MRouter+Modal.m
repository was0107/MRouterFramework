//
//   _      ________________ 
//  | | /| / / ___/ ___/ __ \
//  | |/ |/ (__  ) /__/ / / /
//  |__/|__/____/\___/_/ /_/ 
//
//  Created by micker on 2017/1/12.
//  Copyright (c) 2017年 Micker. All rights reserved.
//

#import "MRouter+Modal.h"

@implementation MRouter (Modal)

- (void) registerRouter_Modal {

    [self registerURLRouter:[MRouterInfo router:@"Modal"
                                          index:100
                                        ctrlCls:NSClassFromString(@"ViewController")
                                      regexUrls:@[@"http://micker.cn",@"wscn/login"]
                                     extentions:@{@"modal":@(YES)}
                                     handlerCls:nil]];

}

@end