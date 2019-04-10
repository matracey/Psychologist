//
//  FaceView.h
//  Happiness
//
//  Created by Martin Tracey on 22/12/2012.
//  Copyright (c) 2012 Martin Tracey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView;

@protocol FaceViewDataSource
- (float)smileForFaceView: (FaceView *)sender;
@end

@interface FaceView : UIView
@property (nonatomic) CGFloat scale;
@property (nonatomic, weak) IBOutlet id <FaceViewDataSource> dataSource;
- (void)pinch:(UIPinchGestureRecognizer *)gesture;
@end
