#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_eYFdmadaAEbmfNbyeiZ4KH" , 17 , 396808 } , { "uint64_T" , 18 , 8 } , {
"int64_T" , 19 , 8 } , { "uint_T" , 20 , 32 } , { "char_T" , 21 , 8 } , {
"uchar_T" , 22 , 8 } , { "time_T" , 23 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( int32_T ) , sizeof ( uint64_T ) , sizeof ( int64_T )
, sizeof ( uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof (
time_T ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" ,
"real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"struct_eYFdmadaAEbmfNbyeiZ4KH" , "uint64_T" , "int64_T" , "uint_T" ,
"char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & rtB . alojeban0y [ 0 ] ) , 0 , 0 , 2550 } , { (
char_T * ) ( & rtB . euadah4k3h ) , 0 , 0 , 57791 } , { ( char_T * ) ( & rtB
. bqwjkojzth ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtB . mgjf5xyu25 .
hwy1zuefdp ) , 0 , 0 , 36 } , { ( char_T * ) ( & rtB . htskuvfadt .
mggzctu1pl ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtB . dsakrfnkjo . hwy1zuefdp
) , 0 , 0 , 36 } , { ( char_T * ) ( & rtB . fbrnttkq1r . mggzctu1pl ) , 0 , 0
, 5 } , { ( char_T * ) ( & rtB . dbflsykorix . hwy1zuefdp ) , 0 , 0 , 36 } ,
{ ( char_T * ) ( & rtB . ppzwf3ql1xp . mggzctu1pl ) , 0 , 0 , 5 } , { (
char_T * ) ( & rtDW . pdkkfcgv4u [ 0 ] ) , 0 , 0 , 31 } , { ( char_T * ) ( &
rtDW . e5boiilz21 . AQHandles ) , 11 , 0 , 1 } , { ( char_T * ) ( & rtDW .
iao5itz1rk ) , 10 , 0 , 5 } , { ( char_T * ) ( & rtDW . oy035qmdpk ) , 2 , 0
, 45 } , { ( char_T * ) ( & rtDW . kp2zdfch2j ) , 8 , 0 , 8 } , { ( char_T *
) ( & rtDW . os2efyfafn . mzc0muwlqe ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . epff30o0g2 . oabr1nhtl0 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
drr2adcqdn . fzkgibvt0z ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
gyjjptmc2fc . oabr1nhtl0 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
cjawymwwjlh . fzkgibvt0z ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
hm2ju42yt22 . mzc0muwlqe ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
opjf0lbepe . n5xscghzt5 ) , 6 , 0 , 4 } , { ( char_T * ) ( & rtDW .
opjf0lbepe . cnlqq3wbpr ) , 2 , 0 , 10 } , { ( char_T * ) ( & rtDW .
opjf0lbepe . f0ct0vyv0f . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . opjf0lbepe . d5msdamlfz . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T * )
( & rtDW . opjf0lbepe . nc3d2s225dp . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T
* ) ( & rtDW . mgjf5xyu25 . hh2h0bdkhr ) , 10 , 0 , 3 } , { ( char_T * ) ( &
rtDW . mgjf5xyu25 . lwd1akhufz ) , 2 , 0 , 8 } , { ( char_T * ) ( & rtDW .
mgjf5xyu25 . lor4wm3df2 ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtDW .
htskuvfadt . a2rjj40ywp ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
euaw30nuxs . n5xscghzt5 ) , 6 , 0 , 4 } , { ( char_T * ) ( & rtDW .
euaw30nuxs . cnlqq3wbpr ) , 2 , 0 , 10 } , { ( char_T * ) ( & rtDW .
euaw30nuxs . f0ct0vyv0f . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . euaw30nuxs . d5msdamlfz . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T * )
( & rtDW . euaw30nuxs . nc3d2s225dp . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T
* ) ( & rtDW . dsakrfnkjo . hh2h0bdkhr ) , 10 , 0 , 3 } , { ( char_T * ) ( &
rtDW . dsakrfnkjo . lwd1akhufz ) , 2 , 0 , 8 } , { ( char_T * ) ( & rtDW .
dsakrfnkjo . lor4wm3df2 ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtDW .
fbrnttkq1r . a2rjj40ywp ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW .
biozmszeya . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
mkfnf0iokw . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jdsavmmfhg . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
a3r3mrnamp . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bnxpci3ib0 . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
pvhxclmxep . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
evhrkojp4r . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
awyolbs11u . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bpabrhgrbk4 . i3ugbonzww ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
cwpt2oqqi5 . otbrtqanhj ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
gmk5vtgqmz . otbrtqanhj ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
fwabxxddoc4 . otbrtqanhj ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
d35ajiya3pc . n5xscghzt5 ) , 6 , 0 , 4 } , { ( char_T * ) ( & rtDW .
d35ajiya3pc . cnlqq3wbpr ) , 2 , 0 , 10 } , { ( char_T * ) ( & rtDW .
d35ajiya3pc . f0ct0vyv0f . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . d35ajiya3pc . d5msdamlfz . enpph3wzci ) , 2 , 0 , 1 } , { ( char_T * )
( & rtDW . d35ajiya3pc . nc3d2s225dp . enpph3wzci ) , 2 , 0 , 1 } , { (
char_T * ) ( & rtDW . dbflsykorix . hh2h0bdkhr ) , 10 , 0 , 3 } , { ( char_T
* ) ( & rtDW . dbflsykorix . lwd1akhufz ) , 2 , 0 , 8 } , { ( char_T * ) ( &
rtDW . dbflsykorix . lor4wm3df2 ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtDW .
ppzwf3ql1xp . a2rjj40ywp ) , 2 , 0 , 2 } } ; static DataTypeTransitionTable
rtBTransTable = { 59U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . PIDController_D ) , 0 , 0 ,
51 } , { ( char_T * ) ( & rtP . DirectionCosineMatrixtoQuaternions_action ) ,
3 , 0 , 3 } , { ( char_T * ) ( & rtP . Constant_Value [ 0 ] ) , 0 , 0 , 52876
} , { ( char_T * ) ( & rtP . drr2adcqdn . Bias1_Bias ) , 0 , 0 , 2 } , { (
char_T * ) ( & rtP . cjawymwwjlh . Bias1_Bias ) , 0 , 0 , 2 } , { ( char_T *
) ( & rtP . opjf0lbepe . Constant1_Value ) , 0 , 0 , 12 } , { ( char_T * ) (
& rtP . mgjf5xyu25 . Switch_Threshold ) , 0 , 0 , 18 } , { ( char_T * ) ( &
rtP . htskuvfadt . Gain_Gain ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP .
euaw30nuxs . Constant1_Value ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP .
dsakrfnkjo . Switch_Threshold ) , 0 , 0 , 18 } , { ( char_T * ) ( & rtP .
fbrnttkq1r . Gain_Gain ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP . biozmszeya
. Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . mkfnf0iokw .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . jdsavmmfhg .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . a3r3mrnamp .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . bnxpci3ib0 .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . pvhxclmxep .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . evhrkojp4r .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . awyolbs11u .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . bpabrhgrbk4 .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . cwpt2oqqi5 .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . gmk5vtgqmz .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . fwabxxddoc4 .
Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . d35ajiya3pc .
Constant1_Value ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP . dbflsykorix .
Switch_Threshold ) , 0 , 0 , 18 } , { ( char_T * ) ( & rtP . ppzwf3ql1xp .
Gain_Gain ) , 0 , 0 , 3 } } ; static DataTypeTransitionTable rtPTransTable =
{ 26U , rtPTransitions } ;
