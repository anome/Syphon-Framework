#import "SyphonIOSurfaceServer.h"




@interface SyphonServerBase()
- (void)publishIOSurface:(IOSurfaceRef)ioSurfaceToPublish;
@end




@implementation SyphonIOSurfaceServer

#pragma mark - Public API

- (void)publishIOSurface:(IOSurfaceRef)ioSurfaceToPublish
{
    [super publishIOSurface:ioSurfaceToPublish];
}

@end
