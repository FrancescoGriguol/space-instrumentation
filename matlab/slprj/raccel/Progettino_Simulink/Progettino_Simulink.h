#ifndef RTW_HEADER_Progettino_Simulink_h_
#define RTW_HEADER_Progettino_Simulink_h_
#ifndef Progettino_Simulink_COMMON_INCLUDES_
#define Progettino_Simulink_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
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
#include "Progettino_Simulink_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME Progettino_Simulink
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (429) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (19)   
#elif NCSTATES != 19
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
typedef struct { real_T mggzctu1pl ; real_T nm22vrg0nd ; real_T h425eeyvpv [
3 ] ; } aiaszp10gy ; typedef struct { int8_T a2rjj40ywp ; int8_T albm3s4mg1 ;
} jcmif1ovzr ; typedef struct { real_T hwy1zuefdp ; real_T mmexmoqs3o ;
real_T jlarertbix ; real_T crdfpzruiq [ 2 ] ; real_T fizopcgwpw ; real_T
d0rjutethq [ 3 ] ; real_T biy3lcfiqh [ 3 ] ; real_T ipu40jbxkc [ 3 ] ; real_T
detdp522jl ; real_T mrbpavh2oz ; real_T k4nfyxtqgs ; real_T brmjdh1jne [ 2 ]
; real_T ktfgziawhq ; real_T by41lwgn5q [ 3 ] ; real_T jrp3jngqm4 [ 3 ] ;
real_T g2vhib2cvr ; real_T mccuciecbo ; real_T ntvwzl35y1 ; real_T d1td3mtw0o
[ 2 ] ; real_T g5aa3w2pg2 ; real_T lk4frg4nez [ 3 ] ; } hdlw0y3pau ; typedef
struct { int_T hh2h0bdkhr ; int_T fnjqybqjng ; int_T kwlao0amyp ; int8_T
lwd1akhufz ; int8_T gztbn45a3z ; int8_T edwbquddy5 ; int8_T kjf2mlrcn5 ;
int8_T c22shrmxzv ; int8_T lhvlk4iuhh ; int8_T kcj1uyntyq ; int8_T i5hfqbhf3n
; boolean_T lor4wm3df2 ; boolean_T govadjkjsc ; boolean_T fo0pmhsx1w ; }
dup0c5r5be ; typedef struct { real_T mheahtfjsc [ 2 ] ; real_T nrqn0yenz1 ;
real_T nzabalalqj ; real_T blt1kbtcve ; real_T c4uf51xbpd ; real_T gxvmdadyjm
; real_T mfjcg3rvwm ; } jidt4ig5dn ; typedef struct { int8_T enpph3wzci ; }
kxpy4k5v4e ; typedef struct { int32_T n5xscghzt5 ; int32_T eixotzda1y ;
int32_T cdi222b0lw ; int32_T j1w0d452bd ; int8_T cnlqq3wbpr ; int8_T
jiyadqx1nz ; int8_T g0xy4sqwae ; int8_T b0kk04nmhx ; int8_T brlv5wh42x ;
int8_T l0ee1km5y3 ; int8_T ji5gya2ded ; int8_T hcykzv3wad ; int8_T ipcffemhtb
; int8_T klhmwycvrc ; kxpy4k5v4e f0ct0vyv0f ; kxpy4k5v4e d5msdamlfz ;
kxpy4k5v4e nc3d2s225dp ; } ah50x01gok ; typedef struct { int8_T otbrtqanhj ;
} hlgw4vhwz1 ; typedef struct { int8_T i3ugbonzww ; } hujfpydjyq ; typedef
struct { int8_T mzc0muwlqe ; } b1lvvnz5ee ; typedef struct { int8_T
fzkgibvt0z ; } mihfkbeae1 ; typedef struct { int8_T oabr1nhtl0 ; } lm1u5gfjtf
; typedef struct { real_T P_mbvzarwird [ 15129 ] ; real_T scaleFactor [ 15129
] ; real_T P_cl54gopm0x [ 15129 ] ; real_T scaleFactor_kkiq3xxxve [ 15129 ] ;
int32_T ii_data [ 11715 ] ; int32_T idx_data [ 11715 ] ; real_T factor_dX [
1600 ] ; real_T factor_dX_cxarnvbvui [ 1600 ] ; real_T factor_dX_bhxxfovxdy [
1600 ] ; real_T factor_dX_pbm3vprmfu [ 1600 ] ; real_T factor_dX_cv5hdgrwft [
1600 ] ; real_T factor_dX_fqdqrf4qbc [ 1600 ] ; real_T alojeban0y [ 1275 ] ;
real_T jjqcjcxd2o [ 1275 ] ; real_T factor_dY [ 1275 ] ; real_T
factor_dY_g2mlkqadfk [ 1275 ] ; real_T factor_dY_g1smspu5ke [ 1275 ] ; real_T
factor_dY_merlcviukg [ 1275 ] ; real_T factor_dY_nz4o0shxby [ 1275 ] ; real_T
factor_dY_ppxrqq0gsf [ 1275 ] ; real_T euadah4k3h ; real_T llcehrtvhn ;
real_T jeqvabg4az ; real_T byrmldj5mi ; real_T okxnvy5lqx ; real_T ezbth4ujxd
; real_T g5m32mvkc1 ; real_T e4r5qeolke ; real_T ga5rypsslm [ 2 ] ; real_T
jutkga4qd2 [ 3 ] ; real_T i4qopupqnb [ 9 ] ; real_T jca1szuasj ; real_T
iabnm5gizn [ 4 ] ; real_T ehxix5aenl [ 4 ] ; real_T ax0fejs3gd [ 4 ] ; real_T
hc1vle0nij ; real_T asdgq0ufbw ; real_T lzlfmnbqnc ; real_T csqkrkhhp3 ;
real_T hhwyru5cne ; real_T kqbi5xnx3c ; real_T jh4wilz2qp ; real_T lrokbzbcbl
; real_T ly4m01ggti ; real_T perbvrhuvn ; real_T odph2nvppk ; real_T
evkul53yqr [ 3 ] ; real_T jhsfzpgplv [ 9 ] ; real_T cgbucbezjd ; real_T
cs00szyezv [ 4 ] ; real_T bmrztepqsj [ 4 ] ; real_T gsp5o5fadq [ 4 ] ; real_T
di2zjj0cxp ; real_T npbb4orbrn ; real_T ijjv0pqgbi ; real_T cdbzhdxles ;
real_T fo1xkyuuqw ; real_T aryux2mpud ; real_T n2rhvamu2n ; real_T dchzbwytrt
; real_T ey3frxivxy ; real_T p0ej5trjqy ; real_T bkzltgwsey ; real_T
m22ognaecc ; real_T f5udbqhus4 ; real_T dcwns2onbx ; real_T gzys2w3ces ;
real_T pvtrkpmjlx [ 3 ] ; real_T b30zlmulri [ 9 ] ; real_T df3xekq3hs ;
real_T ghjqmpcniy [ 277 ] ; real_T gn2ztkfb1z [ 277 ] ; real_T dgk2if5mbw [
30 ] ; real_T dnh00xz4om ; real_T oe5vaq0wze [ 30 ] ; real_T cfpsusexbu [ 5 ]
; real_T any3bgkfry ; real_T equk4vxmzl [ 5 ] ; real_T im3dktmtkz ; real_T
huqw3owa31 ; real_T har1iisrgv ; real_T nc24gozukc ; real_T ismtf1h1rv ;
real_T pdn4o2ccb1 ; real_T d5gj3pgruy [ 5 ] ; real_T l3hvfianmn ; real_T
fjsppp5qkw ; real_T iqmdarwpfc ; real_T jysxrp0hid ; real_T je24hwof4o ;
real_T eh1cm0dcnu ; real_T okwr0n4ckp ; real_T ew1fbhjg0i ; real_T dbsmibabcd
; real_T j2lgf0k1iy [ 14 ] ; real_T bs0ib0w300 [ 1275 ] ; real_T czdrofcbpx [
1275 ] ; real_T la4mndlpem ; real_T hcns5vntsp ; real_T kmvljr4z31 ; real_T
fts1tctuad ; real_T llianncde0 ; real_T pykdrabdir [ 253 ] ; real_T
d3u1kkqlwu [ 253 ] ; real_T jraay1f1pr [ 36 ] ; real_T e3calao3aw ; real_T
d5gnrz020j [ 36 ] ; real_T ew14oonzcs [ 4 ] ; real_T jtxbjfrafe ; real_T
nskdszf1b0 [ 4 ] ; real_T iytmbukyup ; real_T ibdge4ifin [ 1600 ] ; real_T
byvohqz5yd [ 1600 ] ; real_T blx22aqp5d [ 1600 ] ; real_T gzu5sr4nj4 [ 1600 ]
; real_T dxpgyldpwa ; real_T c12aemfh1h ; real_T dz3xhxmtdc ; real_T
m5yoamu2yf ; real_T lrq5s00cn2 ; real_T ec0pb3br0e ; real_T enzmivhb2q ;
real_T e4rlncrzk1 ; real_T lnmosdsthr [ 3 ] ; real_T hsq01yrpi3 [ 3 ] ;
real_T guykwjp5rb [ 25 ] ; real_T fvcm0i0mpf ; real_T av2s2uwl4s [ 25 ] ;
real_T ktnuxnbuyd [ 4 ] ; real_T pznyd4lsoo ; real_T l1zxcp3ixb [ 4 ] ;
real_T egtx3oqpiz ; real_T pfjk5vc3ho [ 8 ] ; real_T nlhdzfdxnz [ 66 ] ;
real_T frkmd1nh3o [ 66 ] ; real_T btdqsks1w3 [ 66 ] ; real_T artg3zg31l [ 66
] ; real_T n3250x34vf ; real_T iosjqjhcw2 ; real_T f0zwnfsedo ; real_T
l4mp4janpy ; real_T c4g4kzvxjj ; real_T cy3hzwt1ab ; real_T fzmxncpror ;
real_T mpk1ynsatz ; real_T gszryq5mp5 [ 3 ] ; real_T mhomvucq2f [ 9 ] ;
real_T gcpqe2rbie [ 9 ] ; real_T jmmaqsntxq [ 9 ] ; real_T pzvuyx1moe [ 3 ] ;
real_T lwuxxakgtq ; real_T ae4x5a2ej1 ; real_T nkvv5lo2vn ; real_T gtubjlcdd1
; real_T ko2j5snuf5 [ 9 ] ; real_T n2lf2fqwdp [ 9 ] ; real_T gjiciomtel ;
real_T p5eej1e3rr [ 4 ] ; real_T ig3v2mpqoi [ 4 ] ; real_T ldthwjoznb ;
real_T hdd4jni5kv ; real_T nyxrfignkr ; real_T dzivaj3zae ; real_T oywlrofuco
; real_T lkdpxsgk2u ; real_T o5345nuxkm ; real_T o1brsmaxbn ; real_T
m2vw0pr4ip ; real_T lknlo1o0ev ; real_T f1tqonwtxq ; real_T nfrvm03zzr ;
real_T bctgeqeopr ; real_T n5dfuq1dkh ; real_T jfizvqj0fr ; real_T kcakwqjqtc
; real_T c2fygxgmyy ; real_T itgluwtwyl ; real_T oarzzxmpdp ; real_T
beragepvpk ; real_T d0xgdl5g2u ; real_T fkvthkn5gf ; real_T j3gcm1ueh3 ;
real_T bhouct4kjr ; real_T kkelv3paao ; real_T mmn3e5pqwr ; real_T ay5kjchzuv
; real_T idyjb4zv5z ; real_T l4qutukaeq ; real_T ihkg5fjf4e ; real_T
bpgczidr0v ; real_T pcz10mitmu ; real_T lysewrgehk ; real_T m30el4dr0a ;
real_T n4bwynls00 ; real_T kyqiorcbs1 ; real_T cmhbejtsex ; real_T mv3sc32yuc
; real_T buccrxuvak ; real_T dtacx1bfa4 [ 9 ] ; real_T pwowdownlo [ 9 ] ;
real_T jf2h00fmhl ; real_T hfeqid24qz [ 4 ] ; real_T eg3vopudma [ 3 ] ;
real_T cisyhbxvh4 [ 3 ] ; real_T bztclj5h43 [ 3 ] ; real_T i2bzpmlzdg [ 3 ] ;
real_T eooeg5eazg [ 3 ] ; real_T mzmzexrmlb ; real_T pagtgublys ; real_T
d04h3t1yya ; real_T f103gwoacp ; real_T mszh1dph2a [ 9 ] ; real_T kgkfy51hq3
[ 9 ] ; real_T emazxl1dig [ 9 ] ; real_T l34vm2xsgt ; real_T av1i3dm2ta ;
real_T dyqfr5ptkh ; real_T dcatr2byw2 ; real_T jgoxjo4wm0 ; real_T gi53dzcyqs
; real_T lacie1vj1e [ 3 ] ; real_T ikg0pjfwq2 [ 3 ] ; real_T o33gf4lda2 [ 3 ]
; real_T axmmezv4cx [ 3 ] ; real_T awz1s1me53 [ 3 ] ; real_T gcucuusxb1 ;
real_T ihowc3l3zf ; real_T k53gddyy1v ; real_T hxkg3i0s2w ; real_T ghkcvdbl23
; real_T fdfnrusmqu ; real_T aui1scnlz0 ; real_T kitxz20iu0 ; real_T
ors24hcmqz ; real_T kp5neiegbu ; real_T hhnhsmw1aj ; real_T ll5wdie0pc [ 3 ]
; real_T j1l444gx1a [ 3 ] ; real_T phhd3swfnr [ 3 ] ; real_T n41u5xgqgj [ 3 ]
; real_T dkt1rhbzwi [ 3 ] ; real_T lnu2olqol0 [ 3 ] ; real_T ohffmhykwb ;
real_T hqfed1jxev ; real_T egb30vak0k ; real_T aavjurxoid ; real_T kdigeyhuoo
; real_T dtyyugvcmb ; real_T letkyvc0ck ; real_T exxc3oej54 ; real_T
nfpbdjzue5 ; real_T ox3pnpyisy [ 4 ] ; real_T ogfqdcsroc [ 3 ] ; real_T
hbssyopqtu ; real_T pa3d50s2av ; real_T anvc400s5i ; real_T eeboandznu ;
real_T p3x2y5v0cn ; real_T kvcsveel3h ; real_T owghqung0l [ 3 ] ; real_T
dt5zk1elbh [ 3 ] ; real_T k03pfzvp45 [ 9 ] ; real_T l1ejferprg ; real_T
cl0r5e3o0c ; real_T h3qfl0nx3z ; real_T cckit01z1d ; real_T dt0lpqekzb ;
real_T hc0zsat35x ; real_T ijkxl2oy4a [ 3 ] ; real_T hfhfl0bhvk [ 3 ] ;
real_T jjmljmdoja [ 3 ] ; real_T kv3vc4aj1x [ 3 ] ; real_T cgj1wbmvl3 [ 3 ] ;
real_T cowafecwrg [ 9 ] ; real_T cu3rdzys3l [ 3 ] ; real_T jksvh3ylvf ;
real_T i4rsslez2v ; real_T bw2oiespnl ; real_T cl3huo4orv ; real_T gu2kqiv2hw
; real_T pvoijobp0v ; real_T hbbbgzr5l4 [ 3 ] ; real_T gvsdvg3ilx [ 3 ] ;
real_T lioaye5bib ; real_T jec2ccpft2 ; real_T aeoj0yzek2 ; real_T gicoinhlsx
; real_T idj0pvcean ; real_T nqcz13xvn3 ; real_T povecgexls [ 3 ] ; real_T
ctmiaffq3v ; real_T ocrowqphpo ; real_T c4twb0m53v ; real_T dspsc3shxe ;
real_T fcoylyuggd ; real_T ipbtclkjzb ; real_T ktdbuqvten [ 3 ] ; real_T
bwkun4xofi [ 3 ] ; real_T n51g3sfq1s [ 3 ] ; real_T orwmqey4lq [ 4 ] ; real_T
pkzoqcza25 ; real_T hyttrfjzin ; real_T ho4boakdip ; real_T ld3rs3ydtq ;
real_T e5caxflmf5 ; real_T o4rrr4vzsf ; real_T dgjpwj2p2a ; real_T k0xi4odiac
; real_T cfxo41o0vk ; real_T mgo55y4oew ; real_T mhxzzd2cgh ; real_T
faphvwytme [ 3 ] ; real_T pv512v2ddn [ 9 ] ; real_T kttf2e4dtq [ 3 ] ; real_T
i2wqzdw1t4 [ 3 ] ; real_T cuntnfnczz [ 3 ] ; real_T mak5laezdt [ 3 ] ; real_T
cx2qwbrmnd [ 3 ] ; real_T jnokjapkw4 [ 9 ] ; real_T pzcsn3daee [ 3 ] ; real_T
clu4cfzlvm ; real_T eaqolm3ix1 [ 4 ] ; real_T mn2q4auzyp [ 3 ] ; real_T
jkmgrdtgvf [ 9 ] ; real_T jf1vcnb4ke [ 9 ] ; real_T gmfmrlaqan [ 9 ] ; real_T
pjps33czxn [ 9 ] ; real_T avc1ltptrv ; real_T dppugllmaw ; real_T nh0qx4qb4e
; real_T mf5mrweihn ; real_T ouzzu155j2 ; real_T k2aexg5ho4 ; real_T
kvqkcr3jp5 ; real_T fpcgvjp0vc ; real_T eer5pdru1d ; real_T ciwkzchigx ;
real_T jztdltzeuu ; real_T iga0vum1fd ; real_T n5vl1pzeoh ; real_T ikkmahqi3g
; real_T ixbeg4bq1w ; real_T ftmep5lbjn [ 3 ] ; real_T ookklbwkc4 [ 3 ] ;
real_T lbsgujgfow ; real_T azsajwsmnl ; real_T aeuwhdgqlt [ 3 ] ; real_T
g5kskvd4dh ; real_T aa12jzbf5x ; real_T edtd5lv0x2 ; real_T n1dir1dybl ;
real_T i3dag5fquj ; real_T kitn1c2jzu ; real_T dtjlbyheym ; real_T jtre524jzp
; real_T bu5dxdlky5 ; real_T ip5etj0npv ; real_T haodzwrrvz ; real_T
n35smzbfat [ 528 ] ; real_T mno21ycbvq [ 66 ] ; real_T aposbmyg3s [ 66 ] ;
real_T hik5vpagxq [ 22400 ] ; real_T kpxr1tsdfm [ 1600 ] ; real_T b5w0x1divg
[ 1600 ] ; real_T o4qbq20hxa [ 17850 ] ; real_T ggscr3uged [ 1275 ] ; real_T
g0rquunn1x [ 1275 ] ; real_T ckvxx4nayh [ 2 ] ; real_T cgbe3povcf ; real_T
d3k2bmrhzm ; real_T kik1voqttn [ 3 ] ; real_T eegfyvgagm [ 3 ] ; boolean_T
bqwjkojzth ; boolean_T m0tdfc5cjd ; boolean_T cnqbt2rxpy ; hdlw0y3pau
mgjf5xyu25 ; aiaszp10gy htskuvfadt ; hdlw0y3pau dsakrfnkjo ; aiaszp10gy
fbrnttkq1r ; hdlw0y3pau dbflsykorix ; aiaszp10gy ppzwf3ql1xp ; } B ; typedef
struct { real_T pdkkfcgv4u [ 3 ] ; real_T dqtu0tcxoc [ 3 ] ; real_T
maebvwuwk4 [ 9 ] ; real_T kuvguttqdo ; real_T daak45xano [ 3 ] ; real_T
h1usgsmb3l ; real_T nononej2ko [ 3 ] ; real_T j3tstdfhdc ; real_T fwl2n1t0if
[ 3 ] ; real_T aje24raar4 ; real_T cooc55ldgw [ 3 ] ; struct { void *
AQHandles ; } e5boiilz21 ; int_T iao5itz1rk ; int_T euwvch2b4t ; int_T
pxi0ikuj1l [ 3 ] ; int8_T oy035qmdpk ; int8_T b4qrxgzx50 ; int8_T lhwnrsqe2o
; int8_T nu5r5ksvth ; int8_T h2euf3h2fs ; int8_T p0hhyrpqjr ; int8_T
psepyqccwf ; int8_T p4sgmsdajr ; int8_T lbciurgcb5 ; int8_T jg1tpnu0cw ;
int8_T kyuw22is4e ; int8_T n1triq1jh2 ; int8_T a5dduzw4gs ; int8_T fdnlccdi22
; int8_T dos0mehybg ; int8_T az2jkad4ze ; int8_T jewzgud0nm ; int8_T
esa0dihfkf ; int8_T nkqorsic4o ; int8_T pix1nuvmf1 ; int8_T bgpvmkicea ;
int8_T a2q32v1wgx ; int8_T cjrybag1gz ; int8_T jppl4slhes ; int8_T dpvnto0ek0
; int8_T azkm5wbzjz ; int8_T mfmutxkpd0 ; int8_T gl2fp3txn4 ; int8_T
emlkthshn5 ; int8_T jwwu1fs34w ; int8_T pfdm5p0qt2 ; int8_T lofpprbnta ;
int8_T ford2ne1lg ; int8_T btl0y5thsw ; int8_T mpvgix3nhp ; int8_T b1ww1dtyec
; int8_T ptgbvzck4s ; int8_T bxuqw4msya ; int8_T oqz34tgcpd ; int8_T
h5zww4voaj ; int8_T fymun1pw2x ; int8_T k5dffrvq4p ; int8_T l0psfoghzb ;
int8_T cdy1vxyxko ; int8_T hnkaywh3hs ; boolean_T kp2zdfch2j ; boolean_T
kqcwhbud4q ; boolean_T fk2du2512x ; boolean_T kva55iufqb ; boolean_T
obcheoxv5a ; boolean_T fsudjiwu4m ; boolean_T lwfgwtrui3 ; boolean_T
o03mpatpwr ; b1lvvnz5ee os2efyfafn ; lm1u5gfjtf epff30o0g2 ; mihfkbeae1
drr2adcqdn ; lm1u5gfjtf gyjjptmc2fc ; mihfkbeae1 cjawymwwjlh ; b1lvvnz5ee
hm2ju42yt22 ; ah50x01gok opjf0lbepe ; dup0c5r5be mgjf5xyu25 ; jcmif1ovzr
htskuvfadt ; ah50x01gok euaw30nuxs ; dup0c5r5be dsakrfnkjo ; jcmif1ovzr
fbrnttkq1r ; hujfpydjyq biozmszeya ; hujfpydjyq mkfnf0iokw ; hujfpydjyq
jdsavmmfhg ; hujfpydjyq a3r3mrnamp ; hujfpydjyq bnxpci3ib0 ; hujfpydjyq
pvhxclmxep ; hujfpydjyq evhrkojp4r ; hujfpydjyq awyolbs11u ; hujfpydjyq
bpabrhgrbk4 ; hlgw4vhwz1 cwpt2oqqi5 ; hlgw4vhwz1 gmk5vtgqmz ; hlgw4vhwz1
fwabxxddoc4 ; ah50x01gok d35ajiya3pc ; dup0c5r5be dbflsykorix ; jcmif1ovzr
ppzwf3ql1xp ; } DW ; typedef struct { real_T b2w5k4m3uw [ 4 ] ; real_T
mduwrl3rsd [ 6 ] ; real_T auwo3rehug [ 3 ] ; real_T jhkwbqqjd2 [ 6 ] ; } X ;
typedef struct { real_T b2w5k4m3uw [ 4 ] ; real_T mduwrl3rsd [ 6 ] ; real_T
auwo3rehug [ 3 ] ; real_T jhkwbqqjd2 [ 6 ] ; } XDot ; typedef struct {
boolean_T b2w5k4m3uw [ 4 ] ; boolean_T mduwrl3rsd [ 6 ] ; boolean_T
auwo3rehug [ 3 ] ; boolean_T jhkwbqqjd2 [ 6 ] ; } XDis ; typedef struct {
real_T b2w5k4m3uw [ 4 ] ; real_T mduwrl3rsd [ 6 ] ; real_T auwo3rehug [ 3 ] ;
real_T jhkwbqqjd2 [ 6 ] ; } CStateAbsTol ; typedef struct { real_T b2w5k4m3uw
[ 4 ] ; real_T mduwrl3rsd [ 6 ] ; real_T auwo3rehug [ 3 ] ; real_T jhkwbqqjd2
[ 6 ] ; } CXPtMin ; typedef struct { real_T b2w5k4m3uw [ 4 ] ; real_T
mduwrl3rsd [ 6 ] ; real_T auwo3rehug [ 3 ] ; real_T jhkwbqqjd2 [ 6 ] ; }
CXPtMax ; typedef struct { real_T bgofijijfh ; real_T gfvkgy3tus ; real_T
iottldf3vj [ 2 ] ; real_T jc1z2z0n3z [ 2 ] ; real_T pqnbal4mnl ; real_T
bfu0og4esk ; real_T agspyvyeuv ; real_T e3fglzpg2s ; real_T ltsajmv5xj ;
real_T l4oxjes3y4 ; real_T ph2fxunudp ; jidt4ig5dn mgjf5xyu25 ; jidt4ig5dn
dsakrfnkjo ; jidt4ig5dn dbflsykorix ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct ipwjrrbf45_ { real_T
Gain_Gain ; real_T Gain1_Gain ; real_T Constant_Value ; } ; struct
ijvvbz1u4h_ { real_T Switch_Threshold ; real_T Gain_Gain ; real_T
Constant1_Value ; real_T Constant2_Value [ 2 ] ; real_T Constant_Value ;
real_T Switch_Threshold_bkxfyiz0l3 ; real_T Gain_Gain_pzv20mppjk ; real_T
Constant1_Value_l0410z4rcs ; real_T Constant2_Value_avb3a0c4gl [ 2 ] ; real_T
Constant_Value_af041kept2 ; real_T Switch_Threshold_mnyfpqpkba ; real_T
Gain_Gain_jycjqnvq34 ; real_T Constant1_Value_i2jy5iyfvd ; real_T
Constant2_Value_btq1pmdtio [ 2 ] ; real_T Constant_Value_npm14lmfk0 ; } ;
struct cyxavry0tp_ { real_T Constant1_Value ; real_T
Constant1_Value_h2eqmmrfbu ; real_T Bias_Bias ; real_T Bias1_Bias [ 9 ] ; } ;
struct ffovmq5xj5_ { real_T Constant_Value ; } ; struct n5wmczawxw_ { real_T
Constant_Value ; } ; struct fcqzy5lqzo_ { real_T Bias1_Bias ; real_T
Bias_Bias ; } ; struct P_ { real_T PIDController_D ; real_T
PIDController_DifferentiatorICPrevScaledInput ; real_T PIDController_I ;
real_T PIDController_InitialConditionForIntegrator ; real_T PIDController_P ;
real_T CompareToConstant_const ; real_T CompareToConstant_const_d3jpvehzru ;
real_T JulianDateConversion_day ; real_T JulianDateConversion_day_ci33hfykjt
; real_T uDOFRotationalDynamics_euler0 [ 3 ] ; real_T
CubeSatVehicleNadirPointing_firstAlign [ 3 ] ; real_T R_woPM_hour ; real_T
uDOFRotationalDynamics_inertia [ 9 ] ; real_T R_woPM_min ; real_T
CheckdeltaT_minmax [ 2 ] ; real_T CheckdeltaT_minmax_bfmmxdiviu [ 2 ] ;
real_T CheckdeltaT_minmax_ec0sxiywft [ 2 ] ; real_T
JulianDateConversion_month ; real_T JulianDateConversion_month_bvvby5mlkc ;
real_T uDOFRotationalDynamics_pqr0 [ 3 ] ; real_T R_woPM_sec ; real_T
JulianDateConversion_sec ; real_T JulianDateConversion_sec_jtenpffjtr ;
real_T CubeSatVehicleNadirPointing_secondAlign [ 3 ] ; real_T
CubeSatVehicleNadirPointing_secondRef [ 3 ] ; real_T
CubeSatVehicleNadirPointing_sim_t0 ; real_T
DirectionCosineMatrixtoQuaternions_tolerance ; real_T
DirectionCosineMatrixtoQuaternions_tolerance_d25xxauyvc ; real_T
DirectionCosineMatrixtoQuaternions1_tolerance ; real_T R_woPM_year ; uint8_T
DirectionCosineMatrixtoQuaternions_action ; uint8_T
DirectionCosineMatrixtoQuaternions_action_ipvmzkg2ix ; uint8_T
DirectionCosineMatrixtoQuaternions1_action ; real_T Constant_Value [ 9 ] ;
real_T Gain_Gain ; real_T Constant_Value_b4qk05ulds ; real_T
Constant_Value_pzayxsoswa [ 3 ] ; real_T Constant_Value_pfsh5we44d ; real_T
Constant_Value_fzfhcnamm4 ; real_T Constant_Value_p5bespxvlk ; real_T
Constant_Value_oomjrqvjll ; real_T Constant_Value_d4irfwhbgw ; real_T
Constant_Value_epx023t0vf ; real_T sec2day_Gain ; real_T JDtoMJD_Bias ;
real_T Bias1_Bias ; real_T Gain_Gain_gpb3xlyqbj ; real_T Gain1_Gain ; real_T
BiasYear_Bias ; real_T Gain_Gain_bgzobeqxkq ; real_T Bias1_Bias_jkzhcvgtfc ;
real_T Gain1_Gain_gbfeuq0fnu ; real_T Bias2_Bias ; real_T Gain2_Gain ; real_T
Gain3_Gain ; real_T BiasDay_Bias ; real_T Gain5_Gain ; real_T Gain6_Gain ;
real_T Gain4_Gain ; real_T Bias1_Bias_ktujafrvag ; real_T
Gain_Gain_ggvj1dybcr ; real_T Gain_Gain_bi4swvtgvr ; real_T
BiasYear_Bias_azbiirumjd ; real_T Gain_Gain_eht1ixxtxj ; real_T
Bias1_Bias_nplz5xhbi1 ; real_T Gain1_Gain_mvaatp2noa ; real_T
Bias2_Bias_iruukobvn1 ; real_T Gain2_Gain_kmwnmk1g0e ; real_T
Gain3_Gain_hwr44bkhjs ; real_T BiasDay_Bias_elfqxebcda ; real_T
Gain5_Gain_aauo3tubhh ; real_T Gain6_Gain_dfhvmeykmp ; real_T
Gain4_Gain_ley3ulmmap ; real_T gainVal_Gain ; real_T Bias_Bias ; real_T
Bias1_Bias_osb5fmbrqj ; real_T Gain_Gain_dy3e0g11sy ; real_T
Gain1_Gain_exw13j3ypq ; real_T Y0_Coefs [ 6 ] ; real_T mMoon_Coefs [ 5 ] ;
real_T mSun_Coefs [ 5 ] ; real_T umMoon_Coefs [ 5 ] ; real_T dSun_Coefs [ 5 ]
; real_T omegaMoon_Coefs [ 5 ] ; real_T Gain_Gain_i5lnpy5x0u ; real_T
lMercury_Coefs [ 2 ] ; real_T lVenus_Coefs [ 2 ] ; real_T lEarth_Coefs [ 2 ]
; real_T lMars_Coefs [ 2 ] ; real_T lJupiter_Coefs [ 2 ] ; real_T
lSaturn_Coefs [ 2 ] ; real_T lUranus_Coefs [ 2 ] ; real_T lNeptune_Coefs [ 2
] ; real_T pa_Coefs [ 3 ] ; real_T Gain4_Gain_efepjispec ; real_T X0_Coefs [
6 ] ; real_T Gain3_Gain_aabyz5zf2s ; real_T S0_Coefs [ 6 ] ; real_T
Gain2_Gain_pou2gukgqi ; real_T Gain5_Gain_am0uig1cmx ; real_T
Gain1_Gain_pbqw5j2fih ; real_T ECEFPositiontoLLA1_F ; real_T
ECEFPositiontoLLA1_R ; real_T Merge_InitialOutput [ 4 ] ; real_T
Gain_Gain_lryown0oaz ; real_T Gain_Gain_pcihzgoudz ; real_T
Gain_Gain_fnbva5rzog ; real_T Gain_Gain_ixfus131cb ; real_T
Gain_Gain_i1pezazerb ; real_T Gain_Gain_dzdyroxgcf ; real_T
Merge_InitialOutput_ccivs42aec [ 4 ] ; real_T ECEFPositiontoLLA_F ; real_T
ECEFPositiontoLLA_R ; real_T Gain_Gain_dujjaachil ; real_T
Gain1_Gain_asxuri0ux2 ; real_T Merge_InitialOutput_c3k0hywi40 ; real_T
Bias_Bias_ga5qfmk0j2 ; real_T Bias1_Bias_dxgumovqcv ; real_T
Bias_Bias_iavj00uoq0 ; real_T Bias1_Bias_caybofxml4 ; real_T
Gain2_Gain_m5zvpxsxck ; real_T Gain_Gain_py4af0qhk0 ; real_T
Gain1_Gain_dagg2zsouf ; real_T Gain_Gain_goflxmm4t1 ; real_T
Gain2_Gain_knulfk0b14 ; real_T Gain1_Gain_m2yoeskjnf ; real_T
Gain_Gain_mkfclptj2f ; real_T Gain1_Gain_all5xttqxr ; real_T
Gain2_Gain_plnd1opsix ; real_T Bias_Bias_p4exua5ult ; real_T
Bias1_Bias_kizcgujphi ; real_T Integrator_gainval ; real_T Switch_Threshold ;
real_T Gain2_Gain_jtz2spk1hv ; real_T
OrbitPropagatorNumericalhighprecision_startDate ; real_T
OrbitPropagatorNumericalhighprecision_mass ; real_T
OrbitPropagatorNumericalhighprecision_semiMajorAxis ; real_T
OrbitPropagatorNumericalhighprecision_eccentricity ; real_T
OrbitPropagatorNumericalhighprecision_inclination ; real_T
OrbitPropagatorNumericalhighprecision_raan ; real_T
OrbitPropagatorNumericalhighprecision_argPeriapsis ; real_T
OrbitPropagatorNumericalhighprecision_trueAnomaly ; real_T
OrbitPropagatorNumericalhighprecision_trueLon ; real_T
OrbitPropagatorNumericalhighprecision_argLat ; real_T
OrbitPropagatorNumericalhighprecision_lonPeriapsis ; real_T
OrbitPropagatorNumericalhighprecision_inertialPosition [ 3 ] ; real_T
OrbitPropagatorNumericalhighprecision_inertialVelocity [ 3 ] ; real_T
OrbitPropagatorNumericalhighprecision_fixedPosition [ 3 ] ; real_T
OrbitPropagatorNumericalhighprecision_fixedVelocity [ 3 ] ; real_T
OrbitPropagatorNumericalhighprecision_customR ; real_T
OrbitPropagatorNumericalhighprecision_customF ; real_T
OrbitPropagatorNumericalhighprecision_customMu ; real_T
OrbitPropagatorNumericalhighprecision_customJ2 ; real_T
OrbitPropagatorNumericalhighprecision_customOmega ; real_T
OrbitPropagatorNumericalhighprecision_cbRA ; real_T
OrbitPropagatorNumericalhighprecision_cbRARate ; real_T
OrbitPropagatorNumericalhighprecision_cbDec ; real_T
OrbitPropagatorNumericalhighprecision_cbDecRate ; real_T
OrbitPropagatorNumericalhighprecision_cbRotAngle ; real_T
OrbitPropagatorNumericalhighprecision_cbRotRate ; real_T
OrbitPropagatorNumericalhighprecision_F107ExtrapValue ; real_T
OrbitPropagatorNumericalhighprecision_MagneticIndexExtrapValue ; real_T
OrbitPropagatorNumericalhighprecision_fluxFlags [ 23 ] ; real_T
OrbitPropagatorNumericalhighprecision_dragCoeff ; real_T
OrbitPropagatorNumericalhighprecision_dragArea ; real_T
OrbitPropagatorNumericalhighprecision_customThirdBodyMu ; real_T
OrbitPropagatorNumericalhighprecision_reflectivityCoeff ; real_T
OrbitPropagatorNumericalhighprecision_srpArea ; real_T
OrbitPropagatorNumericalhighprecision_fluxPressure ; real_T
Merge_InitialOutput_gzinpauyuj [ 4 ] ; real_T Constant_Value_gdlxryc33g ;
real_T Constant2_Value [ 9 ] ; real_T Constant_Value_frhz3u5giv ; real_T
omega_Value [ 3 ] ; real_T f_Value ; real_T Constant_Value_hyqg2dczhu ;
real_T f_Value_ehhpvuxf5e ; real_T f1_Value ; real_T f3_Value ; real_T
f4_Value ; real_T f2_Value ; real_T omega_Value_bvkcc25m2n [ 3 ] ; real_T
Constant_Value_l4arljtux0 [ 4 ] ; real_T Constant_Value_k3ctfilvfu ; real_T
Gain_Gain_ldiqmll5ij ; real_T Gain1_Gain_lmlkkjflr3 ; real_T
Gain2_Gain_efnszpjpig ; real_T Constant_Value_hksw0sosxp ; real_T
Gain_Gain_gswko023n2 ; real_T Gain1_Gain_h0xvytfhz3 ; real_T
Gain2_Gain_nbldbobqac ; real_T Constant_Value_iesqswxpyb ; real_T
Gain_Gain_jazyxujawe ; real_T Gain1_Gain_gzrg0ews2m ; real_T
Gain2_Gain_dc003adtrx ; real_T Bias_Bias_odjwtovnlo ; real_T
Bias1_Bias_aasfha5wcb ; real_T Constant_Value_ighdzmp5of ; real_T
Constant_Value_mjcyaeht00 ; real_T Constant_Value_dpovcd3fdk ; real_T
Gain_Gain_a53ok3rvym ; real_T Constant_Value_brysbjxdlw ; real_T
Constant1_Value ; real_T Gain2_Gain_aq0gssb02f ; real_T Gain_Gain_okd0gndzhi
; real_T Constant_Value_eqyw1rbnm0 ; real_T Constant1_Value_gy4ofsslfd ;
real_T Gain2_Gain_bee1kljlff ; real_T Constant_Value_pbhkcdpxfh ; real_T
Gain_Gain_d4scw2m4xs ; real_T Gain1_Gain_j2qksbgirt ; real_T
Gain2_Gain_nifzxniimr ; real_T Constant_Value_ihsdt1sfni ; real_T
Gain_Gain_oun2qmk4aj ; real_T Gain1_Gain_mpejidtdqp ; real_T
Gain2_Gain_jklrzpcb5q ; real_T Constant_Value_iwczjn0ydw ; real_T
Gain_Gain_bfx3eqpme4 ; real_T Gain1_Gain_pjlm44wg41 ; real_T
Gain2_Gain_job4z2fnli ; real_T constraintCoord_Value ; real_T firstRef_Value
[ 3 ] ; real_T pointing_Value ; real_T Constant_Value_fnna4j0ea0 [ 3 ] ;
real_T pointing_Value_p3suyi4zcb ; real_T Constant1_Value_d5d01luzep ; real_T
Bias_Bias_ivvmyppyjk ; real_T Constant2_Value_o5c2miznrx [ 2 ] ; real_T
dayFrac_Value ; real_T Bias_Bias_dxe0gg540w ; real_T Index_Value ; real_T
sec2_Value [ 4 ] ; real_T secGain_Gain ; real_T Constant_Value_gcbbaa0o4x ;
real_T Index_Value_mwl2a4mi0a ; real_T sec2_Value_owmusj1svl [ 4 ] ; real_T
Constant_Value_i0guiqbdyo ; real_T Constant_Value_l0aesvmy0a ; real_T
Constant_Value_mhyxctzrfm [ 726 ] ; real_T Constant1_Value_bwuhfnwvpc [ 33 ]
; real_T Constant2_Value_jtdni3uqbn [ 3 ] ; real_T Constant3_Value [ 25 ] ;
real_T Constant4_Value [ 4 ] ; real_T Constant_Value_mwjkvagc5n [ 27200 ] ;
real_T Constant1_Value_jnrceisjvk [ 1306 ] ; real_T
Constant2_Value_fqw5u41bp4 [ 253 ] ; real_T Constant3_Value_l4jatej54a [ 36 ]
; real_T Constant4_Value_i04iz1emvq [ 4 ] ; real_T Constant_Value_pzqcjqvbwq
[ 21675 ] ; real_T Constant1_Value_khgwwjaql5 [ 962 ] ; real_T
Constant2_Value_e215idfgwt [ 277 ] ; real_T Constant3_Value_p4kb5xblkv [ 30 ]
; real_T Constant4_Value_gwi315xbx3 [ 5 ] ; real_T Constant_Value_jhh2lky2pp
; real_T Constant1_Value_lb1fv0zkxi [ 2 ] ; real_T Gain1_Gain_dttbefgpmn ;
real_T const1_Value ; real_T const5_Value ; real_T firstAlign2_Value [ 3 ] ;
real_T firstAlign3_Value [ 3 ] ; fcqzy5lqzo drr2adcqdn ; fcqzy5lqzo
cjawymwwjlh ; cyxavry0tp opjf0lbepe ; ijvvbz1u4h mgjf5xyu25 ; ipwjrrbf45
htskuvfadt ; cyxavry0tp euaw30nuxs ; ijvvbz1u4h dsakrfnkjo ; ipwjrrbf45
fbrnttkq1r ; n5wmczawxw biozmszeya ; n5wmczawxw mkfnf0iokw ; n5wmczawxw
jdsavmmfhg ; n5wmczawxw a3r3mrnamp ; n5wmczawxw bnxpci3ib0 ; n5wmczawxw
pvhxclmxep ; n5wmczawxw evhrkojp4r ; n5wmczawxw awyolbs11u ; n5wmczawxw
bpabrhgrbk4 ; ffovmq5xj5 cwpt2oqqi5 ; ffovmq5xj5 gmk5vtgqmz ; ffovmq5xj5
fwabxxddoc4 ; cyxavry0tp d35ajiya3pc ; ijvvbz1u4h dbflsykorix ; ipwjrrbf45
ppzwf3ql1xp ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B
rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray *
mr_Progettino_Simulink_GetDWork ( ) ; extern void
mr_Progettino_Simulink_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Progettino_Simulink_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Progettino_Simulink_GetCAPIStaticMap ( void
) ; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
