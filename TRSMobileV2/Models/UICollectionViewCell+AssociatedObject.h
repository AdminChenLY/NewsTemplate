//
//  UICollectionViewCell+AssociatedObject.h
//  TRSMobileV2
//
//  Created by  TRS on 16/5/16.
//  Copyright © 2016年  TRS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionViewCell (AssociatedObject)

/**
 * 传入参数
 */
@property (nonatomic, strong) NSDictionary * _Nonnull dict;

/**
 * 事件回调
 */
@property (nonatomic, copy) void (^ _Nullable clickEvent)(NSDictionary * _Nullable dict, NSInteger index);

/**
 * 更新cell内容(子类需继承实现此方法.)
 */
- (void)updateCell;

@end
