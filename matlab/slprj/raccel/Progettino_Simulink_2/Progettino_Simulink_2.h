#ifndef RTW_HEADER_Progettino_Simulink_2_h_
#define RTW_HEADER_Progettino_Simulink_2_h_
#ifndef Progettino_Simulink_2_COMMON_INCLUDES_
#define Progettino_Simulink_2_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Progettino_Simulink_2_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Progettino_Simulink_2
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (379) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (13)   
#elif NCSTATES != 13
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int8_T higwcjlzpv ; } deotem521n ; typedef struct { int8_T
jyslo0tvel ; } daq2tvfkcf ; typedef struct { real_T P_mbvzarwird [ 15129 ] ;
real_T scaleFactor [ 15129 ] ; real_T factor_dX [ 1600 ] ; real_T
factor_dX_cl54gopm0x [ 1600 ] ; real_T factor_dY [ 1275 ] ; real_T
factor_dY_kkiq3xxxve [ 1275 ] ; real_T bed3ixhpn2 [ 3 ] ; real_T brmokcdrio [
3 ] ; real_T herymyrphl [ 3 ] ; real_T d2mfefylik [ 3 ] ; real_T hwvdsemzgc [
3 ] ; real_T lqsl4ymlvn [ 3 ] ; real_T f3ikhtx2zg ; real_T ojdoa14qjo ;
real_T hkytpsvogd ; real_T ckv24rpgvd ; real_T hxnxmxphze ; real_T lb2fr4utt0
; real_T lqd2nodifg ; real_T cflcgolrni ; real_T f0txzidtlg ; real_T
p0tyelmcem ; real_T hhybgj4ij3 ; real_T b2nvvrve1n ; real_T csq0ucwnp1 ;
real_T n2ym4a3gam ; real_T i0ktxf5xah ; real_T ekzgxwfzub ; real_T oetwa35hv4
; real_T dh3hx3m1f4 ; real_T mbwwzd12s3 ; real_T cjqhmv2ncl ; real_T
bcvgvonzqc ; real_T dzes52hxg4 ; real_T e3se1oublh ; real_T iin3omkh3m ;
real_T eyggydhvdc ; real_T ketpxvax42 ; real_T na5lj1lmmo ; real_T fty4ztxqgw
; real_T pw0jwl1nqw ; real_T a4kt4hvwzb ; real_T h5fl43crr2 ; real_T
mt5hkjamkd ; real_T pkwxa3bl1k ; real_T dfwizamt1u ; real_T kw2m0cjqpw ;
real_T duhh5hsq31 ; real_T kk2fkibzdi ; real_T acdxadew0d ; real_T igwzj1ytle
; real_T fwcurtmbmr ; real_T jfl00yvgrd ; real_T iw3jzuhofs ; real_T
a4zmidwjrt ; real_T efq2gopxkt ; real_T dbs0rl525h ; real_T ecct0soimw ;
real_T jnzytf21hw ; real_T c5ynwjufvx ; real_T ld1yr2qzq3 ; real_T bg5rgepnwu
; real_T m4k3cvyusv ; real_T bohx2mqfib ; real_T hh3cewyuqs ; real_T
f1u1kgizgs ; real_T atotr0yy2l ; real_T mmyxw41ii0 ; real_T ftygp0douc ;
real_T piggqo0f15 ; real_T jzibn2jzkl ; real_T ab1acz5psy ; real_T dfo3iezo2w
; real_T gm214110mv ; real_T bsy1hfnklf ; real_T cluthxuo0o ; real_T
niqqtb5bzt ; real_T ierptzclqz ; real_T o5lpk52ouo [ 3 ] ; real_T inrhmp0val
; real_T ge0vukj2kn ; real_T ndp321ctrb ; real_T pniokh1pkw [ 3 ] ; real_T
njgq5t2dzn ; real_T iwhtxfftiy ; real_T hcpipystcv ; real_T praxrmtmoq ;
real_T dpwq1q4ydy ; real_T lhmib3vmgu ; real_T hbp5mjbisv ; real_T izbke4jp12
; real_T oyk0w0fyfa ; real_T eap4w23agb ; real_T f1p3uf2p0q ; real_T
mtfqfym4ld ; real_T mjxomo31dc ; real_T l4dlkfdzpp ; real_T orxndfaxou ;
real_T p24hvpztu3 ; real_T je53ripatw ; real_T dd4rgfnk0q ; real_T lf4fzribbl
; real_T bv5xz00y5v ; real_T bxzfirxs33 [ 3 ] ; real_T hwei01ojqx ; real_T
e0df3wvyzp ; real_T fg1yxfafby ; real_T f3jywshtiv ; real_T njbhyed1uq ;
real_T dr2gkpvehl ; real_T n5jg5w1v21 [ 3 ] ; real_T m3lcv53etn ; real_T
ezyqhth244 ; real_T oz3dymucgg ; real_T k20ttjcogc ; real_T n4n4yi4qrh ;
real_T itowmjt5vu ; real_T nyhifvxcsj ; real_T ijzsdirxre ; real_T ht3u45cdw1
; real_T bxcprbam5i ; real_T abdb21upk5 ; real_T k00d3yy20z ; real_T
fn2owe3gzu ; real_T jzjp3vvn23 ; real_T fij5wo3gxn [ 3 ] ; real_T bvelrlu4dc
[ 3 ] ; real_T b5gc2y1die [ 3 ] ; real_T dngeokumuv [ 3 ] ; real_T npgjijt1ny
; real_T bp3ne4djuj ; real_T a4shbdupzs ; real_T lfsh4e3bwp ; real_T
hjqbjiq155 ; real_T ajc5xr2jf5 ; real_T kqes3b4oud ; real_T c1hnstgmt4 ;
real_T dtfbjff2jg ; real_T e1mmow3csa ; real_T eoq2m1oml5 ; real_T bop1clvc51
; real_T b0puueye0x ; real_T nquspmmxyg ; real_T gee3rrk3ny [ 3 ] ; real_T
hwt4tlqt1g ; real_T kx4exscg2b ; real_T oozpb1rzol ; real_T e4g1jcha1z ;
real_T muoupl2fwn ; real_T jwjq0rj5uw ; real_T kfuuvpn0xn ; real_T e330hnzury
; real_T e1ed23zngo ; real_T hzayfrfeh0 ; real_T cqduybqaka ; real_T
gfhi2chwy1 ; real_T c4udbivv0q ; real_T g0s5armlux ; real_T acyyfbsb4l ;
real_T louda2tysx ; real_T icfk0dewms ; real_T eac1hp1hzc ; real_T o1cebdj0tr
; real_T avn0fquoii ; real_T pag5e2tm4x ; real_T hqpe5h53ep ; real_T
o10khkekjf ; real_T iwzvhi4mhy ; real_T oip2gbnnci ; real_T oyccwqf23y ;
real_T hxtdtqwl0b ; real_T mlw0td2gji ; real_T gz1ep0ich0 ; real_T mshwwxoxgx
; real_T mvkvrxq2fp ; real_T pdy5cram3a ; real_T pvgpu45zl2 ; real_T
jyiuecj0yv ; real_T fawfd22i1u ; real_T b5rji2itjr ; real_T jfengqarom ;
real_T fmuzw3y2ay ; real_T ieufwpzafa ; real_T edjzmn0qwv ; real_T ablbynsako
; real_T i5wsbqbx3f ; real_T hg5bv3vzuf ; real_T bj12zrdsgl ; real_T
j2aun4xa5l ; real_T lpbqrpu1jn ; real_T daj0qzzfez ; real_T opz0vchhvw ;
real_T bhkbayxccr ; real_T ovufk02f52 ; real_T c3uoja0hs1 ; real_T lhu0itmrnu
; real_T kixpmyuot5 ; real_T elffql50h0 ; real_T mc4pyvaaam ; real_T
p41cylkrvy ; real_T kw0oysgnin ; real_T aaymhmvzx3 ; real_T fpgntvbv2k ;
real_T b1mzkpk1k1 ; real_T dduvoybpbb ; real_T mszceanoh4 ; real_T fqofrbtel3
; real_T kujykg0wdo ; real_T ptgv4cuezm ; real_T b5e00e1031 ; real_T
byrjgsv4bg ; real_T dhbnc3d3gi ; real_T hxz4i04vsk ; real_T g2o4huhmci ;
real_T kkrjjbdr2e ; real_T le5ag1nozi ; real_T cj1l4yqqp3 ; real_T fwx1mmvj4u
; real_T n4opippzuv ; real_T i5z2ckf2gh ; real_T pkyad212ak ; real_T
gemw0phi5b ; real_T bxmigoh5ke ; real_T esjtfx0bso ; real_T maybar53im ;
real_T dkvr1dmakj ; real_T ett2u0cxhv ; real_T akcz5sweh0 ; real_T prspdmxwxa
; real_T pq4sa5eyn1 ; real_T gf3qkc5xul ; real_T ijiz1yqe3s ; real_T
d43tguid1w ; real_T cyrfzlpwa0 ; real_T bvka4hwlc3 ; real_T fqcj42rwfv ;
real_T bjqr0rh325 ; real_T l15ioalnmc ; real_T og4d53fo0x ; real_T oybxotpt2x
[ 3 ] ; real_T nybfuwghkb ; real_T oxpegxaoc4 ; real_T dh2yw5ar5c ; real_T
lxihjdcvha ; real_T hwv0eif3jm ; real_T it3n0sxelh ; real_T hdqct0fton [ 3 ]
; real_T obrvzvyul2 ; real_T gpeayd1kbb ; real_T nuqgxraj4s ; real_T
kyjwocrtf1 ; real_T aroffri1di ; real_T bp4ojgaew5 ; real_T n5nt33gmwp ;
real_T lavmxbrwhl ; real_T oqowv51iqo ; real_T c4xchekfkc ; real_T ctn1jww2mq
; real_T dijo1ltnx5 ; real_T hzydlu0jvp ; real_T bzokzc5qh1 ; real_T
dlxbfdbbhz ; real_T a115lz3b0g ; real_T jszz3xufuq ; real_T iwql2lazhy ;
real_T onbg5nju1r ; real_T if3121tfog ; real_T pjcot0wxoj ; real_T kxnj2p5qc3
; real_T f10it011qx ; real_T c41lldt1uy ; real_T k5n3l1olcw ; real_T
hvasfjtmtc ; real_T nhzzayoxkc ; real_T cnsrwwetkr ; real_T kzjjcawjf3 ;
real_T f5mvlkzyar ; real_T i22kdurnzj ; real_T entwwicvr2 ; real_T eoepyahp11
; real_T ikq14cwxg2 ; real_T fdk3z4o44v ; real_T ftci2sn0gh ; real_T
fesfl02fja ; real_T orxs2xiybl ; real_T a5qjjtmad2 ; real_T cjme2x3k30 ;
real_T erpig0ungk ; real_T nooer5fjzq ; real_T ko2buhzd1o ; real_T haykyjejqw
; real_T mmdmvrqh42 ; real_T mzsxqpvx05 ; real_T do4ccbjq5w ; real_T
gios4slamr ; real_T mneqz4d2j1 ; real_T dzbuzkvkto ; real_T jvuntmypcy ;
real_T lnaxsibe2v ; real_T kbnlpovyfq ; real_T ofncopprcn ; real_T apufjvlgeh
; real_T jkniny0x3x ; real_T d4fceeetz5 ; real_T ecrb0ucuhk [ 3 ] ; real_T
miii41y12z [ 4 ] ; real_T hrgutkce1r ; real_T cts3truvxg ; real_T fsw11hjmo0
; real_T gymfvdo1n0 ; real_T b2iavgmalt ; real_T lfck0pbfjx ; real_T
aeajq4je2s ; real_T orhgartrih ; real_T fpiyu35svk ; real_T ew4u2f3xgf ;
real_T pzslztziz4 ; real_T fyyloj5ilz [ 3 ] ; real_T hg0stcakyi [ 3 ] ;
real_T d0jo3xeu2b [ 3 ] ; real_T kumbe2lmbx [ 3 ] ; real_T g4mrmyycxt [ 3 ] ;
real_T gcvocxch2a [ 3 ] ; real_T a5bomnic04 [ 3 ] ; real_T el2psjjgtn ;
real_T goprgej0ya ; real_T jiydleox4m ; real_T mvm4zfrmra ; real_T m05kzbej5m
[ 3 ] ; real_T jsm2rnzwrw [ 3 ] ; real_T n1gwbtjrlj ; real_T eqkrgoempo ;
real_T hm33c11q3p [ 3 ] ; real_T ipnq4eflyu [ 3 ] ; real_T a4u3vmkv1w ;
real_T amxqxfecuk ; real_T jdx4vrnz3t ; real_T miefe1av4y ; real_T ijsckddbr2
; real_T d20jyrs2j4 ; real_T bovhecluxz ; real_T ahui5jqzex ; real_T
lnxlasbybi ; real_T a11zte1cbo ; real_T him5w05q10 ; real_T hbmqhb2rsq ;
real_T fg4tiogtys ; real_T kijq0o3wpk ; real_T mj0djwcgev ; real_T avfpndwdvk
; real_T i2ksjgg0bi ; real_T k2guxky2xo ; real_T lvhdsuleax ; real_T
ikilfbir3x ; real_T dlenpi3qon ; real_T ciunac3nmz ; real_T f3jftuckz0 ;
real_T ai4o3nv2mj ; real_T oy4y1mzym1 ; real_T eicwtqqrpy ; real_T pzo3ueaa5q
; real_T gfekw3o5mf ; real_T fwnnvyx5ds ; real_T pm40ur0c0b ; real_T
ni4yziq03t ; real_T a2pulvvhzw ; real_T fjazjcxbf5 ; real_T lefacdg35l ;
real_T pchqff3gco ; real_T dajhgezcca ; real_T pog1dds4lo ; real_T ilxvw50cxi
[ 3 ] ; real_T pfzcqjbxuf ; real_T erqxwptbzb ; real_T apik5kwxlu ; real_T
dffmus0i5p ; real_T miu333buq5 ; real_T pcj0tpwlak ; real_T nhsbm3kkk4 [ 3 ]
; real_T lw2a4emitu ; real_T fokvzatosq ; real_T os0k0xqvmv ; boolean_T
avhtac2tm0 ; boolean_T p5dijejcv0 ; boolean_T oav0cf1zil ; } B ; typedef
struct { real_T gxa01cw4ez [ 3 ] ; real_T lbhssclhma [ 3 ] ; real_T
h4uigt1muq [ 3 ] ; int_T nvw1rackbr ; int_T hzjvdf301t ; int_T clt1jiigfo ;
int_T maytklvj30 ; int_T mrjiam5zpv ; int_T cn1ryvrwar ; int_T gnjprsvhi2 ;
int_T mcjlv5p2ej ; int_T nqjqxj2sjf [ 3 ] ; int8_T e5nbfw4a4p ; int8_T
fptevv5hk0 ; int8_T anhv2qtbhf ; int8_T p3bm21x4qj ; int8_T czjvqa1fxk ;
int8_T bv2svjvaho ; int8_T lia1gimu2t ; int8_T ddjfp2l0hu ; int8_T la2sefxwwn
; int8_T ctdyzkmvkd ; int8_T o5yhr1pvei ; int8_T flacp15aeo ; int8_T
pl1c14wmdt ; int8_T m1bsgbbj4b ; int8_T dfzdxefv1y ; int8_T h4rizcb3xp ;
int8_T p1i4epuxdi ; int8_T emocmh5pqt ; int8_T os4rgxfmmj ; int8_T du1bjdreox
; int8_T ota3k35use ; int8_T a3v3e5yixy ; int8_T i0f43lz4kd ; int8_T
p3yrq5ikuo ; int8_T kflylsjq2u ; int8_T oq55atyygt ; int8_T hnfmuk2fdt ;
boolean_T ec0rqo4l2o ; boolean_T meq0o2am0j ; boolean_T ompzk5n22k ;
boolean_T bzplb0ymvc ; daq2tvfkcf cpe1al53eg ; daq2tvfkcf havcl53rud ;
daq2tvfkcf n2e0ukonil ; daq2tvfkcf odap4wkgft ; daq2tvfkcf awxtj45csr ;
daq2tvfkcf jjvlsi3jdf ; daq2tvfkcf amx55shqxl ; daq2tvfkcf amyioh3yyl ;
daq2tvfkcf fqsnbatx0dt ; deotem521n c140n5sl3j ; deotem521n nfbajjnpq3 ;
deotem521n ozfexalcpnk ; } DW ; typedef struct { real_T ixtpq4chta [ 13 ] ; }
X ; typedef struct { real_T ixtpq4chta [ 13 ] ; } XDot ; typedef struct {
boolean_T ixtpq4chta [ 13 ] ; } XDis ; typedef struct { real_T ixtpq4chta [
13 ] ; } CStateAbsTol ; typedef struct { real_T ixtpq4chta [ 13 ] ; } CXPtMin
; typedef struct { real_T ixtpq4chta [ 13 ] ; } CXPtMax ; typedef struct {
real_T bknvvx0nbk ; real_T jymrjrwokn ; real_T fqqc2lthaw ; real_T jlaar4fxss
; real_T lllpwymczk ; real_T mfwrssphng ; real_T gvxej2o0bq ; real_T
lwdq42u5qf ; real_T ohig0gr4f2 ; real_T jeyi4hh3vm ; real_T fexuyxiurq ;
real_T e4rfdfblcs [ 2 ] ; real_T f2n22io0jl [ 3 ] ; real_T bohzabylkx [ 3 ] ;
} ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct frbh1cromw_ { real_T Constant_Value ; } ; struct nn2fv4tgwj_ { real_T
Constant_Value ; } ; struct P_ { real_T DemoController_D ; real_T
DemoController_DifferentiatorICPrevScaledInput ; real_T
DemoController_LowerSaturationLimit ; real_T DemoController_P ; real_T
DemoController_UpperSaturationLimit ; real_T CompareToConstant_const ; real_T
CompareToConstant_const_au5floo22x ; real_T Calculateq_icrf2lvlh_mu ; real_T
AttitudeProfileNadirPointing1_primaryAlignment [ 3 ] ; real_T
AttitudeProfileNadirPointing1_secondaryAlignment [ 3 ] ; real_T
AttitudeProfileNadirPointing1_secondaryConstraint [ 3 ] ; real_T
Constant_Value ; real_T Constant_Value_aihys3dv45 ; real_T
Constant_Value_dzq43sg5ph ; real_T Constant_Value_d0cr3edft5 ; real_T
SpacecraftDynamics_startDate ; real_T SpacecraftDynamics_mass ; real_T
SpacecraftDynamics_emptyMass ; real_T SpacecraftDynamics_fullMass ; real_T
SpacecraftDynamics_inertia [ 9 ] ; real_T SpacecraftDynamics_emptyInertia [ 9
] ; real_T SpacecraftDynamics_fullInertia [ 9 ] ; real_T
SpacecraftDynamics_semiMajorAxis ; real_T SpacecraftDynamics_eccentricity ;
real_T SpacecraftDynamics_inclination ; real_T SpacecraftDynamics_raan ;
real_T SpacecraftDynamics_argPeriapsis ; real_T
SpacecraftDynamics_trueAnomaly ; real_T SpacecraftDynamics_trueLon ; real_T
SpacecraftDynamics_argLat ; real_T SpacecraftDynamics_lonPeriapsis ; real_T
SpacecraftDynamics_inertialPosition [ 3 ] ; real_T
SpacecraftDynamics_inertialVelocity [ 3 ] ; real_T
SpacecraftDynamics_fixedPosition [ 3 ] ; real_T
SpacecraftDynamics_fixedVelocity [ 3 ] ; real_T SpacecraftDynamics_attitude [
3 ] ; real_T SpacecraftDynamics_attitudeRate [ 3 ] ; real_T
SpacecraftDynamics_customR ; real_T SpacecraftDynamics_customF ; real_T
SpacecraftDynamics_customMu ; real_T SpacecraftDynamics_customJ2 ; real_T
SpacecraftDynamics_customOmega ; real_T SpacecraftDynamics_cbRA ; real_T
SpacecraftDynamics_cbRARate ; real_T SpacecraftDynamics_cbDec ; real_T
SpacecraftDynamics_cbDecRate ; real_T SpacecraftDynamics_cbRotAngle ; real_T
SpacecraftDynamics_cbRotRate ; real_T SpacecraftDynamics_F107ExtrapValue ;
real_T SpacecraftDynamics_MagneticIndexExtrapValue ; real_T
SpacecraftDynamics_fluxFlags [ 23 ] ; real_T SpacecraftDynamics_dragCoeff ;
real_T SpacecraftDynamics_dragArea ; real_T
SpacecraftDynamics_customThirdBodyMu ; real_T
SpacecraftDynamics_reflectivityCoeff ; real_T SpacecraftDynamics_srpArea ;
real_T SpacecraftDynamics_fluxPressure ; real_T Gain_Gain ; real_T
Gain_Gain_j3juhszkgk ; real_T u2_Gain ; real_T Gain2_Gain ; real_T
Gain_Gain_pl5mkabq1s ; real_T Gain1_Gain ; real_T Gain_Gain_l3t3inrppx ;
real_T Gain2_Gain_dysexq3k3a ; real_T Gain1_Gain_e2q2edneho ; real_T
Gain_Gain_jjilyo3l5f ; real_T Gain1_Gain_dietotpkcc ; real_T
Gain2_Gain_hrbuh22v1i ; real_T Bias_Bias ; real_T Bias1_Bias ; real_T
n_j0_Threshold ; real_T e_k0_Threshold ; real_T rv0_Threshold ; real_T
u2_Gain_puv2jr0l5x ; real_T Gain2_Gain_ktnym3b0kl ; real_T
Gain_Gain_p3k0xxw3y5 ; real_T Gain1_Gain_aw214blew1 ; real_T
Gain_Gain_lquzbnpq32 ; real_T Gain2_Gain_e4t4j4tntk ; real_T
Gain1_Gain_i50sgygmi4 ; real_T Gain_Gain_m3g5po4cqr ; real_T
Gain1_Gain_p0r0phdszy ; real_T Gain2_Gain_ojec3gtfvc ; real_T
Bias_Bias_csfjfloua3 ; real_T Bias1_Bias_ke3tqgzwra ; real_T
Gain2_Gain_nxayugor4p ; real_T Gain_Gain_bnqid2pxje ; real_T
Gain1_Gain_e5wrwogqcu ; real_T Gain_Gain_j5qvvnl2lq ; real_T
Gain2_Gain_db4aqwjv3z ; real_T Gain1_Gain_esk0kbkf4p ; real_T
Gain_Gain_iauu5nedpm ; real_T Gain1_Gain_apuoys51w1 ; real_T
Gain2_Gain_lpeiobb14p ; real_T Bias_Bias_cl02abfymb ; real_T
Bias1_Bias_a24mpf5x4w ; real_T Tsamp_WtEt ; real_T Constant_Value_d3lw1laqzd
; real_T Constant_Value_lrjzwukvju ; real_T Constant_Value_kssr5ci3rk ;
real_T Constant_Value_h0g1ugaqun [ 3 ] ; real_T Constant1_Value ; real_T
Constant3_Value ; real_T Constant4_Value ; real_T Constant_Value_axnwdlqcfs ;
real_T Constant1_Value_opnh0fk3y0 ; real_T Constant_Value_p3zoswxu1x ; real_T
Constant1_Value_hxwifwb0l1 ; real_T Constant_Value_oqtxeqjzx0 ; real_T
Constant1_Value_n45i4rp0x0 ; real_T Constant_Value_i203pkjdz2 ; real_T
Constant1_Value_gtzfwmc1c5 ; real_T Bias_Bias_gg4yfzwgb4 ; real_T
Bias1_Bias_aeswfouakq ; real_T Constant_Value_gb5zkazvg1 ; real_T
Constant_Value_owfc2idssk ; real_T Constant_Value_exc5ou3kny ; real_T
Gain_Gain_ob2tt5odxp ; real_T Constant_Value_oaurfxrj3r ; real_T
Constant1_Value_e5gqrcfxog ; real_T Gain2_Gain_ksbgbs1b1v ; real_T
Gain_Gain_fsr5v4y1tz ; real_T Constant_Value_dxp2fjnpsn ; real_T
Constant1_Value_ovmiwvalqb ; real_T Gain2_Gain_d3jllonf2i ; real_T
Constant_Value_e3re2oof5g ; real_T Constant_Value_pximozwm1g ; real_T
Constant_Value_fezz4zcr33 ; nn2fv4tgwj cpe1al53eg ; nn2fv4tgwj havcl53rud ;
nn2fv4tgwj n2e0ukonil ; nn2fv4tgwj odap4wkgft ; nn2fv4tgwj awxtj45csr ;
nn2fv4tgwj jjvlsi3jdf ; nn2fv4tgwj amx55shqxl ; nn2fv4tgwj amyioh3yyl ;
nn2fv4tgwj fqsnbatx0dt ; frbh1cromw c140n5sl3j ; frbh1cromw nfbajjnpq3 ;
frbh1cromw ozfexalcpnk ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR
; extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern
mxArray * mr_Progettino_Simulink_2_GetDWork ( ) ; extern void
mr_Progettino_Simulink_2_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Progettino_Simulink_2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Progettino_Simulink_2_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
