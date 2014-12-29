/* adv05.c: Adv660 - copyright Mike Arnautov, 25 Dec 2014.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p231(void)
#else
int p231()
#endif
{
int done=0;
   if (value[696]==1) {
   return 0;
   }
   if (!(bitest(evar(669),0))) {
   return 0;
   }
   if (have(value[669],-1,-1)) {
   say(76,811,669);
   }
   if (!(isnear(value[669],-1,-1))) {
   say(76,816,669);
   }
   if (KEY(84)) {
   (*procs[570])();
   longjmp(loop_back,1);
   }
   if (!(bitest(evar(669),3))) {
   say(64,812,0);
   }
   if ((KEY(60)) &&
   value[60]==0) {
   if (bitest(evar(733),6)) {
   set('V',698,'c',0,NULL,NULL);
   } else {
   bitmod('s',evar(733),6);
   set('V',698,'c',1,NULL,NULL);
   }
   say(76,1694,698);
   }
   if (value[704]<value[719]) {
   apport(value[669],INHAND);
   say(12,1493,668);
   if ((KEY(104)) &&
   value[700]>0) {
   say(12,1494,102);
   } else {
   say(12,1494,669);
   }
   if (((KEY(107)) &&
   value[715]==3) &&
   value[107]==0) {
   say(0,1390,0);
   set('E',107,'c',1,NULL,NULL);
   }
   p450();
   } else {
   say(0,895,0);
   flush_command();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p133(void)
#else
int p133()
#endif
{
int done=0;
   default_to(0,486,-1);
   if (KEY(3)) {
   default_to(1,486,-1);
   }
   if (!anyof(101,100,111,113,112,53,118,27,38,
   97,95,-1)) return 0;
   if (KEY(101)) {
   p135();
   } else {
   if (KEY(100)) {
   p137();
   } else {
   if (KEY(111)) {
   p136();
   } else {
   if ((KEY(113)) ||
   KEY(112)) {
   p139();
   } else {
   if (KEY(53)) {
   p141();
   } else {
   if (KEY(118)) {
   p142();
   } else {
   if ((KEY(27)) &&
   isnear(27,-1,-1)) {
   apport(27,485);
   bitmod('s',27,13);
   value[714] = irand(12-4+1)+4;
   set('V',722,'v',714,NULL,NULL);
   say(64,1157,0);
   }
   if (KEY(38)) {
   if (have(38,-1,-1)) {
   apport(38,HERE);
   say(0,1700,0);
   say(64,774,0);
   }
   } else {
   if (KEY(95)) {
   p140();
   } else {
   if (KEY(97)) {
   p138();
   }}}}}}}}}
return done;
}
#ifdef __STDC__
int p134(void)
#else
int p134()
#endif
{
int done=0;
   if (value[696]==1) {
   return 0;
   }
   if (!(bitest(evar(669),0))) {
   return 0;
   }
   if (have(value[669],-1,-1)) {
   p85();
   if (((((((value[HERE]==393)) &&
   !(bitest(evar(669),15))) ||
   (value[HERE]==415)) ||
   (value[HERE]==418)) ||
   (value[HERE]==417)) ||
   bitest(evar(670),13)) {
   apport(value[669],419);
   if (KEY(110)) {
   apport(110,484);
   if (isnear(91,-1,-1)) {
   say(0,1296,0);
   if (value[91]>1) {
   say(0,1297,0);
   }
   set('E',91,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   }}
   say(12,1548,669);
   if (((value[HERE]==393)) ||
   (value[HERE]==415)) {
   if ((value[HERE]==393)) {
   value[700]=1605;*bitword(700)=-1;
   } else {
   value[700]=1266;*bitword(700)=-1;
   }
   } else {
   value[700]=1298;*bitword(700)=-1;
   }
   if (bitest(evar(669),11)) {
   say(11,700,1);
   } else {
   say(11,700,0);
   }
   longjmp(loop_back,1);
   }
   if ((value[HERE]==204)) {
   apport(value[669],203);
   say(12,1548,669);
   if (bitest(evar(669),11)) {
   say(9,1080,1);
   } else {
   say(9,1080,0);
   }
   longjmp(loop_back,1);
   }
   apport(value[669],HERE);
   if ((KEY(89)) &&
   value[89]==0) {
   bitmod('s',evar(696),4);
   say(0,89,0);
   bitmod('c',evar(696),4);
   set('E',89,'c',1,NULL,NULL);
   } else {
   if (((KEY(80)) &&
   (value[HERE]==141)) &&
   !(bitest(80,5))) {
   say(12,1270,669);
   bitmod('s',80,5);
   } else {
   if (KEY(114)) {
   say(12,1493,668);
   say(12,1495,114);
   if (value[114]==4) {
   say(12,1497,113);
   } else {
   if (value[114]==3) {
   say(12,1497,112);
   } else {
   say(0,774,0);
   }}
   if (value[114]>2) {
   set('E',114,'c',2,NULL,NULL);
   }
   } else {
   say(12,1493,668);
   say(12,1494,669);
   }}}
   } else {
   say(12,815,669);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p247(void)
#else
int p247()
#endif
{
int done=0;
   if (value[696]==1) {
   say(76,884,668);
   }
   if ((((((((((513<=value[668] && value[668]<=522)) ||
   (513<=value[669] && value[669]<=522)) ||
   (612<=value[669] && value[669]<=626)) ||
   KEY(523)) ||
   KEY(524)) ||
   KEY(529)) ||
   KEY(614)) ||
   KEY(526)) ||
   KEY(525)) {
   if (value[669]<LPROC && value[669]>= 0) (*procs[value[669]])(); else pcall(value[669]);
   } else {
   if (bitest(evar(669),1)) {
   if ((value[HERE]==value[669])) {
   say(64,843,0);
   }
   say(64,935,0);
   }
   if ((((((KEY(19)) ||
   KEY(134)) ||
   KEY(82)) ||
   KEY(16)) ||
   KEY(38)) ||
   KEY(85)) {
   if (isnear(value[669],-1,-1)) {
   say(76,1591,669);
   }
   say(76,816,669);
   }
   say(64,1520,0);
   }
return done;
}
#ifdef __STDC__
int p124(void)
#else
int p124()
#endif
{
int done=0;
   say(64,861,0);
return done;
}
#ifdef __STDC__
int p76(void)
#else
int p76()
#endif
{
int done=0;
   if ((((((value[HERE]==142)) ||
   (value[HERE]==136)) ||
   (value[HERE]==143)) ||
   (value[HERE]==144)) ||
   (value[HERE]==141)) {
   say(64,842,0);
   }
   say(64,843,0);
return done;
}
#ifdef __STDC__
int p420(void)
#else
int p420()
#endif
{
int done=0;
   if (!(((isnear(111,0,4)) ||
   isnear(114,0,4)) ||
   isnear(113,-1,-1))) {
   if (have(118,-1,-1)) {
   say(64,1425,0);
   }
   say(76,1023,113);
   }
   if (value[696]>1) {
   if (((value[668]==113)) &&
   !isnear(value[669],-1,-1)) {
   say(76,816,669);
   } else {
   if (((value[669]==113)) &&
   !isnear(value[668],-1,-1)) {
   say(76,816,668);
   }}}
   if (KEY(6)) {
   p126();
   if (value[6]==0) {
   set('E',6,'c',1,NULL,NULL);
   say(64,917,0);
   }
   say(12,1493,113);
   say(76,1494,6);
   }
   if (KEY(11)) {
   p126();
   say(64,915,0);
   }
   if (KEY(72)) {
   p126();
   set('E',72,'c',1,NULL,NULL);
   say(64,1695,0);
   }
   if (KEY(115)) {
   say(64,1660,0);
   }
   if (KEY(116)) {
   value[700]=1706;*bitword(700)=-1;
   if (value[116]==0) {
   value[700] += 1;
   }
   say(66,700,0);
   }
return done;
}
#ifdef __STDC__
int p623(void)
#else
int p623(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(11)) return 0;
   if (isnear(11,-1,-1)) {
   if ((have(114,0,3)) ||
   have(111,0,3)) {
   if (!(have(111,0,3))) {
   set('E',114,'c',2,NULL,NULL);
   say(64,1370,0);
   }
   set('E',111,'c',2,NULL,NULL);
   p626();
   } else {
   say(12,1023,668);
   }
   } else {
   say(12,816,669);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p624(void)
#else
int p624(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(6)) return 0;
   if (isnear(6,-1,-1)) {
   if ((have(114,0,3)) ||
   have(111,0,3)) {
   if (have(111,0,3)) {
   set('E',111,'c',2,NULL,NULL);
   } else {
   set('E',114,'c',2,NULL,NULL);
   }
   set('E',6,'c',0,NULL,NULL);
   say(64,916,0);
   }
   say(76,1023,112);
   }
   say(76,816,6);
return done;
}
#ifdef __STDC__
int p576(void)
#else
int p576()
#endif
{
int done=0;
   if (!anyof(115,116,-1)) return 0;
   p311();
   if (value[698]==0) {
   p628();
   }
return done;
}
#ifdef __STDC__
int p577(void)
#else
int p577(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(112)) return 0;
   if ((have(114,0,3)) ||
   have(111,0,3)) {
   p139();
   longjmp(loop_back,1);
   }
   say(76,1023,669);
return done;
}
#ifdef __STDC__
int p578(void)
#else
int p578(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(113)) return 0;
   if ((have(114,0,4)) ||
   have(111,0,4)) {
   p139();
   longjmp(loop_back,1);
   }
   say(76,1023,669);
return done;
}
#ifdef __STDC__
int p579(void)
#else
int p579(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(110)) return 0;
   if (!have(110,-1,-1)) return 0;
   if (isnear(22,-1,-1)) {
   say(64,991,0);
   }
   if (isnear(134,-1,-1)) {
   apport(110,HERE);
   bitmod('s',134,14);
   say(64,906,0);
   }
   if (isnear(38,-1,-1)) {
   apport(110,484);
   set('E',38,'c',1,NULL,NULL);
   if (value[115]==1) {
   set('E',115,'c',0,NULL,NULL);
   }
   say(64,975,0);
   }
   if (isnear(91,-1,-1)) {
   say(0,1296,0);
   apport(110,484);
   if (value[91]>1) {
   say(64,1297,0);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p580(void)
#else
int p580(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(117)) return 0;
   if (!have(117,-1,-1)) return 0;
   p544();
return done;
}
#ifdef __STDC__
int p581(void)
#else
int p581(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(118)) return 0;
   if (!have(118,-1,-1)) return 0;
   p46();
return done;
}
#ifdef __STDC__
int p582(void)
#else
int p582()
#endif
{
int done=0;
   if (value[696]==2) {
   if (bitest(evar(669),0)) {
   if ((have(value[669],-1,-1)) &&
   bitest(evar(670),12)) {
   p85();
   p606();
   }}}
   (*procs[534])();
return done;
}
#ifdef __STDC__
int p543(void)
#else
int p543()
#endif
{
int done=0;
   if (value[696]>1) {
   if (KEY(117)) {
   if (have(117,-1,-1)) {
   p544();
   }
   say(76,1023,669);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p627(void)
#else
int p627()
#endif
{
int done=0;
   bitmod('s',16,13);
   if (value[696]>1) {
   if (!(bitest(evar(669),0))) {
   return 0;
   }
   if (!(bitest(evar(669),3))) {
   say(64,812,0);
   }
   if (!(have(value[669],-1,-1))) {
   say(76,815,669);
   }
   } else {
   say(0,1647,0);
   if (isnear(16,-1,-1)) {
   say(64,774,0);
   }
   say(64,1648,0);
   }
   if (KEY(102)) {
   if (isnear(8,-1,-1)) {
   if (value[715]<2) {
   value[8] += 1;
   if (value[8]==2) {
   set('E',8,'c',0,NULL,NULL);
   bitmod('s',8,10);
   apport(9,484);
   } else {
   bitmod('c',8,10);
   }
   say(12,1490,8);
   } else {
   say(0,826,0);
   }
   } else {
   if (isnear(32,-1,-1)) {
   say(0,1084,0);
   set('E',32,'c',1,NULL,NULL);
   } else {
   if ((isnear(30,-1,-1)) &&
   value[715]<2) {
   value[30] += 1;
   say(0,30,0);
   value[30] += 1;
   if (value[30]==4) {
   set('E',30,'c',0,NULL,NULL);
   bitmod('s',30,10);
   apport(9,484);
   } else {
   bitmod('c',30,10);
   }
   } else {
   say(0,826,0);
   }}}
   } else {
   if ((KEY(115)) ||
   KEY(116)) {
   p311();
   if (value[698]==1) {
   say(76,1646,669);
   }
   p628();
   } else {
   say(0,826,0);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p410(void)
#else
int p410()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p536(void)
#else
int p536()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p605(void)
#else
int p605()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p129(void)
#else
int p129()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p148(void)
#else
int p148()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p639(void)
#else
int p639()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p414(void)
#else
int p414()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p415(void)
#else
int p415()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p541(void)
#else
int p541()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p542(void)
#else
int p542()
#endif
{
int done=0;
   p407();
return done;
}
#ifdef __STDC__
int p309(void)
#else
int p309()
#endif
{
int done=0;
   set('V',699,'c',0,NULL,NULL);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (have(value[674],-1,-1)) {
   if (value[699]==0) {
   say(0,902,0);
   set('V',699,'c',1,NULL,NULL);
   }
   say(2,674,0);
   }}
   if (value[699]==0) {
   say(0,896,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p336(void)
#else
int p336()
#endif
{
int done=0;
   p311();
   if (value[698]==1) {
   say(64,822,0);
   }
   if (value[696]==1) {
   set('V',699,'c',0,NULL,NULL);
   if (!(bitest(evar(696),2))) {
   bitmod('s',evar(696),3);
   set('V',699,'c',1,NULL,NULL);
   }
   p122();
   bitmod('c',evar(696),3);
   bitmod('s',evar(670),4);
   longjmp(loop_back,1);
   }
   if (!anyof(581,73,18,14,602,-1)) return 0;
   if (value[669]<LPROC && value[669]>= 0) (*procs[value[669]])(); else pcall(value[669]);
return done;
}
#ifdef __STDC__
int p337(void)
#else
int p337()
#endif
{
int done=0;
   if (!anyof(120,88,71,108,70,-1)) return 0;
   (*procs[561])();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p338(void)
#else
int p338(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(113)) return 0;
   if ((isnear(111,0,4)) ||
   isnear(113,-1,-1)) {
   say(64,1455,0);
   }
   if (isnear(118,-1,-1)) {
   say(64,1425,0);
   }
return done;
}
#ifdef __STDC__
int p339(void)
#else
int p339(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(11)) return 0;
   if (((isnear(12,-1,-1)) &&
   value[12]>0) ||
   isnear(11,-1,-1)) {
   say(76,1594,11);
   }
   say(76,816,669);
return done;
}
#ifdef __STDC__
int p340(void)
#else
int p340(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(112)) return 0;
   if ((isnear(111,0,3)) ||
   bitest(evar(670),9)) {
   say(64,1592,0);
   }
return done;
}
#ifdef __STDC__
int p341(void)
#else
int p341()
#endif
{
int done=0;
   if (bitest(evar(669),0)) {
   if (!(isnear(value[669],-1,-1))) {
   say(76,816,669);
   }
   } else {
   if (bitest(evar(669),1)) {
   if ((value[669]==143)) {
   if (!((value[HERE]==value[669]))) {
   say(64,1678,0);
   }
   } else {
   say(64,963,0);
   }}}
   if (!anyof(9,78,-1)) return 0;
   if (KEY(9)) {
   p345();
   } else {
   if (KEY(78)) {
   (*procs[601])();
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p342(void)
#else
int p342(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(114)) return 0;
   if (value[114]<2) {
   say(64,1604,0);
   }
return done;
}
#ifdef __STDC__
int p343(void)
#else
int p343(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(107)) return 0;
   if (((value[715]==3) &&
   value[107]==0) &&
   have(107,-1,-1)) {
   set('E',107,'c',1,NULL,NULL);
   say(64,1390,0);
   }
return done;
}
#ifdef __STDC__
int p344(void)
#else
int p344()
#endif
{
int done=0;
   if ((KEY(43)) &&
   value[43]>1) {
   say(76,1610,43);
   }
   if ((bitest(evar(669),0)) ||
   bitest(evar(669),1)) {
   bitmod('s',evar(696),4);
   say(2,669,0);
   bitmod('c',evar(696),4);
   if ((KEY(89)) &&
   value[89]==0) {
   set('E',89,'c',1,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   if (bitest(evar(669),2)) {
   if ((612<=value[669] && value[669]<=626)) {
   say(64,963,0);
   }
   if ((627<=value[669] && value[669]<=660)) {
   if (KEY(658)) {
   if (bitest(evar(670),7)) {
   say(64,913,0);
   }
   say(76,1545,669);
   }
   if (KEY(657)) {
   say(64,963,0);
   }
   say(76,816,669);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p505(void)
#else
int p505()
#endif
{
int done=0;
   if (!((value[696]==1) ||
   KEY(78))) {
   say(64,812,0);
   }
   p311();
   if (value[698]==1) {
   say(64,1419,0);
   }
   if (isnear(78,-1,-1)) {
   bitmod('s',evar(753),4);
   p616();
   value[699]=1407;*bitword(699)=-1;
   value[699] += value[698];
   say(0,1406,0);
   say(2,699,0);
   say(64,1418,0);
   }
   if (((value[HERE]==394)) &&
   (location[78]==393)) {
   say(64,1230,0);
   }
   say(64,1420,0);
return done;
}
#ifdef __STDC__
int p329(void)
#else
int p329()
#endif
{
int done=0;
   if (KEY(545)) {
   (*procs[545])();
   }
   if (((KEY(99)) ||
   KEY(544)) ||
   value[696]==1) {
   if (isnear(99,-1,-1)) {
   if (value[99]==1) {
   say(72,824,1);
   }
   if (value[697]<40) {
   if (isnear(39,0,1)) {
   say(0,1049,0);
   set('E',39,'c',3,NULL,NULL);
   value[697] += 400;
   }}
   if (value[697]>0) {
   set('E',99,'c',1,NULL,NULL);
   say(8,823,1);
   if (!(bitest(evar(670),3))) {
   if (isnear(85,-1,-1)) {
   p436();
   }
   set('V',696,'c',1,NULL,NULL);
   (*procs[570])();
   }
   p445();
   } else {
   say(0,993,0);
   }
   } else {
   if (KEY(99)) {
   say(76,816,669);
   }
   say(64,822,0);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p168(void)
#else
int p168()
#endif
{
int done=0;
   if (((KEY(99)) ||
   KEY(545)) ||
   value[696]==1) {
   if (isnear(99,-1,-1)) {
   if (value[99]==0) {
   say(72,824,0);
   }
   set('E',99,'c',0,NULL,NULL);
   say(8,823,0);
   p311();
   if (value[698]==1) {
   say(0,803,0);
   }
   p445();
   } else {
   if (KEY(99)) {
   say(76,816,669);
   }
   return 0;
   }
   } else {
   say(64,947,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p602(void)
#else
int p602()
#endif
{
int done=0;
   default_to(0,value[HERE],9);
   if (((KEY(4)) &&
   value[4]==0) &&
   !have(98,-1,-1)) {
   say(64,818,0);
   }
   (*procs[535])();
return done;
}
#ifdef __STDC__
int p424(void)
#else
int p424(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(259)) return 0;
   if ((value[HERE]==259)) {
   if (isnear(27,-1,-1)) {
   apport(27,485);
   bitmod('s',27,13);
   say(64,1157,0);
   }
   say(64,1159,0);
   }
   say(76,816,669);
return done;
}
#ifdef __STDC__
int p425(void)
#else
int p425()
#endif
{
int done=0;
   if (KEY(576)) {
   say(64,835,0);
   }
   default_to(0,value[HERE],9);
   if ((value[696]==2) &&
   !isnear(value[669],-1,-1)) {
   say(76,816,669);
   }
   if (!anyof(111,42,49,100,106,107,118,98,93,-1)) return 0;
   if (KEY(111)) {
   say(64,1469,0);
   }
   if (KEY(42)) {
   say(64,1468,0);
   }
   if (KEY(49)) {
   say(64,1387,0);
   }
   if (KEY(100)) {
   say(66,717,0);
   }
   if ((KEY(106)) ||
   KEY(107)) {
   p432();
   }
   if (KEY(118)) {
   p46();
   }
   if (KEY(98)) {
   say(64,840,0);
   }
   if (KEY(73)) {
   if ((value[HERE]==225)) {
   say(64,1601,0);
   }
   say(64,1602,0);
   }
   if (KEY(93)) {
   say(64,1257,0);
   }
return done;
}
#ifdef __STDC__
int p426(void)
#else
int p426()
#endif
{
int done=0;
   if (!anyof(4,63,35,-1)) return 0;
   value[698]=value[value[669]];*bitword(698)=0;
   if (value[698]==1) {
   say(76,1130,669);
   }
   if (!((KEY(35)) ||
   have(98,-1,-1))) {
   if (KEY(4)) {
   say(76,1701,668);
   }
   say(64,818,0);
   }
return done;
}
#ifdef __STDC__
int p427(void)
#else
int p427(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(4)) return 0;
   if ((value[715]>1) ||
   bitest(evar(709),2)) {
   say(0,821,0);
   if (value[715]>1) {
   bitmod('s',evar(709),3);
   if (!(bitest(4,13))) {
   bitmod('s',4,13);
   say(64,932,0);
   }}
   longjmp(loop_back,1);
   }
   set('E',4,'c',1,NULL,NULL);
   bitmod('c',144,8);
   set('V',698,'c',1,NULL,NULL);
   if (KEY(535)) {
   value[698] += 1;
   }
   say(76,820,698);
return done;
}
#ifdef __STDC__
int p428(void)
#else
int p428(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(63)) return 0;
   if (value[38]==0) {
   say(64,825,0);
   }
   set('E',63,'c',1,NULL,NULL);
   set('E',38,'c',2,NULL,NULL);
   say(64,978,0);
return done;
}
#ifdef __STDC__
int p429(void)
#else
int p429(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(6)) return 0;
   if (!isnear(6,-1,-1)) return 0;
   if (value[6]==0) {
   say(64,914,0);
   }
   say(66,717,0);
return done;
}
#ifdef __STDC__
int p430(void)
#else
int p430(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(35)) return 0;
   if (!isnear(35,-1,-1)) return 0;
   if (value[35]==0) {
   say(64,1129,0);
   }
   if (value[35]==1) {
   say(76,1130,669);
   }
   say(64,1131,0);
return done;
}
#ifdef __STDC__
int p431(void)
#else
int p431(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(114)) return 0;
   if (!isnear(114,-1,-1)) return 0;
   if (value[114]<2) {
   set('E',114,'c',2,NULL,NULL);
   if ((location[114]==259)) {
   apport(27,259);
   say(64,1155,0);
   }
   say(64,1156,0);
   }
   say(76,1130,669);
return done;
}
#ifdef __STDC__
int p90(void)
#else
int p90()
#endif
{
int done=0;
   if ((KEY(614)) &&
   bitest(evar(709),4)) {
   p92();
   }
   default_to(0,value[HERE],9);
   if ((value[696]==2) &&
   !isnear(value[669],-1,-1)) {
   say(76,816,669);
   }
   if (!anyof(111,6,100,114,-1)) return 0;
   if (KEY(111)) {
   say(64,1469,0);
   }
   if (KEY(6)) {
   say(64,819,0);
   }
   if (KEY(100)) {
   say(66,717,0);
   }
   if (KEY(114)) {
   if (value[114]<2) {
   say(76,1132,669);
   }
   say(64,1606,0);
   }
return done;
}
#ifdef __STDC__
int p91(void)
#else
int p91()
#endif
{
int done=0;
   if (!anyof(4,63,35,-1)) return 0;
   value[698]=value[value[669]];*bitword(698)=0;
   if (value[698]!=1) {
   say(76,1132,669);
   }
value[value[669]]=0;
   if (KEY(4)) {
   say(72,820,0);
   }
   if (KEY(35)) {
   say(64,1133,0);
   }
   if ((value[HERE]==299)) {
   if (have(63,-1,-1)) {
   apport(63,HERE);
   }
   if (isnear(38,-1,-1)) {
   apport(38,HERE);
   set('E',38,'c',1,NULL,NULL);
   say(64,980,0);
   }
   set('E',63,'c',2,NULL,NULL);
   say(64,979,0);
   }
   say(64,981,0);
return done;
}
#ifdef __STDC__
int p254(void)
#else
int p254()
#endif
{
int done=0;
   if ((value[HERE]==461)) {
   if (value[769]==0) {
   say(9,1460,20);
   p80(-1,1461,0,24,0,0);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   value[706] += 20;
   move(136,-value[684]);
   }}
   longjmp(loop_back,1);
   }
   if (((((168<=value[670] && value[670]<=193)) ||
   (300<=value[670] && value[670]<=311)) ||
   (328<=value[670] && value[670]<=364)) &&
   !(bitest(evar(670),8))) {
   p239();
   if (value[707]>99) {
   say(64,1652,0);
   }
   if (value[769]==0) {
   say(9,1651,20);
   p80(-1,1461,0,24,0,0);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   value[706] += 20;
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (have(value[674],1,5)) {
   apport(value[674],HERE);
   }}
   if (have(80,-1,-1)) {
   apport(80,HERE);
   }
   say(2,684,0);
   if ((168<=value[670] && value[670]<=193)) {
   move(167,-2);
   }
   if ((300<=value[670] && value[670]<=311)) {
   move(195,-2);
   }
   if ((328<=value[670] && value[670]<=364)) {
   move(327,-2);
   }}}
   longjmp(loop_back,1);
   }
   if (value[718]==0) {
   set('V',718,'c',1,NULL,NULL);
   }
   if ((((value[HERE]==427)) ||
   (value[HERE]==428)) &&
   !(bitest(evar(670),14))) {
   say(64,839,0);
   }
   p259();
   if (value[718]>0) {
   if (((((((((((isnear(134,-1,-1)) ||
   isnear(20,-1,-1)) ||
   isnear(22,-1,-1)) ||
   isnear(24,-1,-1)) ||
   value[17]>0) ||
   isnear(32,-1,-1)) ||
   value[121]>0) ||
   isnear(25,-1,-1)) ||
   isnear(87,-1,-1)) ||
   isnear(35,-1,-1)) ||
   isnear(71,-1,-1)) {
   say(0,838,0);
   } else {
   if (bitest(evar(733),3)) {
   say(0,839,0);
   } else {
   bitmod('s',evar(733),3);
   p315(-1,836,-1,837);
   }}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p307(void)
#else
int p307()
#endif
{
int done=0;
   p315(-1,938,-1,941);
return done;
}
#ifdef __STDC__
int p468(void)
#else
int p468()
#endif
{
int done=0;
   if (value[769]==0) {
   p80(-1,943,0,7,0,0);
   }
   set('V',769,'c',0,NULL,NULL);
   if (anyof(603,571,-1)) {
   set('V',716,'c',1,NULL,NULL);
   p192();
   }
   say(66,717,0);
return done;
}
#ifdef __STDC__
int p409(void)
#else
int p409()
#endif
{
int done=0;
   bitmod('s',evar(696),1);
   bitmod('c',evar(696),2);
   value[717]=775;*bitword(717)=-1;
   say(64,964,0);
return done;
}
#ifdef __STDC__
int p651(void)
#else
int p651()
#endif
{
int done=0;
   if (bitest(evar(709),4)) {
   bitmod('c',evar(709),4);
   say(66,717,0);
   }
   p80(-1,1081,0,5,0,0);
return done;
}
#ifdef __STDC__
int p196(void)
#else
int p196()
#endif
{
int done=0;
   if (bitest(evar(709),4)) {
   if (value[696]==1) {
   bitmod('s',evar(696),5);
   say(76,827,668);
   }
   if (bitest(evar(669),1)) {
   move(value[669],-value[684]);
   }
   say(64,913,0);
   }
   if (value[696]==1) {
   say(64,1328,0);
   }
   if (isnear(value[669],-1,-1)) {
   if (KEY(60)) {
   say(64,1556,0);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p262(void)
#else
int p262()
#endif
{
int done=0;
   if (value[696]==2) {
   if (bitest(evar(669),8)) {
   (*procs[548])();
   } else {
   if ((KEY(26)) &&
   isnear(26,-1,-1)) {
   if (isnear(28,-1,-1)) {
   say(64,1167,0);
   }
   apport(28,value[670]);
   say(64,1168,0);
   }
   if (KEY(10)) {
   (*procs[563])();
   }}}
return done;
}
#ifdef __STDC__
int p317(void)
#else
int p317()
#endif
{
int done=0;
   p311();
   if (value[698]==1) {
   if (((value[696]==1) &&
   isnear(85,-1,-1)) ||
   KEY(85)) {
   say(64,1306,0);
   }
   say(64,1079,0);
   }
   if (((KEY(134)) &&
   value[715]==3) &&
   isnear(134,-1,-1)) {
   say(0,1385,0);
   p95();
   }
   if (KEY(34)) {
   (*procs[550])();
   }
   default_to(0,value[HERE],8);
   if (value[696]==1) {
   if (value[669]==-2) {
   say(64,828,0);
   }
   return 0;
   }
   if (!anyof(22,134,20,7,101,38,107,106,24,17,
   27,121,25,135,82,87,91,28,-1)) return 0;
   if (!isnear(value[669],-1,-1)) return 0;
   if (KEY(22)) {
   say(64,965,0);
   }
   if (KEY(134)) {
   p320();
   } else {
   if (KEY(20)) {
   p319();
   } else {
   if (KEY(7)) {
   say(64,830,0);
   }
   if (KEY(17)) {
   say(64,1141,0);
   }
   if (KEY(38)) {
   say(76,973,38);
   }
   if ((KEY(106)) ||
   KEY(107)) {
   say(64,951,0);
   }
   if (KEY(24)) {
   p321();
   } else {
   if (KEY(135)) {
   if (value[769]==0) {
   p80(-1,834,0,11,0,1);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   say(64,1320,0);
   }}
   say(12,1225,668);
   say(76,1226,669);
   }
   if (KEY(27)) {
   say(64,1152,0);
   }
   if (KEY(121)) {
   say(0,1158,0);
   p95();
   }
   if (KEY(25)) {
   if (value[25]<2) {
   say(0,1148,0);
   p95();
   }
   say(64,974,0);
   }
   if (KEY(28)) {
   say(64,1650,0);
   }
   if (KEY(82)) {
   say(64,1280,0);
   }
   if (KEY(87)) {
   say(64,1307,0);
   }
   if (KEY(91)) {
   p470();
   } else {
   if (KEY(101)) {
   p318();
   }}}}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p573(void)
#else
int p573()
#endif
{
int done=0;
   bitmod('c',evar(696),1);
   bitmod('s',evar(696),2);
   say(2,717,0);
   value[717]=773;*bitword(717)=-1;
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p613(void)
#else
int p613()
#endif
{
int done=0;
   bitmod('c',evar(696),1);
   bitmod('c',evar(696),2);
   value[717]=775;*bitword(717)=-1;
   say(2,717,0);
   p311();
   if (!(value[698]==1)) {
   say(0,774,0);
   bitmod('s',evar(696),3);
   p122();
   bitmod('c',evar(696),3);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p180(void)
#else
int p180()
#endif
{
int done=0;
   if (!anyof(38,22,101,7,134,20,25,
   121,82,-1)) return 0;
   if (isnear(value[669],-1,-1)) {
   if (KEY(38)) {
   if (isnear(110,-1,-1)) {
   set('E',38,'c',1,NULL,NULL);
   if (have(110,-1,-1)) {
   }
   apport(110,484);
   if (value[115]==1) {
   set('E',115,'c',0,NULL,NULL);
   }
   say(64,975,0);
   }
   say(64,905,0);
   }
   if (KEY(22)) {
   say(64,991,0);
   }
   if (KEY(7)) {
   if (have(101,-1,-1)) {
   p656();
   say(64,904,0);
   }
   say(64,905,0);
   }
   if (KEY(134)) {
   if (value[715]>1) {
   say(64,913,0);
   }
   bitmod('s',134,14);
   say(64,906,0);
   }
   if (KEY(101)) {
   say(64,903,0);
   }
   if (KEY(20)) {
   if (value[20]==0) {
   say(64,905,0);
   }
   say(64,974,0);
   }
   if (KEY(25)) {
   if (value[25]<2) {
   say(64,905,0);
   }
   say(64,974,0);
   }
   if (KEY(121)) {
   say(64,1153,0);
   }
   if (KEY(82)) {
   if (isnear(110,-1,-1)) {
   apport(110,484);
   apport(84,value[670]);
   say(64,1282,0);
   }
   say(64,1281,0);
   }}
   say(76,816,669);
return done;
}
#ifdef __STDC__
int p181(void)
#else
int p181()
#endif
{
int done=0;
   if (!(value[696]==1)) {
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p503(void)
#else
int p503()
#endif
{
int done=0;
   set('V',716,'c',1,NULL,NULL);
   p239();
   say(13,1030,707);
   say(13,1031,708);
   say(13,1032,710);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p314(void)
#else
int p314()
#endif
{
int done=0;
   say(64,1033,0);
return done;
}
#ifdef __STDC__
int p303(void)
#else
int p303()
#endif
{
int done=0;
   say(64,798,0);
return done;
}
#ifdef __STDC__
int p434(void)
#else
int p434()
#endif
{
int done=0;
   say(64,798,0);
return done;
}
#ifdef __STDC__
int p225(void)
#else
int p225()
#endif
{
int done=0;
   say(64,1479,0);
return done;
}
#ifdef __STDC__
int p515(void)
#else
int p515()
#endif
{
int done=0;
   say(64,835,0);
return done;
}
#ifdef __STDC__
int p177(void)
#else
int p177()
#endif
{
int done=0;
   if (value[715]>1) {
   say(64,826,0);
   }
   if (!anyof(509,508,507,578,-1)) return 0;
   set('V',712,'c',0,NULL,NULL);
   say(64,802,0);
return done;
}
#ifdef __STDC__
int p178(void)
#else
int p178()
#endif
{
int done=0;
   set('V',712,'c',1,NULL,NULL);
   say(66,717,0);
return done;
}
#ifdef __STDC__
int p182(void)
#else
int p182()
#endif
{
int done=0;
   if (value[712]==0) {
   set('V',712,'c',2,NULL,NULL);
   say(66,717,0);
   }
   p201();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p197(void)
#else
int p197()
#endif
{
int done=0;
   if (value[712]==1) {
   set('V',712,'c',3,NULL,NULL);
   say(66,717,0);
   }
   p201();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p200(void)
#else
int p200()
#endif
{
int done=0;
   if ((value[696]==2) &&
   !KEY(493)) {
   say(64,856,0);
   }
   if (value[712]==2) {
   if (((location[50]==222)) ||
   bitest(50,14)) {
   say(0,826,0);
   if ((location[50]==222)) {
   say(0,1077,0);
   }
   } else {
   if (isnear(50,-1,-1)) {
   set('E',50,'c',1,NULL,NULL);
   } else {
   if ((value[HERE]==222)) {
   set('E',50,'c',0,NULL,NULL);
   } else {
   set('E',50,'c',2,NULL,NULL);
   }}
   if (have(50,-1,-1)) {
   apport(50,HERE);
   }
   say(0,50,0);
   set('E',50,'c',0,NULL,NULL);
   if (bitest(50,13)) {
   bitmod('c',50,13);
   bitmod('s',22,13);
   if ((value[22]==1) ||
   value[22]==2) {
   if (isnear(23,-1,-1)) {
   say(0,1452,0);
   }
   set('E',22,'c',0,NULL,NULL);
   apport(22,244);
   apport(23,484);
   }}
   apport(50,222);
   if (value[135]==2) {
   set('E',135,'c',3,NULL,NULL);
   value[755] = irand(5-3+1)+3;
   }}
   set('V',712,'c',0,NULL,NULL);
   } else {
   p201();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p227(void)
#else
int p227()
#endif
{
int done=0;
   say(64,1472,0);
return done;
}
#ifdef __STDC__
int p653(void)
#else
int p653()
#endif
{
int done=0;
   say(64,826,0);
return done;
}
#ifdef __STDC__
int p462(void)
#else
int p462()
#endif
{
int done=0;
   say(64,826,0);
return done;
}
#ifdef __STDC__
int p508(void)
#else
int p508()
#endif
{
int done=0;
   say(64,1470,0);
return done;
}
#ifdef __STDC__
int p190(void)
#else
int p190(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(614)) return 0;
   if ((bitest(evar(670),7)) &&
   !(bitest(145,4))) {
   say(64,842,0);
   }
   say(64,843,0);
return done;
}
#ifdef __STDC__
int p191(void)
#else
int p191()
#endif
{
int done=0;
   if (value[696]>1) {
   if (bitest(evar(669),0)) {
   if (bitest(evar(709),4)) {
   if (have(value[669],-1,-1)) {
   say(76,811,669);
   }
   value[675]=location[value[669]];*bitword(675)=-1;
   move(value[675],-2);
   }
   if (isnear(value[669],-1,-1)) {
   if ((have(value[669],-1,-1)) ||
   KEY(16)) {
   say(64,898,0);
   }
   say(64,1404,0);
   }
   say(64,844,0);
   }
   if (bitest(evar(669),1)) {
   if ((value[HERE]==value[669])) {
   say(64,936,0);
   }
   say(64,844,0);
   }
   say(64,856,0);
   }
return done;
}
#ifdef __STDC__
int p563(void)
#else
int p563()
#endif
{
int done=0;
   say(64,947,0);
return done;
}
#ifdef __STDC__
int p43(void)
#else
int p43(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(53)) return 0;
   if (!isnear(53,-1,-1)) return 0;
   apport(53,485);
   apport(54,value[670]);
   say(64,1008,0);
return done;
}
#ifdef __STDC__
int p44(void)
#else
int p44(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(118)) return 0;
   if (!isnear(118,-1,-1)) return 0;
   p46();
return done;
}
#ifdef __STDC__
int p45(void)
#else
int p45(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(10)) return 0;
   if (!isnear(10,-1,-1)) return 0;
   if (value[715]==3) {
   say(0,1375,0);
   p95();
   }
   say(64,1383,0);
return done;
}
#ifdef __STDC__
int p194(void)
#else
int p194(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(53)) return 0;
   if (!isnear(54,-1,-1)) return 0;
   say(64,946,0);
return done;
}
#ifdef __STDC__
int p195(void)
#else
int p195(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(41)) return 0;
   if (isnear(41,-1,-1)) {
   say(64,946,0);
   }
return done;
}
#ifdef __STDC__
int p184(void)
#else
int p184(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(53)) return 0;
   if (isnear(53,-1,-1)) {
   if ((bitest(evar(670),9)) ||
   (value[HERE]==158)) {
   if (have(53,-1,-1)) {
   value[704] -= 1;
   }
   apport(53,485);
   apport(54,value[670]);
   say(64,945,0);
   }
   say(64,944,0);
   }
return done;
}
#ifdef __STDC__
int p185(void)
#else
int p185(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(114)) return 0;
   if (have(114,-1,-1)) {
   if (value[114]<2) {
   say(64,1374,0);
   }
   if (value[114]==2) {
   if (bitest(evar(670),9)) {
   set('E',114,'c',3,NULL,NULL);
   say(76,911,112);
   }
   if ((value[HERE]==158)) {
   set('E',114,'c',4,NULL,NULL);
   say(76,911,113);
   }
   if (bitest(evar(670),13)) {
   say(64,872,0);
   }
   say(76,909,114);
   }
   say(64,1373,0);
   }
   say(76,1023,669);
return done;
}
#ifdef __STDC__
int p186(void)
#else
int p186(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(111)) return 0;
   if (have(111,-1,-1)) {
   if (value[111]==2) {
   if (bitest(evar(670),9)) {
   set('E',111,'c',3,NULL,NULL);
   say(76,910,112);
   }
   if ((value[HERE]==158)) {
   set('E',111,'c',4,NULL,NULL);
   say(76,910,113);
   }
   say(76,909,111);
   }
   say(64,908,0);
   }
   say(76,1023,669);
return done;
}
#ifdef __STDC__
int p187(void)
#else
int p187(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(81)) return 0;
   if (have(81,-1,-1)) {
   if (bitest(evar(670),9)) {
   if ((value[HERE]==412)) {
   say(64,1271,0);
   }
   bitmod('s',81,13);
   bitmod('s',81,14);
   say(64,1272,0);
   }
   say(76,909,81);
   }
   say(76,1023,669);
return done;
}
#ifdef __STDC__
int p188(void)
#else
int p188()
#endif
{
int done=0;
   if ((value[696]>1) &&
   isnear(value[669],-1,-1)) {
   say(64,912,0);
   }
return done;
}
#ifdef __STDC__
int p160(void)
#else
int p160()
#endif
{
int done=0;
   if (!anyof(111,114,81,118,-1)) return 0;
   if (!(have(value[669],-1,-1))) {
   say(76,1023,669);
   }
return done;
}
#ifdef __STDC__
int p161(void)
#else
int p161(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(81)) return 0;
   if (bitest(81,13)) {
   say(64,1325,0);
   }
   say(64,1273,0);
return done;
}
#ifdef __STDC__
int p162(void)
#else
int p162(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(111)) return 0;
   if ((isnear(111,0,4)) ||
   isnear(111,0,3)) {
   value[669]=112;*bitword(669)=-1;
   if (isnear(111,0,4)) {
   value[669]=113;*bitword(669)=-1;
   }
   (*procs[552])();
   } else {
   say(0,1273,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p163(void)
#else
int p163(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(114)) return 0;
   if (value[114]<2) {
   (*procs[535])();
   longjmp(loop_back,1);
   }
   if (value[114]==2) {
   say(64,1273,0);
   }
   if (value[114]==3) {
   value[669]=112;*bitword(669)=-1;
   } else {
   value[669]=113;*bitword(669)=-1;
   }
   if (have(value[669],-1,-1)) {
   apport(value[669],435);
   }
   (*procs[552])();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p164(void)
#else
int p164()
#endif
{
int done=0;
   if (KEY(118)) {
   say(64,799,0);
   }
   if (value[696]==2) {
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p464(void)
#else
int p464()
#endif
{
int done=0;
   if ((value[669]==112)) {
   if (isnear(111,0,3)) {
   set('E',111,'c',2,NULL,NULL);
   if (isnear(11,-1,-1)) {
   p626();
   } else {
   if (isnear(6,-1,-1)) {
   say(0,916,0);
   set('E',6,'c',0,NULL,NULL);
   } else {
   say(12,873,112);
   }
   bitmod('s',evar(670),15);
   }
   } else {
   if (isnear(114,0,3)) {
   set('E',114,'c',2,NULL,NULL);
   say(0,1371,0);
   } else {
   say(12,1023,112);
   }}
   longjmp(loop_back,1);
   }
   if ((value[669]==113)) {
   if (!((isnear(114,0,4)) ||
   isnear(111,0,4))) {
   say(76,1023,113);
   }
   if (isnear(111,0,4)) {
   set('E',111,'c',2,NULL,NULL);
   set('V',699,'c',1,NULL,NULL);
   } else {
   set('E',114,'c',2,NULL,NULL);
   set('V',699,'c',2,NULL,NULL);
   }
   if (isnear(11,-1,-1)) {
   say(0,915,0);
   } else {
   if (isnear(6,-1,-1)) {
   say(0,917,0);
   set('E',6,'c',1,NULL,NULL);
   } else {
   if (value[699]==1) {
   say(12,873,112);
   bitmod('s',evar(670),15);
   } else {
   say(0,1371,0);
   }}}
   longjmp(loop_back,1);
   }
   if (value[696]>1) {
   say(64,875,0);
   }
return done;
}
#ifdef __STDC__
int p455(void)
#else
int p455()
#endif
{
int done=0;
   if (!anyof(134,7,101,20,22,38,19,24,25,
   121,82,-1)) return 0;
   if (!isnear(value[669],-1,-1)) return 0;
   say(64,801,0);
return done;
}
#ifdef __STDC__
int p157(void)
#else
int p157()
#endif
{
int done=0;
   if (isnear(110,-1,-1)) {
   if ((KEY(110)) ||
   value[696]==1) {
   apport(110,484);
   say(64,866,0);
   }}
   if (isnear(119,-1,-1)) {
   if ((KEY(119)) ||
   value[696]==1) {
   set('V',720,'c',30,NULL,NULL);
   value[720] += value[722];
   set('V',719,'c',12,NULL,NULL);
   bitmod('c',434,8);
   set('E',119,'c',2,NULL,NULL);
   apport(119,485);
   say(64,119,0);
   }}
   if (value[696]==1) {
   say(64,982,0);
   }
   if (!anyof(134,20,101,7,38,22,11,24,
   25,121,-1)) return 0;
   say(64,865,0);
return done;
}
#ifdef __STDC__
int p158(void)
#else
int p158()
#endif
{
int done=0;
   if (bitest(evar(669),0)) {
   if (isnear(value[669],-1,-1)) {
   say(64,872,0);
   }}
return done;
}
#ifdef __STDC__
int p490(void)
#else
int p490(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(99)) return 0;
   if (!isnear(99,-1,-1)) return 0;
   say(76,870,669);
return done;
}
#ifdef __STDC__
int p491(void)
#else
int p491(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(89)) return 0;
   if (!isnear(89,-1,-1)) return 0;
   say(76,1696,89);
return done;
}
#ifdef __STDC__
int p492(void)
#else
int p492(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(103)) return 0;
   if ((isnear(103,-1,-1)) &&
   value[103]<2) {
   if (have(123,-1,-1)) {
   set('E',103,'c',2,NULL,NULL);
   set('E',123,'c',2,NULL,NULL);
   say(76,1366,668);
   }
   say(76,1552,668);
   }
return done;
}
#ifdef __STDC__
int p493(void)
#else
int p493(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(259)) return 0;
   if ((value[HERE]==259)) {
   say(64,871,0);
   }
   say(76,816,259);
return done;
}
#ifdef __STDC__
int p494(void)
#else
int p494()
#endif
{
int done=0;
   if (value[696]>1) {
   if (bitest(evar(669),0)) {
   if (isnear(value[669],-1,-1)) {
   if ((((bitest(evar(669),8)) &&
   !KEY(106)) &&
   !KEY(107)) &&
   !KEY(82)) {
   say(64,913,0);
   }
   say(64,871,0);
   }}}
return done;
}
#ifdef __STDC__
int p18(void)
#else
int p18()
#endif
{
int done=0;
   if (((bitest(evar(670),6)) ||
   bitest(evar(671),6)) ||
   value[671]==0) {
   say(64,894,0);
   }
   move(value[671],-2);
return done;
}
#ifdef __STDC__
int p394(void)
#else
int p394()
#endif
{
int done=0;
   if ((value[HERE]==243)) {
   say(64,1599,0);
   }
   if ((((((((((((((value[HERE]==151)) ||
   (value[HERE]==150)) ||
   (value[HERE]==152)) ||
   (value[HERE]==165)) ||
   (value[HERE]==166)) ||
   (value[HERE]==230)) ||
   (value[HERE]==237)) ||
   (value[HERE]==239)) ||
   (value[HERE]==244)) ||
   (value[HERE]==431)) ||
   (value[HERE]==432)) ||
   (value[HERE]==434)) ||
   isnear(21,-1,-1)) {
   say(64,864,0);
   }
   say(72,816,581);
return done;
}
#ifdef __STDC__
int p108(void)
#else
int p108()
#endif
{
int done=0;
   if ((((value[HERE]==225)) ||
   (value[HERE]==392)) ||
   (value[HERE]==429)) {
   say(64,1237,0);
   }
   say(76,816,73);
return done;
}
#ifdef __STDC__
int p130(void)
#else
int p130()
#endif
{
int done=0;
   if ((value[HERE]==408)) {
   say(64,1439,0);
   }
   if (isnear(18,-1,-1)) {
   say(64,778,0);
   }
   say(76,816,18);
return done;
}
#ifdef __STDC__
int p198(void)
#else
int p198()
#endif
{
int done=0;
   if ((((value[HERE]==255)) ||
   (value[HERE]==256)) ||
   (value[HERE]==257)) {
   say(64,1474,0);
   }
   say(76,816,14);
return done;
}
#ifdef __STDC__
int p500(void)
#else
int p500()
#endif
{
int done=0;
   if (!anyof(501,497,498,504,503,500,
   505,496,506,499,511,502,576,
   510,509,508,507,578,-1)) return 0;
   if (value[669]<LPROC && value[669]>= 0) (*procs[value[669]])(); else pcall(value[669]);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p501(void)
#else
int p501()
#endif
{
int done=0;
   if (value[696]==2) {
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p498(void)
#else
int p498()
#endif
{
int done=0;
   if (value[769]==0) {
   if (value[696]==1) {
   p80(-1,1712,0,16,0,0);
   }
   say(9,1051,10);
   say(9,1052,5);
   p80(-1,1009,0,17,0,1);
   } else    if (value[769]==17) {
   if (value[770]==0) {
   set('V',769,'c',0,NULL,NULL);
   say(64,1066,0);
   }}
   if ((value[769]==19) ||
   value[769]==17) {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==0) {
   say(66,717,0);
   }
   special(1,&value[698]);
   if (value[698]==0) {
   p80(-1,1057,0,18,0,0);
   } else    if (value[698]==2) {
   p80(-1,1708,0,19,0,0);
   } else {
   say(64,1053,0);
   }
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   say(66,717,0);
   }
   say(0,774,0);
   value[676] = irand(1065-1060+1)+1060;
   say(2,676,0);
   say(0,774,0);
   finita();
   }
return done;
}
#ifdef __STDC__
int p483(void)
#else
int p483()
#endif
{
int done=0;
   if (value[696]==1) {
   p80(-1,1713,0,20,0,0);
   }
   if (bitest(evar(709),4)) {
   set('V',698,'c',1,NULL,NULL);
   }
   special(6,&value[698]);
   special(2,&value[698]);
   if (value[698]==0) {
   special(7,&value[699]);
   if (value[699]==1) {
   bitmod('s',evar(709),4);
   } else {
   bitmod('c',evar(709),4);
   }
   special(8,&value[698]);
   if (value[698]<10) {
   say(9,1058,10);
   say(9,1059,5);
   value[706] += 10;
   }
   if (value[99]==1) {
   value[697] += 1;
   }
   p80(-1,1056,0,21,0,1);
   } else {
   if (value[698]==1) {
   say(0,1054,0);
   value[710] -= 1;
   } else {
   p80(-1,1055,0,22,0,1);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p131(void)
#else
int p131()
#endif
{
int done=0;
   if ((KEY(81)) &&
   isnear(81,-1,-1)) {
   if (bitest(81,13)) {
   p81();
   }
   say(64,1273,0);
   }
   if ((value[696]==1) &&
   isnear(81,1,13)) {
   p81();
   }
   if (KEY(113)) {
   say(64,812,0);
   }
   if ((((value[696]==1) ||
   KEY(112)) ||
   KEY(111)) ||
   KEY(114)) {
   if (((bitest(evar(670),9)) &&
   !KEY(111)) &&
   !KEY(114)) {
   value[698]=867;*bitword(698)=-1;
   set('V',699,'c',900,NULL,NULL);
   p625();
   }
   if ((KEY(111)) ||
   KEY(114)) {
   if (!(have(value[669],-1,-1))) {
   if (ishere(value[669],-1,-1)) {
   say(76,1702,669);
   }
   say(76,816,669);
   }
   value[698]=value[value[669]];*bitword(698)=0;
   if (value[698]==4) {
   say(64,1704,0);
   }
   if ((KEY(114)) &&
   value[114]<2) {
   say(64,1705,0);
   }
   if (value[698]==2) {
   say(76,1703,669);
   }}
   if ((isnear(111,0,3)) &&
   !KEY(114)) {
   value[698]=869;*bitword(698)=-1;
   set('E',111,'c',2,NULL,NULL);
   set('V',699,'c',600,NULL,NULL);
   p625();
   }
   if (isnear(114,0,3)) {
   value[698]=1371;*bitword(698)=-1;
   set('E',114,'c',2,NULL,NULL);
   set('V',699,'c',400,NULL,NULL);
   p625();
   }
   if (KEY(112)) {
   say(76,816,669);
   }
   say(64,1073,0);
   }
   if (bitest(evar(669),0)) {
   if (isnear(value[669],-1,-1)) {
   if (KEY(118)) {
   say(64,1426,0);
   }
   say(64,913,0);
   }
   say(76,816,669);
   }
   say(64,812,0);
return done;
}
#ifdef __STDC__
int p261(void)
#else
int p261()
#endif
{
int done=0;
   say(64,777,0);
return done;
}
#ifdef __STDC__
int p166(void)
#else
int p166()
#endif
{
int done=0;
   if (isnear(89,-1,-1)) {
   set('E',89,'c',2,NULL,NULL);
   say(64,1259,0);
   }
   say(64,1449,0);
return done;
}
#ifdef __STDC__
int p474(void)
#else
int p474(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(120)) return 0;
   if ((((value[HERE]==137)) ||
   (value[HERE]==391)) ||
   (value[HERE]==403)) {
   say(64,1463,0);
   }
   if ((value[HERE]==140)) {
   bitmod('s',evar(696),4);
   say(0,120,0);
   bitmod('c',evar(696),4);
   if (value[120]==0) {
   set('E',120,'c',1,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p475(void)
#else
int p475()
#endif
{
int done=0;
   if (value[696]>1) {
   if (KEY(88)) {
   if (isnear(86,0,1)) {
   say(64,1334,0);
   }
   if (isnear(88,-1,-1)) {
   say(64,1319,0);
   }}
   if (((KEY(71)) &&
   have(89,-1,-1)) &&
   !isnear(71,-1,-1)) {
   say(64,1258,0);
   }
   if ((KEY(657)) &&
   isnear(71,-1,-1)) {
   p476();
   }
   if (KEY(124)) {
   if ((value[HERE]==229)) {
   say(64,1007,0);
   }}
   if (bitest(evar(669),0)) {
   if (isnear(value[669],-1,-1)) {
   if (KEY(108)) {
   say(64,999,0);
   }
   if (KEY(29)) {
   say(64,1000,0);
   }
   if (KEY(89)) {
   say(64,1258,0);
   }
   if (((KEY(657)) &&
   (value[HERE]==434)) ||
   KEY(71)) {
   p476();
   }
   if (KEY(70)) {
   say(64,1348,0);
   }
   if (KEY(107)) {
   p437();
   }
   if (KEY(34)) {
   say(64,1001,0);
   }}
   } else {
   say(64,913,0);
   }}
return done;
}
#ifdef __STDC__
int p88(void)
#else
int p88()
#endif
{
int done=0;
   if ((value[HERE]==461)) {
   say(64,1350,0);
   }
   if ((437<=value[670] && value[670]<=461)) {
   say(64,1351,0);
   }
   say(64,1018,0);
return done;
}
#ifdef __STDC__
int p347(void)
#else
int p347()
#endif
{
int done=0;
   say(64,863,0);
return done;
}
#ifdef __STDC__
int p392(void)
#else
int p392()
#endif
{
int done=0;
   if (isnear(31,0,0)) {
   set('E',31,'c',1,NULL,NULL);
   bitmod('c',254,8);
   set('V',731,'c',9,NULL,NULL);
   if (value[135]<4) {
   apport(135,485);
   set('E',135,'c',0,NULL,NULL);
   }
   say(64,1142,0);
   }
   say(64,826,0);
return done;
}
#ifdef __STDC__
int p416(void)
#else
int p416()
#endif
{
int done=0;
   if (KEY(500)) {
   say(64,802,0);
   }
   if (bitest(evar(709),8)) {
   bitmod('c',evar(709),8);
   say(64,826,0);
   }
   if (((value[715]>2) ||
   !(bitest(324,4))) ||
   !isnear(99,-1,-1)) {
   say(64,826,0);
   }
   bitmod('s',evar(709),8);
   say(66,717,0);
return done;
}
#ifdef __STDC__
int p496(void)
#else
int p496()
#endif
{
int done=0;
   if (bitest(evar(709),8)) {
   if (have(99,-1,-1)) {
   say(0,1088,0);
   p95();
   }
   if (value[697]>40) {
   apport(99,485);
   set('E',39,'c',3,NULL,NULL);
   set('E',99,'c',0,NULL,NULL);
   set('V',697,'c',0,NULL,NULL);
   if (irand(100)<50) {
   say(0,1089,0);
   p311();
   if (value[698]==1) {
   say(0,803,0);
   }
   } else {
   say(0,1090,0);
   p95();
   }
   } else {
   bitmod('s',evar(753),8);
   say(0,1091,0);
   value[697] += 300;
   set('E',99,'c',1,NULL,NULL);
   }
   } else {
   say(0,826,0);
   }
   longjmp(loop_back,1);
return done;
}
