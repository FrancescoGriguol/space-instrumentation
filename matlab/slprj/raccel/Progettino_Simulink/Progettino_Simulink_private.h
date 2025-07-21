#ifndef RTW_HEADER_Progettino_Simulink_private_h_
#define RTW_HEADER_Progettino_Simulink_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "Progettino_Simulink.h"
#include "Progettino_Simulink_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern void rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( const real_T u0 [ 3 ] ,
const real_T u1 [ 9 ] , real_T y [ 3 ] ) ; extern void o1ufogpfkh ( SimStruct
* rtS_i ) ; extern void bt0ohfons5 ( jcmif1ovzr * localDW ) ; extern void
ojlk3jq5sd ( SimStruct * rtS_e ) ; extern void ppzwf3ql1x ( SimStruct * rtS_m
, real_T nwc3kgl3em , const real_T bjjsmrebzs [ 9 ] , real_T fyvdjmi0dv [ 4 ]
, aiaszp10gy * localB , jcmif1ovzr * localDW , ipwjrrbf45 * localP ) ; extern
void g1nmhbiknr ( SimStruct * rtS_g ) ; extern void cscldkl50b ( SimStruct *
rtS_i , dup0c5r5be * localDW ) ; extern void f0tgwxnu5e ( const real_T
cmr3mephrs [ 9 ] , hdlw0y3pau * localB , dup0c5r5be * localDW , ijvvbz1u4h *
localP , jidt4ig5dn * localZCSV ) ; extern void jjhwrdjhnj ( SimStruct *
rtS_e , dup0c5r5be * localDW ) ; extern void dbflsykori ( SimStruct * rtS_p ,
const real_T cmr3mephrs [ 9 ] , real_T ce52epg2xh [ 4 ] , hdlw0y3pau * localB
, dup0c5r5be * localDW , ijvvbz1u4h * localP ) ; extern void lwsow1det3 (
SimStruct * rtS_m ) ; extern void i50pfhnvwe ( SimStruct * rtS_f ) ; extern
void p4ng3pagc3 ( ah50x01gok * localDW ) ; extern void eg4xwfb0cz ( SimStruct
* rtS_p ) ; extern void mtz2m3yxio ( SimStruct * rtS_k , ah50x01gok * localDW
) ; extern void dqwtfcorgm ( SimStruct * rtS_b , ah50x01gok * localDW ) ;
extern void d35ajiya3p ( SimStruct * rtS_c , const real_T enjmkmnghy [ 9 ] ,
uint8_T rtp_action , real_T rtp_tolerance , ah50x01gok * localDW , cyxavry0tp
* localP ) ; extern void jn5quwmo0g ( SimStruct * rtS_b ) ; extern void
e4vvv5vgls ( SimStruct * rtS_n ) ; extern void fwabxxddoc ( SimStruct * rtS_l
, real_T * cupm3xly4b , ffovmq5xj5 * localP ) ; extern void bhxuznhhel (
SimStruct * rtS_fs ) ; extern void mzqkh5aiv2 ( SimStruct * rtS_dz ) ; extern
void bpabrhgrbk ( SimStruct * rtS_ck , real_T * n41fnbuvas , n5wmczawxw *
localP ) ; extern void idk2jepdn0 ( SimStruct * rtS_kt ) ; extern void
faos5bimks ( SimStruct * rtS_f2 ) ; extern void hm2ju42yt2 ( real_T
d2tbcumz04 , real_T * lnzqe23efj ) ; extern void eyzwstilr5 ( SimStruct *
rtS_ap ) ; extern void o20rzthg04 ( SimStruct * rtS_hn ) ; extern void
cjawymwwjl ( real_T lr1mrzjpnv , real_T af22sesgcq , real_T * i1v43uuzjw ,
real_T * gpmgaowioo , fcqzy5lqzo * localP ) ; extern void i1dme30ivm (
SimStruct * rtS_pk ) ; extern void ivkyln3pkr ( SimStruct * rtS_po ) ; extern
void gyjjptmc2f ( real_T mlrviipuch , real_T ias4kgxpet , real_T * nidppr0p1h
, real_T * kahk0hr5gu ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
