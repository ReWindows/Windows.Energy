#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 5 member(s).
namespace winrt::Windows::Devices::Power::factory_implementation {
class PowerGridForecast {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PowerGridForecast@factory_implementation@Power@Devices@Windows@winrt@@UEBA?AW4TrustLevel@Foundation@56@XZ
    virtual int GetTrustLevel() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PowerGridForecast@factory_implementation@Power@Devices@Windows@winrt@@UEAA@XZ
    virtual ~PowerGridForecast();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInternalEvent@PowerGridForecast@factory_implementation@Power@Devices@Windows@winrt@@AEAAXXZ
    void RegisterInternalEvent();
};
} // namespace winrt::Windows::Devices::Power::factory_implementation
