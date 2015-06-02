/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBestAppSuggestionManager : NSObject {
    int _bestAppNotificationCount;
    NSXPCConnection *_connection;
    <LSBestAppSuggestionManagerDelegate> *_delegate;
    LSBestAppSuggestion *_lastBestAppSuggestion;
    BOOL _listeningForBestAppSuggestions;
}

@property (retain) NSXPCConnection *connection;
@property <LSBestAppSuggestionManagerDelegate> *delegate;

- (id)bestAppSuggestion;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg1;
- (void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2;
- (id)bestAppSuggestions:(int)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6;
- (void)notifyBestAppChanged:(id)arg1 type:(unsigned int)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 when:(id)arg6 confidence:(double)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startListeningForBestAppSuggestions;
- (void)stopListeningForBestAppSuggestions;

@end