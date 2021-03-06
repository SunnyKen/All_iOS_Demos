//
//  UINavigationController+__Category.h
//  QunhuanTribe
//
//  Created by Ken on 2017/12/16.
//  Copyright © 2017年 GarveyCalvin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (__Category)

/// 隐藏导航栏下划线
- (void)__setBottomLineHidden;

/**
 设置导航栏背景颜色
 
 @param color 背景颜色
 */
- (void)__setBackgroundColor:(UIColor *_Nonnull)color;

/**
 设置元素色彩
 
 @param color 颜色
 */
- (void)__setTintColor:(UIColor *_Nonnull)color;

/**
 设置导航栏标题颜色
 
 @param color 颜色
 */
- (void)__setNavTitleColor:(UIColor *_Nonnull)color;

/**
 添加一个导航栏右按钮, 图片
 */
- (void)__addRightBarButtonItem:(UIImage *_Nonnull)iconImage target:(id _Nullable)target selector:(SEL _Nullable)selector;

/**
 添加一个导航栏右按钮, 文字标题
 */
- (void)__addRightBarButtonItemWithTitle:(NSString *_Nonnull)title target:(id _Nullable)target selector:(SEL _Nullable)selector;

/**
 添加一个导航栏左按钮, 图片
 */
- (void)__addLeftBarButtonItem:(UIImage *_Nonnull)iconImage target:(id _Nullable)target selector:(SEL _Nullable)selector;

/**
 添加一个导航栏左按钮, 文字标题
 */
- (void)__addLeftBarButtonItemWithTitle:(NSString *_Nonnull)title target:(id _Nullable)target selector:(SEL _Nullable)selector;

/**
 添加一个自定义导航栏右按钮
 
 @param customView 自定义视图
 */
- (void)__addCustomRightBarButtonItemWithCustomView:(UIView *_Nonnull)customView;

/**
 添加一个自定义导航栏左按钮
 
 @param customView 自定义视图
 */
- (void)__addCustomLeftBarButtonItemWithCustomView:(UIView *_Nonnull)customView;

@end

