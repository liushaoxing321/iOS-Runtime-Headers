/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityDownloadInformationController : NSObject <MPStoreDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _invalidatesForMediaLibraryChanges;
    NSMutableDictionary *_observerTokenToRegisteredSource;
    NSMutableDictionary *_registeredSourceToActiveDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL invalidatesForMediaLibraryChanges;
@property (readonly) Class superclass;

+ (id)_activeDownloadForIdentifierCollection:(id)arg1;
+ (struct MusicEntityDownloadInformation { int x1; float x2; })_downloadInformationForRegisteredSource:(id)arg1 activeDownload:(id)arg2;
+ (void)_updateRegisteredSource:(id)arg1 withIdentifierCollection:(id)arg2 valuesForProperties:(id)arg3;
+ (id)requiredDownloadInformationEntityValuePropertiesForItemType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)addDownloadInformationObserverUsingBlock:(id /* block */)arg1 forEntityValueContext:(id)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (id)init;
- (BOOL)invalidatesForMediaLibraryChanges;
- (void)removeDownloadInformationObserver:(id)arg1;
- (void)setInvalidatesForMediaLibraryChanges:(BOOL)arg1;

@end
