//
//  TodayCell.h
//  TRSMobileV2
//
//  Created by  TRS on 2017/6/13.
//  Copyright © 2017年 trs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodayCell : UITableViewCell

@property (strong, nonatomic) NSDictionary  *dict;

- (void)updateCell;

@end
