//
//  CustomAnnotation.h
//  MapData
//
//  Created by 藤田 優介 on 2016/02/06.
//  Copyright © 2016年 yusuke.fujita. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface CustomAnnotation : MKAnnotationView <MKAnnotation, NSCoding>

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSString* subtitle;

- (id) initWithCoordinate:(CLLocationCoordinate2D) coordinate;

//NSCodingが入っているため以下が必要になる
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end