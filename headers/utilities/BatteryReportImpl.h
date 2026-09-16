#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 22 member(s).
namespace Windows::Devices::Power {
class BatteryReportImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BatteryReportImpl@Power@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatteryReportImpl@Power@Devices@Windows@@QEAA@XZ
    BatteryReportImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BatteryReportImpl@Power@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BatteryReportImpl@Power@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BatteryReportImpl@Power@Devices@Windows@@UEAAJAEBV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@000W4BatteryStatus@2System@4@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChargeRateInMilliwatts@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@4@@Z
    virtual long get_ChargeRateInMilliwatts(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesignCapacityInMilliwattHours@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@4@@Z
    virtual long get_DesignCapacityInMilliwattHours(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullChargeCapacityInMilliwattHours@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@4@@Z
    virtual long get_FullChargeCapacityInMilliwattHours(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemainingCapacityInMilliwattHours@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@4@@Z
    virtual long get_RemainingCapacityInMilliwattHours(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@BatteryReportImpl@Power@Devices@Windows@@UEAAJPEAW4BatteryStatus@2System@4@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatteryReportImpl@Power@Devices@Windows@@UEAA@XZ
    virtual ~BatteryReportImpl();
};
} // namespace Windows::Devices::Power
