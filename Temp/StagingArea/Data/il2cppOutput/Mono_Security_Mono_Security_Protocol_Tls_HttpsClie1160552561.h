#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_SslClient3914624661.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1669436515;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3743405224;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3240194217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t1160552561  : public SslClientStream_t3914624661
{
public:
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t1669436515 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;

public:
	inline static int32_t get_offset_of__request_20() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561, ____request_20)); }
	inline HttpWebRequest_t1669436515 * get__request_20() const { return ____request_20; }
	inline HttpWebRequest_t1669436515 ** get_address_of__request_20() { return &____request_20; }
	inline void set__request_20(HttpWebRequest_t1669436515 * value)
	{
		____request_20 = value;
		Il2CppCodeGenWriteBarrier(&____request_20, value);
	}

	inline static int32_t get_offset_of__status_21() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561, ____status_21)); }
	inline int32_t get__status_21() const { return ____status_21; }
	inline int32_t* get_address_of__status_21() { return &____status_21; }
	inline void set__status_21(int32_t value)
	{
		____status_21 = value;
	}
};

struct HttpsClientStream_t1160552561_StaticFields
{
public:
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t3743405224 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t3240194217 * ___U3CU3Ef__amU24cache3_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline CertificateSelectionCallback_t3743405224 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline CertificateSelectionCallback_t3743405224 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(CertificateSelectionCallback_t3743405224 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline PrivateKeySelectionCallback_t3240194217 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline PrivateKeySelectionCallback_t3240194217 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(PrivateKeySelectionCallback_t3240194217 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
