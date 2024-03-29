#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioServices.h>
#import <Cephei/HBPreferences.h>

// Utils
HBPreferences *pfs;

// Preferences
BOOL enabled = YES;
BOOL enableHapticEngineSwitch = NO;
BOOL enableTapticEngineSwitch = NO;
BOOL respringSwitch = NO;
BOOL unlockSwitch = NO;
BOOL lockSwitch = NO;
BOOL wakeSwitch = NO;
BOOL volumeSwitch = NO;
BOOL powerSwitch = NO;
BOOL killingSwitch = NO;
BOOL forceSwitch = NO;
BOOL pluggedSwitch = NO;
BOOL switcherSwitch = NO;
BOOL siriSwitch = NO;
BOOL ccToggleSwitch = NO;
BOOL folderSwitch = NO;
BOOL openCloseAppSwitch = NO;
BOOL iconTapSwitch = NO;
BOOL pageSwipeSwitch = NO;
BOOL screenshotSwitch = NO;
BOOL passcodeSwitch = NO;
BOOL keyboardSwitch = NO;
BOOL ringerSwitch = NO;
BOOL reachabilitySwitch = NO;
BOOL textSelectionSwitch = NO;
BOOL spotlightSwitch = NO;
BOOL callSwitch = NO;
BOOL authenticationSwitch = NO;
BOOL sleepButtonSwitch = NO;
BOOL homeButtonSwitch = NO;
BOOL touchesSwitch = NO;
BOOL shutdownWarningSwitch = YES;
BOOL featureWarningSwitch = YES;

NSString *hapticLevel = @"0";
NSString *tapticLevel = @"0";

UIImpactFeedbackGenerator *gen;

NSFileManager *fileManager;
UIApplication *application;

NSString *pathForiCleaner = @"/Applications/iCleaner.app";
NSString *pathForCydia = @"/Applications/Cydia.app";
NSString *pathForSileo = @"/Applications/Sileo.app";

@interface UIKBTree : NSObject
@property (nonatomic, strong, readwrite) NSString * name;
+ (id)sharedInstance;
+ (id)key;
@end

@interface UIKeyboardLayoutStar : UIView
@property (nonatomic, copy) NSString * localizedInputKey;
- (void)setPlayKeyClickSoundOn:(int)arg1;
@end

@interface SBPowerDownController : UIViewController
- (void)cancel;
@end

@interface SBIconController : UIViewController
- (void)viewDidAppear:(BOOL)animated;
@end