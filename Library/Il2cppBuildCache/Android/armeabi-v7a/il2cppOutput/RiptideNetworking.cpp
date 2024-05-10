#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>
struct Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43;
// System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>
struct Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0;
// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08;
// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>
struct Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2;
// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler>
struct Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9;
// System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>
struct EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58;
// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>
struct EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858;
// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>
struct EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>>
struct Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t6CEED8910660964668522055C0010B575E62C702;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t7371CA721C62572380049BFDF1E23202E4E35496;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEqualityComparer`1<RiptideNetworking.Utils.LogType>
struct IEqualityComparer_1_tC3D7874B9B1E43ECFCCF46FAA6C2F60FAFD0B2C2;
// System.Collections.Generic.IEqualityComparer`1<System.UInt16>
struct IEqualityComparer_1_t9731E853EAF9E6A0C3E7AA1C80468DA45AD45860;
// System.Collections.Generic.Dictionary`2/KeyCollection<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>
struct KeyCollection_tEC24E6D5ABDDB9759074EFE5085546E02F0B053E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct KeyCollection_t1B0E0DD495663BB099AB0CA5C9D64C50A15CEC22;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt16,RiptideNetworking.Client/MessageHandler>
struct KeyCollection_tA24E7BA87CD73D57920C6B6C81B6086133059B6B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt16,RiptideNetworking.Server/MessageHandler>
struct KeyCollection_t06B55A001BC3100EB74C843FF9260F54E3BD0634;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<RiptideNetworking.Message>
struct List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>
struct ValueCollection_t2245735CA8C2F8E0274D0B5F082432636D35DCB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,System.Object>
struct ValueCollection_t59B4511A43B183EADF5F786F2DEFD334DE00D8B0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,RiptideNetworking.Client/MessageHandler>
struct ValueCollection_t16C42631350E8481DD70E81D01A42CFC49965A2C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,RiptideNetworking.Server/MessageHandler>
struct ValueCollection_tD083E9CAAB37B81CCD014713AAE1C04D9691C7B8;
// System.Collections.Generic.Dictionary`2/Entry<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>[]
struct EntryU5BU5D_tE43D6BD4CA3EFB4CB0D888BAA3AAEDE53AFA859F;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>[]
struct EntryU5BU5D_tBB93FB6901E283694819C77EC6C8FE7C04BF2ECE;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt16,RiptideNetworking.Client/MessageHandler>[]
struct EntryU5BU5D_tC34A0131EEF380E25441E7A8BEF46EE25BBA551A;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt16,RiptideNetworking.Server/MessageHandler>[]
struct EntryU5BU5D_tC1E2F3D98D81FC2DB168F1E06A79C46B8385C895;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// RiptideNetworking.Message[]
struct MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// RiptideNetworking.Transports.RudpTransport.PendingMessage[]
struct PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// RiptideNetworking.Utils.ActionQueue
struct ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// RiptideNetworking.Client
struct Client_t7A583A9D8A057E799587BB20B93191458EE47F5D;
// RiptideNetworking.ClientConnectedEventArgs
struct ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779;
// RiptideNetworking.ClientDisconnectedEventArgs
struct ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052;
// RiptideNetworking.ClientMessageReceivedEventArgs
struct ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// RiptideNetworking.Common
struct Common_tDAC6859E5A7575F6203B5375BBD44C8B7FB86610;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// RiptideNetworking.Transports.IClient
struct IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// RiptideNetworking.Transports.IServer
struct IServer_tB3B02FE2494041716D91854BAD67AB8EBD107713;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t95FF063A5295003D96C3C680EDF773DDF830DBF9;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// RiptideNetworking.Message
struct Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569;
// RiptideNetworking.MessageHandlerAttribute
struct MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// RiptideNetworking.Transports.RudpTransport.PendingMessage
struct PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA;
// RiptideNetworking.Transports.RudpTransport.ReceiveLockables
struct ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC;
// RiptideNetworking.Transports.RudpTransport.RudpClient
struct RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB;
// RiptideNetworking.Transports.RudpTransport.RudpListener
struct RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645;
// RiptideNetworking.Transports.RudpTransport.RudpPeer
struct RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// RiptideNetworking.Transports.RudpTransport.SendLockables
struct SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89;
// RiptideNetworking.Server
struct Server_t341C40B032F925BBDC3919097CE87816871D9FF6;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Timers.Timer
struct Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// RiptideNetworking.Client/<>c
struct U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D;
// RiptideNetworking.Client/MessageHandler
struct MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65;
// RiptideNetworking.Utils.RiptideLogger/LogMethod
struct LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B;
// RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE;
// RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08;
// RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59;
// RiptideNetworking.Server/<>c
struct U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB;
// RiptideNetworking.Server/MessageHandler
struct MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;

IL2CPP_EXTERN_C RuntimeClass* ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICommon_t6680AD6DA30524A4B1DD5E41FAB296BAD59E80F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConnectionInfo_tD83E0D1DCACA1927E07B528115427868694E69AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral032485D9576CE254A29B5DC8CD8FFA8AF8655710;
IL2CPP_EXTERN_C String_t* _stringLiteral0A0E1AF534FE4121655BA066E4B2E4EF86A267C2;
IL2CPP_EXTERN_C String_t* _stringLiteral0D988F54FFC16B9E2358C0B69E430B6DD2E9F7A2;
IL2CPP_EXTERN_C String_t* _stringLiteral15FDB9C694D1D2E55EB9D80CA1360553682FFD92;
IL2CPP_EXTERN_C String_t* _stringLiteral208B9B9DAAE639C431822150930A0087F5580304;
IL2CPP_EXTERN_C String_t* _stringLiteral29194CB83E2FE1AD1ECEC6755DDA95E0E898E1FD;
IL2CPP_EXTERN_C String_t* _stringLiteral42F7CEADE4E641833177CD87BD1C64C8AD80B313;
IL2CPP_EXTERN_C String_t* _stringLiteral4A8700002BB1709447F3F35B5060CF2127568704;
IL2CPP_EXTERN_C String_t* _stringLiteral6212245639AB603AF7EF3F8FADD89B4957CF0F00;
IL2CPP_EXTERN_C String_t* _stringLiteral6AD3E167F34A0E7A9C87EF1E2ADE12656FE3CCAD;
IL2CPP_EXTERN_C String_t* _stringLiteral6EBD3719CBE70084D5AFE71236B8A8C6806F8E53;
IL2CPP_EXTERN_C String_t* _stringLiteral705C465C050C80D7A56CE4FDC9644A3B21EBC9A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7138543DE01E7744D5CE45E43A90452D9E799F39;
IL2CPP_EXTERN_C String_t* _stringLiteral75EEAC183373826B1F1E6871BE7879D9C2DF52C4;
IL2CPP_EXTERN_C String_t* _stringLiteral76BC348770255224061A387057BA3E868F365332;
IL2CPP_EXTERN_C String_t* _stringLiteral784E3CA2C286FEC350763E24CF513B13245650AF;
IL2CPP_EXTERN_C String_t* _stringLiteral842E29BBFC651B0434F9BC081D746169548EEB33;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B;
IL2CPP_EXTERN_C String_t* _stringLiteral94DED92597825A74D1BF11F0D9C88DC39F8D5DDD;
IL2CPP_EXTERN_C String_t* _stringLiteral9ECDA7F92C385E1F911375211CF59E8C65B471A1;
IL2CPP_EXTERN_C String_t* _stringLiteralA170809BAC6C37884568C35C12FA240A66645750;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA77E4F25132B62B7F414B28F7EA9E1889FAFD6C8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralAED4899F4325F00A8A63840361F14B52CAB77C55;
IL2CPP_EXTERN_C String_t* _stringLiteralB5EBEA1FCBC5C7AFF7525ACC8C6192B384992E89;
IL2CPP_EXTERN_C String_t* _stringLiteralBA23BBF420C5718167542E1F4631A269B1B05CFB;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA7B47CE983AB0B963032F8AD7EE37C6C4DF57A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C3DB110501F69EA34635CBF43E4F7C50D9C2CB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2186D777FA30A5C8CDA7B5442D61D9679EBC41;
IL2CPP_EXTERN_C String_t* _stringLiteralD103A484567DE3B9D1EBF66E84915BC74DE16968;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC246E0501D6DB27015B170D8B32FB95C00B5450;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB8DB085A82EA43926B30721F9CFB36E0989732;
IL2CPP_EXTERN_C String_t* _stringLiteralE419C26D811CAA37111E10E463E3969FC52DF07A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC560E087BFCBD884970D9CC6D48C3E8921867F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF06CA56DE4FDDFC468850222DD792362FA75D8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralF39B193AA129AA77CF8EB8FA5801B3CDE94E17A1;
IL2CPP_EXTERN_C String_t* _stringLiteralF49B47F8CE82B265C52DEA60E0E23E1E516BF524;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Client_CreateMessageHandlersDictionary_m6D6E6B8A2AC8DC9E51C37842DDD004FD56118A5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_OnClientConnected_mB3E8BAD7EFC45D0A0DFA688FBF9049A5E782E27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_OnClientDisconnected_m2198B69232982AF02CEA88D01207BE469784D947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_OnConnected_mDAA3C5F3B433C3C5471E2D754B8D8A1FBAE81C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_OnConnectionFailed_m85B50F219C6B7CF24D9797D5030A7A1EC93C41AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_OnDisconnected_m57FA49DCE3BD9EEEDAB19D940B9A1B09B4C26C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_OnMessageReceived_mCD8BE956188B492CFC243A94C6468601CDB762ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8228C9A1435B072D223D12B3026BFC541AC184EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA5E01A26BC25D92C8EBF8CC755F37F9FC5795F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCECD1CCA8CC75DB9CBF95A6D143BE5293D85B5EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m0CF2DF5DA4B131C152188FD7AEFC1571241B3171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m4A38FFC8504D73B11B0E88578FACFE933F684FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m284435F26D13876D19921B2D0B7C2E6055F90508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6C34C38D69475B4B4C1DD1362274DA9E9CD46949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFD7C0415F9C764761FF2A3B65A7FCF8E25A61CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8D9526CD4BE8CB9AF9DDAC22D89D593863F2309E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC2B1C32885C2480B4091C020375F5A4248367C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2E9CE448B7428D59633DBB9B3F7CFB9D1E0DEB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7FDBD1F3D27F23E6B03A81375A570074C256C5AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m86334307F034D615CDD8E32732D48F2EBAD2D2FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD90A6C4FC22FFB1633CC5226D9CB54FA65C88ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2FBECB805452AB307FBF1C908F24BA7D57002A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m54DA1D0A01EE171B182EAF006E5E0ED563C6040F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m601D59600AB9ED3F9CD1F5E67A86BED07A65B01B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisString_t_mDAF4F8AFFC7C97A7BDD6C37260AD5B79C8A87B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA14EE902749C822D89B156A1E200519A05E0F7BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m660B8682C9EF5BAFD1892222BC552B7EF501B4DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D302BDE3B6502D306A22490FD1A11F5576F273E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF584E919D6B0C40F5C76F586436FFAC3B912C9E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m400A0F3CF6A7389459284AED012C12516B447FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m69EE08A7C088376C57E60546B7D765D1F45FA28C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mFDC58B6F498BA0F994149F42A7F1F4C0373696C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m11D95C0054D76A46FEBB9F0B14549C4329F7C7FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3DED4655979CC9C0713318918C12A0D12D76439B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E79072320F339F868FFE71CEF80EB1628056D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0FFFEFF762640BCA57B121686192AED78C745F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFB80CACCEDE8453BF33CDA08FA8F9BC51746043B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m19CF350D7F9EE0A0078E5AEEC98A0F08B0BF0DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Add_m06A61F50B60DB29236A73539B8FF85C43E53AF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Add_m8C48C7D01C48BFCA5AF9235CFCB87AF593051C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Add_mE7D517C644779BC3D81FF5974DF57F4498EAE14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Add_mFC9F1EDB4D0D6EC99D4E055560E422DACC4559E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PendingMessage_U3C_ctorU3Eb__12_0_m9C34C7C44DF905CE7EB366E1F4DD0D62AA01F8C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RudpClient_U3CConnectU3Eb__54_0_m9085BC14119845893560311FB72FE20209E50E61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RudpClient_U3COnConnectedU3Eb__75_0_mCA7A32AF5885AF98BC44A2E335BCC85B91155EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RudpClient_U3COnConnectionFailedU3Eb__76_0_mE7F10395DB5052876074042585C7965B7B270616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RudpClient_U3COnDisconnectedU3Eb__78_0_m748074F092A4F247AF1701DD33C243C9B817F8E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RudpListener_Receive_mF293800025971E19EE2DEF305CA2E35096C6076F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RudpListener_Send_m51CDD41B227EF5FCACDD58CAE8110B784198430D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Server_CreateMessageHandlersDictionary_m721FEC7463217502C192C08A06A2DEF777DE577C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_0_m84BDC7D4C5D55562F15656E85ACA01063BFC04A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_1_mFA3D1F8CBC562E05FA66F431F15230CCFE487DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_0_m8716B9CB06686C1656E83984251AB31B006F0609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_1_m8AADD2508385B3A28E1499ED2691052688773E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass58_0_U3CHandleU3Eb__0_m95B0DCB4119FE5F287DA7DAE1A856E3A9EF9DB88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass79_0_U3COnClientConnectedU3Eb__0_mA0D0B1EA963645A431A7618EFD01BADF22B1A2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass80_0_U3COnClientDisconnectedU3Eb__0_m67EEE8028B6FB5AD424A8D670CBCFD1340783A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m0088E557F9A22C3254CE1EE6E40C9DFE005AE452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6A454068BCCEED86B1FB3730F131E0653EC11D81 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>
struct Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE43D6BD4CA3EFB4CB0D888BAA3AAEDE53AFA859F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEC24E6D5ABDDB9759074EFE5085546E02F0B053E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2245735CA8C2F8E0274D0B5F082432636D35DCB1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___entries_1)); }
	inline EntryU5BU5D_tE43D6BD4CA3EFB4CB0D888BAA3AAEDE53AFA859F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE43D6BD4CA3EFB4CB0D888BAA3AAEDE53AFA859F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE43D6BD4CA3EFB4CB0D888BAA3AAEDE53AFA859F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___keys_7)); }
	inline KeyCollection_tEC24E6D5ABDDB9759074EFE5085546E02F0B053E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEC24E6D5ABDDB9759074EFE5085546E02F0B053E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEC24E6D5ABDDB9759074EFE5085546E02F0B053E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ___values_8)); }
	inline ValueCollection_t2245735CA8C2F8E0274D0B5F082432636D35DCB1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2245735CA8C2F8E0274D0B5F082432636D35DCB1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2245735CA8C2F8E0274D0B5F082432636D35DCB1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB93FB6901E283694819C77EC6C8FE7C04BF2ECE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1B0E0DD495663BB099AB0CA5C9D64C50A15CEC22 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___entries_1)); }
	inline EntryU5BU5D_tBB93FB6901E283694819C77EC6C8FE7C04BF2ECE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB93FB6901E283694819C77EC6C8FE7C04BF2ECE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB93FB6901E283694819C77EC6C8FE7C04BF2ECE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___keys_7)); }
	inline KeyCollection_t1B0E0DD495663BB099AB0CA5C9D64C50A15CEC22 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1B0E0DD495663BB099AB0CA5C9D64C50A15CEC22 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1B0E0DD495663BB099AB0CA5C9D64C50A15CEC22 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ___values_8)); }
	inline ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>
struct Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC34A0131EEF380E25441E7A8BEF46EE25BBA551A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA24E7BA87CD73D57920C6B6C81B6086133059B6B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t16C42631350E8481DD70E81D01A42CFC49965A2C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___entries_1)); }
	inline EntryU5BU5D_tC34A0131EEF380E25441E7A8BEF46EE25BBA551A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC34A0131EEF380E25441E7A8BEF46EE25BBA551A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC34A0131EEF380E25441E7A8BEF46EE25BBA551A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___keys_7)); }
	inline KeyCollection_tA24E7BA87CD73D57920C6B6C81B6086133059B6B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA24E7BA87CD73D57920C6B6C81B6086133059B6B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA24E7BA87CD73D57920C6B6C81B6086133059B6B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ___values_8)); }
	inline ValueCollection_t16C42631350E8481DD70E81D01A42CFC49965A2C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t16C42631350E8481DD70E81D01A42CFC49965A2C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t16C42631350E8481DD70E81D01A42CFC49965A2C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler>
struct Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC1E2F3D98D81FC2DB168F1E06A79C46B8385C895* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t06B55A001BC3100EB74C843FF9260F54E3BD0634 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD083E9CAAB37B81CCD014713AAE1C04D9691C7B8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___entries_1)); }
	inline EntryU5BU5D_tC1E2F3D98D81FC2DB168F1E06A79C46B8385C895* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC1E2F3D98D81FC2DB168F1E06A79C46B8385C895** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC1E2F3D98D81FC2DB168F1E06A79C46B8385C895* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___keys_7)); }
	inline KeyCollection_t06B55A001BC3100EB74C843FF9260F54E3BD0634 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t06B55A001BC3100EB74C843FF9260F54E3BD0634 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t06B55A001BC3100EB74C843FF9260F54E3BD0634 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ___values_8)); }
	inline ValueCollection_tD083E9CAAB37B81CCD014713AAE1C04D9691C7B8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD083E9CAAB37B81CCD014713AAE1C04D9691C7B8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD083E9CAAB37B81CCD014713AAE1C04D9691C7B8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<RiptideNetworking.Message>
struct List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919, ____items_1)); }
	inline MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC* get__items_1() const { return ____items_1; }
	inline MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919_StaticFields, ____emptyArray_5)); }
	inline MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MessageU5BU5D_t98A23990325B7698C75EBE20C2BA3CCC4F3469FC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4, ____items_1)); }
	inline PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D* get__items_1() const { return ____items_1; }
	inline PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4_StaticFields, ____emptyArray_5)); }
	inline PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PendingMessageU5BU5D_t199C28716BFC3E8330F946B38BD872C1573B9A9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460, ___dictionary_0)); }
	inline Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// RiptideNetworking.Utils.ActionQueue
struct ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C  : public RuntimeObject
{
public:
	// System.String RiptideNetworking.Utils.ActionQueue::LogName
	String_t* ___LogName_0;
	// System.Collections.Generic.List`1<System.Action> RiptideNetworking.Utils.ActionQueue::executionQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___executionQueue_1;
	// System.Collections.Generic.List`1<System.Action> RiptideNetworking.Utils.ActionQueue::executionQueueCopy
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___executionQueueCopy_2;
	// System.Boolean RiptideNetworking.Utils.ActionQueue::hasActionToExecute
	bool ___hasActionToExecute_3;

public:
	inline static int32_t get_offset_of_LogName_0() { return static_cast<int32_t>(offsetof(ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C, ___LogName_0)); }
	inline String_t* get_LogName_0() const { return ___LogName_0; }
	inline String_t** get_address_of_LogName_0() { return &___LogName_0; }
	inline void set_LogName_0(String_t* value)
	{
		___LogName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogName_0), (void*)value);
	}

	inline static int32_t get_offset_of_executionQueue_1() { return static_cast<int32_t>(offsetof(ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C, ___executionQueue_1)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_executionQueue_1() const { return ___executionQueue_1; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_executionQueue_1() { return &___executionQueue_1; }
	inline void set_executionQueue_1(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___executionQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executionQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of_executionQueueCopy_2() { return static_cast<int32_t>(offsetof(ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C, ___executionQueueCopy_2)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_executionQueueCopy_2() const { return ___executionQueueCopy_2; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_executionQueueCopy_2() { return &___executionQueueCopy_2; }
	inline void set_executionQueueCopy_2(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___executionQueueCopy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executionQueueCopy_2), (void*)value);
	}

	inline static int32_t get_offset_of_hasActionToExecute_3() { return static_cast<int32_t>(offsetof(ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C, ___hasActionToExecute_3)); }
	inline bool get_hasActionToExecute_3() const { return ___hasActionToExecute_3; }
	inline bool* get_address_of_hasActionToExecute_3() { return &___hasActionToExecute_3; }
	inline void set_hasActionToExecute_3(bool value)
	{
		___hasActionToExecute_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// RiptideNetworking.Common
struct Common_tDAC6859E5A7575F6203B5375BBD44C8B7FB86610  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// RiptideNetworking.Utils.Extensions
struct Extensions_t3CC0E2F72D28E7A86E5447483234823E573EB80F  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// RiptideNetworking.Transports.RudpTransport.ReceiveLockables
struct ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC  : public RuntimeObject
{
public:
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.ReceiveLockables::<LastAckedSeqId>k__BackingField
	uint16_t ___U3CLastAckedSeqIdU3Ek__BackingField_0;
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.ReceiveLockables::<AckedMessagesBitfield>k__BackingField
	uint16_t ___U3CAckedMessagesBitfieldU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLastAckedSeqIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC, ___U3CLastAckedSeqIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CLastAckedSeqIdU3Ek__BackingField_0() const { return ___U3CLastAckedSeqIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CLastAckedSeqIdU3Ek__BackingField_0() { return &___U3CLastAckedSeqIdU3Ek__BackingField_0; }
	inline void set_U3CLastAckedSeqIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CLastAckedSeqIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAckedMessagesBitfieldU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC, ___U3CAckedMessagesBitfieldU3Ek__BackingField_1)); }
	inline uint16_t get_U3CAckedMessagesBitfieldU3Ek__BackingField_1() const { return ___U3CAckedMessagesBitfieldU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CAckedMessagesBitfieldU3Ek__BackingField_1() { return &___U3CAckedMessagesBitfieldU3Ek__BackingField_1; }
	inline void set_U3CAckedMessagesBitfieldU3Ek__BackingField_1(uint16_t value)
	{
		___U3CAckedMessagesBitfieldU3Ek__BackingField_1 = value;
	}
};


// RiptideNetworking.Utils.RiptideConverter
struct RiptideConverter_t19E844356FDEA5B4C7832AEE66B4FF4F1B30554E  : public RuntimeObject
{
public:

public:
};


// RiptideNetworking.Utils.RiptideLogger
struct RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348  : public RuntimeObject
{
public:

public:
};

struct RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod> RiptideNetworking.Utils.RiptideLogger::logMethods
	Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * ___logMethods_0;
	// System.Boolean RiptideNetworking.Utils.RiptideLogger::includeTimestamps
	bool ___includeTimestamps_1;
	// System.String RiptideNetworking.Utils.RiptideLogger::timestampFormat
	String_t* ___timestampFormat_2;

public:
	inline static int32_t get_offset_of_logMethods_0() { return static_cast<int32_t>(offsetof(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields, ___logMethods_0)); }
	inline Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * get_logMethods_0() const { return ___logMethods_0; }
	inline Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 ** get_address_of_logMethods_0() { return &___logMethods_0; }
	inline void set_logMethods_0(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * value)
	{
		___logMethods_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logMethods_0), (void*)value);
	}

	inline static int32_t get_offset_of_includeTimestamps_1() { return static_cast<int32_t>(offsetof(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields, ___includeTimestamps_1)); }
	inline bool get_includeTimestamps_1() const { return ___includeTimestamps_1; }
	inline bool* get_address_of_includeTimestamps_1() { return &___includeTimestamps_1; }
	inline void set_includeTimestamps_1(bool value)
	{
		___includeTimestamps_1 = value;
	}

	inline static int32_t get_offset_of_timestampFormat_2() { return static_cast<int32_t>(offsetof(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields, ___timestampFormat_2)); }
	inline String_t* get_timestampFormat_2() const { return ___timestampFormat_2; }
	inline String_t** get_address_of_timestampFormat_2() { return &___timestampFormat_2; }
	inline void set_timestampFormat_2(String_t* value)
	{
		___timestampFormat_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timestampFormat_2), (void*)value);
	}
};


// RiptideNetworking.Transports.RudpTransport.RudpListener
struct RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645  : public RuntimeObject
{
public:
	// System.String RiptideNetworking.Transports.RudpTransport.RudpListener::LogName
	String_t* ___LogName_0;
	// RiptideNetworking.Utils.ActionQueue RiptideNetworking.Transports.RudpTransport.RudpListener::receiveActionQueue
	ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * ___receiveActionQueue_1;
	// System.Net.Sockets.Socket RiptideNetworking.Transports.RudpTransport.RudpListener::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_2;
	// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpListener::isRunning
	bool ___isRunning_3;
	// System.Byte[] RiptideNetworking.Transports.RudpTransport.RudpListener::receiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiveBuffer_4;

public:
	inline static int32_t get_offset_of_LogName_0() { return static_cast<int32_t>(offsetof(RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645, ___LogName_0)); }
	inline String_t* get_LogName_0() const { return ___LogName_0; }
	inline String_t** get_address_of_LogName_0() { return &___LogName_0; }
	inline void set_LogName_0(String_t* value)
	{
		___LogName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogName_0), (void*)value);
	}

	inline static int32_t get_offset_of_receiveActionQueue_1() { return static_cast<int32_t>(offsetof(RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645, ___receiveActionQueue_1)); }
	inline ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * get_receiveActionQueue_1() const { return ___receiveActionQueue_1; }
	inline ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C ** get_address_of_receiveActionQueue_1() { return &___receiveActionQueue_1; }
	inline void set_receiveActionQueue_1(ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * value)
	{
		___receiveActionQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveActionQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645, ___socket_2)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_2() const { return ___socket_2; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_2), (void*)value);
	}

	inline static int32_t get_offset_of_isRunning_3() { return static_cast<int32_t>(offsetof(RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645, ___isRunning_3)); }
	inline bool get_isRunning_3() const { return ___isRunning_3; }
	inline bool* get_address_of_isRunning_3() { return &___isRunning_3; }
	inline void set_isRunning_3(bool value)
	{
		___isRunning_3 = value;
	}

	inline static int32_t get_offset_of_receiveBuffer_4() { return static_cast<int32_t>(offsetof(RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645, ___receiveBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_receiveBuffer_4() const { return ___receiveBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_receiveBuffer_4() { return &___receiveBuffer_4; }
	inline void set_receiveBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___receiveBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveBuffer_4), (void*)value);
	}
};


// RiptideNetworking.Transports.RudpTransport.RudpPeer
struct RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C  : public RuntimeObject
{
public:
	// RiptideNetworking.Transports.RudpTransport.SendLockables RiptideNetworking.Transports.RudpTransport.RudpPeer::<SendLockables>k__BackingField
	SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___U3CSendLockablesU3Ek__BackingField_0;
	// RiptideNetworking.Transports.RudpTransport.ReceiveLockables RiptideNetworking.Transports.RudpTransport.RudpPeer::<ReceiveLockables>k__BackingField
	ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * ___U3CReceiveLockablesU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage> RiptideNetworking.Transports.RudpTransport.RudpPeer::<PendingMessages>k__BackingField
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * ___U3CPendingMessagesU3Ek__BackingField_2;
	// System.Int16 RiptideNetworking.Transports.RudpTransport.RudpPeer::_rtt
	int16_t ____rtt_3;
	// System.Int16 RiptideNetworking.Transports.RudpTransport.RudpPeer::<SmoothRTT>k__BackingField
	int16_t ___U3CSmoothRTTU3Ek__BackingField_4;
	// RiptideNetworking.Transports.RudpTransport.RudpListener RiptideNetworking.Transports.RudpTransport.RudpPeer::Listener
	RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * ___Listener_5;
	// System.Int32 RiptideNetworking.Transports.RudpTransport.RudpPeer::lastSequenceId
	int32_t ___lastSequenceId_6;

public:
	inline static int32_t get_offset_of_U3CSendLockablesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ___U3CSendLockablesU3Ek__BackingField_0)); }
	inline SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * get_U3CSendLockablesU3Ek__BackingField_0() const { return ___U3CSendLockablesU3Ek__BackingField_0; }
	inline SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 ** get_address_of_U3CSendLockablesU3Ek__BackingField_0() { return &___U3CSendLockablesU3Ek__BackingField_0; }
	inline void set_U3CSendLockablesU3Ek__BackingField_0(SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * value)
	{
		___U3CSendLockablesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSendLockablesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceiveLockablesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ___U3CReceiveLockablesU3Ek__BackingField_1)); }
	inline ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * get_U3CReceiveLockablesU3Ek__BackingField_1() const { return ___U3CReceiveLockablesU3Ek__BackingField_1; }
	inline ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC ** get_address_of_U3CReceiveLockablesU3Ek__BackingField_1() { return &___U3CReceiveLockablesU3Ek__BackingField_1; }
	inline void set_U3CReceiveLockablesU3Ek__BackingField_1(ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * value)
	{
		___U3CReceiveLockablesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceiveLockablesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPendingMessagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ___U3CPendingMessagesU3Ek__BackingField_2)); }
	inline Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * get_U3CPendingMessagesU3Ek__BackingField_2() const { return ___U3CPendingMessagesU3Ek__BackingField_2; }
	inline Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 ** get_address_of_U3CPendingMessagesU3Ek__BackingField_2() { return &___U3CPendingMessagesU3Ek__BackingField_2; }
	inline void set_U3CPendingMessagesU3Ek__BackingField_2(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * value)
	{
		___U3CPendingMessagesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPendingMessagesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of__rtt_3() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ____rtt_3)); }
	inline int16_t get__rtt_3() const { return ____rtt_3; }
	inline int16_t* get_address_of__rtt_3() { return &____rtt_3; }
	inline void set__rtt_3(int16_t value)
	{
		____rtt_3 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothRTTU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ___U3CSmoothRTTU3Ek__BackingField_4)); }
	inline int16_t get_U3CSmoothRTTU3Ek__BackingField_4() const { return ___U3CSmoothRTTU3Ek__BackingField_4; }
	inline int16_t* get_address_of_U3CSmoothRTTU3Ek__BackingField_4() { return &___U3CSmoothRTTU3Ek__BackingField_4; }
	inline void set_U3CSmoothRTTU3Ek__BackingField_4(int16_t value)
	{
		___U3CSmoothRTTU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_Listener_5() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ___Listener_5)); }
	inline RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * get_Listener_5() const { return ___Listener_5; }
	inline RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 ** get_address_of_Listener_5() { return &___Listener_5; }
	inline void set_Listener_5(RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * value)
	{
		___Listener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Listener_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastSequenceId_6() { return static_cast<int32_t>(offsetof(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C, ___lastSequenceId_6)); }
	inline int32_t get_lastSequenceId_6() const { return ___lastSequenceId_6; }
	inline int32_t* get_address_of_lastSequenceId_6() { return &___lastSequenceId_6; }
	inline void set_lastSequenceId_6(int32_t value)
	{
		___lastSequenceId_6 = value;
	}
};


// RiptideNetworking.Transports.RudpTransport.SendLockables
struct SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89  : public RuntimeObject
{
public:
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.SendLockables::<LastReceivedSeqId>k__BackingField
	uint16_t ___U3CLastReceivedSeqIdU3Ek__BackingField_0;
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.SendLockables::<AcksBitfield>k__BackingField
	uint16_t ___U3CAcksBitfieldU3Ek__BackingField_1;
	// System.UInt64 RiptideNetworking.Transports.RudpTransport.SendLockables::<DuplicateFilterBitfield>k__BackingField
	uint64_t ___U3CDuplicateFilterBitfieldU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLastReceivedSeqIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89, ___U3CLastReceivedSeqIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CLastReceivedSeqIdU3Ek__BackingField_0() const { return ___U3CLastReceivedSeqIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CLastReceivedSeqIdU3Ek__BackingField_0() { return &___U3CLastReceivedSeqIdU3Ek__BackingField_0; }
	inline void set_U3CLastReceivedSeqIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CLastReceivedSeqIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAcksBitfieldU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89, ___U3CAcksBitfieldU3Ek__BackingField_1)); }
	inline uint16_t get_U3CAcksBitfieldU3Ek__BackingField_1() const { return ___U3CAcksBitfieldU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CAcksBitfieldU3Ek__BackingField_1() { return &___U3CAcksBitfieldU3Ek__BackingField_1; }
	inline void set_U3CAcksBitfieldU3Ek__BackingField_1(uint16_t value)
	{
		___U3CAcksBitfieldU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDuplicateFilterBitfieldU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89, ___U3CDuplicateFilterBitfieldU3Ek__BackingField_2)); }
	inline uint64_t get_U3CDuplicateFilterBitfieldU3Ek__BackingField_2() const { return ___U3CDuplicateFilterBitfieldU3Ek__BackingField_2; }
	inline uint64_t* get_address_of_U3CDuplicateFilterBitfieldU3Ek__BackingField_2() { return &___U3CDuplicateFilterBitfieldU3Ek__BackingField_2; }
	inline void set_U3CDuplicateFilterBitfieldU3Ek__BackingField_2(uint64_t value)
	{
		___U3CDuplicateFilterBitfieldU3Ek__BackingField_2 = value;
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// RiptideNetworking.Client/<>c
struct U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields
{
public:
	// RiptideNetworking.Client/<>c RiptideNetworking.Client/<>c::<>9
	U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>> RiptideNetworking.Client/<>c::<>9__37_0
	Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * ___U3CU3E9__37_0_1;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> RiptideNetworking.Client/<>c::<>9__37_1
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__37_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields, ___U3CU3E9__37_0_1)); }
	inline Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * get_U3CU3E9__37_0_1() const { return ___U3CU3E9__37_0_1; }
	inline Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 ** get_address_of_U3CU3E9__37_0_1() { return &___U3CU3E9__37_0_1; }
	inline void set_U3CU3E9__37_0_1(Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * value)
	{
		___U3CU3E9__37_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields, ___U3CU3E9__37_1_2)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__37_1_2() const { return ___U3CU3E9__37_1_2; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__37_1_2() { return &___U3CU3E9__37_1_2; }
	inline void set_U3CU3E9__37_1_2(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__37_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_1_2), (void*)value);
	}
};


// RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE  : public RuntimeObject
{
public:
	// RiptideNetworking.Transports.RudpTransport.RudpClient RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0::<>4__this
	RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * ___U3CU3E4__this_0;
	// RiptideNetworking.Message RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0::message
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE, ___U3CU3E4__this_0)); }
	inline RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE, ___message_1)); }
	inline Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * get_message_1() const { return ___message_1; }
	inline Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 ** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08  : public RuntimeObject
{
public:
	// RiptideNetworking.Transports.RudpTransport.RudpClient RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0::<>4__this
	RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * ___U3CU3E4__this_0;
	// RiptideNetworking.ClientConnectedEventArgs RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0::e
	ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * ___e_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08, ___U3CU3E4__this_0)); }
	inline RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_e_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08, ___e_1)); }
	inline ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * get_e_1() const { return ___e_1; }
	inline ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 ** get_address_of_e_1() { return &___e_1; }
	inline void set_e_1(ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * value)
	{
		___e_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_1), (void*)value);
	}
};


// RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59  : public RuntimeObject
{
public:
	// RiptideNetworking.Transports.RudpTransport.RudpClient RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0::<>4__this
	RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * ___U3CU3E4__this_0;
	// RiptideNetworking.ClientDisconnectedEventArgs RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0::e
	ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * ___e_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59, ___U3CU3E4__this_0)); }
	inline RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_e_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59, ___e_1)); }
	inline ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * get_e_1() const { return ___e_1; }
	inline ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 ** get_address_of_e_1() { return &___e_1; }
	inline void set_e_1(ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * value)
	{
		___e_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_1), (void*)value);
	}
};


