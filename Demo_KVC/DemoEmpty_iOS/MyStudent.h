//
//  MyStudent.h
//  DemoEmpty_iOS
//
//  Created by Domy on 2020/10/29.
//  Copyright © 2020 Domy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyStudent : NSObject

@property (nonatomic, copy)   NSString          *name;
@property (nonatomic, copy)   NSString          *subject;
@property (nonatomic, copy)   NSString          *nick;
@property (nonatomic, assign) int               age;
@property (nonatomic, assign) int               length;
@property (nonatomic, strong) NSMutableArray    *penArr;

@end

NS_ASSUME_NONNULL_END
