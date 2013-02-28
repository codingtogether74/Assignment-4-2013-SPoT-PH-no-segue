//
//  FlickrPhotoTVC.h
//  Shutterbug
//
//  Created by Tatiana Kornilova on 2/22/13.
//  Copyright (c) 2013 Tatiana Kornilova. All rights reserved.
//  Will call setImageURL as part of any "Show image" segue

#import <UIKit/UIKit.h>
#import "ImageViewController.h"
#import "SplitViewsManager.h"

@interface FlickrPhotoTVC : SplitViewsManager
@property (nonatomic,strong) NSArray *photos; // of NSDictionary

@end