// RiptideNetworking.Server/<>c
struct U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields
{
public:
	// RiptideNetworking.Server/<>c RiptideNetworking.Server/<>c::<>9
	U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>> RiptideNetworking.Server/<>c::<>9__31_0
	Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * ___U3CU3E9__31_0_1;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> RiptideNetworking.Server/<>c::<>9__31_1
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__31_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields, ___U3CU3E9__31_0_1)); }
	inline Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * get_U3CU3E9__31_0_1() const { return ___U3CU3E9__31_0_1; }
	inline Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 ** get_address_of_U3CU3E9__31_0_1() { return &___U3CU3E9__31_0_1; }
	inline void set_U3CU3E9__31_0_1(Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * value)
	{
		___U3CU3E9__31_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields, ___U3CU3E9__31_1_2)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__31_1_2() const { return ___U3CU3E9__31_1_2; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__31_1_2() { return &___U3CU3E9__31_1_2; }
	inline void set_U3CU3E9__31_1_2(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__31_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_1_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,System.Object>
struct Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2, ___dictionary_0)); }
	inline Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>
struct Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195, ___dictionary_0)); }
	inline Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195, ___currentValue_3)); }
	inline PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * get_currentValue_3() const { return ___currentValue_3; }
	inline PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// RiptideNetworking.Client
struct Client_t7A583A9D8A057E799587BB20B93191458EE47F5D  : public Common_tDAC6859E5A7575F6203B5375BBD44C8B7FB86610
{
public:
	// System.EventHandler RiptideNetworking.Client::Connected
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Connected_0;
	// System.EventHandler RiptideNetworking.Client::ConnectionFailed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ConnectionFailed_1;
	// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs> RiptideNetworking.Client::MessageReceived
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * ___MessageReceived_2;
	// System.EventHandler RiptideNetworking.Client::Disconnected
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Disconnected_3;
	// System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs> RiptideNetworking.Client::ClientConnected
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * ___ClientConnected_4;
	// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs> RiptideNetworking.Client::ClientDisconnected
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * ___ClientDisconnected_5;
	// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler> RiptideNetworking.Client::messageHandlers
	Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * ___messageHandlers_6;
	// RiptideNetworking.Transports.IClient RiptideNetworking.Client::client
	RuntimeObject* ___client_7;

public:
	inline static int32_t get_offset_of_Connected_0() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___Connected_0)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Connected_0() const { return ___Connected_0; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Connected_0() { return &___Connected_0; }
	inline void set_Connected_0(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Connected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Connected_0), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionFailed_1() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___ConnectionFailed_1)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ConnectionFailed_1() const { return ___ConnectionFailed_1; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ConnectionFailed_1() { return &___ConnectionFailed_1; }
	inline void set_ConnectionFailed_1(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ConnectionFailed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionFailed_1), (void*)value);
	}

	inline static int32_t get_offset_of_MessageReceived_2() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___MessageReceived_2)); }
	inline EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * get_MessageReceived_2() const { return ___MessageReceived_2; }
	inline EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 ** get_address_of_MessageReceived_2() { return &___MessageReceived_2; }
	inline void set_MessageReceived_2(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * value)
	{
		___MessageReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceived_2), (void*)value);
	}

	inline static int32_t get_offset_of_Disconnected_3() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___Disconnected_3)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Disconnected_3() const { return ___Disconnected_3; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Disconnected_3() { return &___Disconnected_3; }
	inline void set_Disconnected_3(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Disconnected_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Disconnected_3), (void*)value);
	}

	inline static int32_t get_offset_of_ClientConnected_4() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___ClientConnected_4)); }
	inline EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * get_ClientConnected_4() const { return ___ClientConnected_4; }
	inline EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 ** get_address_of_ClientConnected_4() { return &___ClientConnected_4; }
	inline void set_ClientConnected_4(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * value)
	{
		___ClientConnected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientConnected_4), (void*)value);
	}

	inline static int32_t get_offset_of_ClientDisconnected_5() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___ClientDisconnected_5)); }
	inline EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * get_ClientDisconnected_5() const { return ___ClientDisconnected_5; }
	inline EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 ** get_address_of_ClientDisconnected_5() { return &___ClientDisconnected_5; }
	inline void set_ClientDisconnected_5(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * value)
	{
		___ClientDisconnected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientDisconnected_5), (void*)value);
	}

	inline static int32_t get_offset_of_messageHandlers_6() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___messageHandlers_6)); }
	inline Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * get_messageHandlers_6() const { return ___messageHandlers_6; }
	inline Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 ** get_address_of_messageHandlers_6() { return &___messageHandlers_6; }
	inline void set_messageHandlers_6(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * value)
	{
		___messageHandlers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_6), (void*)value);
	}

	inline static int32_t get_offset_of_client_7() { return static_cast<int32_t>(offsetof(Client_t7A583A9D8A057E799587BB20B93191458EE47F5D, ___client_7)); }
	inline RuntimeObject* get_client_7() const { return ___client_7; }
	inline RuntimeObject** get_address_of_client_7() { return &___client_7; }
	inline void set_client_7(RuntimeObject* value)
	{
		___client_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_7), (void*)value);
	}
};


// RiptideNetworking.ClientConnectedEventArgs
struct ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.UInt16 RiptideNetworking.ClientConnectedEventArgs::<Id>k__BackingField
	uint16_t ___U3CIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779, ___U3CIdU3Ek__BackingField_1)); }
	inline uint16_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(uint16_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}
};


// RiptideNetworking.ClientDisconnectedEventArgs
struct ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.UInt16 RiptideNetworking.ClientDisconnectedEventArgs::<Id>k__BackingField
	uint16_t ___U3CIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052, ___U3CIdU3Ek__BackingField_1)); }
	inline uint16_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(uint16_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}
};


// RiptideNetworking.ClientMessageReceivedEventArgs
struct ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.UInt16 RiptideNetworking.ClientMessageReceivedEventArgs::<MessageId>k__BackingField
	uint16_t ___U3CMessageIdU3Ek__BackingField_1;
	// RiptideNetworking.Message RiptideNetworking.ClientMessageReceivedEventArgs::<Message>k__BackingField
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMessageIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767, ___U3CMessageIdU3Ek__BackingField_1)); }
	inline uint16_t get_U3CMessageIdU3Ek__BackingField_1() const { return ___U3CMessageIdU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3CMessageIdU3Ek__BackingField_1() { return &___U3CMessageIdU3Ek__BackingField_1; }
	inline void set_U3CMessageIdU3Ek__BackingField_1(uint16_t value)
	{
		___U3CMessageIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767, ___U3CMessageU3Ek__BackingField_2)); }
	inline Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 ** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// RiptideNetworking.Utils.FloatConverter
struct FloatConverter_tEB4334A16A790325F1554971712A528488A58B78 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte RiptideNetworking.Utils.FloatConverter::byte0
			uint8_t ___byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte1_1_OffsetPadding[1];
			// System.Byte RiptideNetworking.Utils.FloatConverter::byte1
			uint8_t ___byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte2_2_OffsetPadding[2];
			// System.Byte RiptideNetworking.Utils.FloatConverter::byte2
			uint8_t ___byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte3_3_OffsetPadding[3];
			// System.Byte RiptideNetworking.Utils.FloatConverter::byte3
			uint8_t ___byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single RiptideNetworking.Utils.FloatConverter::floatValue
			float ___floatValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_byte0_0() { return static_cast<int32_t>(offsetof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78, ___byte0_0)); }
	inline uint8_t get_byte0_0() const { return ___byte0_0; }
	inline uint8_t* get_address_of_byte0_0() { return &___byte0_0; }
	inline void set_byte0_0(uint8_t value)
	{
		___byte0_0 = value;
	}

	inline static int32_t get_offset_of_byte1_1() { return static_cast<int32_t>(offsetof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78, ___byte1_1)); }
	inline uint8_t get_byte1_1() const { return ___byte1_1; }
	inline uint8_t* get_address_of_byte1_1() { return &___byte1_1; }
	inline void set_byte1_1(uint8_t value)
	{
		___byte1_1 = value;
	}

	inline static int32_t get_offset_of_byte2_2() { return static_cast<int32_t>(offsetof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78, ___byte2_2)); }
	inline uint8_t get_byte2_2() const { return ___byte2_2; }
	inline uint8_t* get_address_of_byte2_2() { return &___byte2_2; }
	inline void set_byte2_2(uint8_t value)
	{
		___byte2_2 = value;
	}

	inline static int32_t get_offset_of_byte3_3() { return static_cast<int32_t>(offsetof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78, ___byte3_3)); }
	inline uint8_t get_byte3_3() const { return ___byte3_3; }
	inline uint8_t* get_address_of_byte3_3() { return &___byte3_3; }
	inline void set_byte3_3(uint8_t value)
	{
		___byte3_3 = value;
	}

	inline static int32_t get_offset_of_floatValue_4() { return static_cast<int32_t>(offsetof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78, ___floatValue_4)); }
	inline float get_floatValue_4() const { return ___floatValue_4; }
	inline float* get_address_of_floatValue_4() { return &___floatValue_4; }
	inline void set_floatValue_4(float value)
	{
		___floatValue_4 = value;
	}
};


// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_2)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// RiptideNetworking.MessageHandlerAttribute
struct MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.UInt16 RiptideNetworking.MessageHandlerAttribute::<MessageId>k__BackingField
	uint16_t ___U3CMessageIdU3Ek__BackingField_0;
	// System.Byte RiptideNetworking.MessageHandlerAttribute::<GroupId>k__BackingField
	uint8_t ___U3CGroupIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE, ___U3CMessageIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CMessageIdU3Ek__BackingField_0() const { return ___U3CMessageIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CMessageIdU3Ek__BackingField_0() { return &___U3CMessageIdU3Ek__BackingField_0; }
	inline void set_U3CMessageIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CMessageIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGroupIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE, ___U3CGroupIdU3Ek__BackingField_1)); }
	inline uint8_t get_U3CGroupIdU3Ek__BackingField_1() const { return ___U3CGroupIdU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CGroupIdU3Ek__BackingField_1() { return &___U3CGroupIdU3Ek__BackingField_1; }
	inline void set_U3CGroupIdU3Ek__BackingField_1(uint8_t value)
	{
		___U3CGroupIdU3Ek__BackingField_1 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// RiptideNetworking.Server
struct Server_t341C40B032F925BBDC3919097CE87816871D9FF6  : public Common_tDAC6859E5A7575F6203B5375BBD44C8B7FB86610
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler> RiptideNetworking.Server::messageHandlers
	Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * ___messageHandlers_0;
	// RiptideNetworking.Transports.IServer RiptideNetworking.Server::server
	RuntimeObject* ___server_1;

public:
	inline static int32_t get_offset_of_messageHandlers_0() { return static_cast<int32_t>(offsetof(Server_t341C40B032F925BBDC3919097CE87816871D9FF6, ___messageHandlers_0)); }
	inline Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * get_messageHandlers_0() const { return ___messageHandlers_0; }
	inline Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 ** get_address_of_messageHandlers_0() { return &___messageHandlers_0; }
	inline void set_messageHandlers_0(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * value)
	{
		___messageHandlers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_0), (void*)value);
	}

	inline static int32_t get_offset_of_server_1() { return static_cast<int32_t>(offsetof(Server_t341C40B032F925BBDC3919097CE87816871D9FF6, ___server_1)); }
	inline RuntimeObject* get_server_1() const { return ___server_1; }
	inline RuntimeObject** get_address_of_server_1() { return &___server_1; }
	inline void set_server_1(RuntimeObject* value)
	{
		___server_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___server_1), (void*)value);
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RiptideNetworking.Transports.ConnectionState
struct ConnectionState_t6FC38DA51B09CE3B6089B58D1687ADDF278456C5 
{
public:
	// System.Byte RiptideNetworking.Transports.ConnectionState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_t6FC38DA51B09CE3B6089B58D1687ADDF278456C5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time_1;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB, ___time_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_time_1() const { return ___time_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___time_1 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// RiptideNetworking.Transports.HeaderType
struct HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56 
{
public:
	// System.Byte RiptideNetworking.Transports.HeaderType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RiptideNetworking.Utils.LogType
struct LogType_t26D8D178DD0084062951EF902C6F8B73363D70DF 
{
public:
	// System.Int32 RiptideNetworking.Utils.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t26D8D178DD0084062951EF902C6F8B73363D70DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RiptideNetworking.MessageSendMode
struct MessageSendMode_t5D32DFE0B556CD4A0AE3E207FF18F3705DED1A2B 
{
public:
	// System.Byte RiptideNetworking.MessageSendMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageSendMode_t5D32DFE0B556CD4A0AE3E207FF18F3705DED1A2B, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// RiptideNetworking.Transports.RudpTransport.PendingMessage
struct PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA  : public RuntimeObject
{
public:
	// RiptideNetworking.Transports.RudpTransport.RudpPeer RiptideNetworking.Transports.RudpTransport.PendingMessage::peer
	RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * ___peer_1;
	// System.Net.IPEndPoint RiptideNetworking.Transports.RudpTransport.PendingMessage::remoteEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint_2;
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.PendingMessage::sequenceId
	uint16_t ___sequenceId_3;
	// System.Byte[] RiptideNetworking.Transports.RudpTransport.PendingMessage::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_4;
	// System.Int32 RiptideNetworking.Transports.RudpTransport.PendingMessage::writtenLength
	int32_t ___writtenLength_5;
	// System.Int32 RiptideNetworking.Transports.RudpTransport.PendingMessage::maxSendAttempts
	int32_t ___maxSendAttempts_6;
	// System.Byte RiptideNetworking.Transports.RudpTransport.PendingMessage::sendAttempts
	uint8_t ___sendAttempts_7;
	// System.DateTime RiptideNetworking.Transports.RudpTransport.PendingMessage::lastSendTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastSendTime_8;
	// System.Timers.Timer RiptideNetworking.Transports.RudpTransport.PendingMessage::retryTimer
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * ___retryTimer_9;
	// System.Boolean RiptideNetworking.Transports.RudpTransport.PendingMessage::wasCleared
	bool ___wasCleared_10;

public:
	inline static int32_t get_offset_of_peer_1() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___peer_1)); }
	inline RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * get_peer_1() const { return ___peer_1; }
	inline RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C ** get_address_of_peer_1() { return &___peer_1; }
	inline void set_peer_1(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * value)
	{
		___peer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peer_1), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndPoint_2() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___remoteEndPoint_2)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_remoteEndPoint_2() const { return ___remoteEndPoint_2; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_remoteEndPoint_2() { return &___remoteEndPoint_2; }
	inline void set_remoteEndPoint_2(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___remoteEndPoint_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndPoint_2), (void*)value);
	}

	inline static int32_t get_offset_of_sequenceId_3() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___sequenceId_3)); }
	inline uint16_t get_sequenceId_3() const { return ___sequenceId_3; }
	inline uint16_t* get_address_of_sequenceId_3() { return &___sequenceId_3; }
	inline void set_sequenceId_3(uint16_t value)
	{
		___sequenceId_3 = value;
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___data_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_writtenLength_5() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___writtenLength_5)); }
	inline int32_t get_writtenLength_5() const { return ___writtenLength_5; }
	inline int32_t* get_address_of_writtenLength_5() { return &___writtenLength_5; }
	inline void set_writtenLength_5(int32_t value)
	{
		___writtenLength_5 = value;
	}

	inline static int32_t get_offset_of_maxSendAttempts_6() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___maxSendAttempts_6)); }
	inline int32_t get_maxSendAttempts_6() const { return ___maxSendAttempts_6; }
	inline int32_t* get_address_of_maxSendAttempts_6() { return &___maxSendAttempts_6; }
	inline void set_maxSendAttempts_6(int32_t value)
	{
		___maxSendAttempts_6 = value;
	}

	inline static int32_t get_offset_of_sendAttempts_7() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___sendAttempts_7)); }
	inline uint8_t get_sendAttempts_7() const { return ___sendAttempts_7; }
	inline uint8_t* get_address_of_sendAttempts_7() { return &___sendAttempts_7; }
	inline void set_sendAttempts_7(uint8_t value)
	{
		___sendAttempts_7 = value;
	}

	inline static int32_t get_offset_of_lastSendTime_8() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___lastSendTime_8)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastSendTime_8() const { return ___lastSendTime_8; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastSendTime_8() { return &___lastSendTime_8; }
	inline void set_lastSendTime_8(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastSendTime_8 = value;
	}

	inline static int32_t get_offset_of_retryTimer_9() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___retryTimer_9)); }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * get_retryTimer_9() const { return ___retryTimer_9; }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE ** get_address_of_retryTimer_9() { return &___retryTimer_9; }
	inline void set_retryTimer_9(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * value)
	{
		___retryTimer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retryTimer_9), (void*)value);
	}

	inline static int32_t get_offset_of_wasCleared_10() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA, ___wasCleared_10)); }
	inline bool get_wasCleared_10() const { return ___wasCleared_10; }
	inline bool* get_address_of_wasCleared_10() { return &___wasCleared_10; }
	inline void set_wasCleared_10(bool value)
	{
		___wasCleared_10 = value;
	}
};

struct PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields
{
public:
	// System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage> RiptideNetworking.Transports.RudpTransport.PendingMessage::pool
	List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields, ___pool_0)); }
	inline List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * get_pool_0() const { return ___pool_0; }
	inline List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// System.Net.Sockets.ProtocolType
struct ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Net.Sockets.SelectMode
struct SelectMode_t7D3ECD1A1B4A1E90B7F847C52E4E8580E2112189 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t7D3ECD1A1B4A1E90B7F847C52E4E8580E2112189, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Timers.Timer
struct Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::enabled
	bool ___enabled_5;
	// System.Boolean System.Timers.Timer::initializing
	bool ___initializing_6;
	// System.Boolean System.Timers.Timer::delayedEnable
	bool ___delayedEnable_7;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::onIntervalElapsed
	ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * ___onIntervalElapsed_8;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_9;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::synchronizingObject
	RuntimeObject* ___synchronizingObject_10;
	// System.Boolean System.Timers.Timer::disposed
	bool ___disposed_11;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer_12;
	// System.Threading.TimerCallback System.Timers.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_13;
	// System.Object System.Timers.Timer::cookie
	RuntimeObject * ___cookie_14;

public:
	inline static int32_t get_offset_of_interval_4() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___interval_4)); }
	inline double get_interval_4() const { return ___interval_4; }
	inline double* get_address_of_interval_4() { return &___interval_4; }
	inline void set_interval_4(double value)
	{
		___interval_4 = value;
	}

	inline static int32_t get_offset_of_enabled_5() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___enabled_5)); }
	inline bool get_enabled_5() const { return ___enabled_5; }
	inline bool* get_address_of_enabled_5() { return &___enabled_5; }
	inline void set_enabled_5(bool value)
	{
		___enabled_5 = value;
	}

	inline static int32_t get_offset_of_initializing_6() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___initializing_6)); }
	inline bool get_initializing_6() const { return ___initializing_6; }
	inline bool* get_address_of_initializing_6() { return &___initializing_6; }
	inline void set_initializing_6(bool value)
	{
		___initializing_6 = value;
	}

	inline static int32_t get_offset_of_delayedEnable_7() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___delayedEnable_7)); }
	inline bool get_delayedEnable_7() const { return ___delayedEnable_7; }
	inline bool* get_address_of_delayedEnable_7() { return &___delayedEnable_7; }
	inline void set_delayedEnable_7(bool value)
	{
		___delayedEnable_7 = value;
	}

	inline static int32_t get_offset_of_onIntervalElapsed_8() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___onIntervalElapsed_8)); }
	inline ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * get_onIntervalElapsed_8() const { return ___onIntervalElapsed_8; }
	inline ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 ** get_address_of_onIntervalElapsed_8() { return &___onIntervalElapsed_8; }
	inline void set_onIntervalElapsed_8(ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * value)
	{
		___onIntervalElapsed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onIntervalElapsed_8), (void*)value);
	}

	inline static int32_t get_offset_of_autoReset_9() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___autoReset_9)); }
	inline bool get_autoReset_9() const { return ___autoReset_9; }
	inline bool* get_address_of_autoReset_9() { return &___autoReset_9; }
	inline void set_autoReset_9(bool value)
	{
		___autoReset_9 = value;
	}

	inline static int32_t get_offset_of_synchronizingObject_10() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___synchronizingObject_10)); }
	inline RuntimeObject* get_synchronizingObject_10() const { return ___synchronizingObject_10; }
	inline RuntimeObject** get_address_of_synchronizingObject_10() { return &___synchronizingObject_10; }
	inline void set_synchronizingObject_10(RuntimeObject* value)
	{
		___synchronizingObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___timer_12)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_timer_12() const { return ___timer_12; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___timer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_12), (void*)value);
	}

	inline static int32_t get_offset_of_callback_13() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___callback_13)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_13() const { return ___callback_13; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_13() { return &___callback_13; }
	inline void set_callback_13(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_13), (void*)value);
	}

	inline static int32_t get_offset_of_cookie_14() { return static_cast<int32_t>(offsetof(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE, ___cookie_14)); }
	inline RuntimeObject * get_cookie_14() const { return ___cookie_14; }
	inline RuntimeObject ** get_address_of_cookie_14() { return &___cookie_14; }
	inline void set_cookie_14(RuntimeObject * value)
	{
		___cookie_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookie_14), (void*)value);
	}
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// RiptideNetworking.Message
struct Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569  : public RuntimeObject
{
public:
	// RiptideNetworking.MessageSendMode RiptideNetworking.Message::<SendMode>k__BackingField
	uint8_t ___U3CSendModeU3Ek__BackingField_3;
	// System.Int32 RiptideNetworking.Message::<MaxSendAttempts>k__BackingField
	int32_t ___U3CMaxSendAttemptsU3Ek__BackingField_4;
	// System.Byte[] RiptideNetworking.Message::<Bytes>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CBytesU3Ek__BackingField_5;
	// System.UInt16 RiptideNetworking.Message::writePos
	uint16_t ___writePos_6;
	// System.UInt16 RiptideNetworking.Message::readPos
	uint16_t ___readPos_7;

public:
	inline static int32_t get_offset_of_U3CSendModeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569, ___U3CSendModeU3Ek__BackingField_3)); }
	inline uint8_t get_U3CSendModeU3Ek__BackingField_3() const { return ___U3CSendModeU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CSendModeU3Ek__BackingField_3() { return &___U3CSendModeU3Ek__BackingField_3; }
	inline void set_U3CSendModeU3Ek__BackingField_3(uint8_t value)
	{
		___U3CSendModeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSendAttemptsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569, ___U3CMaxSendAttemptsU3Ek__BackingField_4)); }
	inline int32_t get_U3CMaxSendAttemptsU3Ek__BackingField_4() const { return ___U3CMaxSendAttemptsU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMaxSendAttemptsU3Ek__BackingField_4() { return &___U3CMaxSendAttemptsU3Ek__BackingField_4; }
	inline void set_U3CMaxSendAttemptsU3Ek__BackingField_4(int32_t value)
	{
		___U3CMaxSendAttemptsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CBytesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569, ___U3CBytesU3Ek__BackingField_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CBytesU3Ek__BackingField_5() const { return ___U3CBytesU3Ek__BackingField_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CBytesU3Ek__BackingField_5() { return &___U3CBytesU3Ek__BackingField_5; }
	inline void set_U3CBytesU3Ek__BackingField_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CBytesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBytesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_writePos_6() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569, ___writePos_6)); }
	inline uint16_t get_writePos_6() const { return ___writePos_6; }
	inline uint16_t* get_address_of_writePos_6() { return &___writePos_6; }
	inline void set_writePos_6(uint16_t value)
	{
		___writePos_6 = value;
	}

	inline static int32_t get_offset_of_readPos_7() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569, ___readPos_7)); }
	inline uint16_t get_readPos_7() const { return ___readPos_7; }
	inline uint16_t* get_address_of_readPos_7() { return &___readPos_7; }
	inline void set_readPos_7(uint16_t value)
	{
		___readPos_7 = value;
	}
};

struct Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields
{
public:
	// System.Byte RiptideNetworking.Message::<InstancesPerSocket>k__BackingField
	uint8_t ___U3CInstancesPerSocketU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<RiptideNetworking.Message> RiptideNetworking.Message::pool
	List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * ___pool_2;

public:
	inline static int32_t get_offset_of_U3CInstancesPerSocketU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields, ___U3CInstancesPerSocketU3Ek__BackingField_1)); }
	inline uint8_t get_U3CInstancesPerSocketU3Ek__BackingField_1() const { return ___U3CInstancesPerSocketU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CInstancesPerSocketU3Ek__BackingField_1() { return &___U3CInstancesPerSocketU3Ek__BackingField_1; }
	inline void set_U3CInstancesPerSocketU3Ek__BackingField_1(uint8_t value)
	{
		___U3CInstancesPerSocketU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields, ___pool_2)); }
	inline List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * get_pool_2() const { return ___pool_2; }
	inline List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// RiptideNetworking.Transports.RudpTransport.RudpClient
