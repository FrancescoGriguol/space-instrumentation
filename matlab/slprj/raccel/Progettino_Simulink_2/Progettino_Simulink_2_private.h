#ifndef RTW_HEADER_Progettino_Simulink_2_private_h_
#define RTW_HEADER_Progettino_Simulink_2_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "Progettino_Simulink_2.h"
#include "Progettino_Simulink_2_types.h"
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
extern void ej0osrp4wb ( SimStruct * rtS_e ) ; extern void dzlwxqktfk (
SimStruct * rtS_p ) ; extern void ozfexalcpn ( SimStruct * rtS_i , real_T *
lumtwtramf , frbh1cromw * localP ) ; extern void g3k22oto2w ( SimStruct *
rtS_i ) ; extern void ell5h2cuzo ( SimStruct * rtS_m ) ; extern void
fqsnbatx0d ( SimStruct * rtS_e , real_T * nqmbghibf0 , nn2fv4tgwj * localP )
;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
