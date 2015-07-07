//
//  EELoginViewController.h
//  VKPhotoPreview
//
//  Created by admin on 7/7/15.
//  Copyright (c) 2015 Maryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EELoginViewController : UIViewController <UIWebViewDelegate>{
    UIWebView *_vklogWebView;
    UIActivityIndicatorView *_indicator;
}

@property(nonatomic,retain) IBOutlet UIWebView *vkLoginWebView;
@property(nonatomic,retain) IBOutlet UIActivityIndicatorView *indecator;

@end
