//
//  IURLResolver.h
//  MRouterFramework
//
//  Created by Micker on 16/8/5.
//  Copyright © 2016年 Micker. All rights reserved.
//

#ifndef IURLResolver_h
#define IURLResolver_h

@class MRouterInfo;
@class MRouterLink;

@protocol IURLResolver <NSObject>

/**
 *  对已经匹配到的结果进行处理
 *
 *  @parameters
 *  @param  link        MRouterLink *
 *  @param  navationBlock        配置导航控制器
 *
 *
 *  @return             无
 *
 */
- (void) handleRouter:(MRouterInfo*) info link:(MRouterLink *) link;
- (void) handleRouter:(MRouterInfo*) info link:(MRouterLink *) link navation:(void(^)(UINavigationController *navigationController)) navationBlock;

@end


#endif /* IURLResolver_h */
