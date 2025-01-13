#import <Foundation/Foundation.h>
#import "WebexBroadcastCallServerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface BroadcastUtil : NSObject
@property (weak, nonatomic) id<WebexBroadcastCallServerProtocol> delegate;
- (BOOL) isBroadcastFrameworkAvailable;
- (BOOL) initScreenShareService: (NSError * __autoreleasing *) error;
- (void) sharingStateChanged: (BOOL) sendingScreenShare;
- (void) suspend;
- (void) closeScreenShare;
@end

NS_ASSUME_NONNULL_END
