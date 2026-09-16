#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 54 member(s).
namespace Windows::System::Power {
class PowerManagerImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PowerManagerImpl@Power@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PowerManagerImpl@Power@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PowerManagerImpl@Power@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PowerManagerImpl@Power@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PowerManagerImpl@Power@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@PowerManagerImpl@Power@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PowerManagerImpl@Power@System@Windows@@QEAA@XZ
    PowerManagerImpl();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PowerManagerImpl@Power@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PowerManagerImpl@Power@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PowerManagerImpl@Power@System@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BatteryStatusChanged@PowerManagerImpl@Power@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BatteryStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnergySaverStatus2Changed@PowerManagerImpl@Power@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_EnergySaverStatus2Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnergySaverStatusChanged@PowerManagerImpl@Power@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_EnergySaverStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PowerSupplyStatusChanged@PowerManagerImpl@Power@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PowerSupplyStatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RemainingChargePercentChanged@PowerManagerImpl@Power@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_RemainingChargePercentChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RemainingDischargeTimeChanged@PowerManagerImpl@Power@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_RemainingDischargeTimeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BatteryStatus@PowerManagerImpl@Power@System@Windows@@UEAAJPEAW4BatteryStatus@234@@Z
    virtual long get_BatteryStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnergySaverStatus@PowerManagerImpl@Power@System@Windows@@UEAAJPEAW4EnergySaverStatus@234@@Z
    virtual long get_EnergySaverStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnergySaverStatus2@PowerManagerImpl@Power@System@Windows@@UEAAJPEAW4EnergySaverStatus2@234@@Z
    virtual long get_EnergySaverStatus2(int*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnergySaverStatus2Supported@PowerManagerImpl@Power@System@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnergySaverStatus2Supported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PowerSupplyStatus@PowerManagerImpl@Power@System@Windows@@UEAAJPEAW4PowerSupplyStatus@234@@Z
    virtual long get_PowerSupplyStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemainingChargePercent@PowerManagerImpl@Power@System@Windows@@UEAAJPEAH@Z
    virtual long get_RemainingChargePercent(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemainingDischargeTime@PowerManagerImpl@Power@System@Windows@@UEAAJPEAUTimeSpan@Foundation@4@@Z
    virtual long get_RemainingDischargeTime(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BatteryStatusChanged@PowerManagerImpl@Power@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BatteryStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnergySaverStatus2Changed@PowerManagerImpl@Power@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnergySaverStatus2Changed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnergySaverStatusChanged@PowerManagerImpl@Power@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnergySaverStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PowerSupplyStatusChanged@PowerManagerImpl@Power@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PowerSupplyStatusChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RemainingChargePercentChanged@PowerManagerImpl@Power@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RemainingChargePercentChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RemainingDischargeTimeChanged@PowerManagerImpl@Power@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RemainingDischargeTimeChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PowerManagerImpl@Power@System@Windows@@UEAA@XZ
    virtual ~PowerManagerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositeBatteryCallback@PowerManagerImpl@Power@System@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long CompositeBatteryCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePowerSupplyStatus@PowerManagerImpl@Power@System@Windows@@AEBA?AW4PowerSupplyStatus@234@XZ
    int ComputePowerSupplyStatus() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DischargeTimeCallback@PowerManagerImpl@Power@System@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long DischargeTimeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnergySaverCallback@PowerManagerImpl@Power@System@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long EnergySaverCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEnergySaverV2State@PowerManagerImpl@Power@System@Windows@@AEAAXAEBU_SEB_EVENT_HEADER@@@Z
    void HandleEnergySaverV2State(_SEB_EVENT_HEADER const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWeakChargerState@PowerManagerImpl@Power@System@Windows@@AEAAXE@Z
    void HandleWeakChargerState(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEnergySaverStatusChangedAsync@PowerManagerImpl@Power@System@Windows@@AEAAXXZ
    void RaiseEnergySaverStatusChangedAsync();
};
} // namespace Windows::System::Power
