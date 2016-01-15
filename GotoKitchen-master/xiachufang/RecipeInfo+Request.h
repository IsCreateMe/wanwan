//
//  RecipeInfo+Request.h
//  xiachufang
//
//  Created by 臧其龙 on 15/12/4.
//  Copyright © 2015年 邓岚锋. All rights reserved.
//

#import "RecipeInfo.h"
#import "Config.h"

@interface RecipeInfo (Request)

+ (void)fetchRecipeWithCompletionBlock:(CompletionBlock)successBlock WithFailureBlock:(FailureBlock)failureBlock;

@end
