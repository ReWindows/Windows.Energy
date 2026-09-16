#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z
    long Initialize(HSTRING__* const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z
    static long FreeAndAssignOnSuccess(long, HSTRING__*, HSTRING__* *);
};
} // namespace Windows::Internal
