#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 8 member(s).
namespace winrt::Windows::Internal::PowerAdapter::implementation {
class PowerAdapter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdapterPresent@PowerAdapter@implementation@1Internal@Windows@winrt@@QEAAEXZ
    unsigned char IsAdapterPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecSupported@PowerAdapter@implementation@1Internal@Windows@winrt@@QEAAEXZ
    unsigned char IsRecSupported();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PowerAdapter@implementation@0Internal@Windows@winrt@@QEAA@XZ
    PowerAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PowerAdapterChangedEvent@PowerAdapter@implementation@1Internal@Windows@winrt@@QEAA?AUevent_token@5@AEBUPowerAdapterEventHandler@1345@@Z
    WindissectOpaque PowerAdapterChangedEvent(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PowerAdapter@implementation@0Internal@Windows@winrt@@UEAA@XZ
    virtual ~PowerAdapter();
};
} // namespace winrt::Windows::Internal::PowerAdapter::implementation
