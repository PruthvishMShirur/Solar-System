#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3696583168.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168550;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct  TlsServerCertificate_t2716496392  : public HandshakeMessage_t3696583168
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::certificates
	X509CertificateCollection_t1542168550 * ___certificates_9;

public:
	inline static int32_t get_offset_of_certificates_9() { return static_cast<int32_t>(offsetof(TlsServerCertificate_t2716496392, ___certificates_9)); }
	inline X509CertificateCollection_t1542168550 * get_certificates_9() const { return ___certificates_9; }
	inline X509CertificateCollection_t1542168550 ** get_address_of_certificates_9() { return &___certificates_9; }
	inline void set_certificates_9(X509CertificateCollection_t1542168550 * value)
	{
		___certificates_9 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
