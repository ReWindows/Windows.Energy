#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 20 member(s).
namespace Windows::System::Display {
class DisplayRequestImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DisplayRequestImpl@Display@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayRequestImpl@Display@System@Windows@@QEAA@XZ
    DisplayRequestImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DisplayRequestImpl@Display@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DisplayRequestImpl@Display@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DisplayRequestImpl@Display@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DisplayRequestImpl@Display@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DisplayRequestImpl@Display@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DisplayRequestImpl@Display@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DisplayRequestImpl@Display@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActive@DisplayRequestImpl@Display@System@Windows@@UEAAJXZ
    virtual long RequestActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRelease@DisplayRequestImpl@Display@System@Windows@@UEAAJXZ
    virtual long RequestRelease();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayRequestImpl@Display@System@Windows@@UEAA@XZ
    virtual ~DisplayRequestImpl();
};
} // namespace Windows::System::Display
