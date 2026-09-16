#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 5 member(s).
namespace winrt::Windows::Internal::UI::PowerUX::implementation {
class RdpBatteryServicesCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBatteryIconChangedEvent@RdpBatteryServicesCallback@implementation@PowerUX@UI@Internal@Windows@winrt@@UEAAJPEAEI@Z
    virtual long OnBatteryIconChangedEvent(unsigned char *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RdpBatteryServicesCallback@implementation@PowerUX@UI@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RdpBatteryServicesCallback();
};
} // namespace winrt::Windows::Internal::UI::PowerUX::implementation
