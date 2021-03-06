//
//  DetailViewController.h
//  20140807 VsMobile
//
//  Created by admin on 7/10/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIWebView.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate, UIWebViewDelegate, UIAlertViewDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UIWebView *content;
@property (weak, nonatomic) IBOutlet UINavigationItem *navigation;

@property (strong, nonatomic) NSMutableDictionary *application;
@property (strong, nonatomic) NSMutableArray *appDependencies;
@property (strong, nonatomic) NSMutableArray *pageDependencies;

@property (strong, nonatomic) NSString *errorMsg;

@end
