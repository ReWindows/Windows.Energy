#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 1 member(s).
namespace Windows::Devices {
class Power {
public:
    class BatteryImpl;
    class BatteryReportImpl;
    class BatteryStaticsFacade;
    class BatteryStaticsImpl;
    class Helpers;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyComPtr@Power@Devices@Windows@@YAJAEBV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@PEAPEAU?$IReference@H@Foundation@3@@Z
    long CopyComPtr(WindissectOpaque const &, WindissectOpaque * *);
};
} // namespace Windows::Devices