struct RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB  : public RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645
{
public:
	// System.EventHandler RiptideNetworking.Transports.RudpTransport.RudpClient::Connected
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Connected_5;
	// System.EventHandler RiptideNetworking.Transports.RudpTransport.RudpClient::ConnectionFailed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ConnectionFailed_6;
	// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs> RiptideNetworking.Transports.RudpTransport.RudpClient::MessageReceived
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * ___MessageReceived_7;
	// System.EventHandler RiptideNetworking.Transports.RudpTransport.RudpClient::Disconnected
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___Disconnected_8;
	// System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs> RiptideNetworking.Transports.RudpTransport.RudpClient::ClientConnected
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * ___ClientConnected_9;
	// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs> RiptideNetworking.Transports.RudpTransport.RudpClient::ClientDisconnected
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * ___ClientDisconnected_10;
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::<Id>k__BackingField
	uint16_t ___U3CIdU3Ek__BackingField_11;
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::<TimeoutTime>k__BackingField
	uint16_t ___U3CTimeoutTimeU3Ek__BackingField_12;
	// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::_heartbeatInterval
	uint16_t ____heartbeatInterval_13;
	// RiptideNetworking.Transports.RudpTransport.RudpPeer RiptideNetworking.Transports.RudpTransport.RudpClient::peer
	RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * ___peer_14;
	// System.Net.IPEndPoint RiptideNetworking.Transports.RudpTransport.RudpClient::remoteEndPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint_15;
	// RiptideNetworking.Transports.ConnectionState RiptideNetworking.Transports.RudpTransport.RudpClient::connectionState
	uint8_t ___connectionState_16;
	// System.Byte RiptideNetworking.Transports.RudpTransport.RudpClient::connectionAttempts
	uint8_t ___connectionAttempts_17;
	// System.Byte RiptideNetworking.Transports.RudpTransport.RudpClient::maxConnectionAttempts
	uint8_t ___maxConnectionAttempts_18;
	// System.Threading.Timer RiptideNetworking.Transports.RudpTransport.RudpClient::heartbeatTimer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___heartbeatTimer_19;
	// System.DateTime RiptideNetworking.Transports.RudpTransport.RudpClient::lastHeartbeat
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastHeartbeat_20;
	// System.Byte RiptideNetworking.Transports.RudpTransport.RudpClient::lastPingId
	uint8_t ___lastPingId_21;
	// System.Byte RiptideNetworking.Transports.RudpTransport.RudpClient::pendingPingId
	uint8_t ___pendingPingId_22;
	// System.Diagnostics.Stopwatch RiptideNetworking.Transports.RudpTransport.RudpClient::pendingPingStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___pendingPingStopwatch_23;
	// System.Byte[] RiptideNetworking.Transports.RudpTransport.RudpClient::connectBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___connectBytes_24;

public:
	inline static int32_t get_offset_of_Connected_5() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___Connected_5)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Connected_5() const { return ___Connected_5; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Connected_5() { return &___Connected_5; }
	inline void set_Connected_5(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Connected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Connected_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionFailed_6() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___ConnectionFailed_6)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ConnectionFailed_6() const { return ___ConnectionFailed_6; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ConnectionFailed_6() { return &___ConnectionFailed_6; }
	inline void set_ConnectionFailed_6(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ConnectionFailed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionFailed_6), (void*)value);
	}

	inline static int32_t get_offset_of_MessageReceived_7() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___MessageReceived_7)); }
	inline EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * get_MessageReceived_7() const { return ___MessageReceived_7; }
	inline EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 ** get_address_of_MessageReceived_7() { return &___MessageReceived_7; }
	inline void set_MessageReceived_7(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * value)
	{
		___MessageReceived_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceived_7), (void*)value);
	}

	inline static int32_t get_offset_of_Disconnected_8() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___Disconnected_8)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_Disconnected_8() const { return ___Disconnected_8; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_Disconnected_8() { return &___Disconnected_8; }
	inline void set_Disconnected_8(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___Disconnected_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Disconnected_8), (void*)value);
	}

	inline static int32_t get_offset_of_ClientConnected_9() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___ClientConnected_9)); }
	inline EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * get_ClientConnected_9() const { return ___ClientConnected_9; }
	inline EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 ** get_address_of_ClientConnected_9() { return &___ClientConnected_9; }
	inline void set_ClientConnected_9(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * value)
	{
		___ClientConnected_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientConnected_9), (void*)value);
	}

	inline static int32_t get_offset_of_ClientDisconnected_10() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___ClientDisconnected_10)); }
	inline EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * get_ClientDisconnected_10() const { return ___ClientDisconnected_10; }
	inline EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 ** get_address_of_ClientDisconnected_10() { return &___ClientDisconnected_10; }
	inline void set_ClientDisconnected_10(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * value)
	{
		___ClientDisconnected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientDisconnected_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___U3CIdU3Ek__BackingField_11)); }
	inline uint16_t get_U3CIdU3Ek__BackingField_11() const { return ___U3CIdU3Ek__BackingField_11; }
	inline uint16_t* get_address_of_U3CIdU3Ek__BackingField_11() { return &___U3CIdU3Ek__BackingField_11; }
	inline void set_U3CIdU3Ek__BackingField_11(uint16_t value)
	{
		___U3CIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutTimeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___U3CTimeoutTimeU3Ek__BackingField_12)); }
	inline uint16_t get_U3CTimeoutTimeU3Ek__BackingField_12() const { return ___U3CTimeoutTimeU3Ek__BackingField_12; }
	inline uint16_t* get_address_of_U3CTimeoutTimeU3Ek__BackingField_12() { return &___U3CTimeoutTimeU3Ek__BackingField_12; }
	inline void set_U3CTimeoutTimeU3Ek__BackingField_12(uint16_t value)
	{
		___U3CTimeoutTimeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of__heartbeatInterval_13() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ____heartbeatInterval_13)); }
	inline uint16_t get__heartbeatInterval_13() const { return ____heartbeatInterval_13; }
	inline uint16_t* get_address_of__heartbeatInterval_13() { return &____heartbeatInterval_13; }
	inline void set__heartbeatInterval_13(uint16_t value)
	{
		____heartbeatInterval_13 = value;
	}

	inline static int32_t get_offset_of_peer_14() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___peer_14)); }
	inline RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * get_peer_14() const { return ___peer_14; }
	inline RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C ** get_address_of_peer_14() { return &___peer_14; }
	inline void set_peer_14(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * value)
	{
		___peer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peer_14), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndPoint_15() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___remoteEndPoint_15)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_remoteEndPoint_15() const { return ___remoteEndPoint_15; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_remoteEndPoint_15() { return &___remoteEndPoint_15; }
	inline void set_remoteEndPoint_15(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___remoteEndPoint_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndPoint_15), (void*)value);
	}

	inline static int32_t get_offset_of_connectionState_16() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___connectionState_16)); }
	inline uint8_t get_connectionState_16() const { return ___connectionState_16; }
	inline uint8_t* get_address_of_connectionState_16() { return &___connectionState_16; }
	inline void set_connectionState_16(uint8_t value)
	{
		___connectionState_16 = value;
	}

	inline static int32_t get_offset_of_connectionAttempts_17() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___connectionAttempts_17)); }
	inline uint8_t get_connectionAttempts_17() const { return ___connectionAttempts_17; }
	inline uint8_t* get_address_of_connectionAttempts_17() { return &___connectionAttempts_17; }
	inline void set_connectionAttempts_17(uint8_t value)
	{
		___connectionAttempts_17 = value;
	}

	inline static int32_t get_offset_of_maxConnectionAttempts_18() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___maxConnectionAttempts_18)); }
	inline uint8_t get_maxConnectionAttempts_18() const { return ___maxConnectionAttempts_18; }
	inline uint8_t* get_address_of_maxConnectionAttempts_18() { return &___maxConnectionAttempts_18; }
	inline void set_maxConnectionAttempts_18(uint8_t value)
	{
		___maxConnectionAttempts_18 = value;
	}

	inline static int32_t get_offset_of_heartbeatTimer_19() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___heartbeatTimer_19)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_heartbeatTimer_19() const { return ___heartbeatTimer_19; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_heartbeatTimer_19() { return &___heartbeatTimer_19; }
	inline void set_heartbeatTimer_19(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___heartbeatTimer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartbeatTimer_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastHeartbeat_20() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___lastHeartbeat_20)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastHeartbeat_20() const { return ___lastHeartbeat_20; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastHeartbeat_20() { return &___lastHeartbeat_20; }
	inline void set_lastHeartbeat_20(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastHeartbeat_20 = value;
	}

	inline static int32_t get_offset_of_lastPingId_21() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___lastPingId_21)); }
	inline uint8_t get_lastPingId_21() const { return ___lastPingId_21; }
	inline uint8_t* get_address_of_lastPingId_21() { return &___lastPingId_21; }
	inline void set_lastPingId_21(uint8_t value)
	{
		___lastPingId_21 = value;
	}

	inline static int32_t get_offset_of_pendingPingId_22() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___pendingPingId_22)); }
	inline uint8_t get_pendingPingId_22() const { return ___pendingPingId_22; }
	inline uint8_t* get_address_of_pendingPingId_22() { return &___pendingPingId_22; }
	inline void set_pendingPingId_22(uint8_t value)
	{
		___pendingPingId_22 = value;
	}

	inline static int32_t get_offset_of_pendingPingStopwatch_23() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___pendingPingStopwatch_23)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_pendingPingStopwatch_23() const { return ___pendingPingStopwatch_23; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_pendingPingStopwatch_23() { return &___pendingPingStopwatch_23; }
	inline void set_pendingPingStopwatch_23(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___pendingPingStopwatch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingPingStopwatch_23), (void*)value);
	}

	inline static int32_t get_offset_of_connectBytes_24() { return static_cast<int32_t>(offsetof(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB, ___connectBytes_24)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_connectBytes_24() const { return ___connectBytes_24; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_connectBytes_24() { return &___connectBytes_24; }
	inline void set_connectBytes_24(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___connectBytes_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectBytes_24), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>
struct EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>
struct EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>
struct EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>>
struct Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814  : public MulticastDelegate_t
{
public:

public:
};


// RiptideNetworking.Client/MessageHandler
struct MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65  : public MulticastDelegate_t
{
public:

public:
};


// RiptideNetworking.Utils.RiptideLogger/LogMethod
struct LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B  : public MulticastDelegate_t
{
public:

public:
};


// RiptideNetworking.Server/MessageHandler
struct MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB  : public MulticastDelegate_t
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mA9FB30A3B43F7494F50724CDB8A1319B62633395_gshared (RuntimeObject* ___source0, Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29 * ___selector1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m03321E4D6808B3B719EDFA3D74E11D8954AF0AD7_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEEA880515DEF287BEF18076BC12B1B4581D23F7C_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, uint16_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m1193306C6D4A6F245C169D7E62BA6CDF04959A71_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, uint16_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m103AD868478734AD5DB59DBF609F28DFC0A84ACB_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, uint16_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6509463BC0CAA6B5E9876187B788496D80292A14_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, uint16_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE80CBA1D4730AA43C8928346E5DA24F106A79329_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, uint16_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mD089C4FDE59985B889C7740BA2BA70CD1E652D29_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6F84B9A4AC2734CFE4E955F65144A3161F194DDC_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_mF375ED41FA1B229A77C94F562939FC8A559C749D_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t59B4511A43B183EADF5F786F2DEFD334DE00D8B0 * Dictionary_2_get_Values_m8A2D753639D762BA9A682543265D13C436A4180C_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2  ValueCollection_GetEnumerator_m056A1AABB08B4DFB2AC1A7ED573F51A33EE9736A_gshared (ValueCollection_t59B4511A43B183EADF5F786F2DEFD334DE00D8B0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC321D19E6422F5735E6E2414919640C643CD9DA6_gshared_inline (Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD98B8B753BF14140E8F67565EAB573FB5C9AC0B9_gshared (Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9664EC958154CBA8A68D112B54EFFED065A8893F_gshared (Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m56B8ABED68184004DF439349889B50BD5B0A8A22_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB5354538D116954DD0B4813479442C71769F4FF_gshared (Dictionary_2_tF8562D060094C6E6090CAAA55B969DD5791709B0 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.RiptideLogger::Log(RiptideNetworking.Utils.LogType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7 (int32_t ___logType0, String_t* ___logName1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_mE69A051FEFE932D5DAC43637A5B1A33F4E875FDF (Common_tDAC6859E5A7575F6203B5375BBD44C8B7FB86610 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::.ctor(System.UInt16,System.UInt16,System.Byte,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient__ctor_m87FA04018F8829E4F8A028BAB0948CBC4A14FCD2 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___timeoutTime0, uint16_t ___heartbeatInterval1, uint8_t ___maxConnectionAttempts2, String_t* ___logName3, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m8102665BF3410ABFC19E38CCC8B11D8F98B2ACAB (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_GetCallingAssembly_m61DDCAA0C8FDC4A912E67501AE887105F986E570 (const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC (EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905 (EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977 (EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA (Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Type,System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4 (RuntimeObject* ___source0, Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mA9FB30A3B43F7494F50724CDB8A1319B62633395_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6 (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C (RuntimeObject* ___source0, Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m86334307F034D615CDD8E32732D48F2EBAD2D2FA (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m03321E4D6808B3B719EDFA3D74E11D8954AF0AD7_gshared)(__this, ___capacity0, method);
}
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<RiptideNetworking.MessageHandlerAttribute>(System.Reflection.MemberInfo)
inline MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	return ((  MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * (*) (MemberInfo_t *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared)(___element0, method);
}
// System.Byte RiptideNetworking.MessageHandlerAttribute::get_GroupId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t MessageHandlerAttribute_get_GroupId_m2C16CA79D8608BB093FFE18D095677C63A048D91_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_mBC1726D0AC1255215862111C17DDC5D2AA2FC750 (Type_t * ___type0, MethodInfo_t * ___method1, bool ___throwOnBindFailure2, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.MessageHandlerAttribute::get_MessageId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6C34C38D69475B4B4C1DD1362274DA9E9CD46949 (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * __this, uint16_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 *, uint16_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mEEA880515DEF287BEF18076BC12B1B4581D23F7C_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>::get_Item(!0)
inline MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * Dictionary_2_get_Item_m2FBECB805452AB307FBF1C908F24BA7D57002A0F (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * __this, uint16_t ___key0, const RuntimeMethod* method)
{
	return ((  MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * (*) (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 *, uint16_t, const RuntimeMethod*))Dictionary_2_get_Item_m1193306C6D4A6F245C169D7E62BA6CDF04959A71_gshared)(__this, ___key0, method);
}
// System.Reflection.MethodInfo System.Reflection.RuntimeReflectionExtensions::GetMethodInfo(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeReflectionExtensions_GetMethodInfo_mA9D59D730A7AD6E1017F93EF8A4786356B48D243 (Delegate_t * ___del0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>::Add(!0,!1)
inline void Dictionary_2_Add_mCECD1CCA8CC75DB9CBF95A6D143BE5293D85B5EC (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * __this, uint16_t ___key0, MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 *, uint16_t, MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 *, const RuntimeMethod*))Dictionary_2_Add_m103AD868478734AD5DB59DBF609F28DFC0A84ACB_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean RiptideNetworking.Client::get_IsNotConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_IsNotConnected_mF4F248F52BC2FA4F3A0D471D8F46F3D44B9FDA52 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client::LocalDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_LocalDisconnect_m34500EB8C359C9D8A56573E79015DC635B2A4FF3 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF (EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * __this, RuntimeObject * ___sender0, ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *, RuntimeObject *, ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.UInt16 RiptideNetworking.ClientMessageReceivedEventArgs::get_MessageId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ClientMessageReceivedEventArgs_get_MessageId_m3E08A66788C94CBDB8724F8C23758A34F6019666_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Client/MessageHandler>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mC2B1C32885C2480B4091C020375F5A4248367C67 (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * __this, uint16_t ___key0, MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 *, uint16_t, MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m6509463BC0CAA6B5E9876187B788496D80292A14_gshared)(__this, ___key0, ___value1, method);
}
// RiptideNetworking.Message RiptideNetworking.ClientMessageReceivedEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ClientMessageReceivedEventArgs_get_Message_m1724616F15031BE94B0370BBC0A01D3C9F1F575C_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Client/MessageHandler::Invoke(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_mD25CB4025C73139E72A7C8DCB4B4A33606BA02B4 (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.RiptideLogger::Log(RiptideNetworking.Utils.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835 (int32_t ___logType0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950 (EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * __this, RuntimeObject * ___sender0, ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *, RuntimeObject *, ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7 (EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * __this, RuntimeObject * ___sender0, ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *, RuntimeObject *, ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientConnectedEventArgs::set_Id(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientConnectedEventArgs_set_Id_m74D967E1848D4E305C27004F521D013E07FBAAC6_inline (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientDisconnectedEventArgs::set_Id(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientDisconnectedEventArgs_set_Id_m33EFE2D1E48B7B97486DD375281D9307CFEFCBD0_inline (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientMessageReceivedEventArgs::set_MessageId(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs_set_MessageId_mEF2F19D501F9D139F39E2A0343B19CF3545DD798_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientMessageReceivedEventArgs::set_Message(RiptideNetworking.Message)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs_set_Message_m766697CC8D2B024579F495C78727A2AB00465007_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___value0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Boolean System.Net.IPAddress::get_IsIPv4MappedToIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4MappedToIPv6_mB28F5D60E056362B3F9591D96E2576BF7AD860B1 (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::MapToIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPAddress_MapToIPv4_mE4D84D6FBBB5A018C29A7373CE3869D70F53BB5C (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Byte[] RiptideNetworking.Message::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::set_Bytes(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_set_Bytes_m2C98AA322C81B694DE602FDAA62CECDF9DBDEC32_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<RiptideNetworking.Message>::get_Capacity()
inline int32_t List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3 (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Byte RiptideNetworking.Message::get_InstancesPerSocket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Message>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m19CF350D7F9EE0A0078E5AEEC98A0F08B0BF0DB9 (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void RiptideNetworking.Message::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mDEB149CCC1C79BE91109078E8CF2CBB6DA377237 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___maxSize0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Message>::Add(!0)
inline void List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825 (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<RiptideNetworking.Message>::get_Count()
inline int32_t List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_inline (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Message>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525 (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// RiptideNetworking.Message RiptideNetworking.Message::RetrieveFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_RetrieveFromPool_m7FC7BADF63B6400977C4AE6351E5C5BF73A9B516 (const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::PrepareForUse(RiptideNetworking.Transports.HeaderType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_PrepareForUse_m838AA2F7B84FCF88E975D550CB28953C6005D555 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___messageHeader0, int32_t ___maxSendAttempts1, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint16_t ___value0, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.MessageSendMode,System.UInt16,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Create_mED05CCB405B7D5EE7D00D1A5688027B5F8D8D607 (uint8_t ___sendMode0, uint16_t ___id1, int32_t ___maxSendAttempts2, bool ___shouldAutoRelay3, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<RiptideNetworking.Message>::get_Item(System.Int32)
inline Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * List_1_get_Item_m0FFFEFF762640BCA57B121686192AED78C745F84_inline (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<RiptideNetworking.Message>::Contains(!0)
inline bool List_1_Contains_m400A0F3CF6A7389459284AED012C12516B447FB0 (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void RiptideNetworking.Message::set_MaxSendAttempts(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_set_MaxSendAttempts_m4411BB01AD3DDDA7084B8E0E628A032B68FA00E2_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::SetReadWritePos(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_SetReadWritePos_m3DAF8FB4665F6C38DE85F7280352ED6993E44F88 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint16_t ___newReadPos0, uint16_t ___newWritePos1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::SetHeader(RiptideNetworking.Transports.HeaderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_SetHeader_m45A98791CA73329F5CBC739A30FE2F76E0912B0E (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___messageHeader0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::set_SendMode(RiptideNetworking.MessageSendMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_set_SendMode_mD4BE9944ECDC6FE71AD2B73267FB20D232682985_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Message::get_UnwrittenLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Message::get_UnreadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m8C48C7D01C48BFCA5AF9235CFCB87AF593051C37 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::ReadBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_ReadBytes_m451E51A43917934779124797C8E0801BF16B2DD7 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___amount0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.RiptideConverter::FromShort(System.Int16,System.Byte[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RiptideConverter_FromShort_m6C9E37959B64142EC4089281827B45471CF26F66_inline (int16_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.RiptideConverter::FromUShort(System.UInt16,System.Byte[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RiptideConverter_FromUShort_mE9EFA8A2D4C19EE9C82CD3BD8767426BB591196A_inline (uint16_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Utils.RiptideConverter::ToUShort(System.Byte[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RiptideConverter_ToUShort_m68D39AF0DE9FDC647CAE9BB749D7E1F5103C4B24_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Utils.RiptideConverter::ToInt(System.Byte[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RiptideConverter_ToInt_mFBD0E73EAB2AEE4D92DA9AD609CAE760F2746308_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_mFC9F1EDB4D0D6EC99D4E055560E422DACC4559E1 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, float ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.RiptideConverter::FromFloat(System.Single,System.Byte[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RiptideConverter_FromFloat_m469D069E6BAD6A9D4CAC9477E989FEAE749749AE_inline (float ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method);
// System.Single RiptideNetworking.Utils.RiptideConverter::ToFloat(System.Byte[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RiptideConverter_ToFloat_mDFEB9E26D48E95BF8AFBEEAB82CC5713FD005A02_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_mE7D517C644779BC3D81FF5974DF57F4498EAE14F (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Byte[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, bool ___includeLength1, bool ___isBigArray2, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Message::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Message>::.ctor()
inline void List_1__ctor_m3DED4655979CC9C0713318918C12A0D12D76439B (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.MessageHandlerAttribute::set_MessageId(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerAttribute_set_MessageId_m9C405B77EBC05BAD15D7817EDA77282B368C2FD8_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.MessageHandlerAttribute::set_GroupId(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerAttribute_set_GroupId_m10E5107FFC4AD8AEAA33BBDABA983C53BA2FE6D1_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Timers.Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, const RuntimeMethod* method);
// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5 (ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * ___value0, const RuntimeMethod* method);
// System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619 (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, bool ___value0, const RuntimeMethod* method);
// RiptideNetworking.Transports.RudpTransport.PendingMessage RiptideNetworking.Transports.RudpTransport.PendingMessage::RetrieveFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * PendingMessage_RetrieveFromPool_m594963045A77FA44B5123C21A12BD3338E89E44D (const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Message::get_WrittenLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Message::get_MaxSendAttempts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Message_get_MaxSendAttempts_m6BFB36C11D38B8C5FF4ADEBD2C518E86C131F4A8_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage> RiptideNetworking.Transports.RudpTransport.RudpPeer::get_PendingMessages()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::Add(!0,!1)
inline void Dictionary_2_Add_mA5E01A26BC25D92C8EBF8CC755F37F9FC5795F74 (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * __this, uint16_t ___key0, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *, uint16_t, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA *, const RuntimeMethod*))Dictionary_2_Add_m103AD868478734AD5DB59DBF609F28DFC0A84ACB_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::TrySend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_TrySend_m0943EA15D8A95E580D4C96EA14C8191C7E6C21F2 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>::get_Count()
inline int32_t List_1_get_Count_m2E79072320F339F868FFE71CEF80EB1628056D56_inline (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>::get_Item(System.Int32)
inline PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * List_1_get_Item_mFB80CACCEDE8453BF33CDA08FA8F9BC51746043B_inline (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * (*) (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mFDC58B6F498BA0F994149F42A7F1F4C0373696C7 (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage__ctor_m5F8065464C8BAA5BE9E943F91BB07DFDED820251 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>::Contains(!0)
inline bool List_1_Contains_m69EE08A7C088376C57E60546B7D765D1F45FA28C (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * __this, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>::Add(!0)
inline void List_1_Add_mF584E919D6B0C40F5C76F586436FFAC3B912C9E2 (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * __this, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int16 RiptideNetworking.Transports.RudpTransport.RudpPeer::get_SmoothRTT()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThanOrEqual_mC1E034B3799905E42ACA29F05FDBB7F651E68541 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t21, const RuntimeMethod* method);
// System.Void System.Timers.Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Void System.Timers.Timer::set_Interval(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23 (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, double ___value0, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Utils.RiptideLogger::get_IsWarningLoggingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RiptideLogger_get_IsWarningLoggingEnabled_mC126C9D076911834C9F0C67CB7A1809B6D25701B (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, bool ___shouldRemoveFromDictionary0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_Send_m51CDD41B227EF5FCACDD58CAE8110B784198430D (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___numBytes1, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::Remove(!0)
inline bool Dictionary_2_Remove_m8D9526CD4BE8CB9AF9DDAC22D89D593863F2309E (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * __this, uint16_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *, uint16_t, const RuntimeMethod*))Dictionary_2_Remove_mE80CBA1D4730AA43C8928346E5DA24F106A79329_gshared)(__this, ___key0, method);
}
// System.Void System.Timers.Timer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Stop_m3BEC8E056443E8AC4525023B7CD786C8F1234FF3 (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_Release_m27C4AC667FC99D1E1DD5F693B596849FA8D9CCFA (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<RiptideNetworking.Transports.RudpTransport.PendingMessage>::.ctor()
inline void List_1__ctor_m11D95C0054D76A46FEBB9F0B14549C4329F7C7FC (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::RetrySend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_RetrySend_m300E8A272370F11A34E03D9EADEEF59A8108C179 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m284435F26D13876D19921B2D0B7C2E6055F90508 (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>::Clear()
inline void Dictionary_2_Clear_m0CF2DF5DA4B131C152188FD7AEFC1571241B3171 (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 *, const RuntimeMethod*))Dictionary_2_Clear_mD089C4FDE59985B889C7740BA2BA70CD1E652D29_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>::Add(!0,!1)
inline void Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96 (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * __this, int32_t ___key0, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 *, int32_t, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2 (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * __this, int32_t ___key0, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 *, int32_t, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B **, const RuntimeMethod*))Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared)(__this, ___key0, ___value1, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String RiptideNetworking.Utils.RiptideLogger::GetTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RiptideLogger_GetTimestamp_m628D1D2A42916A9C1F83A88BFAC609551DB12974 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.RiptideLogger/LogMethod::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMethod_Invoke_m21F50742D4840F7668BBDFA3AA45A267E46E48BF (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * __this, String_t* ___log0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<RiptideNetworking.Utils.LogType,RiptideNetworking.Utils.RiptideLogger/LogMethod>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD90A6C4FC22FFB1633CC5226D9CB54FA65C88ED8 (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m6F84B9A4AC2734CFE4E955F65144A3161F194DDC_gshared)(__this, ___capacity0, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::get_TimeoutTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RudpClient_get_TimeoutTime_mAC452ABB9CCBFCC21D6B0EED26FD4AC58C8C48A5_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener__ctor_m489FD24999B920AC06CA449A66AD36398B973356 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, String_t* ___logName0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::set_TimeoutTime(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpClient_set_TimeoutTime_m3F6DE1073977DBEC816B9D6DE2DFD2B581EF2CCD_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::ParseHostAddress(System.String,System.Net.IPAddress&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_ParseHostAddress_mFABB83EAF5B74B78043FD7B369B2C1569543E57F (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, String_t* ___hostAddress0, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** ___ip1, uint16_t* ___port2, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::MapToIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPAddress_MapToIPv6_mA99938E0BDF716543A4C890FB694C54FBDE70B4F (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::.ctor(RiptideNetworking.Transports.RudpTransport.RudpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer__ctor_m9B71368B24321D62826466449754771CB1022D51 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * ___rudpListener0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::StartListening(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_StartListening_m4B7A83B97C8CE3183538A96F02927986A9DC5743 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, uint16_t ___port0, const RuntimeMethod* method);
// System.Byte[] RiptideNetworking.Message::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Message_GetBytes_m2E1439B6CA1E1CF4FEAC0F4D20F5C55BF80767F6 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Release_m16FD68EF5D7A64920305A5137E0BF5D79B4C6C50 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerCallback__ctor_mA825B3FFCCA028905D47A189B70186E047283684 (TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::get_HeartbeatInterval()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RudpClient_get_HeartbeatInterval_mD2AAE26570F96CEC462645EC108145183DCE1641_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m23A998F76F655EF50D50521A68EADFE74EA8F7F0 (Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * __this, TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback0, RuntimeObject * ___state1, int32_t ___dueTime2, int32_t ___period3, const RuntimeMethod* method);
// System.String RiptideNetworking.Utils.Extensions::ToStringBasedOnIPFormat(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringBasedOnIPFormat_m5A183C489B9879FE877497BF616F07BA5918D980 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisString_t_mDAF4F8AFFC7C97A7BDD6C37260AD5B79C8A87B47 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_mF375ED41FA1B229A77C94F562939FC8A559C749D_gshared)(___source0, ___count1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_TryParse_m43158BF9D76398954BE04773A6A15898EFE27F3E (String_t* ___ipString0, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** ___address1, const RuntimeMethod* method);
// System.Boolean System.UInt16::TryParse(System.String,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_TryParse_m9DCCC7DE510437956E8518B907206D54F456A9A9 (String_t* ___s0, uint16_t* ___result1, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_IsConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_IsConnecting_m3B8CB678F4D28913D573C1A265BE883EB3098C74 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendConnect_m4CD8D08C1DE63AF86697988C50CD688F03397B49 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnConnectionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnConnectionFailed_mF810E53065977C7CD0CCB13E2A06C2019525AF80 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_IsConnected_mA1FDA30852E73DAD6B2A4F0EBDE290ACDF44C929 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_HasTimedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_HasTimedOut_m150A770881897415259F8A57050AAC9AD67E1E82 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnDisconnected_mF847441A0941EE335682690802AF857E491EFEE5 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendHeartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendHeartbeat_mBD75372DECABC878C98F3B8D241F96531AB17B56 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m5CCA1E4F27840BED6328A522FEDCA177C7429456 (U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.ActionQueue::Add(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleAck(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleAck_mD426EADBB956F4005AD3765FBC3D3F1147CFEB1E (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleAckExtra(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleAckExtra_m55ECAACC3046238932961D8F96D9DDC1CB5F8B67 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleHeartbeat(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleHeartbeat_mB5E839A12043D9C0F07125AEC389DB1560E2F176 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleWelcome(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleWelcome_m74D1CA099F52299295E8393E8C81D07A52196432 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleClientConnected(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleClientConnected_m55CE082F63DAE84EEAAA1AF0E567F1E0EAF5F2FC (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleClientDisconnected(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleClientDisconnected_m9F57EC4AD129674AEEA9BBCD5C9D2859147E91BD (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleDisconnect_mFEA86BC3A06D417BCA70B69BC3FE55CB54B33DA3 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// RiptideNetworking.Transports.RudpTransport.SendLockables RiptideNetworking.Transports.RudpTransport.RudpPeer::get_SendLockables()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::ReliableHandle(RiptideNetworking.Transports.HeaderType,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_ReliableHandle_mF09FD2C35D90B580D8ADF0CFCD7DED9912198CE6 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, uint8_t ___messageHeader0, uint16_t ___sequenceId1, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message2, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___fromEndPoint3, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___lockables4, const RuntimeMethod* method);
// RiptideNetworking.MessageSendMode RiptideNetworking.Message::get_SendMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Message_get_SendMode_m3BF7BB785831D48377DE8E237561CBA082B26BFA_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::SendReliable(RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.RudpTransport.RudpPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_SendReliable_mE8E48A0C8E044F1E97C869B32847D80DE268A328 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint1, RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * ___peer2, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_IsNotConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_IsNotConnected_m0DED060CFEC98A91BDCC049655372C5629AD74EF (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendDisconnect_mB96C4DB0616F02EF7F9A84DDFA4C3A98FE13697B (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::LocalDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_LocalDisconnect_m6A185AF039014564F75082E5B78D0DA88F4FA8EB (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Timer::Change(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Timer_Change_mA1AFDBFA55BB88080E349EAB61FEEB5FAF4609A3 (Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * __this, int32_t ___dueTime0, int32_t ___period1, const RuntimeMethod* method);
// System.Void System.Threading.Timer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Dispose_m89DE06BE1C2F2AF372D469826A0AA3560665B571 (Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_StopListening_mDED52BCA43ECFEFE7BE309F480C7C8BBA92137B2 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::get_Values()
inline ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * Dictionary_2_get_Values_m601D59600AB9ED3F9CD1F5E67A86BED07A65B01B (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * (*) (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *, const RuntimeMethod*))Dictionary_2_get_Values_m8A2D753639D762BA9A682543265D13C436A4180C_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::GetEnumerator()
inline Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195  ValueCollection_GetEnumerator_m0088E557F9A22C3254CE1EE6E40C9DFE005AE452 (ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195  (*) (ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m056A1AABB08B4DFB2AC1A7ED573F51A33EE9736A_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::get_Current()
inline PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * Enumerator_get_Current_m7D302BDE3B6502D306A22490FD1A11F5576F273E_inline (Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 * __this, const RuntimeMethod* method)
{
	return ((  PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * (*) (Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 *, const RuntimeMethod*))Enumerator_get_Current_mC321D19E6422F5735E6E2414919640C643CD9DA6_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::MoveNext()
inline bool Enumerator_MoveNext_m660B8682C9EF5BAFD1892222BC552B7EF501B4DE (Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 *, const RuntimeMethod*))Enumerator_MoveNext_mD98B8B753BF14140E8F67565EAB573FB5C9AC0B9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::Dispose()
inline void Enumerator_Dispose_mA14EE902749C822D89B156A1E200519A05E0F7BA (Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 *, const RuntimeMethod*))Enumerator_Dispose_m9664EC958154CBA8A68D112B54EFFED065A8893F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::Clear()
inline void Dictionary_2_Clear_m4A38FFC8504D73B11B0E88578FACFE933F684FCA (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *, const RuntimeMethod*))Dictionary_2_Clear_m56B8ABED68184004DF439349889B50BD5B0A8A22_gshared)(__this, method);
}
// RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.Transports.HeaderType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF (uint8_t ___messageHeader0, int32_t ___maxSendAttempts1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Send(RiptideNetworking.Message,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, bool ___shouldRelease1, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.SendLockables::get_LastReceivedSeqId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.SendLockables::get_AcksBitfield()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::AckMessage(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_AckMessage_m07FFA7925CA978AFD280844D6146FAAF2767F5BC (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, uint16_t ___seqId0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::UpdateReceivedAcks(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_UpdateReceivedAcks_mD357E4D6951242A5D6B541FEB04319DF0AEFE5E0 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, uint16_t ___remoteLastReceivedSeqId0, uint16_t ___remoteAcksBitField1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int16 RiptideNetworking.Transports.RudpTransport.RudpPeer::get_RTT()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t RudpPeer_get_RTT_mE0269EB9948B2C5429DD4AD46B6DDC4117BDCF3E_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m06A61F50B60DB29236A73539B8FF85C43E53AF17 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Byte RiptideNetworking.Message::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Message_GetByte_m847DDFDADAA73B26439DBE282DBB25DBED1D5880 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_RTT(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_set_RTT_mDF508AFB6F680D1B29E9E5AA96BA109858159D02 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::set_Id(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpClient_set_Id_mE56DE7357D9D888A0FF757720E3A7FFABF8505D0_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendWelcomeReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendWelcomeReceived_mCAD7FBB3E3A7B41F4938A7867D7A4CD790052619 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnConnected_mC30EF7B6751155202C0CC7E3454106F0A7AD30C0 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RudpClient_get_Id_m73117F5F221005800790BC5E8C4038E3DD84BF61_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientConnectedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectedEventArgs__ctor_mAB7996F78FBB7ADE4DC338068FE897160CE8F67C (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, uint16_t ___id0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnClientConnected(RiptideNetworking.ClientConnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnClientConnected_m0D773EDACF0EE73EE1226AA462C9BDD2B7A8FB81 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * ___e0, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientDisconnectedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientDisconnectedEventArgs__ctor_mFFB8634262A13C3AE932C6A73F903BCDB1B95E18 (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, uint16_t ___id0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnClientDisconnected(RiptideNetworking.ClientDisconnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnClientDisconnected_mA3300711F10BFD1B697A6845F6B319169E203805 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * ___e0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0__ctor_m97A78BB5B48342FC46384241D5CA66CE19000F70 (U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.ClientConnectedEventArgs::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ClientConnectedEventArgs_get_Id_m5E4780AACD9CDBD4673E05DFBBCE7AB822CDD27A_inline (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0__ctor_m1F7021520A8195D9CBFFBCD689D97DE6B66AFB89 (U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.ClientDisconnectedEventArgs::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ClientDisconnectedEventArgs_get_Id_m571DA559459A48F1698A86F13F1865BD0C6C56E5_inline (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Heartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Heartbeat_m1B6935499D257C21F9E496CE0688DD4C3155BBBF (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.ActionQueue::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue__ctor_m0BD28A4EFD310BBF5C626E08B9937CBB19CD24CA (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * __this, String_t* ___logName0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Utils.ActionQueue::ExecuteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue_ExecuteAll_m83FA06E22AD215CE9A29D63CD16A977BF89EA923 (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::IncreasePoolCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_IncreasePoolCount_m563B7443DBDB374542874191529D69B5CEC61C6D (const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m46AAE859577BBEED1D6246CEB874F2DFDEEE295C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___socketType0, int32_t ___protocolType1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEP0, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Message::DecreasePoolCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_DecreasePoolCount_m6CFA2D6E9EE75363EC13CFFDA4597EFFC4E4606A (const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_get_Available_mDAEF0D394D1130E69158CBE24A5687C772800E09 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_mBC4BC7ECAD49BF15570197FBCE794E25765684F9 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___socketFlags1, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** ___remoteEP2, const RuntimeMethod* method);
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131 (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::PrepareToHandle(System.Int32,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_PrepareToHandle_mAE7DCF5258914313E56480BD91773CBDD9688AE5 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, int32_t ___length0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint1, const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::CreateRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_CreateRaw_m42919123F33BC0B07F44C988ABA5DD5498CF6E08 (const RuntimeMethod* method);
// RiptideNetworking.Message RiptideNetworking.Message::PrepareForUse(RiptideNetworking.Transports.HeaderType,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_PrepareForUse_m06087513084FE3235BE4A22DC8FD2F722BBF24CA (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___messageHeader0, uint16_t ___contentLength1, const RuntimeMethod* method);
// System.Int32 RiptideNetworking.Transports.RudpTransport.RudpPeer::GetSequenceGap(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RudpPeer_GetSequenceGap_m03099209AE6502EBDF224B3D82DBA90BDC08053F (uint16_t ___seqId10, uint16_t ___seqId21, const RuntimeMethod* method);
// System.UInt64 RiptideNetworking.Transports.RudpTransport.SendLockables::get_DuplicateFilterBitfield()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::set_DuplicateFilterBitfield(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::set_AcksBitfield(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendLockables_set_AcksBitfield_mCB0C6553F32F9921C297790B691811B8C4565741_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpListener::UpdateAcksBitfield(System.Int32,RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpListener_UpdateAcksBitfield_m625D624833F0CD096E0C9A9FB61298F95A55609E (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, int32_t ___sequenceGap0, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___lockables1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::set_LastReceivedSeqId(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendLockables_set_LastReceivedSeqId_m02B64102C4FB280A00AAB01F22DC94936CF03E75_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpListener::UpdateDuplicateFilterBitfield(System.Int32,RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpListener_UpdateDuplicateFilterBitfield_m321ED45F3838E9BE0B0C816A052CFE415FF905FA (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, int32_t ___sequenceGap0, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___lockables1, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_mEE4D5D536BDD178DA55053964451F68469C6BE69 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___size1, int32_t ___socketFlags2, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEP3, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpPeer::get_NextSequenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RudpPeer_get_NextSequenceId_m07A8E14205FA54F76A46D6F32E4ECB617B285961 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::CreateAndSend(RiptideNetworking.Transports.RudpTransport.RudpPeer,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_CreateAndSend_m3579CE3ABEBF25378641EA8FD3514B5228D864FB (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * ___peer0, uint16_t ___sequenceId1, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message2, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint3, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_SmoothRTT(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpPeer_set_SmoothRTT_m2856DB9A1B8B6EC54D62E397A90D48D5141EC9A5_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::.ctor()
inline void Dictionary_2__ctor_m2E9CE448B7428D59633DBB9B3F7CFB9D1E0DEB80 (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *, const RuntimeMethod*))Dictionary_2__ctor_mCB5354538D116954DD0B4813479442C71769F4FF_gshared)(__this, method);
}
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendLockables__ctor_m21882D7C32EC2E5CF25591F980085EB3D2C79FD9 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_SendLockables(RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpPeer_set_SendLockables_m35BDBC82D8E8A75BA5F2B6B42DD26BE4EC82FF50_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.ReceiveLockables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveLockables__ctor_m13ACE0D880AAFB6E668DD572FD59CA94C1A7804E (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_ReceiveLockables(RiptideNetworking.Transports.RudpTransport.ReceiveLockables)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpPeer_set_ReceiveLockables_m0A61A306F97DED5964258E7E0E3BC66699096ABE_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * ___value0, const RuntimeMethod* method);
// RiptideNetworking.Transports.RudpTransport.ReceiveLockables RiptideNetworking.Transports.RudpTransport.RudpPeer::get_ReceiveLockables()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.ReceiveLockables::get_LastAckedSeqId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method);
// System.UInt16 RiptideNetworking.Transports.RudpTransport.ReceiveLockables::get_AckedMessagesBitfield()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.ReceiveLockables::set_AckedMessagesBitfield(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::CheckMessageAckStatus(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_CheckMessageAckStatus_m8AE7686B6FCE9008A20241393E52C8FC6D557DC3 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, uint16_t ___sequenceId0, uint16_t ___bit1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.ReceiveLockables::set_LastAckedSeqId(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiveLockables_set_LastAckedSeqId_mEEB9AFD0C4A51C16F14376FF9ADB48CE95B06EAC_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * __this, uint16_t ___key0, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *, uint16_t, PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA **, const RuntimeMethod*))Dictionary_2_TryGetValue_m6509463BC0CAA6B5E9876187B788496D80292A14_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m7FDBD1F3D27F23E6B03A81375A570074C256C5AB (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m03321E4D6808B3B719EDFA3D74E11D8954AF0AD7_gshared)(__this, ___capacity0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mFD7C0415F9C764761FF2A3B65A7FCF8E25A61CBD (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * __this, uint16_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 *, uint16_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mEEA880515DEF287BEF18076BC12B1B4581D23F7C_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler>::get_Item(!0)
inline MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * Dictionary_2_get_Item_m54DA1D0A01EE171B182EAF006E5E0ED563C6040F (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * __this, uint16_t ___key0, const RuntimeMethod* method)
{
	return ((  MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * (*) (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 *, uint16_t, const RuntimeMethod*))Dictionary_2_get_Item_m1193306C6D4A6F245C169D7E62BA6CDF04959A71_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Server/MessageHandler>::Add(!0,!1)
inline void Dictionary_2_Add_m8228C9A1435B072D223D12B3026BFC541AC184EE (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * __this, uint16_t ___key0, MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 *, uint16_t, MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB *, const RuntimeMethod*))Dictionary_2_Add_m103AD868478734AD5DB59DBF609F28DFC0A84ACB_gshared)(__this, ___key0, ___value1, method);
}
// System.Void RiptideNetworking.Client/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C95663E0FDF73F20B0C62B8FD03C10665BD2F76 (U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * __this, const RuntimeMethod* method);
// System.Void RiptideNetworking.ClientMessageReceivedEventArgs::.ctor(System.UInt16,RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs__ctor_m2BB695C2AFA146139F87A2D46823BD367DDC1228 (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, uint16_t ___messageId0, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message1, const RuntimeMethod* method);
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnMessageReceived(RiptideNetworking.ClientMessageReceivedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnMessageReceived_m41D46A3BE9DB18E2E604E836B5C965779769F4F6 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * ___e0, const RuntimeMethod* method);
// System.Void RiptideNetworking.Server/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m90F44568ACDA34942E81F76488481EC2ED402ADC (U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Utils.ActionQueue::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue__ctor_m0BD28A4EFD310BBF5C626E08B9937CBB19CD24CA (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * __this, String_t* ___logName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_executionQueue_1(L_0);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_1, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_executionQueueCopy_2(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___logName0;
		__this->set_LogName_0(L_2);
		return;
	}
}
// System.Void RiptideNetworking.Utils.ActionQueue::Add(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7138543DE01E7744D5CE45E43A90452D9E799F39);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = __this->get_LogName_0();
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(3, L_1, _stringLiteral7138543DE01E7744D5CE45E43A90452D9E799F39, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get_executionQueue_1();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get_executionQueue_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___action0;
		NullCheck(L_4);
		List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9(L_4, L_5, /*hidden argument*/List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		__this->set_hasActionToExecute_3((bool)1);
		IL2CPP_LEAVE(0x45, FINALLY_003b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		return;
	}
}
// System.Void RiptideNetworking.Utils.ActionQueue::ExecuteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionQueue_ExecuteAll_m83FA06E22AD215CE9A29D63CD16A977BF89EA923 (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0 = __this->get_hasActionToExecute_3();
		if (!L_0)
		{
			goto IL_007a;
		}
	}
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = __this->get_executionQueueCopy_2();
		NullCheck(L_1);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_1, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = __this->get_executionQueue_1();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get_executionQueueCopy_2();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = __this->get_executionQueue_1();
		NullCheck(L_4);
		List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335(L_4, L_5, /*hidden argument*/List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = __this->get_executionQueue_1();
		NullCheck(L_6);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_6, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		__this->set_hasActionToExecute_3((bool)0);
		IL2CPP_LEAVE(0x53, FINALLY_0049);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_9 = __this->get_executionQueueCopy_2();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11;
		L_11 = List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006c:
	{
		int32_t L_13 = V_2;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_14 = __this->get_executionQueueCopy_2();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_14, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}

IL_007a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Client::add_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_Connected_mC49256C628427976289949B8B37E1084003F3BCA (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Connected_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Connected_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::remove_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_Connected_m973E3F3739E5AE3D8276412CA3C4C412FE199521 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Connected_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Connected_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::add_ConnectionFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_ConnectionFailed_m8055C0DC777277BE79E7B51BCAE0C40E00C9E3A2 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_ConnectionFailed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_ConnectionFailed_1();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::remove_ConnectionFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_ConnectionFailed_mA758EA50934E609D5F20DED7C9E006EB9EDF89C1 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_ConnectionFailed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_ConnectionFailed_1();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::add_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_Disconnected_m1AC92EDF009F77E630B159DAEB35430C686EB8F4 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Disconnected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Disconnected_3();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::remove_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_Disconnected_mA410618D42E3060F24D6DB5143C7073EB0C2E140 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Disconnected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Disconnected_3();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::add_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_add_ClientDisconnected_m21400B2CC1E091DCA422CBFFB20B6907802EBEA7 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_0 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_1 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_2 = NULL;
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_0 = __this->get_ClientDisconnected_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_2 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var));
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 ** L_5 = __this->get_address_of_ClientDisconnected_5();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_6 = V_2;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_7 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *>((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_9 = V_0;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_9) == ((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::remove_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_remove_ClientDisconnected_m79221DB2A9ADAA5BE3B2538E7D776659C08F5552 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_0 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_1 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_2 = NULL;
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_0 = __this->get_ClientDisconnected_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_2 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var));
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 ** L_5 = __this->get_address_of_ClientDisconnected_5();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_6 = V_2;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_7 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *>((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_9 = V_0;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_9) == ((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.UInt16 RiptideNetworking.Client::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Client_get_Id_mE3359BF5E1590601295C93933E7CB715621EDF58 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionInfo_tD83E0D1DCACA1927E07B528115427868694E69AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_7();
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = InterfaceFuncInvoker0< uint16_t >::Invoke(0 /* System.UInt16 RiptideNetworking.Transports.IConnectionInfo::get_Id() */, IConnectionInfo_tD83E0D1DCACA1927E07B528115427868694E69AC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean RiptideNetworking.Client::get_IsNotConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_IsNotConnected_mF4F248F52BC2FA4F3A0D471D8F46F3D44B9FDA52 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionInfo_tD83E0D1DCACA1927E07B528115427868694E69AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean RiptideNetworking.Transports.IConnectionInfo::get_IsNotConnected() */, IConnectionInfo_tD83E0D1DCACA1927E07B528115427868694E69AC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void RiptideNetworking.Client::.ctor(System.UInt16,System.UInt16,System.Byte,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m68EF5350D33D91932D578D9F90F49B1F9BF19B8D (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, uint16_t ___timeoutTime0, uint16_t ___heartbeatInterval1, uint8_t ___maxConnectionAttempts2, String_t* ___logName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Common__ctor_mE69A051FEFE932D5DAC43637A5B1A33F4E875FDF(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___timeoutTime0;
		uint16_t L_1 = ___heartbeatInterval1;
		uint8_t L_2 = ___maxConnectionAttempts2;
		String_t* L_3 = ___logName3;
		RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * L_4 = (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB *)il2cpp_codegen_object_new(RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB_il2cpp_TypeInfo_var);
		RudpClient__ctor_m87FA04018F8829E4F8A028BAB0948CBC4A14FCD2(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_client_7(L_4);
		return;
	}
}
// System.Void RiptideNetworking.Client::Connect(System.String,System.Byte,RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_mD82444ED8A54392D807B184117612927F9FDA46A (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, String_t* ___hostAddress0, uint8_t ___messageHandlerGroupId1, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnClientConnected_mB3E8BAD7EFC45D0A0DFA688FBF9049A5E782E27A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnClientDisconnected_m2198B69232982AF02CEA88D01207BE469784D947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnConnected_mDAA3C5F3B433C3C5471E2D754B8D8A1FBAE81C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnConnectionFailed_m85B50F219C6B7CF24D9797D5030A7A1EC93C41AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnDisconnected_m57FA49DCE3BD9EEEDAB19D940B9A1B09B4C26C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnMessageReceived_mCD8BE956188B492CFC243A94C6468601CDB762ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Client_Disconnect_m8102665BF3410ABFC19E38CCC8B11D8F98B2ACAB(__this, /*hidden argument*/NULL);
		Assembly_t * L_0;
		L_0 = Assembly_GetCallingAssembly_m61DDCAA0C8FDC4A912E67501AE887105F986E570(/*hidden argument*/NULL);
		uint8_t L_1 = ___messageHandlerGroupId1;
		VirtActionInvoker2< Assembly_t *, uint8_t >::Invoke(4 /* System.Void RiptideNetworking.Common::CreateMessageHandlersDictionary(System.Reflection.Assembly,System.Byte) */, __this, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_3, __this, (intptr_t)((intptr_t)Client_OnConnected_mDAA3C5F3B433C3C5471E2D754B8D8A1FBAE81C27_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(0 /* System.Void RiptideNetworking.Transports.IClient::add_Connected(System.EventHandler) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_5, __this, (intptr_t)((intptr_t)Client_OnConnectionFailed_m85B50F219C6B7CF24D9797D5030A7A1EC93C41AC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(2 /* System.Void RiptideNetworking.Transports.IClient::add_ConnectionFailed(System.EventHandler) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_7();
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_7 = (EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)il2cpp_codegen_object_new(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC(L_7, __this, (intptr_t)((intptr_t)Client_OnMessageReceived_mCD8BE956188B492CFC243A94C6468601CDB762ED_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * >::Invoke(4 /* System.Void RiptideNetworking.Transports.IClient::add_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_9, __this, (intptr_t)((intptr_t)Client_OnDisconnected_m57FA49DCE3BD9EEEDAB19D940B9A1B09B4C26C0E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(6 /* System.Void RiptideNetworking.Transports.IClient::add_Disconnected(System.EventHandler) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_7();
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_11 = (EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)il2cpp_codegen_object_new(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905(L_11, __this, (intptr_t)((intptr_t)Client_OnClientConnected_mB3E8BAD7EFC45D0A0DFA688FBF9049A5E782E27A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * >::Invoke(8 /* System.Void RiptideNetworking.Transports.IClient::add_ClientConnected(System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_7();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_13 = (EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)il2cpp_codegen_object_new(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977(L_13, __this, (intptr_t)((intptr_t)Client_OnClientDisconnected_m2198B69232982AF02CEA88D01207BE469784D947_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * >::Invoke(10 /* System.Void RiptideNetworking.Transports.IClient::add_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_7();
		String_t* L_15 = ___hostAddress0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_16 = ___message2;
		NullCheck(L_14);
		InterfaceActionInvoker2< String_t*, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(12 /* System.Void RiptideNetworking.Transports.IClient::Connect(System.String,RiptideNetworking.Message) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		return;
	}
}
// System.Void RiptideNetworking.Client::CreateMessageHandlersDictionary(System.Reflection.Assembly,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_CreateMessageHandlersDictionary_m6D6E6B8A2AC8DC9E51C37842DDD004FD56118A5A (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, Assembly_t * ___assembly0, uint8_t ___messageHandlerGroupId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCECD1CCA8CC75DB9CBF95A6D143BE5293D85B5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6C34C38D69475B4B4C1DD1362274DA9E9CD46949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m86334307F034D615CDD8E32732D48F2EBAD2D2FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_0_m8716B9CB06686C1656E83984251AB31B006F0609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_1_m8AADD2508385B3A28E1499ED2691052688773E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_0 = NULL;
	int32_t V_1 = 0;
	MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * V_2 = NULL;
	Delegate_t * V_3 = NULL;
	MethodInfo_t * V_4 = NULL;
	Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * G_B2_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B2_1 = NULL;
	Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * G_B1_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B1_1 = NULL;
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_2 = ((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->get_U3CU3E9__37_0_1();
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * L_4 = ((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_5 = (Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 *)il2cpp_codegen_object_new(Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80_il2cpp_TypeInfo_var);
		Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_0_m8716B9CB06686C1656E83984251AB31B006F0609_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA_RuntimeMethod_var);
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_6 = L_5;
		((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->set_U3CU3E9__37_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_8 = ((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->get_U3CU3E9__37_1_2();
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * L_10 = ((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_11 = (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *)il2cpp_codegen_object_new(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_1_m8AADD2508385B3A28E1499ED2691052688773E52_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_12 = L_11;
		((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->set_U3CU3E9__37_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_14;
		L_14 = Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3(L_13, /*hidden argument*/Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3_RuntimeMethod_var);
		V_0 = L_14;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_15 = V_0;
		NullCheck(L_15);
		Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * L_16 = (Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 *)il2cpp_codegen_object_new(Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m86334307F034D615CDD8E32732D48F2EBAD2D2FA(L_16, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/Dictionary_2__ctor_m86334307F034D615CDD8E32732D48F2EBAD2D2FA_RuntimeMethod_var);
		__this->set_messageHandlers_6(L_16);
		V_1 = 0;
		goto IL_018d;
	}

IL_0069:
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		MethodInfo_t * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_21;
		L_21 = CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA(L_20, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA_RuntimeMethod_var);
		V_2 = L_21;
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_22 = V_2;
		NullCheck(L_22);
		uint8_t L_23;
		L_23 = MessageHandlerAttribute_get_GroupId_m2C16CA79D8608BB093FFE18D095677C63A048D91_inline(L_22, /*hidden argument*/NULL);
		uint8_t L_24 = ___messageHandlerGroupId1;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0189;
		}
	}
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		MethodInfo_t * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		bool L_29;
		L_29 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00a8;
		}
	}
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MethodInfo_t * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Type_t * L_34;
		L_34 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_33);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		MethodInfo_t * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_38);
		String_t* L_40;
		L_40 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76BC348770255224061A387057BA3E868F365332)), L_34, L_39, /*hidden argument*/NULL);
		Exception_t * L_41 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_41, L_40, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_CreateMessageHandlersDictionary_m6D6E6B8A2AC8DC9E51C37842DDD004FD56118A5A_RuntimeMethod_var)));
	}

IL_00a8:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_44 = V_0;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		MethodInfo_t * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Delegate_t * L_48;
		L_48 = Delegate_CreateDelegate_mBC1726D0AC1255215862111C17DDC5D2AA2FC750(L_43, L_47, (bool)0, /*hidden argument*/NULL);
		V_3 = L_48;
		Delegate_t * L_49 = V_3;
		if (!L_49)
		{
			goto IL_0154;
		}
	}
	{
		Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * L_50 = __this->get_messageHandlers_6();
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_51 = V_2;
		NullCheck(L_51);
		uint16_t L_52;
		L_52 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		bool L_53;
		L_53 = Dictionary_2_ContainsKey_m6C34C38D69475B4B4C1DD1362274DA9E9CD46949(L_50, L_52, /*hidden argument*/Dictionary_2_ContainsKey_m6C34C38D69475B4B4C1DD1362274DA9E9CD46949_RuntimeMethod_var);
		if (!L_53)
		{
			goto IL_013b;
		}
	}
	{
		Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * L_54 = __this->get_messageHandlers_6();
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_55 = V_2;
		NullCheck(L_55);
		uint16_t L_56;
		L_56 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * L_57;
		L_57 = Dictionary_2_get_Item_m2FBECB805452AB307FBF1C908F24BA7D57002A0F(L_54, L_56, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_m2FBECB805452AB307FBF1C908F24BA7D57002A0F_RuntimeMethod_var)));
		MethodInfo_t * L_58;
		L_58 = RuntimeReflectionExtensions_GetMethodInfo_mA9D59D730A7AD6E1017F93EF8A4786356B48D243(L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_59;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_61 = V_0;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		MethodInfo_t * L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Type_t * L_65;
		L_65 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_64);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_65);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_65);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = L_60;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_67 = V_0;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		MethodInfo_t * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_70);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_71);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_71);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_66;
		MethodInfo_t * L_73 = V_4;
		NullCheck(L_73);
		Type_t * L_74;
		L_74 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_73);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_72;
		MethodInfo_t * L_76 = V_4;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_76);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_77);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = L_75;
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_79 = V_2;
		NullCheck(L_79);
		uint16_t L_80;
		L_80 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_79, /*hidden argument*/NULL);
		uint16_t L_81 = L_80;
		RuntimeObject * L_82 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)), &L_81);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_82);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_82);
		String_t* L_83;
		L_83 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF39B193AA129AA77CF8EB8FA5801B3CDE94E17A1)), L_78, /*hidden argument*/NULL);
		Exception_t * L_84 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_84, L_83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_CreateMessageHandlersDictionary_m6D6E6B8A2AC8DC9E51C37842DDD004FD56118A5A_RuntimeMethod_var)));
	}

IL_013b:
	{
		Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * L_85 = __this->get_messageHandlers_6();
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_86 = V_2;
		NullCheck(L_86);
		uint16_t L_87;
		L_87 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_86, /*hidden argument*/NULL);
		Delegate_t * L_88 = V_3;
		NullCheck(L_85);
		Dictionary_2_Add_mCECD1CCA8CC75DB9CBF95A6D143BE5293D85B5EC(L_85, L_87, ((MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 *)CastclassSealed((RuntimeObject*)L_88, MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_Add_mCECD1CCA8CC75DB9CBF95A6D143BE5293D85B5EC_RuntimeMethod_var);
		goto IL_0189;
	}

IL_0154:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_89 = { reinterpret_cast<intptr_t> (MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90;
		L_90 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_89, /*hidden argument*/NULL);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_91 = V_0;
		int32_t L_92 = V_1;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		MethodInfo_t * L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Delegate_t * L_95;
		L_95 = Delegate_CreateDelegate_mBC1726D0AC1255215862111C17DDC5D2AA2FC750(L_90, L_94, (bool)0, /*hidden argument*/NULL);
		if (L_95)
		{
			goto IL_0189;
		}
	}
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_96 = V_0;
		int32_t L_97 = V_1;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		MethodInfo_t * L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		Type_t * L_100;
		L_100 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_99);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_101 = V_0;
		int32_t L_102 = V_1;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		MethodInfo_t * L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_104);
		String_t* L_106;
		L_106 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED4899F4325F00A8A63840361F14B52CAB77C55)), L_100, L_105, /*hidden argument*/NULL);
		Exception_t * L_107 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_107, L_106, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_CreateMessageHandlersDictionary_m6D6E6B8A2AC8DC9E51C37842DDD004FD56118A5A_RuntimeMethod_var)));
	}

IL_0189:
	{
		int32_t L_108 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_018d:
	{
		int32_t L_109 = V_1;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_110 = V_0;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Client::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Tick_m0D318B7360D61A910329B40F63DF88ECDE26CDAE (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommon_t6680AD6DA30524A4B1DD5E41FAB296BAD59E80F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_7();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void RiptideNetworking.Transports.ICommon::Tick() */, ICommon_t6680AD6DA30524A4B1DD5E41FAB296BAD59E80F8_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void RiptideNetworking.Client::Send(RiptideNetworking.Message,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Send_m3F29509D5ED32721B03BA7C4E92AE808582F9438 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, bool ___shouldRelease1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_7();
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1 = ___message0;
		bool L_2 = ___shouldRelease1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, bool >::Invoke(13 /* System.Void RiptideNetworking.Transports.IClient::Send(RiptideNetworking.Message,System.Boolean) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void RiptideNetworking.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m8102665BF3410ABFC19E38CCC8B11D8F98B2ACAB (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Client_get_IsNotConnected_mF4F248F52BC2FA4F3A0D471D8F46F3D44B9FDA52(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->get_client_7();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(14 /* System.Void RiptideNetworking.Transports.IClient::Disconnect() */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_1);
		Client_LocalDisconnect_m34500EB8C359C9D8A56573E79015DC635B2A4FF3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Client::LocalDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_LocalDisconnect_m34500EB8C359C9D8A56573E79015DC635B2A4FF3 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnClientConnected_mB3E8BAD7EFC45D0A0DFA688FBF9049A5E782E27A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnClientDisconnected_m2198B69232982AF02CEA88D01207BE469784D947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnConnected_mDAA3C5F3B433C3C5471E2D754B8D8A1FBAE81C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnConnectionFailed_m85B50F219C6B7CF24D9797D5030A7A1EC93C41AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnDisconnected_m57FA49DCE3BD9EEEDAB19D940B9A1B09B4C26C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_OnMessageReceived_mCD8BE956188B492CFC243A94C6468601CDB762ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)Client_OnConnected_mDAA3C5F3B433C3C5471E2D754B8D8A1FBAE81C27_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(1 /* System.Void RiptideNetworking.Transports.IClient::remove_Connected(System.EventHandler) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_3, __this, (intptr_t)((intptr_t)Client_OnConnectionFailed_m85B50F219C6B7CF24D9797D5030A7A1EC93C41AC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(3 /* System.Void RiptideNetworking.Transports.IClient::remove_ConnectionFailed(System.EventHandler) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_7();
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_5 = (EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)il2cpp_codegen_object_new(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC(L_5, __this, (intptr_t)((intptr_t)Client_OnMessageReceived_mCD8BE956188B492CFC243A94C6468601CDB762ED_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m68D347F65134AE6D21E95CAE4565DEEBD63569AC_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * >::Invoke(5 /* System.Void RiptideNetworking.Transports.IClient::remove_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_7, __this, (intptr_t)((intptr_t)Client_OnDisconnected_m57FA49DCE3BD9EEEDAB19D940B9A1B09B4C26C0E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(7 /* System.Void RiptideNetworking.Transports.IClient::remove_Disconnected(System.EventHandler) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_7();
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_9 = (EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)il2cpp_codegen_object_new(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905(L_9, __this, (intptr_t)((intptr_t)Client_OnClientConnected_mB3E8BAD7EFC45D0A0DFA688FBF9049A5E782E27A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE6B90E65D4DC2E0D4D2C877D6694FE7E18979905_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * >::Invoke(9 /* System.Void RiptideNetworking.Transports.IClient::remove_ClientConnected(System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_7();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_11 = (EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)il2cpp_codegen_object_new(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977(L_11, __this, (intptr_t)((intptr_t)Client_OnClientDisconnected_m2198B69232982AF02CEA88D01207BE469784D947_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE23EED8A6CE14AC16C85D54EC07BC9100E360977_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * >::Invoke(11 /* System.Void RiptideNetworking.Transports.IClient::remove_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>) */, IClient_t522ADDB72D7C1A8900C6B0A78821FFEEA0BCFBAF_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void RiptideNetworking.Client::OnConnected(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_OnConnected_mDAA3C5F3B433C3C5471E2D754B8D8A1FBAE81C27 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, RuntimeObject * ___s0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B2_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B1_0 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Connected_0();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___e1;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(G_B2_0, __this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Client::OnConnectionFailed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_OnConnectionFailed_m85B50F219C6B7CF24D9797D5030A7A1EC93C41AC (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, RuntimeObject * ___s0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B2_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B1_0 = NULL;
	{
		Client_LocalDisconnect_m34500EB8C359C9D8A56573E79015DC635B2A4FF3(__this, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_ConnectionFailed_1();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___e1;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(G_B2_0, __this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Client::OnMessageReceived(System.Object,RiptideNetworking.ClientMessageReceivedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_OnMessageReceived_mCD8BE956188B492CFC243A94C6468601CDB762ED (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, RuntimeObject * ___s0, ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC2B1C32885C2480B4091C020375F5A4248367C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AD3E167F34A0E7A9C87EF1E2ADE12656FE3CCAD);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * V_0 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * G_B2_0 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * G_B1_0 = NULL;
	{
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_0 = __this->get_MessageReceived_2();
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * L_2 = ___e1;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF(G_B2_0, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF_RuntimeMethod_var);
	}

IL_0013:
	{
		Dictionary_2_t60CF32BA79A75D50CF1C6F442B354FAA9ACC8BB2 * L_3 = __this->get_messageHandlers_6();
		ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * L_4 = ___e1;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = ClientMessageReceivedEventArgs_get_MessageId_m3E08A66788C94CBDB8724F8C23758A34F6019666_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mC2B1C32885C2480B4091C020375F5A4248367C67(L_3, L_5, (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC2B1C32885C2480B4091C020375F5A4248367C67_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * L_7 = V_0;
		ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * L_8 = ___e1;
		NullCheck(L_8);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_9;
		L_9 = ClientMessageReceivedEventArgs_get_Message_m1724616F15031BE94B0370BBC0A01D3C9F1F575C_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		MessageHandler_Invoke_mD25CB4025C73139E72A7C8DCB4B4A33606BA02B4(L_7, L_9, /*hidden argument*/NULL);
		return;
	}

IL_0035:
	{
		ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * L_10 = ___e1;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = ClientMessageReceivedEventArgs_get_MessageId_m3E08A66788C94CBDB8724F8C23758A34F6019666_inline(L_10, /*hidden argument*/NULL);
		uint16_t L_12 = L_11;
		RuntimeObject * L_13 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral6AD3E167F34A0E7A9C87EF1E2ADE12656FE3CCAD, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(2, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Client::OnDisconnected(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_OnDisconnected_m57FA49DCE3BD9EEEDAB19D940B9A1B09B4C26C0E (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, RuntimeObject * ___s0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B2_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B1_0 = NULL;
	{
		Client_LocalDisconnect_m34500EB8C359C9D8A56573E79015DC635B2A4FF3(__this, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Disconnected_3();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___e1;
		NullCheck(G_B2_0);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(G_B2_0, __this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Client::OnClientConnected(System.Object,RiptideNetworking.ClientConnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_OnClientConnected_mB3E8BAD7EFC45D0A0DFA688FBF9049A5E782E27A (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, RuntimeObject * ___s0, ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * G_B2_0 = NULL;
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * G_B1_0 = NULL;
	{
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_0 = __this->get_ClientConnected_4();
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * L_2 = ___e1;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950(G_B2_0, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950_RuntimeMethod_var);
		return;
	}
}
// System.Void RiptideNetworking.Client::OnClientDisconnected(System.Object,RiptideNetworking.ClientDisconnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_OnClientDisconnected_m2198B69232982AF02CEA88D01207BE469784D947 (Client_t7A583A9D8A057E799587BB20B93191458EE47F5D * __this, RuntimeObject * ___s0, ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * G_B2_0 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * G_B1_0 = NULL;
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_0 = __this->get_ClientDisconnected_5();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * L_2 = ___e1;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7(G_B2_0, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.ClientConnectedEventArgs::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ClientConnectedEventArgs_get_Id_m5E4780AACD9CDBD4673E05DFBBCE7AB822CDD27A (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.ClientConnectedEventArgs::set_Id(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectedEventArgs_set_Id_m74D967E1848D4E305C27004F521D013E07FBAAC6 (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void RiptideNetworking.ClientConnectedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientConnectedEventArgs__ctor_mAB7996F78FBB7ADE4DC338068FE897160CE8F67C (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, uint16_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___id0;
		ClientConnectedEventArgs_set_Id_m74D967E1848D4E305C27004F521D013E07FBAAC6_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.ClientDisconnectedEventArgs::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ClientDisconnectedEventArgs_get_Id_m571DA559459A48F1698A86F13F1865BD0C6C56E5 (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.ClientDisconnectedEventArgs::set_Id(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientDisconnectedEventArgs_set_Id_m33EFE2D1E48B7B97486DD375281D9307CFEFCBD0 (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void RiptideNetworking.ClientDisconnectedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientDisconnectedEventArgs__ctor_mFFB8634262A13C3AE932C6A73F903BCDB1B95E18 (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, uint16_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___id0;
		ClientDisconnectedEventArgs_set_Id_m33EFE2D1E48B7B97486DD375281D9307CFEFCBD0_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.ClientMessageReceivedEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ClientMessageReceivedEventArgs_get_MessageId_m3E08A66788C94CBDB8724F8C23758A34F6019666 (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.ClientMessageReceivedEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs_set_MessageId_mEF2F19D501F9D139F39E2A0343B19CF3545DD798 (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// RiptideNetworking.Message RiptideNetworking.ClientMessageReceivedEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ClientMessageReceivedEventArgs_get_Message_m1724616F15031BE94B0370BBC0A01D3C9F1F575C (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, const RuntimeMethod* method)
{
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void RiptideNetworking.ClientMessageReceivedEventArgs::set_Message(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs_set_Message_m766697CC8D2B024579F495C78727A2AB00465007 (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___value0, const RuntimeMethod* method)
{
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void RiptideNetworking.ClientMessageReceivedEventArgs::.ctor(System.UInt16,RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs__ctor_m2BB695C2AFA146139F87A2D46823BD367DDC1228 (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, uint16_t ___messageId0, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		ClientMessageReceivedEventArgs_set_MessageId_mEF2F19D501F9D139F39E2A0343B19CF3545DD798_inline(__this, L_0, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1 = ___message1;
		ClientMessageReceivedEventArgs_set_Message_m766697CC8D2B024579F495C78727A2AB00465007_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_mE69A051FEFE932D5DAC43637A5B1A33F4E875FDF (Common_tDAC6859E5A7575F6203B5375BBD44C8B7FB86610 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String RiptideNetworking.Utils.Extensions::ToStringBasedOnIPFormat(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringBasedOnIPFormat_m5A183C489B9879FE877497BF616F07BA5918D980 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___endPoint0;
		NullCheck(L_0);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_1;
		L_1 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = IPAddress_get_IsIPv4MappedToIPv6_mB28F5D60E056362B3F9591D96E2576BF7AD860B1(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_3 = ___endPoint0;
		NullCheck(L_3);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_4;
		L_4 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_5;
		L_5 = IPAddress_MapToIPv4_mE4D84D6FBBB5A018C29A7373CE3869D70F53BB5C(L_4, /*hidden argument*/NULL);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_6 = ___endPoint0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_5, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002e:
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_11 = ___endPoint0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte RiptideNetworking.Message::get_InstancesPerSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		uint8_t L_0 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_U3CInstancesPerSocketU3Ek__BackingField_1();
		return L_0;
	}
}
// RiptideNetworking.MessageSendMode RiptideNetworking.Message::get_SendMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Message_get_SendMode_m3BF7BB785831D48377DE8E237561CBA082B26BFA (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CSendModeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void RiptideNetworking.Message::set_SendMode(RiptideNetworking.MessageSendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_set_SendMode_mD4BE9944ECDC6FE71AD2B73267FB20D232682985 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CSendModeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 RiptideNetworking.Message::get_MaxSendAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_get_MaxSendAttempts_m6BFB36C11D38B8C5FF4ADEBD2C518E86C131F4A8 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMaxSendAttemptsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void RiptideNetworking.Message::set_MaxSendAttempts(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_set_MaxSendAttempts_m4411BB01AD3DDDA7084B8E0E628A032B68FA00E2 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSendAttemptsU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Byte[] RiptideNetworking.Message::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CBytesU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void RiptideNetworking.Message::set_Bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_set_Bytes_m2C98AA322C81B694DE602FDAA62CECDF9DBDEC32 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CBytesU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 RiptideNetworking.Message::get_UnreadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_writePos_6();
		uint16_t L_1 = __this->get_readPos_7();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 RiptideNetworking.Message::get_WrittenLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_writePos_6();
		return L_0;
	}
}
// System.Int32 RiptideNetworking.Message::get_UnwrittenLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		uint16_t L_1 = __this->get_writePos_6();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)L_1));
	}
}
// System.Void RiptideNetworking.Message::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_mDEB149CCC1C79BE91109078E8CF2CBB6DA377237 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___maxSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___maxSize0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		Message_set_Bytes_m2C98AA322C81B694DE602FDAA62CECDF9DBDEC32_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Message::IncreasePoolCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_IncreasePoolCount_m563B7443DBDB374542874191529D69B5CEC61C6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m19CF350D7F9EE0A0078E5AEEC98A0F08B0BF0DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_0 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_2 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_3 = L_2;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3(L_3, /*hidden argument*/List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3_RuntimeMethod_var);
			uint8_t L_5;
			L_5 = Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303_inline(/*hidden argument*/NULL);
			NullCheck(L_3);
			List_1_set_Capacity_m19CF350D7F9EE0A0078E5AEEC98A0F08B0BF0DB9(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)))), /*hidden argument*/List_1_set_Capacity_m19CF350D7F9EE0A0078E5AEEC98A0F08B0BF0DB9_RuntimeMethod_var);
			V_2 = 0;
			goto IL_0044;
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_6 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7 = (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *)il2cpp_codegen_object_new(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			Message__ctor_mDEB149CCC1C79BE91109078E8CF2CBB6DA377237(L_7, ((int32_t)1250), /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825(L_6, L_7, /*hidden argument*/List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825_RuntimeMethod_var);
			int32_t L_8 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		}

IL_0044:
		{
			int32_t L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			uint8_t L_10;
			L_10 = Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303_inline(/*hidden argument*/NULL);
			if ((((int32_t)L_9) < ((int32_t)L_10)))
			{
				goto IL_002c;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x58, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0057;
			}
		}

IL_0051:
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		return;
	}
}
// System.Void RiptideNetworking.Message::DecreasePoolCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_DecreasePoolCount_m6CFA2D6E9EE75363EC13CFFDA4597EFFC4E4606A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_0 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_2 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_inline(L_2, /*hidden argument*/List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var);
			uint8_t L_4;
			L_4 = Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303_inline(/*hidden argument*/NULL);
			if ((((int32_t)L_3) >= ((int32_t)L_4)))
			{
				goto IL_0023;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_0040);
		}

IL_0023:
		{
			V_2 = 0;
			goto IL_0036;
		}

IL_0027:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_5 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_5);
			List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525(L_5, 0, /*hidden argument*/List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525_RuntimeMethod_var);
			int32_t L_6 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_0036:
		{
			int32_t L_7 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			uint8_t L_8;
			L_8 = Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303_inline(/*hidden argument*/NULL);
			if ((((int32_t)L_7) < ((int32_t)L_8)))
			{
				goto IL_0027;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		return;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.MessageSendMode,System.UInt16,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Create_mED05CCB405B7D5EE7D00D1A5688027B5F8D8D607 (uint8_t ___sendMode0, uint16_t ___id1, int32_t ___maxSendAttempts2, bool ___shouldAutoRelay3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B2_0 = NULL;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0;
		L_0 = Message_RetrieveFromPool_m7FC7BADF63B6400977C4AE6351E5C5BF73A9B516(/*hidden argument*/NULL);
		bool L_1 = ___shouldAutoRelay3;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000b;
		}
	}
	{
		uint8_t L_2 = ___sendMode0;
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000b:
	{
		uint8_t L_3 = ___sendMode0;
		G_B3_0 = ((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1))));
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		int32_t L_4 = ___maxSendAttempts2;
		NullCheck(G_B3_1);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5;
		L_5 = Message_PrepareForUse_m838AA2F7B84FCF88E975D550CB28953C6005D555(G_B3_1, G_B3_0, L_4, /*hidden argument*/NULL);
		uint16_t L_6 = ___id1;
		NullCheck(L_5);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7;
		L_7 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.MessageSendMode,System.Enum,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Create_mF02D9B4C93BD52CD8AE3F8ABC0D8DC0847676438 (uint8_t ___sendMode0, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___id1, int32_t ___maxSendAttempts2, bool ___shouldAutoRelay3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___sendMode0;
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_1 = ___id1;
		int32_t L_2 = ___maxSendAttempts2;
		bool L_3 = ___shouldAutoRelay3;
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_4;
		L_4 = Message_Create_mED05CCB405B7D5EE7D00D1A5688027B5F8D8D607(L_0, ((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Create(RiptideNetworking.Transports.HeaderType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF (uint8_t ___messageHeader0, int32_t ___maxSendAttempts1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0;
		L_0 = Message_RetrieveFromPool_m7FC7BADF63B6400977C4AE6351E5C5BF73A9B516(/*hidden argument*/NULL);
		uint8_t L_1 = ___messageHeader0;
		int32_t L_2 = ___maxSendAttempts1;
		NullCheck(L_0);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_3;
		L_3 = Message_PrepareForUse_m838AA2F7B84FCF88E975D550CB28953C6005D555(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::CreateRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_CreateRaw_m42919123F33BC0B07F44C988ABA5DD5498CF6E08 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0;
		L_0 = Message_RetrieveFromPool_m7FC7BADF63B6400977C4AE6351E5C5BF73A9B516(/*hidden argument*/NULL);
		return L_0;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::RetrieveFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_RetrieveFromPool_m7FC7BADF63B6400977C4AE6351E5C5BF73A9B516 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0FFFEFF762640BCA57B121686192AED78C745F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * V_0 = NULL;
	bool V_1 = false;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * V_2 = NULL;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_0 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_2 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_inline(L_2, /*hidden argument*/List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var);
			if ((((int32_t)L_3) <= ((int32_t)0)))
			{
				goto IL_0036;
			}
		}

IL_001d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_4 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_4);
			Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5;
			L_5 = List_1_get_Item_m0FFFEFF762640BCA57B121686192AED78C745F84_inline(L_4, 0, /*hidden argument*/List_1_get_Item_m0FFFEFF762640BCA57B121686192AED78C745F84_RuntimeMethod_var);
			V_2 = L_5;
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_6 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_6);
			List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525(L_6, 0, /*hidden argument*/List_1_RemoveAt_m8E9BA397DF33224C6A1E998C41D00FD2E81F5525_RuntimeMethod_var);
			goto IL_0041;
		}

IL_0036:
		{
			Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7 = (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *)il2cpp_codegen_object_new(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			Message__ctor_mDEB149CCC1C79BE91109078E8CF2CBB6DA377237(L_7, ((int32_t)1250), /*hidden argument*/NULL);
			V_2 = L_7;
		}

IL_0041:
		{
			Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_8 = V_2;
			V_3 = L_8;
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_11 = V_3;
		return L_11;
	}
}
// System.Void RiptideNetworking.Message::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Release_m16FD68EF5D7A64920305A5137E0BF5D79B4C6C50 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m400A0F3CF6A7389459284AED012C12516B447FB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_0 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_2 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_inline(L_2, /*hidden argument*/List_1_get_Count_m33ADAE4BADBA7E1F81BC3E8471F28CF332BE6FE3_RuntimeMethod_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_4 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_4);
			int32_t L_5;
			L_5 = List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3(L_4, /*hidden argument*/List_1_get_Capacity_m098EBAA51089979C702FC26B20348B4F8A513CC3_RuntimeMethod_var);
			if ((((int32_t)L_3) >= ((int32_t)L_5)))
			{
				goto IL_003e;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_6 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_6);
			bool L_7;
			L_7 = List_1_Contains_m400A0F3CF6A7389459284AED012C12516B447FB0(L_6, __this, /*hidden argument*/List_1_Contains_m400A0F3CF6A7389459284AED012C12516B447FB0_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_003e;
			}
		}

IL_0033:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_8 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_pool_2();
			NullCheck(L_8);
			List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825(L_8, __this, /*hidden argument*/List_1_Add_m38B0FEFD3A6CA883BB5375B637813FCE1B02F825_RuntimeMethod_var);
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		return;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::PrepareForUse(RiptideNetworking.Transports.HeaderType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_PrepareForUse_m838AA2F7B84FCF88E975D550CB28953C6005D555 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___messageHeader0, int32_t ___maxSendAttempts1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___maxSendAttempts1;
		Message_set_MaxSendAttempts_m4411BB01AD3DDDA7084B8E0E628A032B68FA00E2_inline(__this, L_0, /*hidden argument*/NULL);
		Message_SetReadWritePos_m3DAF8FB4665F6C38DE85F7280352ED6993E44F88(__this, (uint16_t)0, (uint16_t)1, /*hidden argument*/NULL);
		uint8_t L_1 = ___messageHeader0;
		Message_SetHeader_m45A98791CA73329F5CBC739A30FE2F76E0912B0E(__this, L_1, /*hidden argument*/NULL);
		return __this;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::PrepareForUse(RiptideNetworking.Transports.HeaderType,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_PrepareForUse_m06087513084FE3235BE4A22DC8FD2F722BBF24CA (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___messageHeader0, uint16_t ___contentLength1, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___contentLength1;
		Message_SetReadWritePos_m3DAF8FB4665F6C38DE85F7280352ED6993E44F88(__this, (uint16_t)1, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = ___messageHeader0;
		Message_SetHeader_m45A98791CA73329F5CBC739A30FE2F76E0912B0E(__this, L_1, /*hidden argument*/NULL);
		return __this;
	}
}
// System.Void RiptideNetworking.Message::SetReadWritePos(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_SetReadWritePos_m3DAF8FB4665F6C38DE85F7280352ED6993E44F88 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint16_t ___newReadPos0, uint16_t ___newWritePos1, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___newReadPos0;
		__this->set_readPos_7(L_0);
		uint16_t L_1 = ___newWritePos1;
		__this->set_writePos_6(L_1);
		return;
	}
}
// System.Void RiptideNetworking.Message::SetHeader(RiptideNetworking.Transports.HeaderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_SetHeader_m45A98791CA73329F5CBC739A30FE2F76E0912B0E (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___messageHeader0, const RuntimeMethod* method)
{
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B2_0 = NULL;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B3_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint8_t L_1 = ___messageHeader0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_1);
		uint8_t L_2 = ___messageHeader0;
		G_B1_0 = __this;
		if ((((int32_t)L_2) >= ((int32_t)7)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 7;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		Message_set_SendMode_mD4BE9944ECDC6FE71AD2B73267FB20D232682985_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m8C48C7D01C48BFCA5AF9235CFCB87AF593051C37 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42F7CEADE4E641833177CD87BD1C64C8AD80B313)), L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_m8C48C7D01C48BFCA5AF9235CFCB87AF593051C37_RuntimeMethod_var)));
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_7 = __this->get_writePos_6();
		V_0 = L_7;
		uint16_t L_8 = V_0;
		__this->set_writePos_6((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)))));
		uint16_t L_9 = V_0;
		uint8_t L_10 = ___value0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		return __this;
	}
}
// System.Byte RiptideNetworking.Message::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Message_GetByte_m847DDFDADAA73B26439DBE282DBB25DBED1D5880 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FDB9C694D1D2E55EB9D80CA1360553682FFD92);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral15FDB9C694D1D2E55EB9D80CA1360553682FFD92, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(3, L_4, /*hidden argument*/NULL);
		return (uint8_t)0;
	}

IL_0026:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_6 = __this->get_readPos_7();
		V_0 = L_6;
		uint16_t L_7 = V_0;
		__this->set_readPos_7((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)))));
		uint16_t L_8 = V_0;
		NullCheck(L_5);
		uint16_t L_9 = L_8;
		uint8_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Byte[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, bool ___includeLength1, bool ___isBigArray2, const RuntimeMethod* method)
{
	{
		bool L_0 = ___includeLength1;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = ___isBigArray2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___array0;
		NullCheck(L_2);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_3;
		L_3 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(__this, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))), /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_0013:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0028;
		}
	}
	{
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA170809BAC6C37884568C35C12FA240A66645750)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618_RuntimeMethod_var)));
	}

IL_0028:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___array0;
		NullCheck(L_6);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7;
		L_7 = Message_Add_m8C48C7D01C48BFCA5AF9235CFCB87AF593051C37(__this, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))), /*hidden argument*/NULL);
	}

IL_0033:
	{
		int32_t L_8;
		L_8 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___array0;
		NullCheck(L_9);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_10;
		L_10 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC246E0501D6DB27015B170D8B32FB95C00B5450)), L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618_RuntimeMethod_var)));
	}

IL_0059:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_17 = __this->get_writePos_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___array0;
		NullCheck(L_18);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_15, 0, (RuntimeArray *)(RuntimeArray *)L_16, L_17, ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), /*hidden argument*/NULL);
		uint16_t L_19 = __this->get_writePos_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___array0;
		NullCheck(L_20);
		__this->set_writePos_6((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)((int32_t)((uint16_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))))));
		return __this;
	}
}
// System.Byte[] RiptideNetworking.Message::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Message_GetBytes_m2E1439B6CA1E1CF4FEAC0F4D20F5C55BF80767F6 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t L_0 = ___amount0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___amount0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		Message_ReadBytes_m451E51A43917934779124797C8E0801BF16B2DD7(__this, L_2, L_3, 0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Void RiptideNetworking.Message::ReadBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_ReadBytes_m451E51A43917934779124797C8E0801BF16B2DD7 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___amount0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D988F54FFC16B9E2358C0B69E430B6DD2E9F7A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___amount0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2;
		L_2 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0D988F54FFC16B9E2358C0B69E430B6DD2E9F7A2, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(3, L_5, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		___amount0 = L_6;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_readPos_7();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___array1;
		int32_t L_10 = ___startIndex2;
		int32_t L_11 = ___amount0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, L_10, L_11, /*hidden argument*/NULL);
		uint16_t L_12 = __this->get_readPos_7();
		int32_t L_13 = ___amount0;
		__this->set_readPos_7((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)((uint16_t)L_13)))))));
		return;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m06A61F50B60DB29236A73539B8FF85C43E53AF17 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral842E29BBFC651B0434F9BC081D746169548EEB33)), L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_m06A61F50B60DB29236A73539B8FF85C43E53AF17_RuntimeMethod_var)));
	}

IL_0024:
	{
		int16_t L_6 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_writePos_6();
		RiptideConverter_FromShort_m6C9E37959B64142EC4089281827B45471CF26F66_inline(L_6, L_7, L_8, /*hidden argument*/NULL);
		uint16_t L_9 = __this->get_writePos_6();
		__this->set_writePos_6((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2)))));
		return __this;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF06CA56DE4FDDFC468850222DD792362FA75D8FC)), L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1_RuntimeMethod_var)));
	}

