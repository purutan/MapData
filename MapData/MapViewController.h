//
//  MapViewContoroller.h
//  MapData
//
//  Created by 藤田 優介 on 2016/02/06.
//  Copyright © 2016年 yusuke.fujita. All rights reserved.
//

#import "ViewController.h"

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapViewController : ViewController

@property (assign, nonatomic) BOOL isLocation;

// 現在位置記録用
@property (assign, nonatomic) CLLocationDegrees longitude;
@property (assign, nonatomic) CLLocationDegrees latitude;

@end
