//
//  UIViewController+AssociatedObject.h
//  TRSMobileV2
//
//  Created by  TRS on 16/4/7.
//  Copyright © 2016年  TRS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface UIViewController (AssociatedObject)

/**
 * 传入参数
 */
@property (nonatomic, strong) NSDictionary * _Nonnull dict;

/**
 * 事件回调
 */
@property (nonatomic, copy) void (^ _Nullable clickEvent)(NSDictionary * _Nullable dict, NSInteger index);

@end
