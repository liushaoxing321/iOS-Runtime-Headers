/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECPhysicalDevice : NSObject {
    NSMutableArray *_children;
    NSMutableSet *_logicalDevices;
    CoreCECPhysicalDevice *_parent;
    unsigned int _physicalAddress;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSSet *logicalDevices;
@property (nonatomic) CoreCECPhysicalDevice *parent;
@property (nonatomic, readonly) unsigned int physicalAddress;
@property (nonatomic, readonly) id propertyList;

+ (id)physicalDeviceTreeWithLogicalDevices:(id)arg1;

- (void)addChild:(id)arg1;
- (void)addLogicalDevice:(id)arg1;
- (id)children;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithLogicalDevice:(id)arg1;
- (id)initWithPhysicalAddress:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)logicalDevices;
- (id)parent;
- (unsigned int)physicalAddress;
- (id)propertyList;
- (void)setParent:(id)arg1;

@end