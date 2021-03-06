//
//  BaseViewController.h
//  SuperMama
//
//  Created by macbook on 15/7/7.
//  Copyright (c) 2015年 macbook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommonBaseViewController.h"

#define BTN_TEXT_COLOR kMainTextColor
#define NAV_TEXT_COLOR   UIColorFromRGB(0x191919)

//空页面tag
#define  EMPTYVIEWTAG  1702

@interface BaseViewController : CommonBaseViewController<UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

- (void)setNavTitleView:(UIView *)view;

- (void)setBackAciton:(void(^)(id sender))block;

- (void)setBackAciton:(void(^)(id sender))block NormalImage:(UIImage *)normalImg SelectedImage:(UIImage *)selectedImage;

- (UIButton *)setleftBarButtonItem:(UIImage *)image withSelectedImage:(UIImage *)selectedImage withFrame:(CGRect)frame withBlock:(void(^)(id sender))block;

- (UIButton *)setleftBarButtonItem:(UIImage *)image withSelectedImage:(UIImage *)selectedImage  withBlock:(void(^)(id sender))block;

- (void)setLeftBarView:(NSArray *)views;

- (void)setRightBarView:(NSArray *)views;

- (void)setRightBarButtonItem:(UIImage *)image withSelectedImage:(UIImage *)selectedImage withFrame:(CGRect)frame withBlock:(void(^)(id sender))block;

- (void)setRightBarButtonItem:(UIImage *)image withSelectedImage:(UIImage *)selectedImage withBlock:(void(^)(id sender))block;

- (void)setRightBarButtonTitle:(NSString *)title  withFrame:(CGRect)frame withBlock:(void(^)(id sender))block;

- (void)showLeftBarButtonItemWithTitle:(NSString *)title withBlock:(void(^)(id sender))block;

- (void)showLeftBarButtonItemWithTitle:(NSString *)title btnColor:(UIColor *)color showAnimated:(BOOL)showAnimated withBlock:(void(^)(id sender))block;

//- (void)showRightBarButtonItemWithTitle:(NSString *)title target:(id)target action:(SEL)action;
//
//- (void)showRightBarButtonItemWithTitle:(NSString *)title btnColor:(UIColor *)color target:(id)target action:(SEL)action;

- (void)showRightBarButtonItemWithTitle:(NSString *)title withBlock:(void(^)(id sender))block;

- (void)showRightBarButtonItemWithTitle:(NSString *)title btnColor:(UIColor *)color showAnimated:(BOOL)showAnimated withBlock:(void(^)(id sender))block;

- (void)showEmptyView:(NSString *)title;

- (void)removeEmptyView;

// 对于界面上有输入框的，可以选择性调用些方法进行收起键盘
- (void)addTapBlankToHideKeyboardGesture;

- (void)callImagePickerActionSheet;

@end
