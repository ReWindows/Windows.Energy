#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 13 member(s).
namespace Windows::Devices::Power {
class BatteryStaticsImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatteryStaticsImpl@Power@Devices@Windows@@QEAA@XZ
    BatteryStaticsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromIdAsync@BatteryStaticsImpl@Power@Devices@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVBattery@Power@Devices@Windows@@@Foundation@4@@Z
    virtual long FromIdAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatteryDevice@BatteryStaticsImpl@Power@Devices@Windows@@QEAAJAEBVString@Internal@4@AEAV?$ComPtr@VBatteryImpl@Power@Devices@Windows@@@WRL@Microsoft@@@Z
    long GetBatteryDevice(::Windows::Internal::String const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceSelector@BatteryStaticsImpl@Power@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDeviceSelector(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BatteryStaticsImpl@Power@Devices@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AggregateBattery@BatteryStaticsImpl@Power@Devices@Windows@@UEAAJPEAPEAUIBattery@234@@Z
    virtual long get_AggregateBattery(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatteryStaticsImpl@Power@Devices@Windows@@UEAA@XZ
    virtual ~BatteryStaticsImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositeBatteryCallback@BatteryStaticsImpl@Power@Devices@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long CompositeBatteryCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchDeviceIdCallback@BatteryStaticsImpl@Power@Devices@Windows@@CAJAEBV?$ComPtr@VBatteryImpl@Power@Devices@Windows@@@WRL@Microsoft@@PEAX@Z
    static long MatchDeviceIdCallback(WindissectOpaque const &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelfUpdateCallback@BatteryStaticsImpl@Power@Devices@Windows@@CAJAEBV?$ComPtr@VBatteryImpl@Power@Devices@Windows@@@WRL@Microsoft@@PEAX@Z
    static long SelfUpdateCallback(WindissectOpaque const &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkBatteryCache@BatteryStaticsImpl@Power@Devices@Windows@@AEAAJPEBDP6AJAEBV?$ComPtr@VBatteryImpl@Power@Devices@Windows@@@WRL@Microsoft@@PEAX@Z2PEAV567@@Z
    long WalkBatteryCache(char const *, long ( *)(WindissectOpaque const &, void *), void *, WindissectOpaque *);
};
} // namespace Windows::Devices::Power
