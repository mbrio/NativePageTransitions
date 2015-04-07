//
//  NativePageTransitionDefinition.h
//  Qloo
//
//  Created by Michael Diolosa on 4/7/15.
//
//

#import <Foundation/Foundation.h>

@interface NativePageTransitionDefinition : NSObject

@property (strong, nonatomic) NSString *direction;
@property (assign, nonatomic) NSTimeInterval duration;
@property (assign, nonatomic) NSTimeInterval delay;
@property (strong, nonatomic) NSString *href;
@property (strong, nonatomic) NSNumber *slowdownfactor;
@property (assign, nonatomic) int fixedPixelsTop;
@property (assign, nonatomic) int fixedPixelsBottom;
@property (assign, nonatomic) CGFloat lowerLayerAlpha;
@property (assign, nonatomic) CGFloat transitionToX;
@property (assign, nonatomic) CGFloat transitionToY;
@property (assign, nonatomic) CGFloat webviewFromY;
@property (assign, nonatomic) CGFloat webviewToY;
@property (assign, nonatomic) int screenshotSlowdownFactor;
@property (assign, nonatomic) int webviewSlowdownFactor;
@property (assign, nonatomic) CGFloat width;
@property (assign, nonatomic) CGFloat height;

@end
