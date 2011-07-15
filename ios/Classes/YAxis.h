//
//  YAxis.h
//  tzz
//
//  Created by zzy on 7/11/11.
//  Copyright 2011 Zhengzhiyu. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface YAxis : NSObject {
	bool isInitialized;
	CGRect frame;
	float max;
	float min;
	float paddingTop;
	int tickInterval;
	int position;
}

@property(nonatomic) bool isInitialized;
@property(nonatomic) CGRect frame;
@property(nonatomic) float max;
@property(nonatomic) float min;
@property(nonatomic) float paddingTop;
@property(nonatomic) int tickInterval;
@property(nonatomic) int position;

-(void)reset;

@end