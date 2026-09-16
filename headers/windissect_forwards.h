#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace Microsoft { namespace WRL { class Details; } } 
namespace Windows { namespace Devices { class Power; } } 
class winrt; 
class AgileGitPtr; class CMarshaledInterface; class CallerIdentity; class Destroy; class EventRegistrationToken; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class ForegroundDisplayRequestDriver; class HINSTANCE__; class HKEY__; class HSTRING__; class HWND__; class IActivationFactory; class IClassFactory; class IInspectable; class INoMarshal; class IRpcOptions; class IStream; class IUnknown; class IWeakReference; class RegCloseKey; class ReleaseSRWLockExclusive; class RpcOptionsHelper; class TraceLoggingThreadActivityIdSetter; class TrackingLockGuard; class WilFailureReport; class WilFailureReportInformation; class _BATTERY_INFORMATION; class _BATTERY_STATUS; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _Mbstatet; class _RO_REGISTRATION_COOKIE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _SEB_EVENT_HEADER; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _WNF_PO_COMPOSITE_BATTERY_PAYLOAD; class _WNF_PO_POWER_ADAPTER_REC_CAPABILITIES_PAYLOAD; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperArray; class _tlgWrapperBinary; class _tlgWrapperByRef; class _tlgWrapperByVal; class iterator; class lambda_028c5df5639f13cbd2b09cd8b5790027; class lambda_02a86428158461f4dc557e8a6d2b58da; class lambda_052e919cc0e5399df76dff3972c0cac1; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_0e64988457575224279dcb6d61e61bdd; class lambda_107ddf877dae6f7ef52369f665e1d3c8; class lambda_1851f07ad6e3b7390cade4a9044abeb7; class lambda_1b92b8e5262a3a633e46bd6cbdfa2f4c; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_9fcc0990ef58c1b2ac799528752a791d; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_b9c6a9526e98e8096438348dee47a029; class lambda_be3e5d9dce35d2c8dbfa8485373731d5; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class lambda_d0596c7c6b47776195115aab479844a5; class promise_type; class thunk; class type; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace Concurrency { class invalid_operation; class scheduler_interface; class scheduler_ptr; } 
namespace Concurrency { namespace details { class _CancellationTokenRegistration; class _CancellationTokenState; class _ContinuationTaskHandleBase; class _ExceptionHolder; class _TaskCreationCallstack; class _TaskProcHandle; class _Task_impl; class _Task_impl_base; } } 
namespace Microsoft { namespace WRL { class AgileRef; class CloakedIid; class ComPtr; class Details; class EventSource; class FtmBase; class InvokeModeOptions; class RuntimeClassFlags; class WeakRef; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class CriticalSection; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockCriticalSection; class SyncLockExclusive; class SyncLockShared; } } } } 
namespace Windows { namespace Devices { class Power; } } 
namespace Windows { namespace Foundation { class IAsyncOperation; class IEventHandler; class IPropertyValueStatics; class IReference; class ITypedEventHandler; class TimeSpan; } } 
namespace Windows { namespace Internal { class ComTaskPoolHandler; class IAsyncFireCompletion; class String; } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace System { namespace Display { class DisplayRequestFactory; class DisplayRequestImpl; class IDisplayRequest; } } } 
namespace Windows { namespace System { namespace Power { class PowerManagerImpl; } } } 
namespace std { class _Deleter_base; class _Facet_base; class _Func_base; class _Func_impl_no_alloc; class _List_const_iterator; class _List_iterator; class _List_node; class _List_simple_types; class _List_val; class _Simple_types; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class atomic; class bad_alloc; class bad_array_new_length; class bad_cast; class basic_streambuf; class basic_string; class basic_string_view; class char_traits; class error_code; class error_condition; class exception; class exception_ptr; class fpos; class function; class future_error; class invalid_argument; class istreambuf_iterator; class locale; class logic_error; class mutex; class nothrow_t; class nullptr_t; class once_flag; class pair; class ratio; class runtime_error; class shared_ptr; class time_get; class unique_lock; class vector; class weak_ptr; } 
namespace std { namespace chrono { class duration; class time_point; } } 
namespace std { namespace experimental { class coroutine_handle; class coroutine_traits; } } 
namespace wil { class FailureInfo; class ResultException; class process_heap_deleter; class srwlock; class unique_any_t; class write_lock_required; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_wnf_subscription_state; class registry_watcher_state; class resource_policy; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

