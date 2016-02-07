//
//  CustomAnnotation.m
//  MapData
//
//  Created by 藤田 優介 on 2016/02/06.
//  Copyright © 2016年 yusuke.fujita. All rights reserved.
//

#import "CustomAnnotation.h"

@interface CustomAnnotation()

@end

@implementation CustomAnnotation

/* クラスの宣言部 :
 @interface MyClass : NSObject {
 }
 @end
 
 クラスの実装部 :
 @implementation MyClass : NSObject
 
 @end
 
 @implementation クラス名　: スーパークラス名　のスーパークラス名はinterface部分で宣言されていれば省略可能
 
 
 */

- (id) initWithCoordinate:(CLLocationCoordinate2D)c {
    
    self.coordinate = c;
    return self;
}

- (void) encodeWithCoder:(NSCoder *)aCoder
{
    
    [aCoder encodeDouble:self.coordinate.latitude forKey:@"latitude"];
    [aCoder encodeDouble:self.coordinate.longitude forKey:@"longitude"];
    
    [aCoder encodeObject:self.title forKey:@"title"];
    [aCoder encodeObject:self.subtitle forKey:@"subtitle"];
}

- (id) initWithCoder:(NSCoder *)aDecoder
{
    self = [super init];
    
    if (self) {
        
        CGFloat latitude = [aDecoder decodeDoubleForKey:@"latitude"];
        CGFloat longitude = [aDecoder decodeDoubleForKey:@"longitude"];
        
        self.coordinate = CLLocationCoordinate2DMake(latitude, longitude);
        self.title = [aDecoder decodeObjectForKey:@"title"];
        self.subtitle = [aDecoder decodeObjectForKey:@"subtitle"];
    }
    
    return self;
}

@end