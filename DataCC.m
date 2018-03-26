#import "DataCC.h"
#import "DataCCview.h"

@implementation DataCC
- (UIViewController<CCUIContentModuleContentViewController> *)contentViewController {
    return [[DataCCview alloc] init];
}
@end
