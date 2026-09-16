#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 8 member(s).
namespace winrt::Windows::Internal::UI::PowerUX::implementation {
class BatteryIcon {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatteryIcon@implementation@PowerUX@UI@Internal@Windows@winrt@@QEAA@XZ
    BatteryIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalCompositeBatteryIcon@BatteryIcon@implementation@PowerUX@UI@Internal@Windows@winrt@@SA?AU134567@XZ
    static WindissectOpaque GetLocalCompositeBatteryIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteCompositeBatteryIcon@BatteryIcon@implementation@PowerUX@UI@Internal@Windows@winrt@@SA?AU134567@XZ
    static WindissectOpaque GetRemoteCompositeBatteryIcon();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatteryIcon@implementation@PowerUX@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~BatteryIcon();
};
} // namespace winrt::Windows::Internal::UI::PowerUX::implementation
