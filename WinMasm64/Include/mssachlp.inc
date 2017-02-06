IFNDEF MSSACHLP_INC
MSSACHLP_INC equ <1>

PROTO64 external,A_SHAFinal, :QWORD,:QWORD
PROTO64 external,A_SHAInit, :QWORD
PROTO64 external,A_SHAUpdate, :QWORD,:QWORD,:QWORD
PROTO64 external,CBC, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,K2_quad1, :QWORD,:QWORD,:QWORD
PROTO64 external,Kadd, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Kdiv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Kinitialize_prime, :QWORD,:QWORD,:QWORD
PROTO64 external,Kiszero, :QWORD,:QWORD
PROTO64 external,Kmul, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Kmuladd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Ksqrt, :QWORD,:QWORD,:QWORD
PROTO64 external,NewGenRandom, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,add_diff, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,compare_diff, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,create_modulus, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,des, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,deskey, :QWORD,:QWORD
PROTO64 external,divide, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,divide_precondition_1, :QWORD,:QWORD,:QWORD
PROTO64 external,ec_initialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ecaffine_addition, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ecaffine_exponentiation_tabular, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ecaffine_is_infinite, :QWORD,:QWORD
PROTO64 external,ecaffine_on_curve, :QWORD,:QWORD
PROTO64 external,ecaffine_table_construction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,from_modular, :QWORD,:QWORD,:QWORD
PROTO64 external,mp_alloc_temp, :QWORD
PROTO64 external,mp_free_temp, :QWORD
PROTO64 external,mp_gcdex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,mp_initialization, 
PROTO64 external,mp_significant_bit_count, :QWORD,:QWORD
PROTO64 external,multiply, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,random_mod_nonzero, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4, :QWORD,:QWORD,:QWORD
PROTO64 external,rc4_key, :QWORD,:QWORD,:QWORD
PROTO64 external,to_modular, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mssachlp.inc
echo -----------------------------------------
ENDIF

