#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 9 member(s).
namespace winrt::Windows::Internal::UI::PowerUX::implementation {
class BatteryIconProviderBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@QEAA@U?$weak_ref@UBatteryIcon@implementation@PowerUX@UI@Internal@Windows@winrt@@@6@@Z
    BatteryIconProviderBase(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconData@BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@QEAA?AUBatteryIconData@34567@XZ
    WindissectOpaque GetIconData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMobIconData@BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@QEAA?AUBatteryIconData@34567@XZ
    WindissectOpaque GetMobIconData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeState@BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@QEAA?AUIBuffer@Streams@Storage@67@XZ
    WindissectOpaque SerializeState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~BatteryIconProviderBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeState@BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@IEAA?AUBatteryIconState@234567@AEBUIBuffer@Streams@Storage@67@@Z
    WindissectOpaque DeserializeState(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIconStateChanged@BatteryIconProviderBase@implementation@PowerUX@UI@Internal@Windows@winrt@@IEAAXXZ
    void NotifyIconStateChanged();
};
} // namespace winrt::Windows::Internal::UI::PowerUX::implementation