IL_0024:
	{
		uint16_t L_6 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_writePos_6();
		RiptideConverter_FromUShort_mE9EFA8A2D4C19EE9C82CD3BD8767426BB591196A_inline(L_6, L_7, L_8, /*hidden argument*/NULL);
		uint16_t L_9 = __this->get_writePos_6();
		__this->set_writePos_6((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2)))));
		return __this;
	}
}
// System.UInt16 RiptideNetworking.Message::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral705C465C050C80D7A56CE4FDC9644A3B21EBC9A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral705C465C050C80D7A56CE4FDC9644A3B21EBC9A1, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(3, L_4, /*hidden argument*/NULL);
		return (uint16_t)0;
	}

IL_0026:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_6 = __this->get_readPos_7();
		uint16_t L_7;
		L_7 = RiptideConverter_ToUShort_m68D39AF0DE9FDC647CAE9BB749D7E1F5103C4B24_inline(L_5, L_6, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_readPos_7();
		__this->set_readPos_7((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2)))));
		return L_7;
	}
}
// System.Int32 RiptideNetworking.Message::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_GetInt_mBB8943AB1CCEF21D83B40BC463F773BB4C1CA367 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD103A484567DE3B9D1EBF66E84915BC74DE16968);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD103A484567DE3B9D1EBF66E84915BC74DE16968, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(3, L_4, /*hidden argument*/NULL);
		return 0;
	}

