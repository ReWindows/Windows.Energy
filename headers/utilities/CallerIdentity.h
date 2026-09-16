#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 2 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCurrentThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCurrentThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCurrentThread(HWND__* *);
};
