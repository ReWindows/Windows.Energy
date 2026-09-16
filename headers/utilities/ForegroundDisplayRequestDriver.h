#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 16 member(s).
class ForegroundDisplayRequestDriver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayRequestCountDecrement@ForegroundDisplayRequestDriver@@SAJXZ
    static long DisplayRequestCountDecrement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayRequestCountIncrement@ForegroundDisplayRequestDriver@@SAJXZ
    static long DisplayRequestCountIncrement();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ForegroundDisplayRequestDriver@@QEAA@XZ
    ~ForegroundDisplayRequestDriver();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeCallbackStub@ForegroundDisplayRequestDriver@@CAXEPEAX0@Z
    static void AppStateChangeCallbackStub(unsigned char, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOsPowerRequestHandle@ForegroundDisplayRequestDriver@@AEAAJXZ
    long CreateOsPowerRequestHandle();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ForegroundDisplayRequestDriver@@AEAA@XZ
    ForegroundDisplayRequestDriver();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentModuleHandle@ForegroundDisplayRequestDriver@@CAHPEAPEAUHINSTANCE__@@@Z
    static int GetCurrentModuleHandle(HINSTANCE__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ForegroundDisplayRequestDriver@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTerminalTopologyManager@ForegroundDisplayRequestDriver@@AEAAXXZ
    void NotifyTerminalTopologyManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppStateChangeCallback@ForegroundDisplayRequestDriver@@AEAAXE@Z
    void OnAppStateChangeCallback(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResourceManagerCallback@ForegroundDisplayRequestDriver@@AEAAXXZ
    void OnResourceManagerCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithResourceManager@ForegroundDisplayRequestDriver@@AEAAJXZ
    long RegisterWithResourceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOsPowerRequests@ForegroundDisplayRequestDriver@@AEAAXXZ
    void ReleaseOsPowerRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceManagerCallbackStub@ForegroundDisplayRequestDriver@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void ResourceManagerCallbackStub(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeOsPowerRequests@ForegroundDisplayRequestDriver@@AEAAJXZ
    long TakeOsPowerRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWithResourceManager@ForegroundDisplayRequestDriver@@AEAAXXZ
    void UnregisterWithResourceManager();
};