IL_0026:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_6 = __this->get_readPos_7();
		int32_t L_7;
		L_7 = RiptideConverter_ToInt_mFBD0E73EAB2AEE4D92DA9AD609CAE760F2746308_inline(L_5, L_6, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_readPos_7();
		__this->set_readPos_7((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)4)))));
		return L_7;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::AddFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_AddFloat_m059E43AB916D1C69DC7F3D743913B43BE598B911 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1;
		L_1 = Message_Add_mFC9F1EDB4D0D6EC99D4E055560E422DACC4559E1(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_mFC9F1EDB4D0D6EC99D4E055560E422DACC4559E1 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral208B9B9DAAE639C431822150930A0087F5580304)), L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_mFC9F1EDB4D0D6EC99D4E055560E422DACC4559E1_RuntimeMethod_var)));
	}

IL_0024:
	{
		float L_6 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_writePos_6();
		RiptideConverter_FromFloat_m469D069E6BAD6A9D4CAC9477E989FEAE749749AE_inline(L_6, L_7, L_8, /*hidden argument*/NULL);
		uint16_t L_9 = __this->get_writePos_6();
		__this->set_writePos_6((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4)))));
		return __this;
	}
}
// System.Single RiptideNetworking.Message::GetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Message_GetFloat_m43B6067C615E62E17DCBA1022D5892D2F2EEC316 (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49B47F8CE82B265C52DEA60E0E23E1E516BF524);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1;
		L_1 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF49B47F8CE82B265C52DEA60E0E23E1E516BF524, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(3, L_4, /*hidden argument*/NULL);
		return (0.0f);
	}

IL_002a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_6 = __this->get_readPos_7();
		float L_7;
		L_7 = RiptideConverter_ToFloat_mDFEB9E26D48E95BF8AFBEEAB82CC5713FD005A02_inline(L_5, L_6, /*hidden argument*/NULL);
		uint16_t L_8 = __this->get_readPos_7();
		__this->set_readPos_7((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)4)))));
		return L_7;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::AddString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_AddString_m0E8B7357411A1E07E9045A561AA1E975036CF63C (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1;
		L_1 = Message_Add_mE7D517C644779BC3D81FF5974DF57F4498EAE14F(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// RiptideNetworking.Message RiptideNetworking.Message::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * Message_Add_mE7D517C644779BC3D81FF5974DF57F4498EAE14F (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		NullCheck(L_3);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_4;
		L_4 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(__this, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7;
		L_7 = Message_get_UnwrittenLength_mF3FAFD30FB81C5A0D84A1F75BE6FF99DBDE2403E(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94DED92597825A74D1BF11F0D9C88DC39F8D5DDD)), L_9, /*hidden argument*/NULL);
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_Add_mE7D517C644779BC3D81FF5974DF57F4498EAE14F_RuntimeMethod_var)));
	}

IL_003d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_13;
		L_13 = Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618(__this, L_12, (bool)0, (bool)0, /*hidden argument*/NULL);
		return __this;
	}
}
// System.String RiptideNetworking.Message::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Message_GetString_m84716D48B1D60D5849CAB40094B2D5D3325163FC (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB8DB085A82EA43926B30721F9CFB36E0989732);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		uint16_t L_0;
		L_0 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		uint16_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3;
		L_3 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDCB8DB085A82EA43926B30721F9CFB36E0989732, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835(3, L_6, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Message_get_UnreadLength_mA441310C237111AF4A6FA286F11FBA9038D91D59(__this, /*hidden argument*/NULL);
		V_0 = (uint16_t)((int32_t)((uint16_t)L_7));
	}

IL_0033:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(__this, /*hidden argument*/NULL);
		uint16_t L_10 = __this->get_readPos_7();
		uint16_t L_11 = V_0;
		NullCheck(L_8);
		String_t* L_12;
		L_12 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		uint16_t L_13 = __this->get_readPos_7();
		uint16_t L_14 = V_0;
		__this->set_readPos_7((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)))));
		return L_12;
	}
}
// System.Void RiptideNetworking.Message::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__cctor_m1627B6BC3998EB3E4976D446AF2F7F4D9F31A026 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3DED4655979CC9C0713318918C12A0D12D76439B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->set_U3CInstancesPerSocketU3Ek__BackingField_1((uint8_t)4);
		List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 * L_0 = (List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919 *)il2cpp_codegen_object_new(List_1_t99F22780E3EAF4ED604172FC1605CC81EAAE7919_il2cpp_TypeInfo_var);
		List_1__ctor_m3DED4655979CC9C0713318918C12A0D12D76439B(L_0, /*hidden argument*/List_1__ctor_m3DED4655979CC9C0713318918C12A0D12D76439B_RuntimeMethod_var);
		((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->set_pool_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.MessageHandlerAttribute::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0 (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void RiptideNetworking.MessageHandlerAttribute::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerAttribute_set_MessageId_m9C405B77EBC05BAD15D7817EDA77282B368C2FD8 (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Byte RiptideNetworking.MessageHandlerAttribute::get_GroupId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MessageHandlerAttribute_get_GroupId_m2C16CA79D8608BB093FFE18D095677C63A048D91 (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CGroupIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.MessageHandlerAttribute::set_GroupId(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerAttribute_set_GroupId_m10E5107FFC4AD8AEAA33BBDABA983C53BA2FE6D1 (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CGroupIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void RiptideNetworking.MessageHandlerAttribute::.ctor(System.UInt16,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerAttribute__ctor_mA4BF44D4A4139384EB504EE6F5A90013DBC5C613 (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint16_t ___messageId0, uint8_t ___groupId1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		MessageHandlerAttribute_set_MessageId_m9C405B77EBC05BAD15D7817EDA77282B368C2FD8_inline(__this, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = ___groupId1;
		MessageHandlerAttribute_set_GroupId_m10E5107FFC4AD8AEAA33BBDABA983C53BA2FE6D1_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage__ctor_m5F8065464C8BAA5BE9E943F91BB07DFDED820251 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingMessage_U3C_ctorU3Eb__12_0_m9C34C7C44DF905CE7EB366E1F4DD0D62AA01F8C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1252));
		__this->set_data_4(L_0);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_1 = (Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE *)il2cpp_codegen_object_new(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE_il2cpp_TypeInfo_var);
		Timer__ctor_m8CD6E716B068F1BC15FE81D56671AB0A6D347EBD(L_1, /*hidden argument*/NULL);
		__this->set_retryTimer_9(L_1);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_2 = __this->get_retryTimer_9();
		ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 * L_3 = (ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3 *)il2cpp_codegen_object_new(ElapsedEventHandler_t7785E6D507CACA1A882B9AE945EBD47DD4FC35D3_il2cpp_TypeInfo_var);
		ElapsedEventHandler__ctor_m2B99031158D1FA06EBE73A025249B5C1955441F5(L_3, __this, (intptr_t)((intptr_t)PendingMessage_U3C_ctorU3Eb__12_0_m9C34C7C44DF905CE7EB366E1F4DD0D62AA01F8C3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Timer_add_Elapsed_m3FDC03401E31156441DE48618493181329C31A1F(L_2, L_3, /*hidden argument*/NULL);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_4 = __this->get_retryTimer_9();
		NullCheck(L_4);
		Timer_set_AutoReset_mE39B03D4F8032BB39B5D09CBF4A13CE660A16619(L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::CreateAndSend(RiptideNetworking.Transports.RudpTransport.RudpPeer,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_CreateAndSend_m3579CE3ABEBF25378641EA8FD3514B5228D864FB (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * ___peer0, uint16_t ___sequenceId1, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message2, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA5E01A26BC25D92C8EBF8CC755F37F9FC5795F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_0 = NULL;
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_0;
		L_0 = PendingMessage_RetrieveFromPool_m594963045A77FA44B5123C21A12BD3338E89E44D(/*hidden argument*/NULL);
		V_0 = L_0;
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_1 = V_0;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_2 = ___peer0;
		NullCheck(L_1);
		L_1->set_peer_1(L_2);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_3 = V_0;
		uint16_t L_4 = ___sequenceId1;
		NullCheck(L_3);
		L_3->set_sequenceId_3(L_4);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_data_4();
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7 = ___message2;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_10);
		uint16_t L_11 = ___sequenceId1;
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_data_4();
		RiptideConverter_FromUShort_mE9EFA8A2D4C19EE9C82CD3BD8767426BB591196A_inline(L_11, L_13, 1, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_14 = ___message2;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(L_14, /*hidden argument*/NULL);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16->get_data_4();
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_18 = ___message2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline(L_18, /*hidden argument*/NULL);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_15, 1, (RuntimeArray *)(RuntimeArray *)L_17, 3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_20 = V_0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_21 = ___message2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_writtenLength_5(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2)));
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_23 = V_0;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_24 = ___toEndPoint3;
		NullCheck(L_23);
		L_23->set_remoteEndPoint_2(L_24);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_25 = V_0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_26 = ___message2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Message_get_MaxSendAttempts_m6BFB36C11D38B8C5FF4ADEBD2C518E86C131F4A8_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_maxSendAttempts_6(L_27);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_28 = V_0;
		NullCheck(L_28);
		L_28->set_sendAttempts_7((uint8_t)0);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_29 = V_0;
		NullCheck(L_29);
		L_29->set_wasCleared_10((bool)0);
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_30 = ___peer0;
		NullCheck(L_30);
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_31;
		L_31 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		V_2 = (bool)0;
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_32 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_32, (bool*)(&V_2), /*hidden argument*/NULL);
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_33 = ___peer0;
		NullCheck(L_33);
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_34;
		L_34 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_33, /*hidden argument*/NULL);
		uint16_t L_35 = ___sequenceId1;
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_36 = V_0;
		NullCheck(L_34);
		Dictionary_2_Add_mA5E01A26BC25D92C8EBF8CC755F37F9FC5795F74(L_34, L_35, L_36, /*hidden argument*/Dictionary_2_Add_mA5E01A26BC25D92C8EBF8CC755F37F9FC5795F74_RuntimeMethod_var);
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_37 = V_0;
		NullCheck(L_37);
		PendingMessage_TrySend_m0943EA15D8A95E580D4C96EA14C8191C7E6C21F2(L_37, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xAB, FINALLY_00a1);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		{
			bool L_38 = V_2;
			if (!L_38)
			{
				goto IL_00aa;
			}
		}

IL_00a4:
		{
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_39 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_39, /*hidden argument*/NULL);
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(161)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		return;
	}
}
// RiptideNetworking.Transports.RudpTransport.PendingMessage RiptideNetworking.Transports.RudpTransport.PendingMessage::RetrieveFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * PendingMessage_RetrieveFromPool_m594963045A77FA44B5123C21A12BD3338E89E44D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mFDC58B6F498BA0F994149F42A7F1F4C0373696C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E79072320F339F868FFE71CEF80EB1628056D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFB80CACCEDE8453BF33CDA08FA8F9BC51746043B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * V_0 = NULL;
	bool V_1 = false;
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_2 = NULL;
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_0 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_2 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = List_1_get_Count_m2E79072320F339F868FFE71CEF80EB1628056D56_inline(L_2, /*hidden argument*/List_1_get_Count_m2E79072320F339F868FFE71CEF80EB1628056D56_RuntimeMethod_var);
			if ((((int32_t)L_3) <= ((int32_t)0)))
			{
				goto IL_0036;
			}
		}

IL_001d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_4 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
			NullCheck(L_4);
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_5;
			L_5 = List_1_get_Item_mFB80CACCEDE8453BF33CDA08FA8F9BC51746043B_inline(L_4, 0, /*hidden argument*/List_1_get_Item_mFB80CACCEDE8453BF33CDA08FA8F9BC51746043B_RuntimeMethod_var);
			V_2 = L_5;
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_6 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
			NullCheck(L_6);
			List_1_RemoveAt_mFDC58B6F498BA0F994149F42A7F1F4C0373696C7(L_6, 0, /*hidden argument*/List_1_RemoveAt_mFDC58B6F498BA0F994149F42A7F1F4C0373696C7_RuntimeMethod_var);
			goto IL_003c;
		}

IL_0036:
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_7 = (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA *)il2cpp_codegen_object_new(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
			PendingMessage__ctor_m5F8065464C8BAA5BE9E943F91BB07DFDED820251(L_7, /*hidden argument*/NULL);
			V_2 = L_7;
		}

IL_003c:
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_8 = V_2;
			V_3 = L_8;
			IL2CPP_LEAVE(0x4A, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_11 = V_3;
		return L_11;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_Release_m27C4AC667FC99D1E1DD5F693B596849FA8D9CCFA (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF584E919D6B0C40F5C76F586436FFAC3B912C9E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m69EE08A7C088376C57E60546B7D765D1F45FA28C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_0 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_2 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
			NullCheck(L_2);
			bool L_3;
			L_3 = List_1_Contains_m69EE08A7C088376C57E60546B7D765D1F45FA28C(L_2, __this, /*hidden argument*/List_1_Contains_m69EE08A7C088376C57E60546B7D765D1F45FA28C_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0028;
			}
		}

IL_001d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_4 = ((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->get_pool_0();
			NullCheck(L_4);
			List_1_Add_mF584E919D6B0C40F5C76F586436FFAC3B912C9E2(L_4, __this, /*hidden argument*/List_1_Add_mF584E919D6B0C40F5C76F586436FFAC3B912C9E2_RuntimeMethod_var);
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x34, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::RetrySend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_RetrySend_m300E8A272370F11A34E03D9EADEEF59A8108C179 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * G_B4_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * G_B5_1 = NULL;
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * G_B9_0 = NULL;
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * G_B10_1 = NULL;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_1 = __this->get_wasCleared_10();
			if (L_1)
			{
				goto IL_00a6;
			}
		}

IL_0017:
		{
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_2 = __this->get_address_of_lastSendTime_8();
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_3 = __this->get_peer_1();
			NullCheck(L_3);
			int16_t L_4;
			L_4 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(L_3, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			if ((((int32_t)L_4) < ((int32_t)0)))
			{
				G_B4_0 = L_2;
				goto IL_003f;
			}
		}

IL_002b:
		{
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_5 = __this->get_peer_1();
			NullCheck(L_5);
			int16_t L_6;
			L_6 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(L_5, /*hidden argument*/NULL);
			G_B5_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)(0.5f)));
			G_B5_1 = G_B3_0;
			goto IL_0044;
		}

IL_003f:
		{
			G_B5_0 = (25.0f);
			G_B5_1 = G_B4_0;
		}

IL_0044:
		{
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7;
			L_7 = DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)G_B5_1, ((double)((double)G_B5_0)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
			L_8 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
			bool L_9;
			L_9 = DateTime_op_LessThanOrEqual_mC1E034B3799905E42ACA29F05FDBB7F651E68541(L_7, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_005e;
			}
		}

IL_0056:
		{
			PendingMessage_TrySend_m0943EA15D8A95E580D4C96EA14C8191C7E6C21F2(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}

IL_005e:
		{
			Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_10 = __this->get_retryTimer_9();
			NullCheck(L_10);
			Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF(L_10, /*hidden argument*/NULL);
			Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_11 = __this->get_retryTimer_9();
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_12 = __this->get_peer_1();
			NullCheck(L_12);
			int16_t L_13;
			L_13 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(L_12, /*hidden argument*/NULL);
			G_B8_0 = L_11;
			if ((((int32_t)L_13) < ((int32_t)0)))
			{
				G_B9_0 = L_11;
				goto IL_009b;
			}
		}

IL_007d:
		{
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_14 = __this->get_peer_1();
			NullCheck(L_14);
			int16_t L_15;
			L_15 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			float L_16;
			L_16 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247((10.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_15)), (float)(1.20000005f))), /*hidden argument*/NULL);
			G_B10_0 = L_16;
			G_B10_1 = G_B8_0;
			goto IL_00a0;
		}

IL_009b:
		{
			G_B10_0 = (50.0f);
			G_B10_1 = G_B9_0;
		}

IL_00a0:
		{
			NullCheck(G_B10_1);
			Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23(G_B10_1, ((double)((double)G_B10_0)), /*hidden argument*/NULL);
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_00b1;
			}
		}

IL_00ab:
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_18 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_18, /*hidden argument*/NULL);
		}

IL_00b1:
		{
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::TrySend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_TrySend_m0943EA15D8A95E580D4C96EA14C8191C7E6C21F2 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EBD3719CBE70084D5AFE71236B8A8C6806F8E53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C3DB110501F69EA34635CBF43E4F7C50D9C2CB);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	uint16_t V_1 = 0;
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * G_B8_0 = NULL;
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * G_B9_1 = NULL;
	{
		uint8_t L_0 = __this->get_sendAttempts_7();
		int32_t L_1 = __this->get_maxSendAttempts_6();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = RiptideLogger_get_IsWarningLoggingEnabled_mC126C9D076911834C9F0C67CB7A1809B6D25701B(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a7;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_data_4();
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		uint8_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)7))))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_data_4();
		NullCheck(L_7);
		int32_t L_8 = 3;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_data_4();
		NullCheck(L_10);
		int32_t L_11 = 4;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_9|(int32_t)((int32_t)((int32_t)L_12<<(int32_t)8))))));
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_13 = __this->get_peer_1();
		NullCheck(L_13);
		RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * L_14 = L_13->get_Listener_5();
		NullCheck(L_14);
		String_t* L_15 = L_14->get_LogName_0();
		uint8_t L_16 = V_0;
		uint8_t L_17 = L_16;
		RuntimeObject * L_18 = Box(HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56_il2cpp_TypeInfo_var, &L_17);
		uint16_t L_19 = V_1;
		uint16_t L_20 = L_19;
		RuntimeObject * L_21 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_20);
		uint8_t L_22 = __this->get_sendAttempts_7();
		uint8_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral6EBD3719CBE70084D5AFE71236B8A8C6806F8E53, L_18, L_21, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(2, L_15, L_25, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_0076:
	{
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_26 = __this->get_peer_1();
		NullCheck(L_26);
		RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * L_27 = L_26->get_Listener_5();
		NullCheck(L_27);
		String_t* L_28 = L_27->get_LogName_0();
		uint8_t L_29 = V_0;
		uint8_t L_30 = L_29;
		RuntimeObject * L_31 = Box(HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56_il2cpp_TypeInfo_var, &L_30);
		uint8_t L_32 = __this->get_sendAttempts_7();
		uint8_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralC3C3DB110501F69EA34635CBF43E4F7C50D9C2CB, L_31, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(2, L_28, L_35, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_00af:
	{
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_36 = __this->get_peer_1();
		NullCheck(L_36);
		RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * L_37 = L_36->get_Listener_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = __this->get_data_4();
		int32_t L_39 = __this->get_writtenLength_5();
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_40 = __this->get_remoteEndPoint_2();
		NullCheck(L_37);
		RudpListener_Send_m51CDD41B227EF5FCACDD58CAE8110B784198430D(L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_41;
		L_41 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		__this->set_lastSendTime_8(L_41);
		uint8_t L_42 = __this->get_sendAttempts_7();
		__this->set_sendAttempts_7((uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)))));
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_43 = __this->get_retryTimer_9();
		NullCheck(L_43);
		Timer_Start_mF5E17482246B10FB111BA69520B84E5FD9F244EF(L_43, /*hidden argument*/NULL);
		Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_44 = __this->get_retryTimer_9();
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_45 = __this->get_peer_1();
		NullCheck(L_45);
		int16_t L_46;
		L_46 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(L_45, /*hidden argument*/NULL);
		G_B7_0 = L_44;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			G_B8_0 = L_44;
			goto IL_0128;
		}
	}
	{
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_47 = __this->get_peer_1();
		NullCheck(L_47);
		int16_t L_48;
		L_48 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_49;
		L_49 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247((10.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_48)), (float)(1.20000005f))), /*hidden argument*/NULL);
		G_B9_0 = L_49;
		G_B9_1 = G_B7_0;
		goto IL_012d;
	}

IL_0128:
	{
		G_B9_0 = (50.0f);
		G_B9_1 = G_B8_0;
	}

IL_012d:
	{
		NullCheck(G_B9_1);
		Timer_set_Interval_mA437AE87EFE7BDF2BD2314158D3729B210474C23(G_B9_1, ((double)((double)G_B9_0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, bool ___shouldRemoveFromDictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m8D9526CD4BE8CB9AF9DDAC22D89D593863F2309E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_1 = ___shouldRemoveFromDictionary0;
			if (!L_1)
			{
				goto IL_0048;
			}
		}

IL_000f:
		{
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_2 = __this->get_peer_1();
			NullCheck(L_2);
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_3;
			L_3 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			V_3 = (bool)0;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_4 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_3), /*hidden argument*/NULL);
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_5 = __this->get_peer_1();
			NullCheck(L_5);
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_6;
			L_6 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_5, /*hidden argument*/NULL);
			uint16_t L_7 = __this->get_sequenceId_3();
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_m8D9526CD4BE8CB9AF9DDAC22D89D593863F2309E(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m8D9526CD4BE8CB9AF9DDAC22D89D593863F2309E_RuntimeMethod_var);
			IL2CPP_LEAVE(0x48, FINALLY_003e);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_003e;
		}

FINALLY_003e:
		{ // begin finally (depth: 2)
			{
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_0047;
				}
			}

IL_0041:
			{
				Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_10 = V_2;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
			}

IL_0047:
			{
				IL2CPP_END_FINALLY(62)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(62)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x48, IL_0048)
		}

IL_0048:
		{
			Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * L_11 = __this->get_retryTimer_9();
			NullCheck(L_11);
			Timer_Stop_m3BEC8E056443E8AC4525023B7CD786C8F1234FF3(L_11, /*hidden argument*/NULL);
			__this->set_wasCleared_10((bool)1);
			PendingMessage_Release_m27C4AC667FC99D1E1DD5F693B596849FA8D9CCFA(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_13 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		}

IL_006b:
		{
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage__cctor_m097C79A71E9E03C72D2D79357F2AA156C95CD5A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m11D95C0054D76A46FEBB9F0B14549C4329F7C7FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 * L_0 = (List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4 *)il2cpp_codegen_object_new(List_1_t999358090E3CEA77EB88FE9B4B0EF61C601E53D4_il2cpp_TypeInfo_var);
		List_1__ctor_m11D95C0054D76A46FEBB9F0B14549C4329F7C7FC(L_0, /*hidden argument*/List_1__ctor_m11D95C0054D76A46FEBB9F0B14549C4329F7C7FC_RuntimeMethod_var);
		((PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_StaticFields*)il2cpp_codegen_static_fields_for(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var))->set_pool_0(L_0);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.PendingMessage::<.ctor>b__12_0(System.Object,System.Timers.ElapsedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingMessage_U3C_ctorU3Eb__12_0_m9C34C7C44DF905CE7EB366E1F4DD0D62AA01F8C3 (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * __this, RuntimeObject * ___s0, ElapsedEventArgs_tEB7D552F06F480B5F4B445AB1F364FB5474F2FFB * ___e1, const RuntimeMethod* method)
{
	{
		PendingMessage_RetrySend_m300E8A272370F11A34E03D9EADEEF59A8108C179(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.Transports.RudpTransport.ReceiveLockables::get_LastAckedSeqId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370 (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CLastAckedSeqIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.ReceiveLockables::set_LastAckedSeqId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveLockables_set_LastAckedSeqId_mEEB9AFD0C4A51C16F14376FF9ADB48CE95B06EAC (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CLastAckedSeqIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.UInt16 RiptideNetworking.Transports.RudpTransport.ReceiveLockables::get_AckedMessagesBitfield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0 (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CAckedMessagesBitfieldU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.ReceiveLockables::set_AckedMessagesBitfield(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3 (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CAckedMessagesBitfieldU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.ReceiveLockables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveLockables__ctor_m13ACE0D880AAFB6E668DD572FD59CA94C1A7804E (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Utils.RiptideConverter::FromShort(System.Int16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideConverter_FromShort_m6C9E37959B64142EC4089281827B45471CF26F66 (int16_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array1;
		int32_t L_1 = ___startIndex2;
		int16_t L_2 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___array1;
		int32_t L_4 = ___startIndex2;
		int16_t L_5 = ___value0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8)))));
		return;
	}
}
// System.Void RiptideNetworking.Utils.RiptideConverter::FromUShort(System.UInt16,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideConverter_FromUShort_mE9EFA8A2D4C19EE9C82CD3BD8767426BB591196A (uint16_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array1;
		int32_t L_1 = ___startIndex2;
		uint16_t L_2 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___array1;
		int32_t L_4 = ___startIndex2;
		uint16_t L_5 = ___value0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8)))));
		return;
	}
}
// System.UInt16 RiptideNetworking.Utils.RiptideConverter::ToUShort(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RiptideConverter_ToUShort_m68D39AF0DE9FDC647CAE9BB749D7E1F5103C4B24 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___startIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___startIndex1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))));
	}
}
// System.Int32 RiptideNetworking.Utils.RiptideConverter::ToInt(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RiptideConverter_ToInt_mFBD0E73EAB2AEE4D92DA9AD609CAE760F2746308 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___startIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___startIndex1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___array0;
		int32_t L_9 = ___startIndex1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		int32_t L_13 = ___startIndex1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_15<<(int32_t)((int32_t)24)))));
	}
}
// System.Void RiptideNetworking.Utils.RiptideConverter::FromFloat(System.Single,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideConverter_FromFloat_m469D069E6BAD6A9D4CAC9477E989FEAE749749AE (float ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78 ));
		float L_0 = ___value0;
		(&V_1)->set_floatValue_4(L_0);
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_1 = V_1;
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___array1;
		int32_t L_3 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_4 = V_0;
		uint8_t L_5 = L_4.get_byte0_0();
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___array1;
		int32_t L_7 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_8 = V_0;
		uint8_t L_9 = L_8.get_byte1_1();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))), (uint8_t)L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___array1;
		int32_t L_11 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_12 = V_0;
		uint8_t L_13 = L_12.get_byte2_2();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2))), (uint8_t)L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___array1;
		int32_t L_15 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_16 = V_0;
		uint8_t L_17 = L_16.get_byte3_3();
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)3))), (uint8_t)L_17);
		return;
	}
}
// System.Single RiptideNetworking.Utils.RiptideConverter::ToFloat(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RiptideConverter_ToFloat_mDFEB9E26D48E95BF8AFBEEAB82CC5713FD005A02 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78 ));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___startIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		(&V_0)->set_byte0_0(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___startIndex1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->set_byte1_1(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___array0;
		int32_t L_9 = ___startIndex1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->set_byte2_2(L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		int32_t L_13 = ___startIndex1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		(&V_0)->set_byte3_3(L_15);
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_16 = V_0;
		float L_17 = L_16.get_floatValue_4();
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean RiptideNetworking.Utils.RiptideLogger::get_IsWarningLoggingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RiptideLogger_get_IsWarningLoggingEnabled_mC126C9D076911834C9F0C67CB7A1809B6D25701B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m284435F26D13876D19921B2D0B7C2E6055F90508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_0 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_ContainsKey_m284435F26D13876D19921B2D0B7C2E6055F90508(L_0, 2, /*hidden argument*/Dictionary_2_ContainsKey_m284435F26D13876D19921B2D0B7C2E6055F90508_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void RiptideNetworking.Utils.RiptideLogger::Initialize(RiptideNetworking.Utils.RiptideLogger/LogMethod,RiptideNetworking.Utils.RiptideLogger/LogMethod,RiptideNetworking.Utils.RiptideLogger/LogMethod,RiptideNetworking.Utils.RiptideLogger/LogMethod,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger_Initialize_m777DD95B1718D3C99E931B88C6AEEC1405553248 (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * ___debugMethod0, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * ___infoMethod1, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * ___warningMethod2, LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * ___errorMethod3, bool ___includeTimestamps4, String_t* ___timestampFormat5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m0CF2DF5DA4B131C152188FD7AEFC1571241B3171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_0 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m0CF2DF5DA4B131C152188FD7AEFC1571241B3171(L_0, /*hidden argument*/Dictionary_2_Clear_m0CF2DF5DA4B131C152188FD7AEFC1571241B3171_RuntimeMethod_var);
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_1 = ___debugMethod0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_2 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_3 = ___debugMethod0;
		NullCheck(L_2);
		Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96(L_2, 0, L_3, /*hidden argument*/Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96_RuntimeMethod_var);
	}

IL_0019:
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_4 = ___infoMethod1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_5 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_6 = ___infoMethod1;
		NullCheck(L_5);
		Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96(L_5, 1, L_6, /*hidden argument*/Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96_RuntimeMethod_var);
	}

IL_0028:
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_7 = ___warningMethod2;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_8 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_9 = ___warningMethod2;
		NullCheck(L_8);
		Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96(L_8, 2, L_9, /*hidden argument*/Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96_RuntimeMethod_var);
	}

IL_0037:
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_10 = ___errorMethod3;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_11 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_12 = ___errorMethod3;
		NullCheck(L_11);
		Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96(L_11, 3, L_12, /*hidden argument*/Dictionary_2_Add_m3C76FD11A7CBEFDB1FAABC5EF8039713AB780E96_RuntimeMethod_var);
	}

