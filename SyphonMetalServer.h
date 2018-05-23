#import <Metal/MTLPixelFormat.h>
#import <Foundation/Foundation.h>

#define SYPHON_METAL_SERVER_UNIQUE_CLASS_NAME SYPHON_UNIQUE_CLASS_NAME(SyphonMetalServer)

@protocol MTLDevice;
@protocol MTLTexture;
@protocol MTLCommandBuffer;

@interface SYPHON_METAL_SERVER_UNIQUE_CLASS_NAME : NSObject

@property (readonly) BOOL hasClients;
@property (retain) NSString* name;
@property (readonly) NSDictionary *serverDescription;

- (id)initWithName:(NSString*)serverName metalDevice:(id<MTLDevice>)metalDevice pixelFormat:(MTLPixelFormat)pixelFormat;

// API Method 1
- (void)drawFrame:(void(^)(id<MTLTexture> texture,id<MTLCommandBuffer> commandBuffer))block size:(NSSize)size commandBuffer:(id<MTLCommandBuffer>)commandBuffer;

// API Method 2
- (void)publishFrameTexture:(id<MTLTexture>)texture imageRegion:(NSRect)region flipped:(BOOL)isFlipped;
- (void)publishFrameTexture:(id<MTLTexture>)texture flipped:(BOOL)isFlipped;
- (void)publishFrameTexture:(id<MTLTexture>)texture;


- (id<MTLTexture>)newFrameTexture;
- (void)stop;

@end