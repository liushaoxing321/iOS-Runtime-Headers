/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHome : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver, NSSecureCoding> {
    NSMutableArray *_accessories;
    HMDAccessoryManager *_accessoryManager;
    NSMutableArray *_actionSets;
    BOOL _adminUser;
    NSString *_administratorName;
    long _bootupRemoteAccessOnceToken;
    int _configurationVersion;
    HMDHomeManager *_homeManager;
    int _lastKnownReachableAccessoryCount;
    int _lastKnownReachableIPAccessoryCount;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    HMDRoom *_roomForEntireHome;
    NSMutableArray *_rooms;
    NSMutableArray *_serviceGroups;
    NSMutableArray *_services;
    NSMutableArray *_triggers;
    NSMutableArray *_users;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_zones;
}

@property (nonatomic, retain) NSMutableArray *accessories;
@property (nonatomic, retain) HMDAccessoryManager *accessoryManager;
@property (nonatomic, retain) NSMutableArray *actionSets;
@property (getter=isAdminUser, nonatomic) BOOL adminUser;
@property (nonatomic, retain) NSString *administratorName;
@property (nonatomic) long bootupRemoteAccessOnceToken;
@property (nonatomic) int configurationVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) int lastKnownReachableAccessoryCount;
@property (nonatomic) int lastKnownReachableIPAccessoryCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) HMDRoom *roomForEntireHome;
@property (nonatomic, retain) NSMutableArray *rooms;
@property (nonatomic, retain) NSMutableArray *serviceGroups;
@property (nonatomic, retain) NSMutableArray *services;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *triggers;
@property (nonatomic, retain) NSMutableArray *users;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) NSMutableArray *zones;

+ (BOOL)isObjectContainedInHome:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (void)_addAdditionalUser:(id)arg1 toAccessories:(id)arg2;
- (void)_addAllUsersToAccessories:(id)arg1;
- (void)_addNewAccessories:(id)arg1 message:(id)arg2;
- (void)_addPairingsForAccessories:(id)arg1 controllerName:(id)arg2 controllerPublicKey:(id)arg3;
- (void)_addUser:(id)arg1 userPrivilege:(unsigned int)arg2 confirm:(BOOL)arg3 message:(id)arg4;
- (void)_checkRemoteAccess;
- (void)_handleAddAccessory:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (void)_handleAddTrigger:(id)arg1;
- (void)_handleAddUser:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)_handleMultipleCharacteristicRead:(id)arg1;
- (void)_handleMultipleCharacteristicWrite:(id)arg1;
- (void)_handlePrepareExecuteActionSet:(id)arg1;
- (void)_handlePrepareMultipleCharacteristicRead:(id)arg1;
- (void)_handlePrepareMultipleCharacteristicWrite:(id)arg1;
- (void)_handleQueryUserPrivilege:(id)arg1;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_handleRemoveUser:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleRetrievalForBlockedAccessory:(id)arg1 blockedBridgedAccessories:(id)arg2 unblockMessage:(id)arg3 error:(id)arg4;
- (void)_handleUnblock:(id)arg1;
- (void)_notifyChangedCharacteristics:(id)arg1;
- (void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_performAddPairingForUser:(id)arg1 destination:(id)arg2 remotePeer:(BOOL)arg3 userPrivilege:(unsigned int)arg4 controllerInfo:(id)arg5 identifier:(id)arg6 responseHandler:(id /* block */)arg7;
- (id)_preferredAccessoryForAccessory:(id)arg1;
- (id)_preferredCharacteristicForCharacteristic:(id)arg1;
- (id)_prepareMultipleCharacteristicRead:(id)arg1;
- (void)_reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (void)_readCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_registerForMessages;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)_removeAccessories:(id)arg1 message:(id)arg2;
- (void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2;
- (void)_removeAdditionalUser:(id)arg1 fromAccessory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeAllAccessoriesWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (void)_removePairingsForAccessories:(id)arg1 controllerName:(id)arg2 controllerPublicKey:(id)arg3;
- (void)_removeService:(id)arg1;
- (void)_removeUser:(id)arg1 message:(id)arg2;
- (void)_sendInviteRequestForUser:(id)arg1 userPrivilege:(unsigned int)arg2 confirm:(BOOL)arg3 message:(id)arg4;
- (void)_writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)accessories;
- (id)accessoryManager;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (id)accessoryWithName:(id)arg1;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSets;
- (void)addAccessoryToCollection:(id)arg1;
- (id)addName:(id)arg1;
- (id)administratorName;
- (long)bootupRemoteAccessOnceToken;
- (void)checkReachabilityAndSpinRemoteAccess;
- (void)checkTimerTriggers;
- (int)configurationVersion;
- (void)configure:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupBridgeForBridgedAccessories:(id)arg1 potentialBridgeAccessories:(id)arg2;
- (void)fixupReplacementAccessories:(id)arg1 commonAccessories:(id)arg2 idsDataSync:(BOOL)arg3;
- (void)handleBackgroundTaskAgentJob:(id)arg1;
- (id)homeManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 entireRoomUUID:(id)arg3 administratorName:(id)arg4 homeManager:(id)arg5;
- (void)invalidate;
- (BOOL)isAdminUser;
- (BOOL)isDeviceLocked;
- (int)lastKnownReachableAccessoryCount;
- (int)lastKnownReachableIPAccessoryCount;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (void)notifyChangedCharacteristics:(id)arg1;
- (void)notifyNewRemotePeersFound:(BOOL)arg1 remoteUsersRemoved:(id)arg2;
- (void)notifySyncDataChanged;
- (void)performAddPairingForRemoteAccessPoint:(id)arg1 destination:(id)arg2 controllerInfo:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)reEvaluateTriggers;
- (void)reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (int)reachableAccessories;
- (int)reachableIPAccessories;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)removeAllAccessoriesWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)removeCharacteristic:(id)arg1;
- (id)removeName:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeUser:(id)arg1;
- (id)replaceName:(id)arg1 withNewName:(id)arg2;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroups;
- (id)services;
- (void)setAccessories:(id)arg1;
- (void)setAccessoryManager:(id)arg1;
- (void)setActionSets:(id)arg1;
- (void)setAdminUser:(BOOL)arg1;
- (void)setAdministratorName:(id)arg1;
- (void)setBootupRemoteAccessOnceToken:(long)arg1;
- (void)setConfigurationVersion:(int)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLastKnownReachableAccessoryCount:(int)arg1;
- (void)setLastKnownReachableIPAccessoryCount:(int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoomForEntireHome:(id)arg1;
- (void)setRooms:(id)arg1;
- (void)setServiceGroups:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)setUsers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setZones:(id)arg1;
- (void)takeOwnershipOfTriggers:(id)arg1 triggersToReactivate:(id)arg2;
- (id)thisAdminUser;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggers;
- (id)users;
- (id)uuid;
- (id)workQueue;
- (void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)writeRequestTuplesFromMessage:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zones;

@end