IL_0046:
	{
		bool L_13 = ___includeTimestamps4;
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->set_includeTimestamps_1(L_13);
		String_t* L_14 = ___timestampFormat5;
		((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->set_timestampFormat_2(L_14);
		return;
	}
}
// System.Void RiptideNetworking.Utils.RiptideLogger::Log(RiptideNetworking.Utils.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger_Log_mCC6CC8F643D9E30734743F0CEF96E5AA22C5F835 (int32_t ___logType0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral032485D9576CE254A29B5DC8CD8FFA8AF8655710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_0 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		int32_t L_1 = ___logType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2(L_0, L_1, (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		bool L_3 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_includeTimestamps_1();
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = RiptideLogger_GetTimestamp_m628D1D2A42916A9C1F83A88BFAC609551DB12974(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___message1;
		String_t* L_8;
		L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_6, _stringLiteral032485D9576CE254A29B5DC8CD8FFA8AF8655710, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		LogMethod_Invoke_m21F50742D4840F7668BBDFA3AA45A267E46E48BF(L_4, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_9 = V_0;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		LogMethod_Invoke_m21F50742D4840F7668BBDFA3AA45A267E46E48BF(L_9, L_10, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void RiptideNetworking.Utils.RiptideLogger::Log(RiptideNetworking.Utils.LogType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7 (int32_t ___logType0, String_t* ___logName1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A0E1AF534FE4121655BA066E4B2E4EF86A267C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_0 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_logMethods_0();
		int32_t L_1 = ___logType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2(L_0, L_1, (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mCF3BEE7E593274F0F6D436D7158C0DD64CA3CAB2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		bool L_3 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_includeTimestamps_1();
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_4 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		L_8 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = RiptideLogger_GetTimestamp_m628D1D2A42916A9C1F83A88BFAC609551DB12974(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral0A0E1AF534FE4121655BA066E4B2E4EF86A267C2);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0A0E1AF534FE4121655BA066E4B2E4EF86A267C2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12 = ___logName1;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15 = ___message2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_4);
		LogMethod_Invoke_m21F50742D4840F7668BBDFA3AA45A267E46E48BF(L_4, L_16, /*hidden argument*/NULL);
		return;
	}

IL_0055:
	{
		LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * L_17 = V_0;
		String_t* L_18 = ___logName1;
		String_t* L_19 = ___message2;
		String_t* L_20;
		L_20 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, L_18, _stringLiteral911FC00FE8A864A9D1B8F87A75E4EE5041ACF43B, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		LogMethod_Invoke_m21F50742D4840F7668BBDFA3AA45A267E46E48BF(L_17, L_20, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.String RiptideNetworking.Utils.RiptideLogger::GetTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RiptideLogger_GetTimestamp_m628D1D2A42916A9C1F83A88BFAC609551DB12974 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->get_timestampFormat_2();
		String_t* L_1;
		L_1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___time0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void RiptideNetworking.Utils.RiptideLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiptideLogger__cctor_m047373D45A1E50955AB649B3FD7C43FE99DDD2D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD90A6C4FC22FFB1633CC5226D9CB54FA65C88ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 * L_0 = (Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43 *)il2cpp_codegen_object_new(Dictionary_2_t752B5237E64466220FA71F5DE36818FC7FB7DA43_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD90A6C4FC22FFB1633CC5226D9CB54FA65C88ED8(L_0, 4, /*hidden argument*/Dictionary_2__ctor_mD90A6C4FC22FFB1633CC5226D9CB54FA65C88ED8_RuntimeMethod_var);
		((RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_StaticFields*)il2cpp_codegen_static_fields_for(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var))->set_logMethods_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::add_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_add_Connected_m6862AF026D3F61B7982BB2CFD8C74FC9FAA8F387 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Connected_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Connected_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::remove_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_remove_Connected_m1A7D9824FEA08C1CE80E8733258E637121D9D7E1 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Connected_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Connected_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::add_ConnectionFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_add_ConnectionFailed_m4CB7CAE791DC44706D12CD9627CE98BC27927756 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_ConnectionFailed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_ConnectionFailed_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::remove_ConnectionFailed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_remove_ConnectionFailed_mD4721F458A450AAA59E42F41C55E1A1EFABD1F01 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_ConnectionFailed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_ConnectionFailed_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::add_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_add_MessageReceived_m045CC8DA0D342657CBF506574EE16154F0BD55FF (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * V_0 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * V_1 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * V_2 = NULL;
	{
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_0 = __this->get_MessageReceived_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_2 = V_1;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var));
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 ** L_5 = __this->get_address_of_MessageReceived_7();
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_6 = V_2;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_7 = V_1;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *>((EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_9 = V_0;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)L_9) == ((RuntimeObject*)(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::remove_MessageReceived(System.EventHandler`1<RiptideNetworking.ClientMessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_remove_MessageReceived_mFA09F9D35CDC0E37CC9C665C31BD1AD1872CF730 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * V_0 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * V_1 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * V_2 = NULL;
	{
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_0 = __this->get_MessageReceived_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_2 = V_1;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13_il2cpp_TypeInfo_var));
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 ** L_5 = __this->get_address_of_MessageReceived_7();
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_6 = V_2;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_7 = V_1;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *>((EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_9 = V_0;
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)L_9) == ((RuntimeObject*)(EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::add_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_add_Disconnected_m3B38C449222C3B20B69FCC36F2FEC380B31A4A55 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Disconnected_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Disconnected_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::remove_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_remove_Disconnected_m3BD83C06869B0D45DDEDA74BAF45DB1C945F2718 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Disconnected_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_Disconnected_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::add_ClientConnected(System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_add_ClientConnected_m99A73F8C7694C5BA0E7E80991E6B1211FC4BED38 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * V_0 = NULL;
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * V_1 = NULL;
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * V_2 = NULL;
	{
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_0 = __this->get_ClientConnected_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_2 = V_1;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var));
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 ** L_5 = __this->get_address_of_ClientConnected_9();
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_6 = V_2;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_7 = V_1;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *>((EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_9 = V_0;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)L_9) == ((RuntimeObject*)(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::remove_ClientConnected(System.EventHandler`1<RiptideNetworking.ClientConnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_remove_ClientConnected_m5FC3605F0B29739791386A43C317D6BB9BF125AA (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * V_0 = NULL;
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * V_1 = NULL;
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * V_2 = NULL;
	{
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_0 = __this->get_ClientConnected_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_2 = V_1;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58_il2cpp_TypeInfo_var));
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 ** L_5 = __this->get_address_of_ClientConnected_9();
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_6 = V_2;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_7 = V_1;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *>((EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_9 = V_0;
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)L_9) == ((RuntimeObject*)(EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::add_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_add_ClientDisconnected_mECABDA1682B000E781C54E0FEBBC328CC3B37F4D (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_0 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_1 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_2 = NULL;
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_0 = __this->get_ClientDisconnected_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_2 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var));
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 ** L_5 = __this->get_address_of_ClientDisconnected_10();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_6 = V_2;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_7 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *>((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_9 = V_0;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_9) == ((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::remove_ClientDisconnected(System.EventHandler`1<RiptideNetworking.ClientDisconnectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_remove_ClientDisconnected_m08A49324E0C43E0C3457A1BFE35CD2A99AC102A9 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_0 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_1 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * V_2 = NULL;
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_0 = __this->get_ClientDisconnected_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_2 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858_il2cpp_TypeInfo_var));
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 ** L_5 = __this->get_address_of_ClientDisconnected_10();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_6 = V_2;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_7 = V_1;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *>((EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_9 = V_0;
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_9) == ((RuntimeObject*)(EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RudpClient_get_Id_m73117F5F221005800790BC5E8C4038E3DD84BF61 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::set_Id(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_set_Id_mE56DE7357D9D888A0FF757720E3A7FFABF8505D0 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_IsNotConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_IsNotConnected_m0DED060CFEC98A91BDCC049655372C5629AD74EF (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_connectionState_16();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_IsConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_IsConnecting_m3B8CB678F4D28913D573C1A265BE883EB3098C74 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_connectionState_16();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_IsConnected_mA1FDA30852E73DAD6B2A4F0EBDE290ACDF44C929 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_connectionState_16();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::get_TimeoutTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RudpClient_get_TimeoutTime_mAC452ABB9CCBFCC21D6B0EED26FD4AC58C8C48A5 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CTimeoutTimeU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::set_TimeoutTime(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_set_TimeoutTime_m3F6DE1073977DBEC816B9D6DE2DFD2B581EF2CCD (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CTimeoutTimeU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpClient::get_HeartbeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RudpClient_get_HeartbeatInterval_mD2AAE26570F96CEC462645EC108145183DCE1641 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get__heartbeatInterval_13();
		return L_0;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::get_HasTimedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_get_HasTimedOut_m150A770881897415259F8A57050AAC9AD67E1E82 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = __this->get_lastHeartbeat_20();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		uint16_t L_4;
		L_4 = RudpClient_get_TimeoutTime_mAC452ABB9CCBFCC21D6B0EED26FD4AC58C8C48A5_inline(__this, /*hidden argument*/NULL);
		return (bool)((((double)L_3) > ((double)((double)((double)L_4))))? 1 : 0);
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::.ctor(System.UInt16,System.UInt16,System.Byte,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient__ctor_m87FA04018F8829E4F8A028BAB0948CBC4A14FCD2 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___timeoutTime0, uint16_t ___heartbeatInterval1, uint8_t ___maxConnectionAttempts2, String_t* ___logName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CTimeoutTimeU3Ek__BackingField_12((uint16_t)((int32_t)5000));
		String_t* L_0 = ___logName3;
		RudpListener__ctor_m489FD24999B920AC06CA449A66AD36398B973356(__this, L_0, /*hidden argument*/NULL);
		uint16_t L_1 = ___timeoutTime0;
		RudpClient_set_TimeoutTime_m3F6DE1073977DBEC816B9D6DE2DFD2B581EF2CCD_inline(__this, L_1, /*hidden argument*/NULL);
		uint16_t L_2 = ___heartbeatInterval1;
		__this->set__heartbeatInterval_13(L_2);
		uint8_t L_3 = ___maxConnectionAttempts2;
		__this->set_maxConnectionAttempts_18(L_3);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_4 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_4, /*hidden argument*/NULL);
		__this->set_pendingPingStopwatch_23(L_4);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Connect(System.String,RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Connect_m982AF8356E5EF8E1EA5E3F066CB13B1E19873E54 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, String_t* ___hostAddress0, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpClient_U3CConnectU3Eb__54_0_m9085BC14119845893560311FB72FE20209E50E61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2186D777FA30A5C8CDA7B5442D61D9679EBC41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_0 = NULL;
	uint16_t V_1 = 0;
	{
		String_t* L_0 = ___hostAddress0;
		bool L_1;
		L_1 = RudpClient_ParseHostAddress_mFABB83EAF5B74B78043FD7B369B2C1569543E57F(__this, L_0, (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE **)(&V_0), (uint16_t*)(&V_1), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		__this->set_connectionAttempts_17((uint8_t)0);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = V_0;
		NullCheck(L_2);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_3;
		L_3 = IPAddress_MapToIPv6_mA99938E0BDF716543A4C890FB694C54FBDE70B4F(L_2, /*hidden argument*/NULL);
		uint16_t L_4 = V_1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_5 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_5, L_3, L_4, /*hidden argument*/NULL);
		__this->set_remoteEndPoint_15(L_5);
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_6 = (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C *)il2cpp_codegen_object_new(RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C_il2cpp_TypeInfo_var);
		RudpPeer__ctor_m9B71368B24321D62826466449754771CB1022D51(L_6, __this, /*hidden argument*/NULL);
		__this->set_peer_14(L_6);
		RudpListener_StartListening_m4B7A83B97C8CE3183538A96F02927986A9DC5743(__this, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_connectionState_16(1);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7 = ___message1;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_8 = ___message1;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_9 = ___message1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = Message_GetBytes_m2E1439B6CA1E1CF4FEAC0F4D20F5C55BF80767F6(L_8, L_10, /*hidden argument*/NULL);
		__this->set_connectBytes_24(L_11);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_12 = ___message1;
		NullCheck(L_12);
		Message_Release_m16FD68EF5D7A64920305A5137E0BF5D79B4C6C50(L_12, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_005e:
	{
		__this->set_connectBytes_24((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
	}

IL_0065:
	{
		TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * L_13 = (TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 *)il2cpp_codegen_object_new(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814_il2cpp_TypeInfo_var);
		TimerCallback__ctor_mA825B3FFCCA028905D47A189B70186E047283684(L_13, __this, (intptr_t)((intptr_t)RudpClient_U3CConnectU3Eb__54_0_m9085BC14119845893560311FB72FE20209E50E61_RuntimeMethod_var), /*hidden argument*/NULL);
		uint16_t L_14;
		L_14 = RudpClient_get_HeartbeatInterval_mD2AAE26570F96CEC462645EC108145183DCE1641_inline(__this, /*hidden argument*/NULL);
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_15 = (Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)il2cpp_codegen_object_new(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		Timer__ctor_m23A998F76F655EF50D50521A68EADFE74EA8F7F0(L_15, L_13, NULL, 0, L_14, /*hidden argument*/NULL);
		__this->set_heartbeatTimer_19(L_15);
		String_t* L_16 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_17 = __this->get_remoteEndPoint_15();
		String_t* L_18;
		L_18 = Extensions_ToStringBasedOnIPFormat_m5A183C489B9879FE877497BF616F07BA5918D980(L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCE2186D777FA30A5C8CDA7B5442D61D9679EBC41, L_18, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_16, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::ParseHostAddress(System.String,System.Net.IPAddress&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_ParseHostAddress_mFABB83EAF5B74B78043FD7B369B2C1569543E57F (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, String_t* ___hostAddress0, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** ___ip1, uint16_t* ___port2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisString_t_mDAF4F8AFFC7C97A7BDD6C37260AD5B79C8A87B47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77E4F25132B62B7F414B28F7EA9E1889FAFD6C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA23BBF420C5718167542E1F4631A269B1B05CFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___hostAddress0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) <= ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Enumerable_Take_TisString_t_mDAF4F8AFFC7C97A7BDD6C37260AD5B79C8A87B47((RuntimeObject*)(RuntimeObject*)L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1)), /*hidden argument*/Enumerable_Take_TisString_t_mDAF4F8AFFC7C97A7BDD6C37260AD5B79C8A87B47_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_0;
		NullCheck(L_10);
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), (int32_t)1));
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		goto IL_0052;
	}

IL_0044:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_0;
		NullCheck(L_13);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = L_16;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = L_19;
	}

IL_0052:
	{
		String_t* L_20 = V_1;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** L_21 = ___ip1;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = IPAddress_TryParse_m43158BF9D76398954BE04773A6A15898EFE27F3E(L_20, (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE **)L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_23 = V_2;
		uint16_t* L_24 = ___port2;
		bool L_25;
		L_25 = UInt16_TryParse_m9DCCC7DE510437956E8518B907206D54F456A9A9(L_23, (uint16_t*)L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0085;
		}
	}

IL_0064:
	{
		String_t* L_26 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		String_t* L_27 = ___hostAddress0;
		String_t* L_28;
		L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA77E4F25132B62B7F414B28F7EA9E1889FAFD6C8, L_27, _stringLiteralBA23BBF420C5718167542E1F4631A269B1B05CFB, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(3, L_26, L_28, /*hidden argument*/NULL);
		uint16_t* L_29 = ___port2;
		*((int16_t*)L_29) = (int16_t)0;
		return (bool)0;
	}

IL_0085:
	{
		return (bool)1;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Heartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Heartbeat_m1B6935499D257C21F9E496CE0688DD4C3155BBBF (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = RudpClient_get_IsConnecting_m3B8CB678F4D28913D573C1A265BE883EB3098C74(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		uint8_t L_1 = __this->get_connectionAttempts_17();
		uint8_t L_2 = __this->get_maxConnectionAttempts_18();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002c;
		}
	}
	{
		RudpClient_SendConnect_m4CD8D08C1DE63AF86697988C50CD688F03397B49(__this, /*hidden argument*/NULL);
		uint8_t L_3 = __this->get_connectionAttempts_17();
		__this->set_connectionAttempts_17((uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)))));
		return;
	}

IL_002c:
	{
		RudpClient_OnConnectionFailed_mF810E53065977C7CD0CCB13E2A06C2019525AF80(__this, /*hidden argument*/NULL);
		return;
	}

IL_0033:
	{
		bool L_4;
		L_4 = RudpClient_get_IsConnected_mA1FDA30852E73DAD6B2A4F0EBDE290ACDF44C929(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		bool L_5;
		L_5 = RudpClient_get_HasTimedOut_m150A770881897415259F8A57050AAC9AD67E1E82(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		RudpClient_OnDisconnected_mF847441A0941EE335682690802AF857E491EFEE5(__this, /*hidden argument*/NULL);
		return;
	}

IL_004a:
	{
		RudpClient_SendHeartbeat_mBD75372DECABC878C98F3B8D241F96531AB17B56(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::ShouldHandleMessageFrom(System.Net.IPEndPoint,RiptideNetworking.Transports.HeaderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_ShouldHandleMessageFrom_m01D4D759789F3DE40BCB7D0D158B593B8A55F697 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint0, uint8_t ___messageHeader1, const RuntimeMethod* method)
{
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ___endPoint0;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_1 = __this->get_remoteEndPoint_15();
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Handle(RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.HeaderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Handle_m80693E1F2FF680F1EFA30BD8FC7E457362EEFFDA (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___fromEndPoint1, uint8_t ___messageHeader2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_0_U3CHandleU3Eb__0_m95B0DCB4119FE5F287DA7DAE1A856E3A9EF9DB88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ECDA7F92C385E1F911375211CF59E8C65B471A1);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_0 = (U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass58_0__ctor_m5CCA1E4F27840BED6328A522FEDCA177C7429456(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_2 = V_0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_message_1(L_3);
		uint8_t L_4 = ___messageHeader2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0080;
			}
			case 6:
			{
				goto IL_00b8;
			}
			case 7:
			{
				goto IL_004c;
			}
			case 8:
			{
				goto IL_004c;
			}
			case 9:
			{
				goto IL_008e;
			}
			case 10:
			{
				goto IL_009c;
			}
			case 11:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_00c0;
	}

IL_004c:
	{
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_5 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_receiveActionQueue_1();
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass58_0_U3CHandleU3Eb__0_m95B0DCB4119FE5F287DA7DAE1A856E3A9EF9DB88_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF(L_5, L_7, /*hidden argument*/NULL);
		return;
	}

IL_0064:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_8 = V_0;
		NullCheck(L_8);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_9 = L_8->get_message_1();
		RudpClient_HandleAck_mD426EADBB956F4005AD3765FBC3D3F1147CFEB1E(__this, L_9, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_0072:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_10 = V_0;
		NullCheck(L_10);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_11 = L_10->get_message_1();
		RudpClient_HandleAckExtra_m55ECAACC3046238932961D8F96D9DDC1CB5F8B67(__this, L_11, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_0080:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_12 = V_0;
		NullCheck(L_12);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_13 = L_12->get_message_1();
		RudpClient_HandleHeartbeat_mB5E839A12043D9C0F07125AEC389DB1560E2F176(__this, L_13, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_008e:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_14 = V_0;
		NullCheck(L_14);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_15 = L_14->get_message_1();
		RudpClient_HandleWelcome_m74D1CA099F52299295E8393E8C81D07A52196432(__this, L_15, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_009c:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_16 = V_0;
		NullCheck(L_16);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_17 = L_16->get_message_1();
		RudpClient_HandleClientConnected_m55CE082F63DAE84EEAAA1AF0E567F1E0EAF5F2FC(__this, L_17, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00aa:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_18 = V_0;
		NullCheck(L_18);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_19 = L_18->get_message_1();
		RudpClient_HandleClientDisconnected_m9F57EC4AD129674AEEA9BBCD5C9D2859147E91BD(__this, L_19, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00b8:
	{
		RudpClient_HandleDisconnect_mFEA86BC3A06D417BCA70B69BC3FE55CB54B33DA3(__this, /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00c0:
	{
		String_t* L_20 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		uint8_t L_21 = ___messageHeader2;
		uint8_t L_22 = L_21;
		RuntimeObject * L_23 = Box(HeaderType_tC9C07E00DA314835ABEBEE840F2BB8B4B9252B56_il2cpp_TypeInfo_var, &L_22);
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_24 = V_0;
		NullCheck(L_24);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_25 = L_24->get_message_1();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9ECDA7F92C385E1F911375211CF59E8C65B471A1, L_23, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(2, L_20, L_29, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * L_30 = V_0;
		NullCheck(L_30);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_31 = L_30->get_message_1();
		NullCheck(L_31);
		Message_Release_m16FD68EF5D7A64920305A5137E0BF5D79B4C6C50(L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::ReliableHandle(RiptideNetworking.Transports.HeaderType,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_ReliableHandle_m9D1AA21406091EF12030D99064413F6747E211DC (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint8_t ___messageHeader0, uint16_t ___sequenceId1, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message2, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___fromEndPoint3, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___messageHeader0;
		uint16_t L_1 = ___sequenceId1;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_2 = ___message2;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_3 = ___fromEndPoint3;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_4 = __this->get_peer_14();
		NullCheck(L_4);
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_5;
		L_5 = RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline(L_4, /*hidden argument*/NULL);
		RudpListener_ReliableHandle_mF09FD2C35D90B580D8ADF0CFCD7DED9912198CE6(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Send(RiptideNetworking.Message,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, bool ___shouldRelease1, const RuntimeMethod* method)
{
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___message0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Message_get_SendMode_m3BF7BB785831D48377DE8E237561CBA082B26BFA_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_2 = ___message0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(L_2, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_4 = ___message0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline(L_4, /*hidden argument*/NULL);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_6 = __this->get_remoteEndPoint_15();
		RudpListener_Send_m51CDD41B227EF5FCACDD58CAE8110B784198430D(__this, L_3, L_5, L_6, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_0022:
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7 = ___message0;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_8 = __this->get_remoteEndPoint_15();
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_9 = __this->get_peer_14();
		RudpListener_SendReliable_mE8E48A0C8E044F1E97C869B32847D80DE268A328(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		bool L_10 = ___shouldRelease1;
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_11 = ___message0;
		NullCheck(L_11);
		Message_Release_m16FD68EF5D7A64920305A5137E0BF5D79B4C6C50(L_11, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_Disconnect_m5F8F814104B6313759094027D56E686FCFF24B17 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral784E3CA2C286FEC350763E24CF513B13245650AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RudpClient_get_IsNotConnected_m0DED060CFEC98A91BDCC049655372C5629AD74EF(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RudpClient_SendDisconnect_mB96C4DB0616F02EF7F9A84DDFA4C3A98FE13697B(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = RudpClient_LocalDisconnect_m6A185AF039014564F75082E5B78D0DA88F4FA8EB(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_2, _stringLiteral784E3CA2C286FEC350763E24CF513B13245650AF, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpClient::LocalDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpClient_LocalDisconnect_m6A185AF039014564F75082E5B78D0DA88F4FA8EB (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m4A38FFC8504D73B11B0E88578FACFE933F684FCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m601D59600AB9ED3F9CD1F5E67A86BED07A65B01B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA14EE902749C822D89B156A1E200519A05E0F7BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m660B8682C9EF5BAFD1892222BC552B7EF501B4DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D302BDE3B6502D306A22490FD1A11F5576F273E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m0088E557F9A22C3254CE1EE6E40C9DFE005AE452_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_0 = __this->get_peer_14();
		NullCheck(L_0);
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_1;
		L_1 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_3;
			L_3 = RudpClient_get_IsNotConnected_m0DED060CFEC98A91BDCC049655372C5629AD74EF(__this, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0xA7, FINALLY_009b);
		}

IL_0025:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = __this->get_heartbeatTimer_19();
			NullCheck(L_4);
			bool L_5;
			L_5 = Timer_Change_mA1AFDBFA55BB88080E349EAB61FEEB5FAF4609A3(L_4, (-1), (-1), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = __this->get_heartbeatTimer_19();
			NullCheck(L_6);
			Timer_Dispose_m89DE06BE1C2F2AF372D469826A0AA3560665B571(L_6, /*hidden argument*/NULL);
			RudpListener_StopListening_mDED52BCA43ECFEFE7BE309F480C7C8BBA92137B2(__this, /*hidden argument*/NULL);
			__this->set_connectionState_16(0);
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_7 = __this->get_peer_14();
			NullCheck(L_7);
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_8;
			L_8 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			ValueCollection_tD46FAA093024C4EF423EF0BB841E9805190B9460 * L_9;
			L_9 = Dictionary_2_get_Values_m601D59600AB9ED3F9CD1F5E67A86BED07A65B01B(L_8, /*hidden argument*/Dictionary_2_get_Values_m601D59600AB9ED3F9CD1F5E67A86BED07A65B01B_RuntimeMethod_var);
			NullCheck(L_9);
			Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195  L_10;
			L_10 = ValueCollection_GetEnumerator_m0088E557F9A22C3254CE1EE6E40C9DFE005AE452(L_9, /*hidden argument*/ValueCollection_GetEnumerator_m0088E557F9A22C3254CE1EE6E40C9DFE005AE452_RuntimeMethod_var);
			V_3 = L_10;
		}

IL_0061:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0070;
			}

IL_0063:
			{
				PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_11;
				L_11 = Enumerator_get_Current_m7D302BDE3B6502D306A22490FD1A11F5576F273E_inline((Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m7D302BDE3B6502D306A22490FD1A11F5576F273E_RuntimeMethod_var);
				NullCheck(L_11);
				PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572(L_11, (bool)0, /*hidden argument*/NULL);
			}

IL_0070:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_m660B8682C9EF5BAFD1892222BC552B7EF501B4DE((Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m660B8682C9EF5BAFD1892222BC552B7EF501B4DE_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0063;
				}
			}

IL_0079:
			{
				IL2CPP_LEAVE(0x89, FINALLY_007b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007b;
		}

FINALLY_007b:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mA14EE902749C822D89B156A1E200519A05E0F7BA((Enumerator_t442F91FA61088FC0CCACE0D28F9579B077A1E195 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mA14EE902749C822D89B156A1E200519A05E0F7BA_RuntimeMethod_var);
			IL2CPP_END_FINALLY(123)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(123)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x89, IL_0089)
		}

IL_0089:
		{
			RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_13 = __this->get_peer_14();
			NullCheck(L_13);
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_14;
			L_14 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			Dictionary_2_Clear_m4A38FFC8504D73B11B0E88578FACFE933F684FCA(L_14, /*hidden argument*/Dictionary_2_Clear_m4A38FFC8504D73B11B0E88578FACFE933F684FCA_RuntimeMethod_var);
			IL2CPP_LEAVE(0xA5, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_00a4;
			}
		}

IL_009e:
		{
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_16 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(155)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
	}

IL_00a5:
	{
		return (bool)1;
	}

IL_00a7:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendConnect_m4CD8D08C1DE63AF86697988C50CD688F03397B49 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0;
		L_0 = Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF(4, ((int32_t)15), /*hidden argument*/NULL);
		RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendAck(System.UInt16,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendAck_mE7DA91747C42AAE02A6946FF474821D6A531CC33 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___forSeqId0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___forSeqId0;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_1 = __this->get_peer_14();
		NullCheck(L_1);
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_2;
		L_2 = RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 2;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_4;
		L_4 = Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF(G_B3_0, ((int32_t)15), /*hidden argument*/NULL);
		V_0 = L_4;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5 = V_0;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_6 = __this->get_peer_14();
		NullCheck(L_6);
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_7;
		L_7 = RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_9;
		L_9 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(L_5, L_8, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_10 = V_0;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_11 = __this->get_peer_14();
		NullCheck(L_11);
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_12;
		L_12 = RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		uint16_t L_13;
		L_13 = SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_14;
		L_14 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(L_10, L_13, /*hidden argument*/NULL);
		uint16_t L_15 = ___forSeqId0;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_16 = __this->get_peer_14();
		NullCheck(L_16);
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_17;
		L_17 = RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint16_t L_18;
		L_18 = SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2_inline(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_0069;
		}
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_19 = V_0;
		RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940(__this, L_19, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_0069:
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_20 = V_0;
		uint16_t L_21 = ___forSeqId0;
		NullCheck(L_20);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_22;
		L_22 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(L_20, L_21, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_23 = V_0;
		RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940(__this, L_23, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleAck(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleAck_mD426EADBB956F4005AD3765FBC3D3F1147CFEB1E (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___message0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_2 = ___message0;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_4 = __this->get_peer_14();
		uint16_t L_5 = V_0;
		NullCheck(L_4);
		RudpPeer_AckMessage_m07FFA7925CA978AFD280844D6146FAAF2767F5BC(L_4, L_5, /*hidden argument*/NULL);
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_6 = __this->get_peer_14();
		uint16_t L_7 = V_0;
		uint16_t L_8 = V_1;
		NullCheck(L_6);
		RudpPeer_UpdateReceivedAcks_mD357E4D6951242A5D6B541FEB04319DF0AEFE5E0(L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleAckExtra(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleAckExtra_m55ECAACC3046238932961D8F96D9DDC1CB5F8B67 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___message0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_2 = ___message0;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_4 = ___message0;
		NullCheck(L_4);
		uint16_t L_5;
		L_5 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_6 = __this->get_peer_14();
		uint16_t L_7 = V_2;
		NullCheck(L_6);
		RudpPeer_AckMessage_m07FFA7925CA978AFD280844D6146FAAF2767F5BC(L_6, L_7, /*hidden argument*/NULL);
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_8 = __this->get_peer_14();
		uint16_t L_9 = V_0;
		uint16_t L_10 = V_1;
		NullCheck(L_8);
		RudpPeer_UpdateReceivedAcks_mD357E4D6951242A5D6B541FEB04319DF0AEFE5E0(L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendHeartbeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendHeartbeat_mBD75372DECABC878C98F3B8D241F96531AB17B56 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		uint8_t L_0 = __this->get_lastPingId_21();
		V_1 = L_0;
		uint8_t L_1 = V_1;
		__this->set_lastPingId_21((uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))));
		uint8_t L_2 = V_1;
		__this->set_pendingPingId_22(L_2);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_pendingPingStopwatch_23();
		NullCheck(L_3);
		Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_4;
		L_4 = Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF(5, ((int32_t)15), /*hidden argument*/NULL);
		V_0 = L_4;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5 = V_0;
		uint8_t L_6 = __this->get_pendingPingId_22();
		NullCheck(L_5);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7;
		L_7 = Message_Add_m8C48C7D01C48BFCA5AF9235CFCB87AF593051C37(L_5, L_6, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_8 = V_0;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_9 = __this->get_peer_14();
		NullCheck(L_9);
		int16_t L_10;
		L_10 = RudpPeer_get_RTT_mE0269EB9948B2C5429DD4AD46B6DDC4117BDCF3E_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_11;
		L_11 = Message_Add_m06A61F50B60DB29236A73539B8FF85C43E53AF17(L_8, L_10, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_12 = V_0;
		RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940(__this, L_12, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleHeartbeat(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleHeartbeat_mB5E839A12043D9C0F07125AEC389DB1560E2F176 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___message0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = Message_GetByte_m847DDFDADAA73B26439DBE282DBB25DBED1D5880(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint8_t L_2 = __this->get_pendingPingId_22();
		uint8_t L_3 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0032;
		}
	}
	{
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_4 = __this->get_peer_14();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = __this->get_pendingPingStopwatch_23();
		NullCheck(L_5);
		int64_t L_6;
		L_6 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247((1.0f), ((float)((float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_4);
		RudpPeer_set_RTT_mDF508AFB6F680D1B29E9E5AA96BA109858159D02(L_4, il2cpp_codegen_cast_double_to_int<int16_t>(L_7), /*hidden argument*/NULL);
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		L_8 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		__this->set_lastHeartbeat_20(L_8);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleWelcome(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleWelcome_m74D1CA099F52299295E8393E8C81D07A52196432 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RudpClient_get_IsConnected_mA1FDA30852E73DAD6B2A4F0EBDE290ACDF44C929(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1 = ___message0;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_1, /*hidden argument*/NULL);
		RudpClient_set_Id_mE56DE7357D9D888A0FF757720E3A7FFABF8505D0_inline(__this, L_2, /*hidden argument*/NULL);
		__this->set_connectionState_16(2);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		__this->set_lastHeartbeat_20(L_3);
		RudpClient_SendWelcomeReceived_mCAD7FBB3E3A7B41F4938A7867D7A4CD790052619(__this, /*hidden argument*/NULL);
		RudpClient_OnConnected_mC30EF7B6751155202C0CC7E3454106F0A7AD30C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendWelcomeReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendWelcomeReceived_mCAD7FBB3E3A7B41F4938A7867D7A4CD790052619 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0;
		L_0 = Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF(((int32_t)9), ((int32_t)25), /*hidden argument*/NULL);
		V_0 = L_0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1 = V_0;
		uint16_t L_2;
		L_2 = RudpClient_get_Id_m73117F5F221005800790BC5E8C4038E3DD84BF61_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_3;
		L_3 = Message_Add_m98DB5A1B18AA6F7726D51286582AD6D5ECBF32E1(L_1, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_connectBytes_24();
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_connectBytes_24();
		NullCheck(L_5);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7;
		L_7 = Message_Add_m81C52A9856BFB33247B790196B47E91780C2C618(L_5, L_6, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_connectBytes_24((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
	}

IL_0035:
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_8 = V_0;
		RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940(__this, L_8, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleClientConnected(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleClientConnected_m55CE082F63DAE84EEAAA1AF0E567F1E0EAF5F2FC (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___message0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_0, /*hidden argument*/NULL);
		ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * L_2 = (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 *)il2cpp_codegen_object_new(ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779_il2cpp_TypeInfo_var);
		ClientConnectedEventArgs__ctor_mAB7996F78FBB7ADE4DC338068FE897160CE8F67C(L_2, L_1, /*hidden argument*/NULL);
		RudpClient_OnClientConnected_m0D773EDACF0EE73EE1226AA462C9BDD2B7A8FB81(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleClientDisconnected(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleClientDisconnected_m9F57EC4AD129674AEEA9BBCD5C9D2859147E91BD (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___message0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_0, /*hidden argument*/NULL);
		ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * L_2 = (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 *)il2cpp_codegen_object_new(ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052_il2cpp_TypeInfo_var);
		ClientDisconnectedEventArgs__ctor_mFFB8634262A13C3AE932C6A73F903BCDB1B95E18(L_2, L_1, /*hidden argument*/NULL);
		RudpClient_OnClientDisconnected_mA3300711F10BFD1B697A6845F6B319169E203805(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::SendDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_SendDisconnect_mB96C4DB0616F02EF7F9A84DDFA4C3A98FE13697B (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0;
		L_0 = Message_Create_mB8EFAC43B0C5CAF00D2B9DD3475228FE89D963DF(6, ((int32_t)15), /*hidden argument*/NULL);
		RudpClient_Send_mBF78CE28B4D2C1BC58ED4A7C79985040CF4C1940(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::HandleDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_HandleDisconnect_mFEA86BC3A06D417BCA70B69BC3FE55CB54B33DA3 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		RudpClient_OnDisconnected_mF847441A0941EE335682690802AF857E491EFEE5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnConnected_mC30EF7B6751155202C0CC7E3454106F0A7AD30C0 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpClient_U3COnConnectedU3Eb__75_0_mCA7A32AF5885AF98BC44A2E335BCC85B91155EFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE419C26D811CAA37111E10E463E3969FC52DF07A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_0, _stringLiteralE419C26D811CAA37111E10E463E3969FC52DF07A, /*hidden argument*/NULL);
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_1 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_receiveActionQueue_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)RudpClient_U3COnConnectedU3Eb__75_0_mCA7A32AF5885AF98BC44A2E335BCC85B91155EFD_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnConnectionFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnConnectionFailed_mF810E53065977C7CD0CCB13E2A06C2019525AF80 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpClient_U3COnConnectionFailedU3Eb__76_0_mE7F10395DB5052876074042585C7965B7B270616_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75EEAC183373826B1F1E6871BE7879D9C2DF52C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RudpClient_LocalDisconnect_m6A185AF039014564F75082E5B78D0DA88F4FA8EB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_1 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_1, _stringLiteral75EEAC183373826B1F1E6871BE7879D9C2DF52C4, /*hidden argument*/NULL);
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_2 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_receiveActionQueue_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)RudpClient_U3COnConnectionFailedU3Eb__76_0_mE7F10395DB5052876074042585C7965B7B270616_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnMessageReceived(RiptideNetworking.ClientMessageReceivedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnMessageReceived_m41D46A3BE9DB18E2E604E836B5C965779769F4F6 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * G_B2_0 = NULL;
	EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * G_B1_0 = NULL;
	{
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_0 = __this->get_MessageReceived_7();
		EventHandler_1_t2E6CA045860CE5C5B2A4F5CE18CAC6CD7E98FD13 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * L_2 = ___e0;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF(G_B2_0, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mD6234082BFF1CE1C9FC937000C05790EDFFECCBF_RuntimeMethod_var);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnDisconnected_mF847441A0941EE335682690802AF857E491EFEE5 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpClient_U3COnDisconnectedU3Eb__78_0_m748074F092A4F247AF1701DD33C243C9B817F8E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5EBEA1FCBC5C7AFF7525ACC8C6192B384992E89);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RudpClient_LocalDisconnect_m6A185AF039014564F75082E5B78D0DA88F4FA8EB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_1 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_1, _stringLiteralB5EBEA1FCBC5C7AFF7525ACC8C6192B384992E89, /*hidden argument*/NULL);
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_2 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_receiveActionQueue_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)RudpClient_U3COnDisconnectedU3Eb__78_0_m748074F092A4F247AF1701DD33C243C9B817F8E0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnClientConnected(RiptideNetworking.ClientConnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnClientConnected_m0D773EDACF0EE73EE1226AA462C9BDD2B7A8FB81 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass79_0_U3COnClientConnectedU3Eb__0_mA0D0B1EA963645A431A7618EFD01BADF22B1A2F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA7B47CE983AB0B963032F8AD7EE37C6C4DF57A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * L_0 = (U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass79_0__ctor_m97A78BB5B48342FC46384241D5CA66CE19000F70(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * L_2 = V_0;
		ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * L_3 = ___e0;
		NullCheck(L_2);
		L_2->set_e_1(L_3);
		String_t* L_4 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * L_5 = V_0;
		NullCheck(L_5);
		ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * L_6 = L_5->get_e_1();
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = ClientConnectedEventArgs_get_Id_m5E4780AACD9CDBD4673E05DFBBCE7AB822CDD27A_inline(L_6, /*hidden argument*/NULL);
		uint16_t L_8 = L_7;
		RuntimeObject * L_9 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralBCA7B47CE983AB0B963032F8AD7EE37C6C4DF57A, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_4, L_10, /*hidden argument*/NULL);
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_11 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_receiveActionQueue_1();
		U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * L_12 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass79_0_U3COnClientConnectedU3Eb__0_mA0D0B1EA963645A431A7618EFD01BADF22B1A2F3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::OnClientDisconnected(RiptideNetworking.ClientDisconnectedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_OnClientDisconnected_mA3300711F10BFD1B697A6845F6B319169E203805 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass80_0_U3COnClientDisconnectedU3Eb__0_m67EEE8028B6FB5AD424A8D670CBCFD1340783A00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC560E087BFCBD884970D9CC6D48C3E8921867F6);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * L_0 = (U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass80_0__ctor_m1F7021520A8195D9CBFFBCD689D97DE6B66AFB89(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * L_2 = V_0;
		ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * L_3 = ___e0;
		NullCheck(L_2);
		L_2->set_e_1(L_3);
		String_t* L_4 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_LogName_0();
		U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * L_5 = V_0;
		NullCheck(L_5);
		ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * L_6 = L_5->get_e_1();
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = ClientDisconnectedEventArgs_get_Id_m571DA559459A48F1698A86F13F1865BD0C6C56E5_inline(L_6, /*hidden argument*/NULL);
		uint16_t L_8 = L_7;
		RuntimeObject * L_9 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralEC560E087BFCBD884970D9CC6D48C3E8921867F6, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(1, L_4, L_10, /*hidden argument*/NULL);
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_11 = ((RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 *)__this)->get_receiveActionQueue_1();
		U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * L_12 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass80_0_U3COnClientDisconnectedU3Eb__0_m67EEE8028B6FB5AD424A8D670CBCFD1340783A00_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		ActionQueue_Add_mC1043FF334141690863AE197E8406267996ED0DF(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::<Connect>b__54_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_U3CConnectU3Eb__54_0_m9085BC14119845893560311FB72FE20209E50E61 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RudpClient_Heartbeat_m1B6935499D257C21F9E496CE0688DD4C3155BBBF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::<OnConnected>b__75_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_U3COnConnectedU3Eb__75_0_mCA7A32AF5885AF98BC44A2E335BCC85B91155EFD (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B2_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B1_0 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Connected_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(G_B2_0);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(G_B2_0, __this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::<OnConnectionFailed>b__76_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_U3COnConnectionFailedU3Eb__76_0_mE7F10395DB5052876074042585C7965B7B270616 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B2_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B1_0 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_ConnectionFailed_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(G_B2_0);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(G_B2_0, __this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient::<OnDisconnected>b__78_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpClient_U3COnDisconnectedU3Eb__78_0_m748074F092A4F247AF1701DD33C243C9B817F8E0 (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B2_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * G_B1_0 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_Disconnected_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(G_B2_0);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(G_B2_0, __this, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener__ctor_m489FD24999B920AC06CA449A66AD36398B973356 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, String_t* ___logName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29194CB83E2FE1AD1ECEC6755DDA95E0E898E1FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___logName0;
		__this->set_LogName_0(L_0);
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_1 = (ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C *)il2cpp_codegen_object_new(ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C_il2cpp_TypeInfo_var);
		ActionQueue__ctor_m0BD28A4EFD310BBF5C626E08B9937CBB19CD24CA(L_1, _stringLiteral29194CB83E2FE1AD1ECEC6755DDA95E0E898E1FD, /*hidden argument*/NULL);
		__this->set_receiveActionQueue_1(L_1);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_Tick_mEECAE45DF1C9FBCB3445AAFEE00AA56AAB891448 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, const RuntimeMethod* method)
{
	{
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_0 = __this->get_receiveActionQueue_1();
		NullCheck(L_0);
		ActionQueue_ExecuteAll_m83FA06E22AD215CE9A29D63CD16A977BF89EA923(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::StartListening(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_StartListening_m4B7A83B97C8CE3183538A96F02927986A9DC5743 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, uint16_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RudpListener_Receive_mF293800025971E19EE2DEF305CA2E35096C6076F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * V_0 = NULL;
	bool V_1 = false;
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_0 = __this->get_receiveActionQueue_1();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_2 = __this->get_isRunning_3();
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			RudpListener_StopListening_mDED52BCA43ECFEFE7BE309F480C7C8BBA92137B2(__this, /*hidden argument*/NULL);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			Message_IncreasePoolCount_m563B7443DBDB374542874191529D69B5CEC61C6D(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_3 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_IPv6Any_7();
			uint16_t L_4 = ___port0;
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_5 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
			IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_5, L_3, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
			Socket__ctor_m46AAE859577BBEED1D6246CEB874F2DFDEEE295C(L_6, 2, ((int32_t)17), /*hidden argument*/NULL);
			__this->set_socket_2(L_6);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_7 = __this->get_socket_2();
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_8 = V_2;
			NullCheck(L_7);
			Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217(L_7, L_8, /*hidden argument*/NULL);
			__this->set_isRunning_3((bool)1);
			IL2CPP_LEAVE(0x5D, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_11 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_11, __this, (intptr_t)((intptr_t)RudpListener_Receive_mF293800025971E19EE2DEF305CA2E35096C6076F_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_12 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_StopListening_mDED52BCA43ECFEFE7BE309F480C7C8BBA92137B2 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_0 = __this->get_receiveActionQueue_1();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_2 = __this->get_isRunning_3();
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}

IL_001b:
		{
			__this->set_isRunning_3((bool)0);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3 = __this->get_socket_2();
			NullCheck(L_3);
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
			Message_DecreasePoolCount_m6CFA2D6E9EE75363EC13CFFDA4597EFFC4E4606A(/*hidden argument*/NULL);
			IL2CPP_LEAVE(0x3E, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			ActionQueue_t0EE4EDC819059BED99A9D28C2896E97B440D841C * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::Receive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_Receive_mF293800025971E19EE2DEF305CA2E35096C6076F (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * G_B3_0 = NULL;
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_socket_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_IPv6Any_7();
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_3 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_Any_0();
		G_B3_0 = L_3;
	}

IL_001a:
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_4 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_4, G_B3_0, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1252));
		__this->set_receiveBuffer_4(L_5);
		goto IL_00c7;
	}

IL_0036:
	{
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = __this->get_socket_2();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = Socket_get_Available_mDAEF0D394D1130E69158CBE24A5687C772800E09(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0059;
			}
		}

IL_0044:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_8 = __this->get_socket_2();
			NullCheck(L_8);
			bool L_9;
			L_9 = Socket_Poll_m82012C326974DCA0B8C57A98E68C3E099D52BF7C(L_8, ((int32_t)500000), 0, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0059;
			}
		}

IL_0057:
		{
			goto IL_00c7;
		}

IL_0059:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_10 = __this->get_socket_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_receiveBuffer_4();
			NullCheck(L_10);
			int32_t L_12;
			L_12 = Socket_ReceiveFrom_mBC4BC7ECAD49BF15570197FBCE794E25765684F9(L_10, L_11, 0, (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA **)(&V_0), /*hidden argument*/NULL);
			V_1 = L_12;
			int32_t L_13 = V_1;
			if ((((int32_t)L_13) >= ((int32_t)1)))
			{
				goto IL_0074;
			}
		}

IL_0072:
		{
			goto IL_00c7;
		}

IL_0074:
		{
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b4;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b7;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			NullCheck(((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)));
			int32_t L_14;
			L_14 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)), /*hidden argument*/NULL);
			V_2 = L_14;
			int32_t L_15 = V_2;
			if ((((int32_t)L_15) > ((int32_t)((int32_t)10038))))
			{
				goto IL_0096;
			}
		}

IL_0084:
		{
			int32_t L_16 = V_2;
			if ((((int32_t)L_16) == ((int32_t)((int32_t)10004))))
			{
				goto IL_00b0;
			}
		}

IL_008c:
		{
			int32_t L_17 = V_2;
			if ((((int32_t)L_17) == ((int32_t)((int32_t)10038))))
			{
				goto IL_00b0;
			}
		}

IL_0094:
		{
			goto IL_00b2;
		}

IL_0096:
		{
			int32_t L_18 = V_2;
			if ((((int32_t)L_18) == ((int32_t)((int32_t)10040))))
			{
				goto IL_00b2;
			}
		}

IL_009e:
		{
			int32_t L_19 = V_2;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)10054))))
			{
				goto IL_00b2;
			}
		}

IL_00a6:
		{
			int32_t L_20 = V_2;
			if ((((int32_t)L_20) == ((int32_t)((int32_t)10060))))
			{
				goto IL_00b2;
			}
		}

IL_00ae:
		{
			goto IL_00b2;
		}

IL_00b0:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d2;
		}

IL_00b2:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c7;
		}
	} // end catch (depth: 1)

CATCH_00b4:
	{ // begin catch(System.ObjectDisposedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	} // end catch (depth: 1)

CATCH_00b7:
	{ // begin catch(System.NullReferenceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	} // end catch (depth: 1)

IL_00ba:
	{
		int32_t L_21 = V_1;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_22 = V_0;
		RudpListener_PrepareToHandle_mAE7DCF5258914313E56480BD91773CBDD9688AE5(__this, L_21, ((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)CastclassClass((RuntimeObject*)L_22, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_00c7:
	{
		bool L_23 = __this->get_isRunning_3();
		if (L_23)
		{
			goto IL_0036;
		}
	}

IL_00d2:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::PrepareToHandle(System.Int32,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_PrepareToHandle_mAE7DCF5258914313E56480BD91773CBDD9688AE5 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, int32_t ___length0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___remoteEndPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * V_1 = NULL;
	uint8_t G_B4_0 = 0;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B4_1 = NULL;
	uint8_t G_B3_0 = 0;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	uint8_t G_B5_1 = 0;
	Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * G_B5_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_receiveBuffer_4();
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_3 = ___remoteEndPoint1;
		uint8_t L_4 = V_0;
		bool L_5;
		L_5 = VirtFuncInvoker2< bool, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, uint8_t >::Invoke(5 /* System.Boolean RiptideNetworking.Transports.RudpTransport.RudpListener::ShouldHandleMessageFrom(System.Net.IPEndPoint,RiptideNetworking.Transports.HeaderType) */, __this, L_3, L_4);
		if (L_5)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_6;
		L_6 = Message_CreateRaw_m42919123F33BC0B07F44C988ABA5DD5498CF6E08(/*hidden argument*/NULL);
		V_1 = L_6;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_7 = V_1;
		uint8_t L_8 = V_0;
		uint8_t L_9 = V_0;
		G_B3_0 = L_8;
		G_B3_1 = L_7;
		if ((((int32_t)L_9) >= ((int32_t)7)))
		{
			G_B4_0 = L_8;
			G_B4_1 = L_7;
			goto IL_0023;
		}
	}
	{
		int32_t L_10 = ___length0;
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0026;
	}

IL_0023:
	{
		int32_t L_11 = ___length0;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)2));
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0026:
	{
		NullCheck(G_B5_2);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_12;
		L_12 = Message_PrepareForUse_m06087513084FE3235BE4A22DC8FD2F722BBF24CA(G_B5_2, G_B5_1, (uint16_t)((int32_t)((uint16_t)G_B5_0)), /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_13 = V_1;
		NullCheck(L_13);
		uint8_t L_14;
		L_14 = Message_get_SendMode_m3BF7BB785831D48377DE8E237561CBA082B26BFA_inline(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)7))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_15 = ___length0;
		if ((((int32_t)L_15) <= ((int32_t)3)))
		{
			goto IL_0052;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_receiveBuffer_4();
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = ___length0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_16, 3, (RuntimeArray *)(RuntimeArray *)L_18, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)3)), /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0052:
	{
		int32_t L_20 = ___length0;
		if ((((int32_t)L_20) >= ((int32_t)3)))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		uint8_t L_21 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = __this->get_receiveBuffer_4();
		uint16_t L_23;
		L_23 = RiptideConverter_ToUShort_m68D39AF0DE9FDC647CAE9BB749D7E1F5103C4B24_inline(L_22, 1, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_24 = V_1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_25 = ___remoteEndPoint1;
		VirtActionInvoker4< uint8_t, uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * >::Invoke(6 /* System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::ReliableHandle(RiptideNetworking.Transports.HeaderType,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint) */, __this, L_21, L_23, L_24, L_25);
		return;
	}

IL_006d:
	{
		int32_t L_26 = ___length0;
		if ((((int32_t)L_26) <= ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = __this->get_receiveBuffer_4();
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_28 = V_1;
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
		L_29 = Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline(L_28, /*hidden argument*/NULL);
		int32_t L_30 = ___length0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, 1, (RuntimeArray *)(RuntimeArray *)L_29, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0087:
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_31 = V_1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_32 = ___remoteEndPoint1;
		uint8_t L_33 = V_0;
		VirtActionInvoker3< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, uint8_t >::Invoke(7 /* System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::Handle(RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.HeaderType) */, __this, L_31, L_32, L_33);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::ReliableHandle(RiptideNetworking.Transports.HeaderType,System.UInt16,RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_ReliableHandle_mF09FD2C35D90B580D8ADF0CFCD7DED9912198CE6 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, uint8_t ___messageHeader0, uint16_t ___sequenceId1, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message2, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___fromEndPoint3, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___lockables4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A8700002BB1709447F3F35B5060CF2127568704);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		V_0 = (bool)1;
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_0 = ___lockables4;
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_1 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			uint16_t L_2 = ___sequenceId1;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_3 = ___lockables4;
			NullCheck(L_3);
			uint16_t L_4;
			L_4 = SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2_inline(L_3, /*hidden argument*/NULL);
			int32_t L_5;
			L_5 = RudpPeer_GetSequenceGap_m03099209AE6502EBDF224B3D82DBA90BDC08053F(L_2, L_4, /*hidden argument*/NULL);
			V_3 = L_5;
			int32_t L_6 = V_3;
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_00d7;
			}
		}

IL_0024:
		{
			int32_t L_7 = V_3;
			if ((((int32_t)L_7) <= ((int32_t)((int32_t)64))))
			{
				goto IL_0045;
			}
		}

IL_0029:
		{
			String_t* L_8 = __this->get_LogName_0();
			int32_t L_9 = V_3;
			int32_t L_10 = L_9;
			RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
			String_t* L_12;
			L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4A8700002BB1709447F3F35B5060CF2127568704, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RiptideLogger_t27B8F3AA0CF7F585E979DC9831E38C8BAC328348_il2cpp_TypeInfo_var);
			RiptideLogger_Log_mC23F850DF3733A0E00AA0278A73FAC69553599C7(2, L_8, L_12, /*hidden argument*/NULL);
		}

IL_0045:
		{
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_13 = ___lockables4;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_14 = L_13;
			NullCheck(L_14);
			uint64_t L_15;
			L_15 = SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline(L_14, /*hidden argument*/NULL);
			int32_t L_16 = V_3;
			NullCheck(L_14);
			SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827_inline(L_14, ((int64_t)((int64_t)L_15<<(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)63))))), /*hidden argument*/NULL);
			int32_t L_17 = V_3;
			if ((((int32_t)L_17) > ((int32_t)((int32_t)16))))
			{
				goto IL_009c;
			}
		}

IL_005c:
		{
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_18 = ___lockables4;
			NullCheck(L_18);
			uint16_t L_19;
			L_19 = SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline(L_18, /*hidden argument*/NULL);
			int32_t L_20 = V_3;
			V_4 = ((int64_t)((int64_t)((int64_t)((uint64_t)L_19))<<(int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)63)))));
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_21 = ___lockables4;
			uint64_t L_22 = V_4;
			NullCheck(L_21);
			SendLockables_set_AcksBitfield_mCB0C6553F32F9921C297790B691811B8C4565741_inline(L_21, (uint16_t)((int32_t)((uint16_t)L_22)), /*hidden argument*/NULL);
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_23 = ___lockables4;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_24 = L_23;
			NullCheck(L_24);
			uint64_t L_25;
			L_25 = SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline(L_24, /*hidden argument*/NULL);
			uint64_t L_26 = V_4;
			NullCheck(L_24);
			SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827_inline(L_24, ((int64_t)((int64_t)L_25|(int64_t)((int64_t)((uint64_t)L_26>>((int32_t)16))))), /*hidden argument*/NULL);
			int32_t L_27 = V_3;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_28 = ___lockables4;
			bool L_29;
			L_29 = RudpListener_UpdateAcksBitfield_m625D624833F0CD096E0C9A9FB61298F95A55609E(__this, L_27, L_28, /*hidden argument*/NULL);
			V_0 = L_29;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_30 = ___lockables4;
			uint16_t L_31 = ___sequenceId1;
			NullCheck(L_30);
			SendLockables_set_LastReceivedSeqId_m02B64102C4FB280A00AAB01F22DC94936CF03E75_inline(L_30, L_31, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x10E, FINALLY_0104);
		}

IL_009c:
		{
			int32_t L_32 = V_3;
			if ((((int32_t)L_32) > ((int32_t)((int32_t)80))))
			{
				goto IL_0102;
			}
		}

IL_00a1:
		{
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_33 = ___lockables4;
			NullCheck(L_33);
			uint16_t L_34;
			L_34 = SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline(L_33, /*hidden argument*/NULL);
			int32_t L_35 = V_3;
			V_5 = ((int64_t)((int64_t)((int64_t)((uint64_t)L_34))<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)((int32_t)16)))&(int32_t)((int32_t)63)))));
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_36 = ___lockables4;
			NullCheck(L_36);
			SendLockables_set_AcksBitfield_mCB0C6553F32F9921C297790B691811B8C4565741_inline(L_36, (uint16_t)0, /*hidden argument*/NULL);
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_37 = ___lockables4;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_38 = L_37;
			NullCheck(L_38);
			uint64_t L_39;
			L_39 = SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline(L_38, /*hidden argument*/NULL);
			uint64_t L_40 = V_5;
			NullCheck(L_38);
			SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827_inline(L_38, ((int64_t)((int64_t)L_39|(int64_t)L_40)), /*hidden argument*/NULL);
			int32_t L_41 = V_3;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_42 = ___lockables4;
			bool L_43;
			L_43 = RudpListener_UpdateDuplicateFilterBitfield_m321ED45F3838E9BE0B0C816A052CFE415FF905FA(__this, L_41, L_42, /*hidden argument*/NULL);
			V_0 = L_43;
			IL2CPP_LEAVE(0x10E, FINALLY_0104);
		}

IL_00d7:
		{
			int32_t L_44 = V_3;
			if ((((int32_t)L_44) >= ((int32_t)0)))
			{
				goto IL_0100;
			}
		}

IL_00db:
		{
			int32_t L_45 = V_3;
			V_3 = ((-L_45));
			int32_t L_46 = V_3;
			if ((((int32_t)L_46) > ((int32_t)((int32_t)16))))
			{
				goto IL_00ef;
			}
		}

IL_00e3:
		{
			int32_t L_47 = V_3;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_48 = ___lockables4;
			bool L_49;
			L_49 = RudpListener_UpdateAcksBitfield_m625D624833F0CD096E0C9A9FB61298F95A55609E(__this, L_47, L_48, /*hidden argument*/NULL);
			V_0 = L_49;
			IL2CPP_LEAVE(0x10E, FINALLY_0104);
		}

IL_00ef:
		{
			int32_t L_50 = V_3;
			if ((((int32_t)L_50) > ((int32_t)((int32_t)80))))
			{
				goto IL_0102;
			}
		}

IL_00f4:
		{
			int32_t L_51 = V_3;
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_52 = ___lockables4;
			bool L_53;
			L_53 = RudpListener_UpdateDuplicateFilterBitfield_m321ED45F3838E9BE0B0C816A052CFE415FF905FA(__this, L_51, L_52, /*hidden argument*/NULL);
			V_0 = L_53;
			IL2CPP_LEAVE(0x10E, FINALLY_0104);
		}

IL_0100:
		{
			V_0 = (bool)0;
		}

IL_0102:
		{
			IL2CPP_LEAVE(0x10E, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			bool L_54 = V_2;
			if (!L_54)
			{
				goto IL_010d;
			}
		}

IL_0107:
		{
			SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_55 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_55, /*hidden argument*/NULL);
		}

IL_010d:
		{
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10E, IL_010e)
	}

IL_010e:
	{
		uint16_t L_56 = ___sequenceId1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_57 = ___fromEndPoint3;
		VirtActionInvoker2< uint16_t, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * >::Invoke(8 /* System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::SendAck(System.UInt16,System.Net.IPEndPoint) */, __this, L_56, L_57);
		bool L_58 = V_0;
		if (!L_58)
		{
			goto IL_0124;
		}
	}
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_59 = ___message2;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_60 = ___fromEndPoint3;
		uint8_t L_61 = ___messageHeader0;
		VirtActionInvoker3< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, uint8_t >::Invoke(7 /* System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::Handle(RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.HeaderType) */, __this, L_59, L_60, L_61);
	}

IL_0124:
	{
		return;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpListener::UpdateAcksBitfield(System.Int32,RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpListener_UpdateAcksBitfield_m625D624833F0CD096E0C9A9FB61298F95A55609E (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, int32_t ___sequenceGap0, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___lockables1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___sequenceGap0;
		V_0 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))&(int32_t)((int32_t)31)))))));
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_1 = ___lockables1;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline(L_1, /*hidden argument*/NULL);
		uint16_t L_3 = V_0;
		if (((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_4 = ___lockables1;
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_5 = L_4;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline(L_5, /*hidden argument*/NULL);
		uint16_t L_7 = V_0;
		NullCheck(L_5);
		SendLockables_set_AcksBitfield_mCB0C6553F32F9921C297790B691811B8C4565741_inline(L_5, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_6|(int32_t)L_7)))), /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean RiptideNetworking.Transports.RudpTransport.RudpListener::UpdateDuplicateFilterBitfield(System.Int32,RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RudpListener_UpdateDuplicateFilterBitfield_m321ED45F3838E9BE0B0C816A052CFE415FF905FA (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, int32_t ___sequenceGap0, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___lockables1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___sequenceGap0;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)1))<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), (int32_t)((int32_t)16)))&(int32_t)((int32_t)63)))));
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_1 = ___lockables1;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline(L_1, /*hidden argument*/NULL);
		uint64_t L_3 = V_0;
		if (((int64_t)((int64_t)L_2&(int64_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_4 = ___lockables1;
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_5 = L_4;
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline(L_5, /*hidden argument*/NULL);
		uint64_t L_7 = V_0;
		NullCheck(L_5);
		SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827_inline(L_5, ((int64_t)((int64_t)L_6|(int64_t)L_7)), /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_Send_m51CDD41B227EF5FCACDD58CAE8110B784198430D (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___numBytes1, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint2, const RuntimeMethod* method)
{
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		bool L_0 = __this->get_isRunning_3();
		if (!L_0)
		{
			goto IL_002f;
		}
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = __this->get_socket_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		int32_t L_3 = ___numBytes1;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_4 = ___toEndPoint2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = Socket_SendTo_mEE4D5D536BDD178DA55053964451F68469C6BE69(L_1, L_2, L_3, 0, L_4, /*hidden argument*/NULL);
		goto IL_002f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.ObjectDisposedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_0 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_6 = V_0;
			NullCheck(L_6);
			int32_t L_7;
			L_7 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_6, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)((int32_t)10004))))
			{
				goto IL_002d;
			}
		}

IL_002b:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_8 = V_0;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RudpListener_Send_m51CDD41B227EF5FCACDD58CAE8110B784198430D_RuntimeMethod_var)));
		}

IL_002d:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_002f;
		}
	} // end catch (depth: 1)

IL_002f:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpListener::SendReliable(RiptideNetworking.Message,System.Net.IPEndPoint,RiptideNetworking.Transports.RudpTransport.RudpPeer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpListener_SendReliable_mE8E48A0C8E044F1E97C869B32847D80DE268A328 (RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___toEndPoint1, RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * ___peer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		bool L_0 = __this->get_isRunning_3();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_1 = ___peer2;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = RudpPeer_get_NextSequenceId_m07A8E14205FA54F76A46D6F32E4ECB617B285961(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * L_3 = ___peer2;
		uint16_t L_4 = V_0;
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5 = ___message0;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_6 = ___toEndPoint1;
		IL2CPP_RUNTIME_CLASS_INIT(PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA_il2cpp_TypeInfo_var);
		PendingMessage_CreateAndSend_m3579CE3ABEBF25378641EA8FD3514B5228D864FB(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.Transports.RudpTransport.RudpPeer::get_NextSequenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t RudpPeer_get_NextSequenceId_m07A8E14205FA54F76A46D6F32E4ECB617B285961 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_lastSequenceId_6();
		int32_t L_1;
		L_1 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		return (uint16_t)((int32_t)((uint16_t)L_1));
	}
}
// RiptideNetworking.Transports.RudpTransport.SendLockables RiptideNetworking.Transports.RudpTransport.RudpPeer::get_SendLockables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_0 = __this->get_U3CSendLockablesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_SendLockables(RiptideNetworking.Transports.RudpTransport.SendLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_set_SendLockables_m35BDBC82D8E8A75BA5F2B6B42DD26BE4EC82FF50 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___value0, const RuntimeMethod* method)
{
	{
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_0 = ___value0;
		__this->set_U3CSendLockablesU3Ek__BackingField_0(L_0);
		return;
	}
}
// RiptideNetworking.Transports.RudpTransport.ReceiveLockables RiptideNetworking.Transports.RudpTransport.RudpPeer::get_ReceiveLockables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_0 = __this->get_U3CReceiveLockablesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_ReceiveLockables(RiptideNetworking.Transports.RudpTransport.ReceiveLockables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_set_ReceiveLockables_m0A61A306F97DED5964258E7E0E3BC66699096ABE (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * ___value0, const RuntimeMethod* method)
{
	{
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_0 = ___value0;
		__this->set_U3CReceiveLockablesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.UInt16,RiptideNetworking.Transports.RudpTransport.PendingMessage> RiptideNetworking.Transports.RudpTransport.RudpPeer::get_PendingMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_0 = __this->get_U3CPendingMessagesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int16 RiptideNetworking.Transports.RudpTransport.RudpPeer::get_RTT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t RudpPeer_get_RTT_mE0269EB9948B2C5429DD4AD46B6DDC4117BDCF3E (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = __this->get__rtt_3();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_RTT(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_set_RTT_mDF508AFB6F680D1B29E9E5AA96BA109858159D02 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, int16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * G_B2_0 = NULL;
	RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * G_B3_1 = NULL;
	{
		int16_t L_0 = __this->get__rtt_3();
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		int16_t L_1;
		L_1 = RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline(__this, /*hidden argument*/NULL);
		int16_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247((1.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)(0.699999988f))), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)(0.300000012f))))), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int16_t>(L_3)));
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		int16_t L_4 = ___value0;
		G_B3_0 = ((int32_t)(L_4));
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		RudpPeer_set_SmoothRTT_m2856DB9A1B8B6EC54D62E397A90D48D5141EC9A5_inline(G_B3_1, (int16_t)G_B3_0, /*hidden argument*/NULL);
		int16_t L_5 = ___value0;
		__this->set__rtt_3(L_5);
		return;
	}
}
// System.Int16 RiptideNetworking.Transports.RudpTransport.RudpPeer::get_SmoothRTT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = __this->get_U3CSmoothRTTU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::set_SmoothRTT(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_set_SmoothRTT_m2856DB9A1B8B6EC54D62E397A90D48D5141EC9A5 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___value0;
		__this->set_U3CSmoothRTTU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::.ctor(RiptideNetworking.Transports.RudpTransport.RudpListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer__ctor_m9B71368B24321D62826466449754771CB1022D51 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * ___rudpListener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2E9CE448B7428D59633DBB9B3F7CFB9D1E0DEB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_0 = (Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 *)il2cpp_codegen_object_new(Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2E9CE448B7428D59633DBB9B3F7CFB9D1E0DEB80(L_0, /*hidden argument*/Dictionary_2__ctor_m2E9CE448B7428D59633DBB9B3F7CFB9D1E0DEB80_RuntimeMethod_var);
		__this->set_U3CPendingMessagesU3Ek__BackingField_2(L_0);
		__this->set__rtt_3((int16_t)(-1));
		__this->set_U3CSmoothRTTU3Ek__BackingField_4((int16_t)(-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RudpListener_t20725FB6A0D1A32D6AA1B77FC5CAD8253FCA6645 * L_1 = ___rudpListener0;
		__this->set_Listener_5(L_1);
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_2 = (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 *)il2cpp_codegen_object_new(SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89_il2cpp_TypeInfo_var);
		SendLockables__ctor_m21882D7C32EC2E5CF25591F980085EB3D2C79FD9(L_2, /*hidden argument*/NULL);
		RudpPeer_set_SendLockables_m35BDBC82D8E8A75BA5F2B6B42DD26BE4EC82FF50_inline(__this, L_2, /*hidden argument*/NULL);
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_3 = (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC *)il2cpp_codegen_object_new(ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC_il2cpp_TypeInfo_var);
		ReceiveLockables__ctor_m13ACE0D880AAFB6E668DD572FD59CA94C1A7804E(L_3, /*hidden argument*/NULL);
		RudpPeer_set_ReceiveLockables_m0A61A306F97DED5964258E7E0E3BC66699096ABE_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::UpdateReceivedAcks(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_UpdateReceivedAcks_mD357E4D6951242A5D6B541FEB04319DF0AEFE5E0 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, uint16_t ___remoteLastReceivedSeqId0, uint16_t ___remoteAcksBitField1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_0;
		L_0 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_2;
			L_2 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(__this, /*hidden argument*/NULL);
			V_2 = L_2;
			V_3 = (bool)0;
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_3 = V_2;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_3), /*hidden argument*/NULL);
				uint16_t L_4 = ___remoteLastReceivedSeqId0;
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_5;
				L_5 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_5);
				uint16_t L_6;
				L_6 = ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370_inline(L_5, /*hidden argument*/NULL);
				int32_t L_7;
				L_7 = RudpPeer_GetSequenceGap_m03099209AE6502EBDF224B3D82DBA90BDC08053F(L_4, L_6, /*hidden argument*/NULL);
				V_4 = L_7;
				int32_t L_8 = V_4;
				if ((((int32_t)L_8) <= ((int32_t)0)))
				{
					goto IL_00dd;
				}
			}

IL_003d:
			{
				V_5 = 1;
				goto IL_0079;
			}

IL_0042:
			{
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_9;
				L_9 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_10 = L_9;
				NullCheck(L_10);
				uint16_t L_11;
				L_11 = ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline(L_10, /*hidden argument*/NULL);
				NullCheck(L_10);
				ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline(L_10, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_11<<(int32_t)1)))), /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_12;
				L_12 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_12);
				uint16_t L_13;
				L_13 = ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370_inline(L_12, /*hidden argument*/NULL);
				int32_t L_14 = V_5;
				RudpPeer_CheckMessageAckStatus_m8AE7686B6FCE9008A20241393E52C8FC6D557DC3(__this, (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)16))), (int32_t)L_14)))), (uint16_t)((int32_t)32768), /*hidden argument*/NULL);
				int32_t L_15 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
			}

IL_0079:
			{
				int32_t L_16 = V_5;
				int32_t L_17 = V_4;
				if ((((int32_t)L_16) < ((int32_t)L_17)))
				{
					goto IL_0042;
				}
			}

IL_007f:
			{
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_18;
				L_18 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_19 = L_18;
				NullCheck(L_19);
				uint16_t L_20;
				L_20 = ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline(L_19, /*hidden argument*/NULL);
				NullCheck(L_19);
				ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline(L_19, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_20<<(int32_t)1)))), /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_21;
				L_21 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_22 = L_21;
				NullCheck(L_22);
				uint16_t L_23;
				L_23 = ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline(L_22, /*hidden argument*/NULL);
				uint16_t L_24 = ___remoteAcksBitField1;
				int32_t L_25 = V_4;
				NullCheck(L_22);
				ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline(L_22, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_23|(int32_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_24|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1))&(int32_t)((int32_t)31))))))))))))), /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_26;
				L_26 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				uint16_t L_27 = ___remoteLastReceivedSeqId0;
				NullCheck(L_26);
				ReceiveLockables_set_LastAckedSeqId_mEEB9AFD0C4A51C16F14376FF9ADB48CE95B06EAC_inline(L_26, L_27, /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_28;
				L_28 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_28);
				uint16_t L_29;
				L_29 = ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370_inline(L_28, /*hidden argument*/NULL);
				RudpPeer_CheckMessageAckStatus_m8AE7686B6FCE9008A20241393E52C8FC6D557DC3(__this, (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)16))))), (uint16_t)((int32_t)32768), /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x167, FINALLY_0153);
			}

IL_00dd:
			{
				int32_t L_30 = V_4;
				if ((((int32_t)L_30) >= ((int32_t)0)))
				{
					goto IL_0123;
				}
			}

IL_00e2:
			{
				int32_t L_31 = V_4;
				V_4 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((-L_31)), (int32_t)1))));
				int32_t L_32 = V_4;
				V_6 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)31)))))));
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_33;
				L_33 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_34 = L_33;
				NullCheck(L_34);
				uint16_t L_35;
				L_35 = ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline(L_34, /*hidden argument*/NULL);
				uint16_t L_36 = V_6;
				NullCheck(L_34);
				ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline(L_34, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_35|(int32_t)L_36)))), /*hidden argument*/NULL);
				Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_37;
				L_37 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(__this, /*hidden argument*/NULL);
				uint16_t L_38 = ___remoteLastReceivedSeqId0;
				NullCheck(L_37);
				bool L_39;
				L_39 = Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D(L_37, L_38, (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA **)(&V_7), /*hidden argument*/Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
				if (!L_39)
				{
					goto IL_0151;
				}
			}

IL_0119:
			{
				PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_40 = V_7;
				NullCheck(L_40);
				PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572(L_40, (bool)1, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x167, FINALLY_0153);
			}

IL_0123:
			{
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_41;
				L_41 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_42 = L_41;
				NullCheck(L_42);
				uint16_t L_43;
				L_43 = ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline(L_42, /*hidden argument*/NULL);
				uint16_t L_44 = ___remoteAcksBitField1;
				NullCheck(L_42);
				ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline(L_42, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_43|(int32_t)L_44)))), /*hidden argument*/NULL);
				ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_45;
				L_45 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_45);
				uint16_t L_46;
				L_46 = ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370_inline(L_45, /*hidden argument*/NULL);
				RudpPeer_CheckMessageAckStatus_m8AE7686B6FCE9008A20241393E52C8FC6D557DC3(__this, (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)16))))), (uint16_t)((int32_t)32768), /*hidden argument*/NULL);
			}

IL_0151:
			{
				IL2CPP_LEAVE(0x167, FINALLY_0153);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0153;
		}

FINALLY_0153:
		{ // begin finally (depth: 2)
			{
				bool L_47 = V_3;
				if (!L_47)
				{
					goto IL_015c;
				}
			}

IL_0156:
			{
				Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_48 = V_2;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_48, /*hidden argument*/NULL);
			}

IL_015c:
			{
				IL2CPP_END_FINALLY(339)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(339)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x167, FINALLY_015d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015d;
	}

FINALLY_015d:
	{ // begin finally (depth: 1)
		{
			bool L_49 = V_1;
			if (!L_49)
			{
				goto IL_0166;
			}
		}

IL_0160:
		{
			ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_50 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_50, /*hidden argument*/NULL);
		}

IL_0166:
		{
			IL2CPP_END_FINALLY(349)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(349)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x167, IL_0167)
	}

IL_0167:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::CheckMessageAckStatus(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_CheckMessageAckStatus_m8AE7686B6FCE9008A20241393E52C8FC6D557DC3 (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, uint16_t ___sequenceId0, uint16_t ___bit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_0 = NULL;
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_1 = NULL;
	{
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_0;
		L_0 = RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline(L_0, /*hidden argument*/NULL);
		uint16_t L_2 = ___bit1;
		if (((int32_t)((int32_t)L_1&(int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_3;
		L_3 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(__this, /*hidden argument*/NULL);
		uint16_t L_4 = ___sequenceId0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D(L_3, L_4, (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_6 = V_0;
		NullCheck(L_6);
		PendingMessage_RetrySend_m300E8A272370F11A34E03D9EADEEF59A8108C179(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_7;
		L_7 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(__this, /*hidden argument*/NULL);
		uint16_t L_8 = ___sequenceId0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D(L_7, L_8, (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_10 = V_1;
		NullCheck(L_10);
		PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572(L_10, (bool)1, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpPeer::AckMessage(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RudpPeer_AckMessage_m07FFA7925CA978AFD280844D6146FAAF2767F5BC (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, uint16_t ___seqId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * V_0 = NULL;
	bool V_1 = false;
	PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_0;
		L_0 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_2;
			L_2 = RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline(__this, /*hidden argument*/NULL);
			uint16_t L_3 = ___seqId0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D(L_2, L_3, (PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m69595D44F19F120DCA3E6BE33F19B0C0E2B8797D_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			PendingMessage_tEC472FD7E64AAD202E6F4FB2B6CBBBC02B678EDA * L_5 = V_2;
			NullCheck(L_5);
			PendingMessage_Clear_mA8FF33C1080A4239E4DC9D3082BA5493632EB572(L_5, (bool)1, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x34, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Int32 RiptideNetworking.Transports.RudpTransport.RudpPeer::GetSequenceGap(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RudpPeer_GetSequenceGap_m03099209AE6502EBDF224B3D82DBA90BDC08053F (uint16_t ___seqId10, uint16_t ___seqId21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		uint16_t L_0 = ___seqId10;
		uint16_t L_1 = ___seqId21;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		if ((((int32_t)L_3) > ((int32_t)((int32_t)32768))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0013:
	{
		uint16_t L_5 = ___seqId10;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_001e;
		}
	}
	{
		uint16_t L_6 = ___seqId10;
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0025;
	}

IL_001e:
	{
		uint16_t L_7 = ___seqId10;
		G_B5_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65536), (int32_t)L_7));
	}

IL_0025:
	{
		uint16_t L_8 = ___seqId21;
		G_B6_0 = G_B5_0;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)32768))))
		{
			G_B7_0 = G_B5_0;
			goto IL_0030;
		}
	}
	{
		uint16_t L_9 = ___seqId21;
		G_B8_0 = ((int32_t)(L_9));
		G_B8_1 = G_B6_0;
		goto IL_0037;
	}

IL_0030:
	{
		uint16_t L_10 = ___seqId21;
		G_B8_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65536), (int32_t)L_10));
		G_B8_1 = G_B7_0;
	}

IL_0037:
	{
		return ((int32_t)il2cpp_codegen_subtract((int32_t)G_B8_1, (int32_t)G_B8_0));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 RiptideNetworking.Transports.RudpTransport.SendLockables::get_LastReceivedSeqId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CLastReceivedSeqIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::set_LastReceivedSeqId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendLockables_set_LastReceivedSeqId_m02B64102C4FB280A00AAB01F22DC94936CF03E75 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CLastReceivedSeqIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.UInt16 RiptideNetworking.Transports.RudpTransport.SendLockables::get_AcksBitfield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CAcksBitfieldU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::set_AcksBitfield(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendLockables_set_AcksBitfield_mCB0C6553F32F9921C297790B691811B8C4565741 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CAcksBitfieldU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.UInt64 RiptideNetworking.Transports.RudpTransport.SendLockables::get_DuplicateFilterBitfield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CDuplicateFilterBitfieldU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::set_DuplicateFilterBitfield(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CDuplicateFilterBitfieldU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.SendLockables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendLockables__ctor_m21882D7C32EC2E5CF25591F980085EB3D2C79FD9 (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Server::CreateMessageHandlersDictionary(System.Reflection.Assembly,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_CreateMessageHandlersDictionary_m721FEC7463217502C192C08A06A2DEF777DE577C (Server_t341C40B032F925BBDC3919097CE87816871D9FF6 * __this, Assembly_t * ___assembly0, uint8_t ___messageHandlerGroupId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8228C9A1435B072D223D12B3026BFC541AC184EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFD7C0415F9C764761FF2A3B65A7FCF8E25A61CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7FDBD1F3D27F23E6B03A81375A570074C256C5AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_0_m84BDC7D4C5D55562F15656E85ACA01063BFC04A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_1_mFA3D1F8CBC562E05FA66F431F15230CCFE487DA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_0 = NULL;
	int32_t V_1 = 0;
	MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * V_2 = NULL;
	Delegate_t * V_3 = NULL;
	MethodInfo_t * V_4 = NULL;
	Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * G_B2_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B2_1 = NULL;
	Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * G_B1_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B1_1 = NULL;
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_2 = ((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->get_U3CU3E9__31_0_1();
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * L_4 = ((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_5 = (Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 *)il2cpp_codegen_object_new(Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80_il2cpp_TypeInfo_var);
		Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_0_m84BDC7D4C5D55562F15656E85ACA01063BFC04A6_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m404B13B70EC34872FF32AE47B26DC86DBC81E8FA_RuntimeMethod_var);
		Func_2_t4A5C263D84074EFF37D5A5206A9872FC18F3DE80 * L_6 = L_5;
		((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->set_U3CU3E9__31_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_SelectMany_TisType_t_TisMethodInfo_t_m2E001ECB36C88737CA82E51D2BAB5BFCCA17A2D4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_8 = ((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->get_U3CU3E9__31_1_2();
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * L_10 = ((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_11 = (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *)il2cpp_codegen_object_new(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_1_mFA3D1F8CBC562E05FA66F431F15230CCFE487DA3_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_12 = L_11;
		((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->set_U3CU3E9__31_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0049:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_14;
		L_14 = Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3(L_13, /*hidden argument*/Enumerable_ToArray_TisMethodInfo_t_m3C0B2B095992BAF2B080B923AA067578BCC006B3_RuntimeMethod_var);
		V_0 = L_14;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_15 = V_0;
		NullCheck(L_15);
		Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * L_16 = (Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 *)il2cpp_codegen_object_new(Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7FDBD1F3D27F23E6B03A81375A570074C256C5AB(L_16, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/Dictionary_2__ctor_m7FDBD1F3D27F23E6B03A81375A570074C256C5AB_RuntimeMethod_var);
		__this->set_messageHandlers_0(L_16);
		V_1 = 0;
		goto IL_018d;
	}

IL_0069:
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		MethodInfo_t * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_21;
		L_21 = CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA(L_20, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisMessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_m5AC52123B8A76F259487443679472E412BEF62EA_RuntimeMethod_var);
		V_2 = L_21;
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_22 = V_2;
		NullCheck(L_22);
		uint8_t L_23;
		L_23 = MessageHandlerAttribute_get_GroupId_m2C16CA79D8608BB093FFE18D095677C63A048D91_inline(L_22, /*hidden argument*/NULL);
		uint8_t L_24 = ___messageHandlerGroupId1;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0189;
		}
	}
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		MethodInfo_t * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		bool L_29;
		L_29 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00a8;
		}
	}
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MethodInfo_t * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Type_t * L_34;
		L_34 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_33);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		MethodInfo_t * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_38);
		String_t* L_40;
		L_40 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76BC348770255224061A387057BA3E868F365332)), L_34, L_39, /*hidden argument*/NULL);
		Exception_t * L_41 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_41, L_40, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Server_CreateMessageHandlersDictionary_m721FEC7463217502C192C08A06A2DEF777DE577C_RuntimeMethod_var)));
	}

IL_00a8:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_44 = V_0;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		MethodInfo_t * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Delegate_t * L_48;
		L_48 = Delegate_CreateDelegate_mBC1726D0AC1255215862111C17DDC5D2AA2FC750(L_43, L_47, (bool)0, /*hidden argument*/NULL);
		V_3 = L_48;
		Delegate_t * L_49 = V_3;
		if (!L_49)
		{
			goto IL_0154;
		}
	}
	{
		Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * L_50 = __this->get_messageHandlers_0();
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_51 = V_2;
		NullCheck(L_51);
		uint16_t L_52;
		L_52 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		bool L_53;
		L_53 = Dictionary_2_ContainsKey_mFD7C0415F9C764761FF2A3B65A7FCF8E25A61CBD(L_50, L_52, /*hidden argument*/Dictionary_2_ContainsKey_mFD7C0415F9C764761FF2A3B65A7FCF8E25A61CBD_RuntimeMethod_var);
		if (!L_53)
		{
			goto IL_013b;
		}
	}
	{
		Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * L_54 = __this->get_messageHandlers_0();
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_55 = V_2;
		NullCheck(L_55);
		uint16_t L_56;
		L_56 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * L_57;
		L_57 = Dictionary_2_get_Item_m54DA1D0A01EE171B182EAF006E5E0ED563C6040F(L_54, L_56, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_m54DA1D0A01EE171B182EAF006E5E0ED563C6040F_RuntimeMethod_var)));
		MethodInfo_t * L_58;
		L_58 = RuntimeReflectionExtensions_GetMethodInfo_mA9D59D730A7AD6E1017F93EF8A4786356B48D243(L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_59;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_61 = V_0;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		MethodInfo_t * L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		Type_t * L_65;
		L_65 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_64);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_65);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_65);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = L_60;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_67 = V_0;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		MethodInfo_t * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_70);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_71);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_71);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_66;
		MethodInfo_t * L_73 = V_4;
		NullCheck(L_73);
		Type_t * L_74;
		L_74 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_73);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_72;
		MethodInfo_t * L_76 = V_4;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_76);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_77);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = L_75;
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_79 = V_2;
		NullCheck(L_79);
		uint16_t L_80;
		L_80 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_79, /*hidden argument*/NULL);
		uint16_t L_81 = L_80;
		RuntimeObject * L_82 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)), &L_81);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_82);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_82);
		String_t* L_83;
		L_83 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6212245639AB603AF7EF3F8FADD89B4957CF0F00)), L_78, /*hidden argument*/NULL);
		Exception_t * L_84 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_84, L_83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Server_CreateMessageHandlersDictionary_m721FEC7463217502C192C08A06A2DEF777DE577C_RuntimeMethod_var)));
	}

IL_013b:
	{
		Dictionary_2_tF730F593C56497B8F43D030FF7B3FD67467DE1C9 * L_85 = __this->get_messageHandlers_0();
		MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * L_86 = V_2;
		NullCheck(L_86);
		uint16_t L_87;
		L_87 = MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline(L_86, /*hidden argument*/NULL);
		Delegate_t * L_88 = V_3;
		NullCheck(L_85);
		Dictionary_2_Add_m8228C9A1435B072D223D12B3026BFC541AC184EE(L_85, L_87, ((MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB *)CastclassSealed((RuntimeObject*)L_88, MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_Add_m8228C9A1435B072D223D12B3026BFC541AC184EE_RuntimeMethod_var);
		goto IL_0189;
	}

IL_0154:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_89 = { reinterpret_cast<intptr_t> (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90;
		L_90 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_89, /*hidden argument*/NULL);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_91 = V_0;
		int32_t L_92 = V_1;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		MethodInfo_t * L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Delegate_t * L_95;
		L_95 = Delegate_CreateDelegate_mBC1726D0AC1255215862111C17DDC5D2AA2FC750(L_90, L_94, (bool)0, /*hidden argument*/NULL);
		if (L_95)
		{
			goto IL_0189;
		}
	}
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_96 = V_0;
		int32_t L_97 = V_1;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		MethodInfo_t * L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		Type_t * L_100;
		L_100 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_99);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_101 = V_0;
		int32_t L_102 = V_1;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		MethodInfo_t * L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_104);
		String_t* L_106;
		L_106 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED4899F4325F00A8A63840361F14B52CAB77C55)), L_100, L_105, /*hidden argument*/NULL);
		Exception_t * L_107 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_107, L_106, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Server_CreateMessageHandlersDictionary_m721FEC7463217502C192C08A06A2DEF777DE577C_RuntimeMethod_var)));
	}

IL_0189:
	{
		int32_t L_108 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_018d:
	{
		int32_t L_109 = V_1;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_110 = V_0;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
// System.Void RiptideNetworking.Server::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Tick_mA5617926BE6B39471122F8D0AAB1049D4F18292F (Server_t341C40B032F925BBDC3919097CE87816871D9FF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommon_t6680AD6DA30524A4B1DD5E41FAB296BAD59E80F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_server_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void RiptideNetworking.Transports.ICommon::Tick() */, ICommon_t6680AD6DA30524A4B1DD5E41FAB296BAD59E80F8_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Client/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF5ED6819DD221A353AD01EF88992E66BC6365162 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * L_0 = (U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D *)il2cpp_codegen_object_new(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2C95663E0FDF73F20B0C62B8FD03C10665BD2F76(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RiptideNetworking.Client/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C95663E0FDF73F20B0C62B8FD03C10665BD2F76 (U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> RiptideNetworking.Client/<>c::<CreateMessageHandlersDictionary>b__37_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_0_m8716B9CB06686C1656E83984251AB31B006F0609 (U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_1;
		L_1 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean RiptideNetworking.Client/<>c::<CreateMessageHandlersDictionary>b__37_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__37_1_m8AADD2508385B3A28E1499ED2691052688773E52 (U3CU3Ec_t12F94130973B40AFD08137BF6A56874C707A251D * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		NullCheck(L_3);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_3)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Client/MessageHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m8AB438C9D999412B36BC457B3B0705C4EF943115 (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RiptideNetworking.Client/MessageHandler::Invoke(RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_mD25CB4025C73139E72A7C8DCB4B4A33606BA02B4 (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult RiptideNetworking.Client/MessageHandler::BeginInvoke(RiptideNetworking.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_BeginInvoke_m2B68CDC2C62C1F9FF2CEF70EF9F9614DDC84CC0D (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void RiptideNetworking.Client/MessageHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_EndInvoke_mFBB04F98EB239358D920D01814BC21D5C500DA98 (MessageHandler_tE2C47C0A685D82CDD94F71E52BB076A32048CC65 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * __this, String_t* ___log0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___log0' to native representation
	char* ____log0_marshaled = NULL;
	____log0_marshaled = il2cpp_codegen_marshal_string(___log0);

	// Native function invocation
	il2cppPInvokeFunc(____log0_marshaled);

	// Marshaling cleanup of parameter '___log0' native representation
	il2cpp_codegen_marshal_free(____log0_marshaled);
	____log0_marshaled = NULL;

}
// System.Void RiptideNetworking.Utils.RiptideLogger/LogMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMethod__ctor_m0584923F238206FBA780A48776DD11AC382CD617 (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RiptideNetworking.Utils.RiptideLogger/LogMethod::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMethod_Invoke_m21F50742D4840F7668BBDFA3AA45A267E46E48BF (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * __this, String_t* ___log0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___log0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___log0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___log0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___log0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___log0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___log0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___log0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___log0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___log0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___log0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___log0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___log0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___log0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult RiptideNetworking.Utils.RiptideLogger/LogMethod::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogMethod_BeginInvoke_mA3A427922D5A5AAE547D733A7388D945C7ADAE4E (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * __this, String_t* ___log0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___log0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void RiptideNetworking.Utils.RiptideLogger/LogMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMethod_EndInvoke_mE9568C7B098CB21C543621DC600D1C52897B0396 (LogMethod_t7D6B65E417BD3D5E15BA1C7B545FDE2913A6468B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m5CCA1E4F27840BED6328A522FEDCA177C7429456 (U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass58_0::<Handle>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CHandleU3Eb__0_m95B0DCB4119FE5F287DA7DAE1A856E3A9EF9DB88 (U3CU3Ec__DisplayClass58_0_t4A8509E03DA2E2F3F940462283CA781ECC932AFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * L_0 = __this->get_U3CU3E4__this_0();
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_1 = __this->get_message_1();
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = Message_GetUShort_m5BBEF541D7050D5B5C47FC8F28E7D998824B45E7(L_1, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_3 = __this->get_message_1();
		ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * L_4 = (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 *)il2cpp_codegen_object_new(ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767_il2cpp_TypeInfo_var);
		ClientMessageReceivedEventArgs__ctor_m2BB695C2AFA146139F87A2D46823BD367DDC1228(L_4, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		RudpClient_OnMessageReceived_m41D46A3BE9DB18E2E604E836B5C965779769F4F6(L_0, L_4, /*hidden argument*/NULL);
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_5 = __this->get_message_1();
		NullCheck(L_5);
		Message_Release_m16FD68EF5D7A64920305A5137E0BF5D79B4C6C50(L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0__ctor_m97A78BB5B48342FC46384241D5CA66CE19000F70 (U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass79_0::<OnClientConnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0_U3COnClientConnectedU3Eb__0_mA0D0B1EA963645A431A7618EFD01BADF22B1A2F3 (U3CU3Ec__DisplayClass79_0_t5BACC7002BDAEC8EA01F131E97908E7A96A27B08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * G_B2_0 = NULL;
	EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * G_B1_0 = NULL;
	{
		RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_1 = L_0->get_ClientConnected_9();
		EventHandler_1_t611B8FD8B3D6FDBE1F03D960FB1724B16A0E7A58 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * L_3 = __this->get_U3CU3E4__this_0();
		ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * L_4 = __this->get_e_1();
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950(G_B2_0, L_3, L_4, /*hidden argument*/EventHandler_1_Invoke_m7960F468775F34B34167519F1CBF86BCA990D950_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0__ctor_m1F7021520A8195D9CBFFBCD689D97DE6B66AFB89 (U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RiptideNetworking.Transports.RudpTransport.RudpClient/<>c__DisplayClass80_0::<OnClientDisconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0_U3COnClientDisconnectedU3Eb__0_m67EEE8028B6FB5AD424A8D670CBCFD1340783A00 (U3CU3Ec__DisplayClass80_0_t23F6B99C87814C1F4D754093983FA2BCCBF74B59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * G_B2_0 = NULL;
	EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * G_B1_0 = NULL;
	{
		RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_1 = L_0->get_ClientDisconnected_10();
		EventHandler_1_t30AF6ED88D2F76FB36FCE9D9A18E1CB8415E1858 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * L_3 = __this->get_U3CU3E4__this_0();
		ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * L_4 = __this->get_e_1();
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7(G_B2_0, L_3, L_4, /*hidden argument*/EventHandler_1_Invoke_m7D93637BD0F7522E409DEECAB932A1B50EEFAEB7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Server/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFDFE4E50780DA032256E94CBA9929F8B1D0F356C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * L_0 = (U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB *)il2cpp_codegen_object_new(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m90F44568ACDA34942E81F76488481EC2ED402ADC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RiptideNetworking.Server/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m90F44568ACDA34942E81F76488481EC2ED402ADC (U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> RiptideNetworking.Server/<>c::<CreateMessageHandlersDictionary>b__31_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_0_m84BDC7D4C5D55562F15656E85ACA01063BFC04A6 (U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_1;
		L_1 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean RiptideNetworking.Server/<>c::<CreateMessageHandlersDictionary>b__31_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateMessageHandlersDictionaryU3Eb__31_1_mFA3D1F8CBC562E05FA66F431F15230CCFE487DA3 (U3CU3Ec_tE8AB7FBD1DC3FCAA7F7E0BB39AB3AD87F851C1DB * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		NullCheck(L_3);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_3)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RiptideNetworking.Server/MessageHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m6E63EEF3D712CDE753209B1C5D14D520515EE743 (MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RiptideNetworking.Server/MessageHandler::Invoke(System.UInt16,RiptideNetworking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_mA1D729ABF4C624D6B6A980A8B7F0877030C61228 (MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * __this, uint16_t ___fromClientId0, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___fromClientId0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___fromClientId0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(targetMethod, targetThis, ___fromClientId0, ___message1);
					else
						GenericVirtActionInvoker2< uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(targetMethod, targetThis, ___fromClientId0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___fromClientId0, ___message1);
					else
						VirtActionInvoker2< uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___fromClientId0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint16_t, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___fromClientId0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult RiptideNetworking.Server/MessageHandler::BeginInvoke(System.UInt16,RiptideNetworking.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_BeginInvoke_mB0A34FE5A502AD6538063480A526A2F36BD03DC9 (MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * __this, uint16_t ___fromClientId0, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &___fromClientId0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void RiptideNetworking.Server/MessageHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_EndInvoke_m2A1F26AFAC36E7E2FD71911BF69872966A63D205 (MessageHandler_t78296B0CB179B5BEC600AFD62BBA4EDDFC6B1BDB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t MessageHandlerAttribute_get_GroupId_m2C16CA79D8608BB093FFE18D095677C63A048D91_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CGroupIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MessageHandlerAttribute_get_MessageId_m1CFF4B78392B608C665DC62967694E4174048BC0_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ClientMessageReceivedEventArgs_get_MessageId_m3E08A66788C94CBDB8724F8C23758A34F6019666_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ClientMessageReceivedEventArgs_get_Message_m1724616F15031BE94B0370BBC0A01D3C9F1F575C_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, const RuntimeMethod* method)
{
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientConnectedEventArgs_set_Id_m74D967E1848D4E305C27004F521D013E07FBAAC6_inline (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientDisconnectedEventArgs_set_Id_m33EFE2D1E48B7B97486DD375281D9307CFEFCBD0_inline (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs_set_MessageId_mEF2F19D501F9D139F39E2A0343B19CF3545DD798_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientMessageReceivedEventArgs_set_Message_m766697CC8D2B024579F495C78727A2AB00465007_inline (ClientMessageReceivedEventArgs_tEB263B2C3BE896846AE795A3863394B1CDD06767 * __this, Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * ___value0, const RuntimeMethod* method)
{
	{
		Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Message_get_Bytes_m2D19656FA8CBB587CC90E5283F32D5B3F0BD86CF_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CBytesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_set_Bytes_m2C98AA322C81B694DE602FDAA62CECDF9DBDEC32_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CBytesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Message_get_InstancesPerSocket_mD3314D686B0DFE7364BB3E0FC3F1D981E3CA0303_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var);
		uint8_t L_0 = ((Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_StaticFields*)il2cpp_codegen_static_fields_for(Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569_il2cpp_TypeInfo_var))->get_U3CInstancesPerSocketU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_set_MaxSendAttempts_m4411BB01AD3DDDA7084B8E0E628A032B68FA00E2_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSendAttemptsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_set_SendMode_mD4BE9944ECDC6FE71AD2B73267FB20D232682985_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CSendModeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RiptideConverter_FromShort_m6C9E37959B64142EC4089281827B45471CF26F66_inline (int16_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array1;
		int32_t L_1 = ___startIndex2;
		int16_t L_2 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___array1;
		int32_t L_4 = ___startIndex2;
		int16_t L_5 = ___value0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8)))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RiptideConverter_FromUShort_mE9EFA8A2D4C19EE9C82CD3BD8767426BB591196A_inline (uint16_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array1;
		int32_t L_1 = ___startIndex2;
		uint16_t L_2 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___array1;
		int32_t L_4 = ___startIndex2;
		uint16_t L_5 = ___value0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8)))));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RiptideConverter_ToUShort_m68D39AF0DE9FDC647CAE9BB749D7E1F5103C4B24_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___startIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___startIndex1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RiptideConverter_ToInt_mFBD0E73EAB2AEE4D92DA9AD609CAE760F2746308_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___startIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___startIndex1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___array0;
		int32_t L_9 = ___startIndex1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		int32_t L_13 = ___startIndex1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_15<<(int32_t)((int32_t)24)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RiptideConverter_FromFloat_m469D069E6BAD6A9D4CAC9477E989FEAE749749AE_inline (float ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78 ));
		float L_0 = ___value0;
		(&V_1)->set_floatValue_4(L_0);
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_1 = V_1;
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___array1;
		int32_t L_3 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_4 = V_0;
		uint8_t L_5 = L_4.get_byte0_0();
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___array1;
		int32_t L_7 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_8 = V_0;
		uint8_t L_9 = L_8.get_byte1_1();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))), (uint8_t)L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___array1;
		int32_t L_11 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_12 = V_0;
		uint8_t L_13 = L_12.get_byte2_2();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2))), (uint8_t)L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___array1;
		int32_t L_15 = ___startIndex2;
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_16 = V_0;
		uint8_t L_17 = L_16.get_byte3_3();
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)3))), (uint8_t)L_17);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RiptideConverter_ToFloat_mDFEB9E26D48E95BF8AFBEEAB82CC5713FD005A02_inline (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FloatConverter_tEB4334A16A790325F1554971712A528488A58B78 ));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		int32_t L_1 = ___startIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		(&V_0)->set_byte0_0(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___startIndex1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->set_byte1_1(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___array0;
		int32_t L_9 = ___startIndex1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->set_byte2_2(L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___array0;
		int32_t L_13 = ___startIndex1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		(&V_0)->set_byte3_3(L_15);
		FloatConverter_tEB4334A16A790325F1554971712A528488A58B78  L_16 = V_0;
		float L_17 = L_16.get_floatValue_4();
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerAttribute_set_MessageId_m9C405B77EBC05BAD15D7817EDA77282B368C2FD8_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerAttribute_set_GroupId_m10E5107FFC4AD8AEAA33BBDABA983C53BA2FE6D1_inline (MessageHandlerAttribute_t449B0ABE4FE23FD13E4A4B0329B9A643D53DD1CE * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CGroupIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Message_get_WrittenLength_m63AF0CCBD1E5F6D4E05C780BB40A7DF680124F12_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_writePos_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Message_get_MaxSendAttempts_m6BFB36C11D38B8C5FF4ADEBD2C518E86C131F4A8_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMaxSendAttemptsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * RudpPeer_get_PendingMessages_m42A7ADCC8543491968CB1BFE2CEABA432038966F_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_tF4F75B70754E6212794E8F8737D506EA860C4A08 * L_0 = __this->get_U3CPendingMessagesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t RudpPeer_get_SmoothRTT_mB260563C8EFF2BD79174F11283548368E6F27454_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = __this->get_U3CSmoothRTTU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RudpClient_get_TimeoutTime_mAC452ABB9CCBFCC21D6B0EED26FD4AC58C8C48A5_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CTimeoutTimeU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpClient_set_TimeoutTime_m3F6DE1073977DBEC816B9D6DE2DFD2B581EF2CCD_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CTimeoutTimeU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RudpClient_get_HeartbeatInterval_mD2AAE26570F96CEC462645EC108145183DCE1641_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get__heartbeatInterval_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * RudpPeer_get_SendLockables_mED510DE05D89C4FE59A3106901E5968A84064E8C_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_0 = __this->get_U3CSendLockablesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Message_get_SendMode_m3BF7BB785831D48377DE8E237561CBA082B26BFA_inline (Message_t4B50411ADC342D6E1FE18A0A19CCB8B90E8E4569 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CSendModeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t SendLockables_get_LastReceivedSeqId_m01011B97B0C7ABBB5512AD6AB59D3850DB7EA2C2_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CLastReceivedSeqIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t SendLockables_get_AcksBitfield_m3E25073CD5A7D786E121ECF0B0A99851C097B5C0_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CAcksBitfieldU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t RudpPeer_get_RTT_mE0269EB9948B2C5429DD4AD46B6DDC4117BDCF3E_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = __this->get__rtt_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpClient_set_Id_mE56DE7357D9D888A0FF757720E3A7FFABF8505D0_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t RudpClient_get_Id_m73117F5F221005800790BC5E8C4038E3DD84BF61_inline (RudpClient_t9500E9E9B2070DD7A4F22E3857773C81742EA0DB * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ClientConnectedEventArgs_get_Id_m5E4780AACD9CDBD4673E05DFBBCE7AB822CDD27A_inline (ClientConnectedEventArgs_tB302A2F766913F640505833C235743F25A879779 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ClientDisconnectedEventArgs_get_Id_m571DA559459A48F1698A86F13F1865BD0C6C56E5_inline (ClientDisconnectedEventArgs_t44E9371139AAFE05499D8BC4788D99A25F4C6052 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_addressFamily_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t SendLockables_get_DuplicateFilterBitfield_mDDFAA75336CF1BBA968B14764EF63D80CA737FF1_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CDuplicateFilterBitfieldU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendLockables_set_DuplicateFilterBitfield_m62074C9E1C55B0E73E87780AE3C621F2EF20E827_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CDuplicateFilterBitfieldU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendLockables_set_AcksBitfield_mCB0C6553F32F9921C297790B691811B8C4565741_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CAcksBitfieldU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendLockables_set_LastReceivedSeqId_m02B64102C4FB280A00AAB01F22DC94936CF03E75_inline (SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CLastReceivedSeqIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpPeer_set_SmoothRTT_m2856DB9A1B8B6EC54D62E397A90D48D5141EC9A5_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___value0;
		__this->set_U3CSmoothRTTU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpPeer_set_SendLockables_m35BDBC82D8E8A75BA5F2B6B42DD26BE4EC82FF50_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * ___value0, const RuntimeMethod* method)
{
	{
		SendLockables_t544CFFB51FE60932AE6D9E6997BBA58BA54F8D89 * L_0 = ___value0;
		__this->set_U3CSendLockablesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RudpPeer_set_ReceiveLockables_m0A61A306F97DED5964258E7E0E3BC66699096ABE_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * ___value0, const RuntimeMethod* method)
{
	{
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_0 = ___value0;
		__this->set_U3CReceiveLockablesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * RudpPeer_get_ReceiveLockables_mD7C4CD97B1FB30EF7CC36FEA8F234631F2DB856B_inline (RudpPeer_t53B669FA3D35D9E00904F35D174544F9C6DDB43C * __this, const RuntimeMethod* method)
{
	{
		ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * L_0 = __this->get_U3CReceiveLockablesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ReceiveLockables_get_LastAckedSeqId_mD90F7CA33F55E8695FFD6CE4089BF31CBC301370_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CLastAckedSeqIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ReceiveLockables_get_AckedMessagesBitfield_mE0D8300D634EE2C15CEB8F7FADB4E5866EA3BCC0_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CAckedMessagesBitfieldU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiveLockables_set_AckedMessagesBitfield_m795985FCCF89204945B6E5DD0DA2BF0ACE27DEC3_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CAckedMessagesBitfieldU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiveLockables_set_LastAckedSeqId_mEEB9AFD0C4A51C16F14376FF9ADB48CE95B06EAC_inline (ReceiveLockables_tCFF65BC24FFF940BE6929615FBB2A4B8F95567DC * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CLastAckedSeqIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC321D19E6422F5735E6E2414919640C643CD9DA6_gshared_inline (Enumerator_tE80477EB46E94828624A5443D4DD72B836AD42E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
