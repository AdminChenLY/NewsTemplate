//
//  SVProgressHUD+Provider.m
//  TRSMobileV2
//
//  Created by  TRS on 16/6/15.
//  Copyright © 2016年  TRS. All rights reserved.
//

#import "SVProgressHUD+Provider.h"

@implementation SVProgressHUD_Provider

+ (void)load {

    [SVProgressHUD setDefaultStyle:SVProgressHUDStyleDark];
    [SVProgressHUD setDefaultMaskType:SVProgressHUDMaskTypeGradient];
}

@end
