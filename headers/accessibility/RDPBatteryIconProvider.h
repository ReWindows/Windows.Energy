#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 6 member(s).
namespace winrt::Windows::Internal::UI::PowerUX::implementation {
class RDPBatteryIconProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleBatteryIconStateChange@RDPBatteryIconProvider@implementation@PowerUX@UI@Internal@Windows@winrt@@QEAAXAEBUIBuffer@Streams@Storage@67@@Z
    void HandleBatteryIconStateChange(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RDPBatteryIconProvider@implementation@PowerUX@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RDPBatteryIconProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RDPBatteryIconProvider@implementation@PowerUX@UI@Internal@Windows@winrt@@AEAAXXZ
    void Initialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RDPBatteryIconProvider@implementation@PowerUX@UI@Internal@Windows@winrt@@AEAA@U?$weak_ref@UBatteryIcon@implementation@PowerUX@UI@Internal@Windows@winrt@@@6@@Z
    RDPBatteryIconProvider(WindissectOpaque);
};
} // namespace winrt::Windows::Internal::UI::PowerUX::implementation
