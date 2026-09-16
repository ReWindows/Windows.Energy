#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 24 member(s).
namespace Windows::Devices::Power {
class BatteryStaticsFacade {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BatteryStaticsFacade@Power@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatteryStaticsFacade@Power@Devices@Windows@@QEAA@XZ
    BatteryStaticsFacade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromIdAsync@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVBattery@Power@Devices@Windows@@@Foundation@4@@Z
    virtual long FromIdAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceSelector@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDeviceSelector(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@BatteryStaticsFacade@Power@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@BatteryStaticsFacade@Power@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BatteryStaticsFacade@Power@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AggregateBattery@BatteryStaticsFacade@Power@Devices@Windows@@UEAAJPEAPEAUIBattery@234@@Z
    virtual long get_AggregateBattery(WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatteryStaticsSingleton@BatteryStaticsFacade@Power@Devices@Windows@@AEAAJPEAPEAUIBatteryStatics@234@@Z
    long GetBatteryStaticsSingleton(WindissectOpaque * *);
};
} // namespace Windows::Devices::Power
