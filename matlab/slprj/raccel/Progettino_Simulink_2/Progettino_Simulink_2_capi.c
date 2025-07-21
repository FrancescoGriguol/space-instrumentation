#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Progettino_Simulink_2_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Progettino_Simulink_2.h"
#include "Progettino_Simulink_2_capi.h"
#include "Progettino_Simulink_2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 0 , TARGET_STRING ( "Progettino_Simulink_2/Spacecraft Dynamics" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 1 , 0
, 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "" ) , 2 , 0
, 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Rotation Angles to Quaternions/1//2" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/fcn3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/OR"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Trigonometric Function1"
) , TARGET_STRING ( "r1" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Trigonometric Function3"
) , TARGET_STRING ( "r3" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/trigFcn"
) , TARGET_STRING ( "r2" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/divide2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/divide3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/divide4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/divide5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 25 , 5 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 4 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 27 , 6 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/e = (v x h) // mu - r // |r|"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/e_k < 0"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n_j < 0"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/r.v < 0"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/RAAN = acos(n_i // |n|)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/argP = acos(n.e//|n||e|)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/nu = acos(e.r//|e||r|)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Dot Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 42 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/Abs1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 43 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 47 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 48 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 49 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/is 180deg Rot"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 51 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Demo Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Demo Controller/Filter/Differentiator/Diff"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 109 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Demo Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Demo Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
"Progettino_Simulink_2/Attitude  Controller/Demo Controller/Sum/Sum_PD/Sum" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 122 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 124 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 145 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 155 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 156 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 157 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 158 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 159 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 160 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 163 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 164 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 165 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 166 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 167 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 169 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 170 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 171 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 172 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 173 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain/Min"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 174 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain1/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 175 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain1/Min"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 176 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain2/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 177 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain2/Min"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 178 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain3/Max"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 179 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain3/Min"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 180 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 181 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/icrf2lvlh/1//2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 182 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 183 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q0/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 185 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q0/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 186 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q0/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 187 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q0/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 188 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q0/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 189 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 190 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 192 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 200 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 201 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 202 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 203 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Multiplication/q3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 204 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 205 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 206 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 207 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 208 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q0/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 209 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 210 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 211 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 212 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 213 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 214 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 215 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 216 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 217 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 218 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 219 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 220 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 221 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 222 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 223 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Multiplication2/q3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 224 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 225 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 226 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 227 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 228 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 229 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 230 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 231 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 232 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 233 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 234 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 235 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 236 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 237 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 238 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 239 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 241 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 243 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 244 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 245 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 246 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 247 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 248 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 249 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 250 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 251 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 252 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 253 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 255 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 256 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 257 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 258 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 259 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 260 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 261 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 262 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 263 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 264 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 265 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 266 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 267 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 268 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 269 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product6"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 270 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product7"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 271 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 272 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 273 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 274 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 275 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 276 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 277 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 278 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 279 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 280 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 281 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 282 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 283 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 284 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Dot Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 285 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 286 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 287 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 288 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 289 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 290 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 291 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 292 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 293 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 294 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 295 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2/In"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 296 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 297 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 298 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 299 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 300 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 301 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 302 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 303 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 304 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 305 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 306 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/h = r x v/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 307 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 308 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 309 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 310 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 311 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 312 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n = K x h/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 313 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 314 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 315 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 316 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 317 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 318 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/v x h/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 319 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 320 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 321 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 322 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 323 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 324 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 325 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 326 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 327 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 328 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 329 , 16 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 330 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 331 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 332 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 333 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 334 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 335 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 336 , 20 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 337 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/3x3 Cross Product/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 338 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 339 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 340 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 341 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 342 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 343 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product1/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 344 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 345 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 346 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 347 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 348 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 349 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Vector Projection1/3x3 Cross Product2/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 350 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 351 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 352 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 353 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 354 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/ConditionAttInputs/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 355 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 356 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 357 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 358 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 359 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 360 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Demo Controller/Filter/Differentiator/Tsamp/Internal Ts/Tsamp"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 361 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 362 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 363 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 364 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 365 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 366 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 367 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 368 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 369 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 370 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 371 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 372 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 373 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 374 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 375 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/Quaternion Normalize/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 376 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 377 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 378 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 379 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 380 , 0 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 381 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 382 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 383 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 384 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 385 , 21 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Quaternion Normalize2/Quaternion Modulus/Quaternion Norm/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 386 , TARGET_STRING (
"Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1" ) , TARGET_STRING
( "primaryAlignment" ) , 0 , 3 , 0 } , { 387 , TARGET_STRING (
"Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1" ) , TARGET_STRING
( "secondaryAlignment" ) , 0 , 3 , 0 } , { 388 , TARGET_STRING (
"Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1" ) , TARGET_STRING
( "secondaryConstraint" ) , 0 , 3 , 0 } , { 389 , TARGET_STRING (
"Progettino_Simulink_2/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , {
390 , TARGET_STRING ( "Progettino_Simulink_2/Spacecraft Dynamics" ) ,
TARGET_STRING ( "startDate" ) , 0 , 1 , 0 } , { 391 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "mass" ) , 0
, 1 , 0 } , { 392 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "emptyMass" )
, 0 , 1 , 0 } , { 393 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "fullMass" )
, 0 , 1 , 0 } , { 394 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "inertia" ) ,
0 , 4 , 0 } , { 395 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"emptyInertia" ) , 0 , 4 , 0 } , { 396 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "fullInertia"
) , 0 , 4 , 0 } , { 397 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"semiMajorAxis" ) , 0 , 1 , 0 } , { 398 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"eccentricity" ) , 0 , 1 , 0 } , { 399 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "inclination"
) , 0 , 1 , 0 } , { 400 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "raan" ) , 0
, 1 , 0 } , { 401 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"argPeriapsis" ) , 0 , 1 , 0 } , { 402 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "trueAnomaly"
) , 0 , 1 , 0 } , { 403 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "trueLon" ) ,
0 , 1 , 0 } , { 404 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "argLat" ) ,
0 , 1 , 0 } , { 405 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"lonPeriapsis" ) , 0 , 1 , 0 } , { 406 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialPosition" ) , 0 , 3 , 0 } , { 407 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"inertialVelocity" ) , 0 , 3 , 0 } , { 408 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"fixedPosition" ) , 0 , 3 , 0 } , { 409 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"fixedVelocity" ) , 0 , 3 , 0 } , { 410 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "attitude" )
, 0 , 3 , 0 } , { 411 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"attitudeRate" ) , 0 , 3 , 0 } , { 412 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "customR" ) ,
0 , 1 , 0 } , { 413 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "customF" ) ,
0 , 1 , 0 } , { 414 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "customMu" )
, 0 , 1 , 0 } , { 415 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "customJ2" )
, 0 , 1 , 0 } , { 416 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "customOmega"
) , 0 , 1 , 0 } , { 417 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRA" ) , 0
, 1 , 0 } , { 418 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRARate" )
, 0 , 1 , 0 } , { 419 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDec" ) , 0
, 1 , 0 } , { 420 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "cbDecRate" )
, 0 , 1 , 0 } , { 421 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotAngle"
) , 0 , 1 , 0 } , { 422 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "cbRotRate" )
, 0 , 1 , 0 } , { 423 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"F107ExtrapValue" ) , 0 , 1 , 0 } , { 424 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"MagneticIndexExtrapValue" ) , 0 , 1 , 0 } , { 425 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "fluxFlags" )
, 0 , 5 , 0 } , { 426 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "dragCoeff" )
, 0 , 1 , 0 } , { 427 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "dragArea" )
, 0 , 1 , 0 } , { 428 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"customThirdBodyMu" ) , 0 , 1 , 0 } , { 429 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"reflectivityCoeff" ) , 0 , 1 , 0 } , { 430 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING ( "srpArea" ) ,
0 , 1 , 0 } , { 431 , TARGET_STRING (
"Progettino_Simulink_2/Spacecraft Dynamics" ) , TARGET_STRING (
"fluxPressure" ) , 0 , 1 , 0 } , { 432 , TARGET_STRING (
"Progettino_Simulink_2/Attitude  Controller/Demo Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 1 , 0 } , { 433 , TARGET_STRING (
"Progettino_Simulink_2/Attitude  Controller/Demo Controller" ) ,
TARGET_STRING ( "D" ) , 0 , 1 , 0 } , { 434 , TARGET_STRING (
"Progettino_Simulink_2/Attitude  Controller/Demo Controller" ) ,
TARGET_STRING ( "DifferentiatorICPrevScaledInput" ) , 0 , 1 , 0 } , { 435 ,
TARGET_STRING ( "Progettino_Simulink_2/Attitude  Controller/Demo Controller"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 1 , 0 } , { 436 ,
TARGET_STRING ( "Progettino_Simulink_2/Attitude  Controller/Demo Controller"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 437 ,
TARGET_STRING ( "Progettino_Simulink_2/Rotation Angles to Quaternions/1//2" )
, TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 438 , TARGET_STRING (
"Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 439 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh"
) , TARGET_STRING ( "mu" ) , 0 , 1 , 0 } , { 440 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 441 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 442 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 443 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 444 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/e_k < 0"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 445 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/n_j < 0"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 446 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/r.v < 0"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 447 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 448 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 449 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel2/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 450 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel2/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 451 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 452 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 453 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 454 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 455 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 456 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 457 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 458 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 459 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 460 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 461 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 462 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 463 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 464 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 465 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 466 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 467 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 468 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 469 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 470 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 471 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 472 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 473 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 474 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 475 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 476 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 477 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 478 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcC1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 479 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 480 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 481 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 482 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain1/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 483 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 484 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain2/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 485 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 486 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/constrain3/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 487 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/CalcCFrame/Calculate q_icrf2lvlh/icrf2lvlh/1//2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 488 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 489 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 490 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel1/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 491 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 492 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 493 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Check Parallel2/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 494 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 495 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 496 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 497 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 498 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 499 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 500 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 501 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 502 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 503 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 504 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 505 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion Rotation5/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 506 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 507 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 508 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 509 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 510 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 511 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 512 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 513 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 514 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 515 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 516 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 517 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Find Orthogonal/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 518 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 519 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 520 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 521 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 522 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 523 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 524 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 525 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude Profile (Nadir Pointing)1/Compute Alignment Quaternion/Quaternion between vectors1/Check Parallel/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 526 , TARGET_STRING (
 "Progettino_Simulink_2/Attitude  Controller/Demo Controller/Filter/Differentiator/Tsamp/Internal Ts/Tsamp"
) , TARGET_STRING ( "WtEt" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . hwvdsemzgc [ 0 ] , & rtB .
bed3ixhpn2 [ 0 ] , & rtB . brmokcdrio [ 0 ] , & rtB . herymyrphl [ 0 ] , &
rtB . lqsl4ymlvn [ 0 ] , & rtB . ew4u2f3xgf , & rtB . d2mfefylik [ 0 ] , &
rtB . p5dijejcv0 , & rtB . miii41y12z [ 0 ] , & rtB . fyyloj5ilz [ 0 ] , &
rtB . fyyloj5ilz [ 0 ] , ( & rtB . fyyloj5ilz [ 0 ] + 2 ) , ( & rtB .
fyyloj5ilz [ 0 ] + 1 ) , & rtB . lfck0pbfjx , & rtB . aeajq4je2s , & rtB .
orhgartrih , & rtB . fpiyu35svk , & rtB . npgjijt1ny , & rtB . kqes3b4oud , &
rtB . m3lcv53etn , & rtB . itowmjt5vu , & rtB . bvelrlu4dc [ 0 ] , & rtB .
b5gc2y1die [ 0 ] , & rtB . bp3ne4djuj , & rtB . c1hnstgmt4 , & rtB .
fokvzatosq , & rtB . os0k0xqvmv , & rtB . lw2a4emitu , & rtB . nquspmmxyg , &
rtB . dngeokumuv [ 0 ] , & rtB . ajc5xr2jf5 , & rtB . n4n4yi4qrh , & rtB .
b0puueye0x , & rtB . k20ttjcogc , & rtB . hjqbjiq155 , & rtB . eoq2m1oml5 , &
rtB . bop1clvc51 , & rtB . l4dlkfdzpp , & rtB . e330hnzury , & rtB .
cqduybqaka , & rtB . g0s5armlux , & rtB . el2psjjgtn , & rtB . goprgej0ya , &
rtB . inrhmp0val , & rtB . ge0vukj2kn , & rtB . pniokh1pkw [ 0 ] , & rtB .
mvm4zfrmra , & rtB . miefe1av4y , & rtB . ijsckddbr2 , & rtB . ipnq4eflyu [ 0
] , & rtB . eqkrgoempo , & rtB . lqd2nodifg , & rtB . f0txzidtlg , & rtB .
lb2fr4utt0 , & rtB . b2nvvrve1n , & rtB . daj0qzzfez , & rtB . j2aun4xa5l , &
rtB . fmuzw3y2ay , & rtB . edjzmn0qwv , & rtB . ovufk02f52 , & rtB .
mc4pyvaaam , & rtB . hg5bv3vzuf , & rtB . lpbqrpu1jn , & rtB . opz0vchhvw , &
rtB . lhu0itmrnu , & rtB . kixpmyuot5 , & rtB . c3uoja0hs1 , & rtB .
p41cylkrvy , & rtB . ieufwpzafa , & rtB . ablbynsako , & rtB . bj12zrdsgl , &
rtB . kw0oysgnin , & rtB . bhkbayxccr , & rtB . elffql50h0 , & rtB .
i5wsbqbx3f , & rtB . dduvoybpbb , & rtB . kkrjjbdr2e , & rtB . b5e00e1031 , &
rtB . aaymhmvzx3 , & rtB . fpgntvbv2k , & rtB . dhbnc3d3gi , & rtB .
hxz4i04vsk , & rtB . mszceanoh4 , & rtB . le5ag1nozi , & rtB . fqofrbtel3 , &
rtB . kujykg0wdo , & rtB . byrjgsv4bg , & rtB . cj1l4yqqp3 , & rtB .
b1mzkpk1k1 , & rtB . g2o4huhmci , & rtB . ptgv4cuezm , & rtB . pkyad212ak , &
rtB . dkvr1dmakj , & rtB . gf3qkc5xul , & rtB . fwx1mmvj4u , & rtB .
n4opippzuv , & rtB . bxmigoh5ke , & rtB . esjtfx0bso , & rtB . gemw0phi5b , &
rtB . ett2u0cxhv , & rtB . akcz5sweh0 , & rtB . prspdmxwxa , & rtB .
ijiz1yqe3s , & rtB . d43tguid1w , & rtB . i5z2ckf2gh , & rtB . maybar53im , &
rtB . pq4sa5eyn1 , & rtB . hg0stcakyi [ 0 ] , & rtB . kumbe2lmbx [ 0 ] , &
rtB . g4mrmyycxt [ 0 ] , & rtB . a5bomnic04 [ 0 ] , & rtB . gcvocxch2a [ 0 ]
, & rtB . pzslztziz4 , & rtB . pzslztziz4 , & rtB . pzslztziz4 , & rtB .
pzslztziz4 , & rtB . iin3omkh3m , & rtB . dzes52hxg4 , & rtB . i0ktxf5xah , &
rtB . oetwa35hv4 , & rtB . na5lj1lmmo , & rtB . mt5hkjamkd , & rtB .
cjqhmv2ncl , & rtB . e3se1oublh , & rtB . eyggydhvdc , & rtB . pw0jwl1nqw , &
rtB . a4kt4hvwzb , & rtB . fty4ztxqgw , & rtB . pkwxa3bl1k , & rtB .
ekzgxwfzub , & rtB . dh3hx3m1f4 , & rtB . bcvgvonzqc , & rtB . dfwizamt1u , &
rtB . ketpxvax42 , & rtB . h5fl43crr2 , & rtB . mbwwzd12s3 , & rtB .
acdxadew0d , & rtB . c5ynwjufvx , & rtB . a4zmidwjrt , & rtB . kw2m0cjqpw , &
rtB . duhh5hsq31 , & rtB . dbs0rl525h , & rtB . ecct0soimw , & rtB .
igwzj1ytle , & rtB . ld1yr2qzq3 , & rtB . fwcurtmbmr , & rtB . jfl00yvgrd , &
rtB . efq2gopxkt , & rtB . bg5rgepnwu , & rtB . kk2fkibzdi , & rtB .
jnzytf21hw , & rtB . iw3jzuhofs , & rtB . f1u1kgizgs , & rtB . jzibn2jzkl , &
rtB . cluthxuo0o , & rtB . m4k3cvyusv , & rtB . bohx2mqfib , & rtB .
mmyxw41ii0 , & rtB . ftygp0douc , & rtB . atotr0yy2l , & rtB . ab1acz5psy , &
rtB . dfo3iezo2w , & rtB . gm214110mv , & rtB . niqqtb5bzt , & rtB .
ierptzclqz , & rtB . hh3cewyuqs , & rtB . piggqo0f15 , & rtB . bsy1hfnklf , &
rtB . gfhi2chwy1 , & rtB . acyyfbsb4l , & rtB . jwjq0rj5uw , & rtB .
e1ed23zngo , & rtB . e1mmow3csa , & rtB . dtfbjff2jg , & rtB . lfsh4e3bwp , &
rtB . a4shbdupzs , & rtB . oz3dymucgg , & rtB . ezyqhth244 , & rtB .
ijzsdirxre , & rtB . nyhifvxcsj , & rtB . bxzfirxs33 [ 0 ] , & rtB .
gee3rrk3ny [ 0 ] , & rtB . n5jg5w1v21 [ 0 ] , & rtB . fij5wo3gxn [ 0 ] , &
rtB . eac1hp1hzc , & rtB . o1cebdj0tr , & rtB . avn0fquoii , & rtB .
pag5e2tm4x , & rtB . hqpe5h53ep , & rtB . iwzvhi4mhy , & rtB . oip2gbnnci , &
rtB . oyccwqf23y , & rtB . hxtdtqwl0b , & rtB . mlw0td2gji , & rtB .
kfuuvpn0xn , & rtB . hzayfrfeh0 , & rtB . c4udbivv0q , & rtB . louda2tysx , &
rtB . icfk0dewms , & rtB . mvkvrxq2fp , & rtB . pdy5cram3a , & rtB .
pvgpu45zl2 , & rtB . jyiuecj0yv , & rtB . fawfd22i1u , & rtB . mj0djwcgev , &
rtB . fg4tiogtys , & rtB . him5w05q10 , & rtB . lnxlasbybi , & rtB .
avfpndwdvk , & rtB . ikilfbir3x , & rtB . lvhdsuleax , & rtB . k2guxky2xo , &
rtB . i2ksjgg0bi , & rtB . dlenpi3qon , & rtB . oy4y1mzym1 , & rtB .
ai4o3nv2mj , & rtB . f3jftuckz0 , & rtB . ciunac3nmz , & rtB . eicwtqqrpy , &
rtB . pm40ur0c0b , & rtB . fwnnvyx5ds , & rtB . gfekw3o5mf , & rtB .
pzo3ueaa5q , & rtB . ni4yziq03t , & rtB . dlxbfdbbhz , & rtB . hzydlu0jvp , &
rtB . bp4ojgaew5 , & rtB . lavmxbrwhl , & rtB . iwql2lazhy , & rtB .
f10it011qx , & rtB . ctn1jww2mq , & rtB . bzokzc5qh1 , & rtB . a115lz3b0g , &
rtB . if3121tfog , & rtB . pjcot0wxoj , & rtB . onbg5nju1r , & rtB .
c41lldt1uy , & rtB . n5nt33gmwp , & rtB . oqowv51iqo , & rtB . dijo1ltnx5 , &
rtB . k5n3l1olcw , & rtB . jszz3xufuq , & rtB . kxnj2p5qc3 , & rtB .
c4xchekfkc , & rtB . kzjjcawjf3 , & rtB . a5qjjtmad2 , & rtB . ikq14cwxg2 , &
rtB . hvasfjtmtc , & rtB . nhzzayoxkc , & rtB . ftci2sn0gh , & rtB .
fesfl02fja , & rtB . f5mvlkzyar , & rtB . cjme2x3k30 , & rtB . i22kdurnzj , &
rtB . entwwicvr2 , & rtB . fdk3z4o44v , & rtB . erpig0ungk , & rtB .
cnsrwwetkr , & rtB . orxs2xiybl , & rtB . eoepyahp11 , & rtB . mmdmvrqh42 , &
rtB . dzbuzkvkto , & rtB . apufjvlgeh , & rtB . nooer5fjzq , & rtB .
ko2buhzd1o , & rtB . do4ccbjq5w , & rtB . gios4slamr , & rtB . mzsxqpvx05 , &
rtB . jvuntmypcy , & rtB . lnaxsibe2v , & rtB . kbnlpovyfq , & rtB .
jkniny0x3x , & rtB . d4fceeetz5 , & rtB . haykyjejqw , & rtB . mneqz4d2j1 , &
rtB . ofncopprcn , & rtB . nhsbm3kkk4 [ 0 ] , & rtB . jiydleox4m , & rtB .
avhtac2tm0 , & rtB . dpwq1q4ydy , & rtB . lhmib3vmgu , & rtB . hbp5mjbisv , &
rtB . izbke4jp12 , & rtB . ilxvw50cxi [ 0 ] , & rtB . n1gwbtjrlj , & rtB .
oav0cf1zil , & rtB . kijq0o3wpk , & rtB . hbmqhb2rsq , & rtB . a11zte1cbo , &
rtB . ahui5jqzex , & rtB . jsm2rnzwrw [ 0 ] , & rtB . oybxotpt2x [ 0 ] , &
rtB . hdqct0fton [ 0 ] , & rtB . pzslztziz4 , & rtB . pzslztziz4 , & rtB .
pzslztziz4 , & rtB . hrgutkce1r , & rtB . cts3truvxg , & rtB . fsw11hjmo0 , &
rtB . gymfvdo1n0 , & rtB . b2iavgmalt , & rtB . je53ripatw , & rtB .
orxndfaxou , & rtB . p24hvpztu3 , & rtB . lf4fzribbl , & rtB . bv5xz00y5v , &
rtB . dd4rgfnk0q , & rtB . fg1yxfafby , & rtB . hwei01ojqx , & rtB .
e0df3wvyzp , & rtB . njbhyed1uq , & rtB . dr2gkpvehl , & rtB . f3jywshtiv , &
rtB . abdb21upk5 , & rtB . ht3u45cdw1 , & rtB . bxcprbam5i , & rtB .
fn2owe3gzu , & rtB . jzjp3vvn23 , & rtB . k00d3yy20z , & rtB . oyk0w0fyfa , &
rtB . eap4w23agb , & rtB . f1p3uf2p0q , & rtB . mtfqfym4ld , & rtB .
mjxomo31dc , & rtB . dffmus0i5p , & rtB . pcj0tpwlak , & rtB . miu333buq5 , &
rtB . erqxwptbzb , & rtB . pfzcqjbxuf , & rtB . apik5kwxlu , & rtB .
m05kzbej5m [ 0 ] , & rtB . pchqff3gco , & rtB . pog1dds4lo , & rtB .
dajhgezcca , & rtB . fjazjcxbf5 , & rtB . a2pulvvhzw , & rtB . lefacdg35l , &
rtB . hm33c11q3p [ 0 ] , & rtB . fqcj42rwfv , & rtB . cyrfzlpwa0 , & rtB .
bvka4hwlc3 , & rtB . l15ioalnmc , & rtB . og4d53fo0x , & rtB . bjqr0rh325 , &
rtB . dh2yw5ar5c , & rtB . nybfuwghkb , & rtB . oxpegxaoc4 , & rtB .
hwv0eif3jm , & rtB . it3n0sxelh , & rtB . lxihjdcvha , & rtB . f3ikhtx2zg , &
rtB . ojdoa14qjo , & rtB . hkytpsvogd , & rtB . ckv24rpgvd , & rtB .
hxnxmxphze , & rtB . o10khkekjf , & rtB . gz1ep0ich0 , & rtB . mshwwxoxgx , &
rtB . b5rji2itjr , & rtB . jfengqarom , & rtB . d0jo3xeu2b [ 0 ] , & rtB .
cflcgolrni , & rtB . p0tyelmcem , & rtB . hhybgj4ij3 , & rtB . csq0ucwnp1 , &
rtB . n2ym4a3gam , & rtB . hwt4tlqt1g , & rtB . kx4exscg2b , & rtB .
oozpb1rzol , & rtB . e4g1jcha1z , & rtB . muoupl2fwn , & rtB . obrvzvyul2 , &
rtB . gpeayd1kbb , & rtB . nuqgxraj4s , & rtB . kyjwocrtf1 , & rtB .
aroffri1di , & rtB . ndp321ctrb , & rtB . njgq5t2dzn , & rtB . iwhtxfftiy , &
rtB . hcpipystcv , & rtB . praxrmtmoq , & rtB . d20jyrs2j4 , & rtB .
jdx4vrnz3t , & rtB . amxqxfecuk , & rtB . a4u3vmkv1w , & rtB . bovhecluxz , &
rtP . AttitudeProfileNadirPointing1_primaryAlignment [ 0 ] , & rtP .
AttitudeProfileNadirPointing1_secondaryAlignment [ 0 ] , & rtP .
AttitudeProfileNadirPointing1_secondaryConstraint [ 0 ] , & rtP .
Gain_Gain_j3juhszkgk , & rtP . SpacecraftDynamics_startDate , & rtP .
SpacecraftDynamics_mass , & rtP . SpacecraftDynamics_emptyMass , & rtP .
SpacecraftDynamics_fullMass , & rtP . SpacecraftDynamics_inertia [ 0 ] , &
rtP . SpacecraftDynamics_emptyInertia [ 0 ] , & rtP .
SpacecraftDynamics_fullInertia [ 0 ] , & rtP .
SpacecraftDynamics_semiMajorAxis , & rtP . SpacecraftDynamics_eccentricity ,
& rtP . SpacecraftDynamics_inclination , & rtP . SpacecraftDynamics_raan , &
rtP . SpacecraftDynamics_argPeriapsis , & rtP .
SpacecraftDynamics_trueAnomaly , & rtP . SpacecraftDynamics_trueLon , & rtP .
SpacecraftDynamics_argLat , & rtP . SpacecraftDynamics_lonPeriapsis , & rtP .
SpacecraftDynamics_inertialPosition [ 0 ] , & rtP .
SpacecraftDynamics_inertialVelocity [ 0 ] , & rtP .
SpacecraftDynamics_fixedPosition [ 0 ] , & rtP .
SpacecraftDynamics_fixedVelocity [ 0 ] , & rtP . SpacecraftDynamics_attitude
[ 0 ] , & rtP . SpacecraftDynamics_attitudeRate [ 0 ] , & rtP .
SpacecraftDynamics_customR , & rtP . SpacecraftDynamics_customF , & rtP .
SpacecraftDynamics_customMu , & rtP . SpacecraftDynamics_customJ2 , & rtP .
SpacecraftDynamics_customOmega , & rtP . SpacecraftDynamics_cbRA , & rtP .
SpacecraftDynamics_cbRARate , & rtP . SpacecraftDynamics_cbDec , & rtP .
SpacecraftDynamics_cbDecRate , & rtP . SpacecraftDynamics_cbRotAngle , & rtP
. SpacecraftDynamics_cbRotRate , & rtP . SpacecraftDynamics_F107ExtrapValue ,
& rtP . SpacecraftDynamics_MagneticIndexExtrapValue , & rtP .
SpacecraftDynamics_fluxFlags [ 0 ] , & rtP . SpacecraftDynamics_dragCoeff , &
rtP . SpacecraftDynamics_dragArea , & rtP .
SpacecraftDynamics_customThirdBodyMu , & rtP .
SpacecraftDynamics_reflectivityCoeff , & rtP . SpacecraftDynamics_srpArea , &
rtP . SpacecraftDynamics_fluxPressure , & rtP . DemoController_P , & rtP .
DemoController_D , & rtP . DemoController_DifferentiatorICPrevScaledInput , &
rtP . DemoController_UpperSaturationLimit , & rtP .
DemoController_LowerSaturationLimit , & rtP . u2_Gain , & rtP . Gain_Gain , &
rtP . Calculateq_icrf2lvlh_mu , & rtP . Constant_Value_h0g1ugaqun [ 0 ] , &
rtP . Constant1_Value , & rtP . Constant3_Value , & rtP . Constant4_Value , &
rtP . e_k0_Threshold , & rtP . n_j0_Threshold , & rtP . rv0_Threshold , & rtP
. Bias_Bias_gg4yfzwgb4 , & rtP . Bias1_Bias_aeswfouakq , & rtP .
Bias_Bias_csfjfloua3 , & rtP . Bias1_Bias_ke3tqgzwra , & rtP .
Constant_Value_dzq43sg5ph , & rtP . Constant_Value_d0cr3edft5 , & rtP .
CompareToConstant_const , & rtP . CompareToConstant_const_au5floo22x , & rtP
. Constant_Value_e3re2oof5g , & rtP . Gain_Gain_p3k0xxw3y5 , & rtP .
Gain1_Gain_aw214blew1 , & rtP . Gain2_Gain_ktnym3b0kl , & rtP .
Constant_Value_pximozwm1g , & rtP . Gain_Gain_lquzbnpq32 , & rtP .
Gain1_Gain_i50sgygmi4 , & rtP . Gain2_Gain_e4t4j4tntk , & rtP .
Constant_Value_fezz4zcr33 , & rtP . Gain_Gain_m3g5po4cqr , & rtP .
Gain1_Gain_p0r0phdszy , & rtP . Gain2_Gain_ojec3gtfvc , & rtP .
Constant_Value_d3lw1laqzd , & rtP . Gain_Gain_pl5mkabq1s , & rtP . Gain1_Gain
, & rtP . Gain2_Gain , & rtP . Constant_Value_lrjzwukvju , & rtP .
Gain_Gain_l3t3inrppx , & rtP . Gain1_Gain_e2q2edneho , & rtP .
Gain2_Gain_dysexq3k3a , & rtP . Constant_Value_kssr5ci3rk , & rtP .
Gain_Gain_jjilyo3l5f , & rtP . Gain1_Gain_dietotpkcc , & rtP .
Gain2_Gain_hrbuh22v1i , & rtP . Constant_Value_axnwdlqcfs , & rtP .
Constant1_Value_opnh0fk3y0 , & rtP . Constant_Value_p3zoswxu1x , & rtP .
Constant1_Value_hxwifwb0l1 , & rtP . Constant_Value_oqtxeqjzx0 , & rtP .
Constant1_Value_n45i4rp0x0 , & rtP . Constant_Value_i203pkjdz2 , & rtP .
Constant1_Value_gtzfwmc1c5 , & rtP . u2_Gain_puv2jr0l5x , & rtP . ozfexalcpnk
. Constant_Value , & rtP . nfbajjnpq3 . Constant_Value , & rtP . c140n5sl3j .
Constant_Value , & rtP . fqsnbatx0dt . Constant_Value , & rtP . amyioh3yyl .
Constant_Value , & rtP . amx55shqxl . Constant_Value , & rtP .
Constant_Value_gb5zkazvg1 , & rtP . Gain_Gain_bnqid2pxje , & rtP .
Gain1_Gain_e5wrwogqcu , & rtP . Gain2_Gain_nxayugor4p , & rtP .
Constant_Value_owfc2idssk , & rtP . Gain_Gain_j5qvvnl2lq , & rtP .
Gain1_Gain_esk0kbkf4p , & rtP . Gain2_Gain_db4aqwjv3z , & rtP .
Constant_Value_exc5ou3kny , & rtP . Gain_Gain_iauu5nedpm , & rtP .
Gain1_Gain_apuoys51w1 , & rtP . Gain2_Gain_lpeiobb14p , & rtP . Bias_Bias , &
rtP . Bias1_Bias , & rtP . Constant_Value_oaurfxrj3r , & rtP .
Constant1_Value_e5gqrcfxog , & rtP . Gain_Gain_ob2tt5odxp , & rtP .
Gain2_Gain_ksbgbs1b1v , & rtP . Bias_Bias_cl02abfymb , & rtP .
Bias1_Bias_a24mpf5x4w , & rtP . Constant_Value_dxp2fjnpsn , & rtP .
Constant1_Value_ovmiwvalqb , & rtP . Gain_Gain_fsr5v4y1tz , & rtP .
Gain2_Gain_d3jllonf2i , & rtP . Constant_Value , & rtP .
Constant_Value_aihys3dv45 , & rtP . jjvlsi3jdf . Constant_Value , & rtP .
awxtj45csr . Constant_Value , & rtP . odap4wkgft . Constant_Value , & rtP .
n2e0ukonil . Constant_Value , & rtP . havcl53rud . Constant_Value , & rtP .
cpe1al53eg . Constant_Value , & rtP . Tsamp_WtEt , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1 , 4 , 1 , 1 , 3 ,
3 , 3 , 1 , 23 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 ,
200.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0
} , { ( NULL ) , ( NULL ) , 3 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , (
uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 386 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 141 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 3885569052U , 18220534U , 500054226U ,
3860037998U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Progettino_Simulink_2_GetCAPIStaticMap
( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Progettino_Simulink_2_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Progettino_Simulink_2_host_InitializeDataMapInfo (
Progettino_Simulink_2_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
