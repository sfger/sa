IFNDEF DNSCRCLI_INC
DNSCRCLI_INC equ <1>

PROTO64 external,CRrGetHashTableStats, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CRrReadCache, :QWORD,:QWORD
PROTO64 external,CRrReadCacheEntry, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CRrUpdateTest, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DNS_RPC_HANDLE_bind, :QWORD
PROTO64 external,DNS_RPC_HANDLE_unbind, :QWORD,:QWORD
PROTO64 external,DnsApiAlloc, :QWORD
PROTO64 external,DnsApiFree, :QWORD
PROTO64 external,MIDL_user_allocate, :QWORD
PROTO64 external,MIDL_user_free, :QWORD
PROTO64 external,R_ResolverEnumCache, :QWORD,:QWORD,:QWORD
PROTO64 external,R_ResolverFlushCache, :QWORD
PROTO64 external,R_ResolverFlushCacheEntry, :QWORD,:QWORD,:QWORD
PROTO64 external,R_ResolverGetConfig, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_ResolverGetLocalAddrInfoArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_ResolverPoke, :QWORD,:QWORD,:QWORD
PROTO64 external,R_ResolverQuery, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_ResolverRegisterCluster, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_CRrGetHashTableStats, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dnscrcli.inc
echo -----------------------------------------
ENDIF

