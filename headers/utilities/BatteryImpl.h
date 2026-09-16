#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 28 member(s).
namespace Windows::Devices::Power {
class BatteryImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BatteryImpl@Power@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatteryImpl@Power@Devices@Windows@@QEAA@XZ
    BatteryImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BatteryImpl@Power@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReport@BatteryImpl@Power@Devices@Windows@@UEAAJPEAPEAUIBatteryReport@234@@Z
    virtual long GetReport(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BatteryImpl@Power@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BatteryImpl@Power@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BatteryImpl@Power@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BatteryImpl@Power@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BatteryImpl@Power@Devices@Windows@@UEAAJAEBV?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@AEBVString@Internal@4@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque const &, ::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelfUpdateByDeviceId@BatteryImpl@Power@Devices@Windows@@QEAAJE@Z
    long SelfUpdateByDeviceId(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ReportUpdated@BatteryImpl@Power@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVBattery@Power@Devices@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ReportUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@BatteryImpl@Power@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ReportUpdated@BatteryImpl@Power@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ReportUpdated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatteryImpl@Power@Devices@Windows@@UEAA@XZ
    virtual ~BatteryImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUpdate@BatteryImpl@Power@Devices@Windows@@AEAAJAEBU_BATTERY_INFORMATION@@AEBU_BATTERY_STATUS@@@Z
    long InternalUpdate(_BATTERY_INFORMATION const &, _BATTERY_STATUS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUpdateNotPresent@BatteryImpl@Power@Devices@Windows@@AEAAJXZ
    long InternalUpdateNotPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBatteryDetails@BatteryImpl@Power@Devices@Windows@@AEAAXAEBU_BATTERY_INFORMATION@@AEBU_BATTERY_STATUS@@@Z
    void LogBatteryDetails(_BATTERY_INFORMATION const &, _BATTERY_STATUS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeCapacityValue@BatteryImpl@Power@Devices@Windows@@AEAAJW4BatteryProperty@1234@KEAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z
    long MakeCapacityValue(int, unsigned long, unsigned char, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeIntReference@BatteryImpl@Power@Devices@Windows@@AEAAJW4BatteryProperty@1234@HAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z
    long MakeIntReference(int, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseReportUpdatedEvent@BatteryImpl@Power@Devices@Windows@@AEAAXXZ
    void RaiseReportUpdatedEvent();
};
} // namespace Windows::Devices::Power
