//
//  UISplashViewController.h
//  TRSMobileV2
//
//  Created by  TRS on 16/3/31.
//  Copyright © 2016年  TRS. All rights reserved.
//

#import <UIKit/UIKit.h>


/*广告接口API*/
#define kLaunchAPIUrl       @"file://首屏广告.json"

/*外层封装字段*/
#define kLaunchResponse     @"response"

/*广告过期时间*/
#define kLaunchExpireDate   @"expiredDate"

/*广告加载地址*/
#define kLaunchMedia        @"media"

/*广告链接地址*/
#define kLaunchUrl          @"url"

@interface UILaunchViewController : UIViewController

/**
 * 程序安装后第一次运行时加载的用户引导图片
 * 若指定传入，在此传入图片名称；若不调用此方法，则会默认从splash.bundle包加载
 * 备注：用户引导图片，只需针对3.5"和5.5"屏幕提供2组图片, 3.5"图片放在2x目录下，5.5"图片放在3x目录下.
 */
@property (nonatomic, retain) NSArray * _Nonnull coverImages;

/**
 * 第一次即将进入应用主视窗事件，在点击进入前调用
 */
@property (nonatomic, copy) void (^_Nonnull willEnterAppBlock)(void);

/**
 * 单例实例
 */
+ (instancetype _Nonnull)sharedInstance;

@end
