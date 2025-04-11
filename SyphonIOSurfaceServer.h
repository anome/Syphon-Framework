#import <Syphon/SyphonServerBase.h>


NS_ASSUME_NONNULL_BEGIN

@interface SyphonIOSurfaceServer : SyphonServerBase

/*!
 Returns a new client instance for the described server. You should check the isValid property after initialization to ensure a connection was made to the server.
 @param ioSurfaceToPublish The IOSurfaceRef you wish to publish on the server.
*/
- (void)publishIOSurface:(IOSurfaceRef)ioSurfaceToPublish;

@end

NS_ASSUME_NONNULL_END
