#import <UIKit/UIKit.h>
#import <ControlCenterUIKit/CCUIToggleModule.h>

@interface DataCCview : UIViewController <CCUIContentModuleContentViewController>
@property (nonatomic, assign, readwrite) BOOL amExpanded;
@property (nonatomic, assign, readwrite) BOOL amTransitioning;
@end
