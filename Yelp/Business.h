//
//  Business.h
//  Yelp
//
//  Created by AlleyOops on 2015/6/21.
//  Copyright (c) 2015年 codepath. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Business : NSObject

@property (strong, nonatomic) NSString *imageUrl;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *ratingImageUrl;
@property (assign, nonatomic) NSInteger numReviews;
@property (strong, nonatomic) NSString *address;
@property (strong, nonatomic) NSString *categories;
@property (assign, nonatomic) CGFloat distance;

+ (NSArray *)businessesWithDictionaries:(NSArray *)dictionaries;

@end
