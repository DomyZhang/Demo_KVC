//
//  MyPerson.h
//  DemoEmpty_iOS
//
//  Created by Domy on 2020/10/29.
//  Copyright © 2020 Domy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MyStudent.h"


NS_ASSUME_NONNULL_BEGIN

typedef struct {
    float x, y, z;
} ThreeFloats;

@interface MyPerson : NSObject{
   @public
   NSString *myName;
}

@property (nonatomic, copy)   NSString          *name;
@property (nonatomic, strong) NSArray           *array;
@property (nonatomic, strong) NSMutableArray    *mArray;
@property (nonatomic, assign) int age;
@property (nonatomic)         ThreeFloats       threeFloats;
@property (nonatomic, strong) MyStudent         *student;

@end

NS_ASSUME_NONNULL_END
