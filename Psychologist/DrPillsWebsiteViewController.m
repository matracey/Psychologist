//
//  DrPillsWebsiteViewController.m
//  Psychologist
//
//  Created by Martin Tracey on 30/01/2013.
//  Copyright (c) 2013 Martin Tracey. All rights reserved.
//

#import "DrPillsWebsiteViewController.h"

@interface DrPillsWebsiteViewController ()
@property (nonatomic, weak) IBOutlet UIWebView *webView;
@end

@implementation DrPillsWebsiteViewController
@synthesize webView = _webView;

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.webView.scalesPageToFit = YES;
    [self.webView loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:@"http://drphil.com"]]];
}

@end