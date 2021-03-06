//
//  AppMock.h
//  QianFangGuJie
//
//  Created by  rjt on 15/5/8.
//  Copyright (c) 2015年 JYZD. All rights reserved.
//

#import "QUMock.h"

@class AppMock;
@class QUNetResponse;
typedef void (^NetReturnBlock)(QUNetAdaptor *adaptor,QUNetResponse *response,AppMock *mock);

@interface AppParam : QUMockParam

@end


@interface AppMock : QUMock{
    BOOL isAlert;
}

-(void)run:(QUMockParam*)param isAlert:(BOOL)isalert;
-(void)run:(QUMockParam*)param ignoreError:(BOOL)ignoreError;

@property (strong,nonatomic) NetReturnBlock returnBlock;

@property (strong,nonatomic) NSArray* filterErrorCodes;//过滤错误代码，NSNumber类型，在队列中得错误代码，系统框架将不会给出错误提示框，需要上层应用自行捕捉


@end

