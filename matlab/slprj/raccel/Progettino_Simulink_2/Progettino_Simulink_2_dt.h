#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "uint64_T" , 17 , 8 } , {
"int64_T" , 18 , 8 } , { "uint_T" , 19 , 32 } , { "char_T" , 20 , 8 } , {
"uchar_T" , 21 , 8 } , { "time_T" , 22 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . bed3ixhpn2 [ 0 ] ) , 0 , 0 ,
441 } , { ( char_T * ) ( & rtB . avhtac2tm0 ) , 8 , 0 , 3 } , { ( char_T * )
( & rtDW . gxa01cw4ez [ 0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtDW .
nvw1rackbr ) , 10 , 0 , 11 } , { ( char_T * ) ( & rtDW . e5nbfw4a4p ) , 2 , 0
, 27 } , { ( char_T * ) ( & rtDW . ec0rqo4l2o ) , 8 , 0 , 4 } , { ( char_T *
) ( & rtDW . cpe1al53eg . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . havcl53rud . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
n2e0ukonil . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
odap4wkgft . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
awxtj45csr . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jjvlsi3jdf . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
amx55shqxl . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
amyioh3yyl . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
fqsnbatx0dt . jyslo0tvel ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
c140n5sl3j . higwcjlzpv ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
nfbajjnpq3 . higwcjlzpv ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ozfexalcpnk . higwcjlzpv ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 18U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . DemoController_D ) , 0 , 0 ,
195 } , { ( char_T * ) ( & rtP . cpe1al53eg . Constant_Value ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP . havcl53rud . Constant_Value ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP . n2e0ukonil . Constant_Value ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtP . odap4wkgft . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP . awxtj45csr . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP
. jjvlsi3jdf . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
amx55shqxl . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
amyioh3yyl . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
fqsnbatx0dt . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
c140n5sl3j . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
nfbajjnpq3 . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
ozfexalcpnk . Constant_Value ) , 0 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 13U , rtPTransitions } ;
