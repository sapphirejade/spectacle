#import <Foundation/Foundation.h>

#define MovingToCenterRegionOfDisplay(action) (action == SpectacleWindowActionCenter)
#define MovingToTopRegionOfDisplay(action) ((action == SpectacleWindowActionTopHalf) || (action == SpectacleWindowActionUpperLeft) || (action == SpectacleWindowActionUpperRight))
#define MovingToUpperOrLowerLeftOfDisplay(action) ((action == SpectacleWindowActionUpperLeft) || (action == SpectacleWindowActionLowerLeft))
#define MovingToUpperOrLowerRightDisplay(action) ((action == SpectacleWindowActionUpperRight) || (action == SpectacleWindowActionLowerRight))

#pragma mark -

#define MovingToThirdOfDisplay(action) ((action == SpectacleWindowActionNextThird) || (action == SpectacleWindowActionPreviousThird))

#pragma mark -


typedef NS_ENUM(NSInteger, SpectacleWindowAction) {
    SpectacleWindowActionUndo = -4,
    SpectacleWindowActionRedo,
    SpectacleWindowActionLarger,
    SpectacleWindowActionSmaller,
    SpectacleWindowActionNone,
    SpectacleWindowActionCenter,
    SpectacleWindowActionFullscreen,
    SpectacleWindowActionLeftHalf,
    SpectacleWindowActionUpperLeft,
    SpectacleWindowActionLowerLeft,
    SpectacleWindowActionRightHalf,
    SpectacleWindowActionUpperRight,
    SpectacleWindowActionLowerRight,
    SpectacleWindowActionTopHalf,
    SpectacleWindowActionBottomHalf,
    SpectacleWindowActionNextDisplay,
    SpectacleWindowActionPreviousDisplay,
    SpectacleWindowActionNextThird,
    SpectacleWindowActionPreviousThird
};

@class ZKHotKey;

@interface SpectacleWindowPositionManager : NSObject

+ (SpectacleWindowPositionManager *)sharedManager;

#pragma mark -

- (void)moveFrontMostWindowWithAction:(SpectacleWindowAction)action;

#pragma mark -

- (void)undoLastWindowAction;

- (void)redoLastWindowAction;

#pragma mark -

- (SpectacleWindowAction)windowActionForHotKey:(ZKHotKey *)hotKey;

@end
