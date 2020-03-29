//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKBridgeExtension.h"

#import "NXEvent4RVPBridgeExtension4BLE-Protocol.h"
#import "RVDConfigProtocol-Protocol.h"

@class NSOperationQueue, NSString, RVAViewControllerProxy, RVDBLECentralManager, RVKSession;

@interface RVPBridgeExtension4BLE : RVKBridgeExtension <RVDConfigProtocol, NXEvent4RVPBridgeExtension4BLE>
{
    NSOperationQueue *_bleQueue;
    RVDBLECentralManager *_centralManager;
    NSString *_appId;
    RVKSession *_currentSession;
    RVAViewControllerProxy *_currentVCProxy;
}

+ (void)__RVK_export__getBLEDeviceCharacteristics48913;
+ (void)__RVK_export__getBLEDeviceServices46312;
+ (void)__RVK_export__notifyBLECharacteristicValueChange43111;
+ (void)__RVK_export__readBLECharacteristicValue40110;
+ (void)__RVK_export__writeBLECharacteristicValue3659;
+ (void)__RVK_export__disconnectBLEDevice3408;
+ (void)__RVK_export__connectBLEDevice3077;
+ (void)__RVK_export__getConnectedBluetoothDevices2856;
+ (void)__RVK_export__getBluetoothDevices2675;
+ (void)__RVK_export__stopBluetoothDevicesDiscovery2494;
+ (void)__RVK_export__startBluetoothDevicesDiscovery1973;
+ (void)__RVK_export__getBluetoothAdapterState1792;
+ (void)__RVK_export__closeBluetoothAdapter1601;
+ (void)__RVK_export__openBluetoothAdapter1220;
@property(retain, nonatomic) RVAViewControllerProxy *currentVCProxy; // @synthesize currentVCProxy=_currentVCProxy;
@property(retain, nonatomic) RVKSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) RVDBLECentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSOperationQueue *bleQueue; // @synthesize bleQueue=_bleQueue;
- (void).cxx_destruct;
- (void)remoteLog:(id)arg1 params:(id)arg2;
- (void)logToFile:(id)arg1;
- (id)ble_needWaitExit;
- (id)ble_connectMaxtimeout;
- (id)ble_hexStringUseLowcase;
- (id)ble_ignoreAppExitEvent;
- (id)periperalInfoWithPeriperals:(id)arg1;
- (void)checkParam:(id)arg1 checkType:(unsigned long long)arg2 errorCode:(id *)arg3 errorMessage:(id *)arg4;
- (void)onCharacteristicBigValueUpdate:(id)arg1 value:(id)arg2;
- (void)onCharacteristicValueUpdate:(id)arg1;
- (void)onConnectionStateChanged:(id)arg1;
- (void)onDiscoverPeriperals:(id)arg1;
- (void)onDiscoverPeriperal:(id)arg1;
- (void)onCentralDidUpdateState;
- (void)getBLEDeviceCharacteristics:(id)arg1 serviceId:(id)arg2 originParam:(id)arg3 page:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)getBLEDeviceServices:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)notifyBLECharacteristicValueChange:(id)arg1 serviceId:(id)arg2 characteristicId:(id)arg3 descriptorId:(id)arg4 state:(_Bool)arg5 originParam:(id)arg6 page:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)readBLECharacteristicValue:(id)arg1 serviceId:(id)arg2 characteristicId:(id)arg3 descriptorId:(id)arg4 originParam:(id)arg5 page:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)writeBLECharacteristicValue:(id)arg1 serviceId:(id)arg2 characteristicId:(id)arg3 originParam:(id)arg4 page:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)disconnectBLEDevice:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)connectBLEDevice:(id)arg1 timeout:(id)arg2 originParam:(id)arg3 page:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)getConnectedBluetoothDevices:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)getBluetoothDevices:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)stopBluetoothDevicesDiscovery:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)startBluetoothDevicesDiscovery:(id)arg1 allowDuplicatesKey:(_Bool)arg2 interval:(id)arg3 originParam:(id)arg4 page:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)getBluetoothAdapterState:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)closeBluetoothAdapter:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)openBluetoothAdapter:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)jsApiPreproccessing:(id *)arg1 errorMessage:(id *)arg2;
- (void)h5appWillTiminate:(id)arg1;
- (void)addExitObserver;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
