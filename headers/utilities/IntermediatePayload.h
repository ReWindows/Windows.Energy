#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 2 member(s).
namespace Windows::Devices::Power::Helpers {
class IntermediatePayload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPayload@IntermediatePayload@Helpers@Power@Devices@Windows@@SA?AU12345@XZ
    static WindissectOpaque ReadPayload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IntermediatePayload@Helpers@Power@Devices@Windows@@QEAA@XZ
    ~IntermediatePayload();
};
} // namespace Windows::Devices::Power::Helpers
