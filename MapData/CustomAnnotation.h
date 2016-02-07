//
//  CustomAnnotation.h
//  MapData
//
//  Created by 藤田 優介 on 2016/02/06.
//  Copyright © 2016年 yusuke.fujita. All rights reserved.
//
//  CustomAnnotation はPINの保存に使う


#import <MapKit/MapKit.h>

@interface CustomAnnotation : MKAnnotationView <MKAnnotation, NSCoding>
// CustomAnnotation クラスは　MKAnnotationViewを継承している (CustomAnnotation.h/m を作る時に親クラスに指定した
// Object-C で継承を使うには　@interface 作成したクラス名：継承元のクラス　で記述する

/* クラスの宣言部 :
 @interface MyClass : NSObject {
 }
 @end
 
 クラスの実装部 :
 @implementation MyClass : NSObject
 
 @end
 */


@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSString* subtitle;

- (id) initWithCoordinate:(CLLocationCoordinate2D) coordinate;

//NSCodingが入っているため以下が必要になる
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end