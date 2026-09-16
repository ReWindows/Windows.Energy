#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 4 member(s).
namespace winrt::Windows::Devices::Power::implementation {
class PowerGridForecast {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForecast@PowerGridForecast@implementation@Power@Devices@Windows@winrt@@SA?AU13456@XZ
    static WindissectOpaque GetForecast();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PowerGridForecast@implementation@Power@Devices@Windows@winrt@@UEAA@XZ
    virtual ~PowerGridForecast();
};
} // namespace winrt::Windows::Devices::Power::implementation
