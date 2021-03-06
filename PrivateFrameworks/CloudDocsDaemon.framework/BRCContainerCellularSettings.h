/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerCellularSettings : NSObject {
    NSNumber *_isCellularEnabledForDocumentsAndData;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)containerCellularSettings;

- (void).cxx_destruct;
- (void)_accountDidChange;
- (BOOL)_isCellularEnabledForBundleID:(id)arg1;
- (BOOL)_isCellularEnabledForDocumentsAndData;
- (id)init;
- (BOOL)isCellularEnabledForContainerID:(id)arg1;

@end
