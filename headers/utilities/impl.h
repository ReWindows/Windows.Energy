#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Energy.dll by Windissect. 27 member(s).
namespace winrt {
class impl {
public:
    class atomic_ref_count;
    class factory_count_guard;
    class implements_delegate_base;
    class resume_apartment_context;
    class slim_source_location;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z
    void check_status_canceled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z
    WindissectOpaque * create_hstring_on_heap(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z
    WindissectOpaque * duplicate_hstring(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z
    void fallback_submit_threadpool_callback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ
    WindissectOpaque get_static_lifetime_map();
    // Category: Method | Source: PDB Internal
    // Symbol: ?hresult_from_win32@impl@winrt@@YAHI@Z
    int hresult_from_win32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z
    int make_marshaler(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z
    WindissectOpaque message_from_hresult(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_failed_invoke@impl@winrt@@YA_NXZ
    bool report_failed_invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?resume_apartment_callback@impl@winrt@@YAHPEAUcom_callback_args@12@@Z
    int resume_apartment_callback(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?resume_background_callback@impl@winrt@@YAXPEAX0@Z
    void resume_background_callback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z
    WindissectOpaque trim_hresult_message(unsigned short const * const, unsigned int);
};
} // namespace winrt
