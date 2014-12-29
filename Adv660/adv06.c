/* adv06.c: Adv660 - copyright Mike Arnautov, 25 Dec 2014.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p584(void)
#else
int p584()
#endif
{
int done=0;
   say(64,826,0);
return done;
}
#ifdef __STDC__
int p657(void)
#else
int p657()
#endif
{
int done=0;
   if ((value[116]==0) ||
   !isnear(116,-1,-1)) {
   say(0,826,0);
   } else {
   if (have(116,-1,-1)) {
   say(0,1337,0);
   } else {
   say(0,1338,0);
   }
   if (bitest(evar(709),9)) {
   say(0,1340,0);
   }
   apport(116,485);
   apport(64,value[670]);
   bitmod('s',64,4);
   set('V',731,'c',7,NULL,NULL);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p324(void)
#else
int p324()
#endif
{
int done=0;
   p439();
return done;
}
#ifdef __STDC__
int p323(void)
#else
int p323()
#endif
{
int done=0;
   p439();
return done;
}
#ifdef __STDC__
int p531(void)
#else
int p531()
#endif
{
int done=0;
   p439();
return done;
}
#ifdef __STDC__
int p35(void)
#else
int p35()
#endif
{
int done=0;
   p439();
return done;
}
#ifdef __STDC__
int p484(void)
#else
int p484()
#endif
{
int done=0;
   if (KEY(60)) {
   (*procs[568])();
   }
   if (((value[696]==1) ||
   KEY(28)) &&
   isnear(28,-1,-1)) {
   apport(28,484);
   move(239,-1166);
   }
   if (((value[696]==1) ||
   KEY(82)) &&
   isnear(82,-1,-1)) {
   if (value[715]==3) {
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (have(value[674],-1,-1)) {
   apport(value[674],485);
   }}
   set('V',715,'c',4,NULL,NULL);
   bitmod('s',243,4);
   move(243,-1384);
   }
   say(0,1277,0);
   finita();
   }
return done;
}
#ifdef __STDC__
int p449(void)
#else
int p449()
#endif
{
int done=0;
   bitmod('s',27,14);
   if ((bitest(evar(670),7)) ||
   value[715]>2) {
   say(0,826,0);
   } else {
   if ((isnear(111,0,3)) ||
   bitest(evar(670),9)) {
   if (irand(100)<85) {
   say(0,826,0);
   } else {
   if (irand(100)<95) {
   say(0,1174,0);
   p95();
   }
   say(0,1175,0);
   p80(-1,1176,0,33,0,0);
   }
   } else {
   if ((isnear(115,-1,-1)) ||
   isnear(116,-1,-1)) {
   if (isnear(115,-1,-1)) {
   say(0,1178,0);
   apport(115,485);
   }
   if (isnear(116,-1,-1)) {
   say(0,1179,0);
   apport(116,485);
   }
   } else {
   value[698] = irand(3);
   value[698] *= 2;
   if (value[134]>1) {
   value[698] += 1;
   }
   if (isnear(134,-1,-1)) {
   if (irand(100)<70) {
   value[699]=1180;*bitword(699)=-1;
   value[698] += value[699];
   say(2,698,0);
   set('V',703,'e',134,NULL,NULL);
   p322();
   } else {
   value[699]=1186;*bitword(699)=-1;
   value[698] += value[699];
   say(2,698,0);
   p95();
   }
   } else {
   say(0,826,0);
   }}}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p495(void)
#else
int p495()
#endif
{
int done=0;
   if (bitest(evar(709),4)) {
   set('V',714,'c',0,NULL,NULL);
   move(value[670],-775);
   }
   say(64,856,0);
return done;
}
#ifdef __STDC__
int p504(void)
#else
int p504()
#endif
{
int done=0;
   say(0,1261,0);
   say(64,1677,0);
return done;
}
#ifdef __STDC__
int p482(void)
#else
int p482()
#endif
{
int done=0;
   if (value[696]>1) {
   (*procs[490])();
   }
   if (((value[HERE]==141)) ||
   (value[HERE]==205)) {
   say(64,1561,0);
   }
   say(64,1262,0);
return done;
}
#ifdef __STDC__
int p525(void)
#else
int p525()
#endif
{
int done=0;
   say(64,1263,0);
return done;
}
#ifdef __STDC__
int p263(void)
#else
int p263()
#endif
{
int done=0;
   if (value[696]==1) {
   if ((location[85]==485)) {
   say(64,1524,0);
   }
   if (isnear(85,-1,-1)) {
   say(64,1305,0);
   }
   if (((bitest(evar(670),3)) ||
   bitest(evar(670),5)) ||
   bitest(evar(670),7)) {
   if (((isnear(87,-1,-1)) ||
   (value[HERE]==205)) ||
   isnear(20,-1,-1)) {
   set('V',700,'c',0,NULL,NULL);
   set('V',699,'c',30,NULL,NULL);
   p435();
   } else {
   say(0,1524,0);
   }
   longjmp(loop_back,1);
   }
   value[700]=location[85];*bitword(700)=-1;
   value[700] -= value[670];
   if (value[700]<0) {
   value[700] *= -1;
   }
   value[700] -= 1;
   value[700] *= 3;
   set('V',699,'v',700,NULL,NULL);
   value[699] += value[700];
   p435();
   } else {
   say(0,856,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p109(void)
#else
int p109()
#endif
{
int done=0;
   if (value[696]==1) {
   return 0;
   }
   if (!((have(116,-1,-1)) ||
   have(115,-1,-1))) {
   say(64,1329,0);
   }
   if (!((bitest(evar(669),0)) ||
   KEY(122))) {
   say(64,913,0);
   }
   if (KEY(122)) {
   say(64,1349,0);
   }
   if ((KEY(75)) &&
   isnear(75,-1,-1)) {
   say(64,1330,0);
   }
   if (KEY(11)) {
   if ((value[HERE]==159)) {
   say(64,1331,0);
   }
   if (((value[HERE]==156)) &&
   value[11]>0) {
   say(64,1331,0);
   }}
   if (KEY(86)) {
   if ((value[HERE]==388)) {
   if (value[86]==0) {
   say(64,1307,0);
   }
   if (value[86]==1) {
   apport(88,value[670]);
   set('E',86,'c',2,NULL,NULL);
   say(64,1326,0);
   }
   say(64,1332,0);
   }}
return done;
}
#ifdef __STDC__
int p36(void)
#else
int p36(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(90)) return 0;
   if (have(90,-1,-1)) {
   if (bitest(evar(670),7)) {
   say(64,1342,0);
   }
   if ((399<=value[670] && value[670]<=404)) {
   set('V',699,'v',670,NULL,NULL);
   value[700]=398;*bitword(700)=-1;
   value[699] -= value[700];
   value[713] += value[699];
   if (value[713]>9) {
   set('V',713,'c',9,NULL,NULL);
   }
   if (value[728]==0) {
   set('V',728,'c',1,NULL,NULL);
   }}
   if ((bitest(evar(670),5)) ||
   value[713]==0) {
   say(64,1344,0);
   }
   if (value[134]<value[713]) {
   set('V',699,'v',713,NULL,NULL);
   value[699] -= value[134];
   say(13,1343,699);
   apport(134,value[670]);
   set('E',134,'v',713,NULL,NULL);
   p311();
   if (value[698]==0) {
   bitmod('s',134,14);
   say(0,134,0);
   }
   } else {
   say(13,1367,134);
   bitmod('s',134,14);
   set('V',726,'c',0,NULL,NULL);
   set('V',725,'c',100,NULL,NULL);
   }
   } else {
   say(12,1023,669);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p316(void)
#else
int p316()
#endif
{
int done=0;
   if (((KEY(34)) ||
   value[696]==1) &&
   isnear(34,-1,-1)) {
   if ((bitest(39,4)) &&
   !(bitest(97,4))) {
   bitmod('s',97,4);
   apport(97,value[670]);
   say(64,1361,0);
   }
   say(64,826,0);
   }
   if (!(value[696]==2)) {
   return 0;
   }
   if (bitest(evar(669),2)) {
   say(64,913,0);
   }
   if (isnear(value[669],-1,-1)) {
   if ((KEY(134)) &&
   isnear(134,-1,-1)) {
   if (value[715]==3) {
   say(0,1377,0);
   } else {
   say(0,833,0);
   }
   p95();
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p479(void)
#else
int p479(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(39)) return 0;
   if ((isnear(39,-1,-1)) &&
   value[39]<3) {
   set('V',697,'c',400,NULL,NULL);
   set('E',39,'c',3,NULL,NULL);
   say(64,1363,0);
   }
   say(64,1362,0);
return done;
}
#ifdef __STDC__
int p226(void)
#else
int p226()
#endif
{
int done=0;
   value[676] = irand(883-876+1)+876;
   say(66,676,0);
return done;
}
#ifdef __STDC__
int p618(void)
#else
int p618()
#endif
{
int done=0;
   if (value[696]==2) {
   if (isnear(value[669],-1,-1)) {
   if ((value[715]==3) &&
   KEY(134)) {
   say(0,1377,0);
   p95();
   }
   say(64,913,0);
   }}
return done;
}
#ifdef __STDC__
int p33(void)
#else
int p33()
#endif
{
int done=0;
   if ((value[715]==3) &&
   bitest(104,4)) {
   if ((location[104]==485)) {
   say(64,1405,0);
   }
   if (isnear(104,-1,-1)) {
   say(0,1378,0);
   p95();
   }
   if ((value[HERE]==378)) {
   say(0,1379,0);
   p95();
   }
   bitmod('s',381,4);
   value[671]=380;*bitword(671)=-1;
   apport(104,485);
   apport(134,485);
   apport(82,value[670]);
   say(64,1380,0);
   }
   say(64,862,0);
return done;
}
#ifdef __STDC__
int p572(void)
#else
int p572()
#endif
{
int done=0;
   say(64,1386,0);
return done;
}
#ifdef __STDC__
int p629(void)
#else
int p629()
#endif
{
int done=0;
   if ((value[696]==1) ||
   !(bitest(evar(669),0))) {
   return 0;
   }
   if (isnear(value[669],-1,-1)) {
   if (!(bitest(evar(669),16))) {
   say(64,812,0);
   }
   if (have(value[669],-1,-1)) {
   value[699]=value[value[669]];*bitword(699)=0;
   if (value[699]>1) {
   say(76,1422,669);
   }}
   if (KEY(52)) {
   say(64,1421,0);
   }
   if (!(have(value[669],-1,-1))) {
   if ((value[704]<value[719]) ||
   bitest(evar(669),12)) {
   apport(value[669],INHAND);
   p450();
   } else {
   say(64,895,0);
   }}
   if (KEY(47)) {
   say(64,1427,0);
   }
value[value[669]]=2;
   bitmod('s',evar(669),12);
   if (KEY(43)) {
   if (bitest(43,14)) {
   say(12,1493,668);
   say(12,1494,669);
   } else {
   bitmod('s',43,14);
   say(0,1429,0);
   }
   } else {
   say(12,1493,668);
   say(12,1494,669);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p478(void)
#else
int p478()
#endif
{
int done=0;
   if ((KEY(101)) &&
   have(101,-1,-1)) {
   p135();
   longjmp(loop_back,1);
   }
   if (value[696]==1) {
   return 0;
   }
   if (!(bitest(evar(669),16))) {
   say(64,913,0);
   }
   value[699]=value[value[669]];*bitword(699)=0;
   if ((value[699]<2) ||
   !have(value[669],-1,-1)) {
   say(64,1423,0);
   }
   if (!(value[704]<value[719])) {
   say(64,895,0);
   }
   if (!(KEY(64))) {
   bitmod('c',evar(669),12);
   }
   if (KEY(43)) {
   set('V',698,'e',43,NULL,NULL);
   if (value[698]>1) {
   set('E',43,'c',1,NULL,NULL);
   if (value[698]<9) {
   if (!((((value[698]==3) ||
   (value[HERE]==252)) ||
   (value[HERE]==253)) ||
   (value[HERE]==251))) {
   say(64,1611,0);
   }
   } else {
   if (value[698]<12) {
   say(64,1612,0);
   }
   if (value[698]<17) {
   say(64,1613,0);
   }
   if (value[698]<19) {
   say(64,1614,0);
   }
   say(64,1615,0);
   }}}
value[value[669]]=1;
   say(12,1493,668);
   say(76,1494,669);
return done;
}
#ifdef __STDC__
int p607(void)
#else
int p607()
#endif
{
int done=0;
   say(64,1431,0);
return done;
}
#ifdef __STDC__
int p477(void)
#else
int p477()
#endif
{
int done=0;
   if (value[696]==1) {
   if (isnear(16,-1,-1)) {
   if ((value[HERE]==165)) {
   move(166,-1);
   } else {
   move(165,-1);
   }
   bitmod('c',evar(696),0);
   bitmod('c',16,14);
   say(64,1084,0);
   }
   if (isnear(10,-1,-1)) {
   say(64,1434,0);
   }
   say(64,1433,0);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p597(void)
#else
int p597()
#endif
{
int done=0;
   if (value[696]==2) {
   if (!((((KEY(70)) ||
   KEY(108)) ||
   KEY(134)) ||
   KEY(88))) {
   say(64,913,0);
   }}
   if (isnear(88,-1,-1)) {
   if ((value[696]==1) ||
   KEY(88)) {
   say(64,1050,0);
   }}
   if (((isnear(70,-1,-1)) ||
   isnear(108,-1,-1)) ||
   isnear(134,-1,-1)) {
   say(64,1437,0);
   }
   say(76,1438,668);
return done;
}
#ifdef __STDC__
int p655(void)
#else
int p655()
#endif
{
int done=0;
   if (irand(100)<30) {
   say(64,1510,0);
   }
   if (irand(100)<50) {
   say(64,1511,0);
   }
   say(64,1512,0);
return done;
}
#ifdef __STDC__
int p617(void)
#else
int p617()
#endif
{
int done=0;
   p315(-1,1475,-1,1477);
return done;
}
#ifdef __STDC__
int p100(void)
#else
int p100()
#endif
{
int done=0;
   if ((((((((value[HERE]==136)) ||
   (value[HERE]==142)) ||
   (value[HERE]==143)) ||
   (value[HERE]==200)) ||
   (value[HERE]==425)) ||
   (value[HERE]==427)) ||
   (value[HERE]==428)) {
   say(64,1480,0);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p332(void)
#else
int p332()
#endif
{
int done=0;
   if ((((value[HERE]==252)) ||
   (value[HERE]==253)) ||
   (value[HERE]==251)) {
   say(64,1484,0);
   }
   if ((have(43,-1,-1)) &&
   value[43]>2) {
   if (!(bitest(43,13))) {
   value[43] += 1;
   }
   if (value[43]<9) {
   say(64,1616,0);
   }
   say(64,1617,0);
   }
   if (((isnear(134,-1,-1)) ||
   isnear(121,-1,-1)) ||
   value[17]>0) {
   say(64,1485,0);
   }
   if (ishere(101,-1,-1)) {
   say(76,1482,101);
   }
   if (isnear(116,-1,-1)) {
   say(76,1482,116);
   }
   if ((bitest(evar(670),7)) &&
   !(value[HERE]==141)) {
   say(64,1486,0);
   }
   if (((((((value[HERE]==432)) ||
   (value[HERE]==250)) ||
   (value[HERE]==249)) ||
   (value[HERE]==296)) ||
   (value[HERE]==463)) ||
   (value[HERE]==324)) {
   say(64,1483,0);
   }
   if (((value[HERE]==230)) ||
   (value[HERE]==239)) {
   say(64,1642,0);
   }
   if (((bitest(19,13)) &&
   !(bitest(evar(670),7))) &&
   !(bitest(evar(670),3))) {
   say(64,928,0);
   }
   say(64,1481,0);
return done;
}
#ifdef __STDC__
int p535(void)
#else
int p535()
#endif
{
int done=0;
   say(64,1523,0);
return done;
}
#ifdef __STDC__
int p621(void)
#else
int p621()
#endif
{
int done=0;
   if (value[696]>1) {
   if (bitest(evar(669),3)) {
   if (!(isnear(value[669],-1,-1))) {
   say(76,816,669);
   }
   if (bitest(evar(670),9)) {
   if ((((value[HERE]==428)) ||
   (value[HERE]==427)) &&
   bitest(91,14)) {
   say(64,1662,0);
   }
   if ((KEY(123)) &&
   value[123]==2) {
   say(64,1661,0);
   }
   say(64,1660,0);
   }
   say(64,1657,0);
   }
   say(64,913,0);
   }
   if ((((value[HERE]==427)) ||
   (value[HERE]==428)) &&
   bitest(91,14)) {
   if (bitest(91,12)) {
   say(0,1667,0);
   } else {
   say(0,1653,0);
   bitmod('s',91,12);
   }
   bitmod('c',91,14);
   bitmod('c',428,8);
   bitmod('c',427,8);
   longjmp(loop_back,1);
   }
   if ((419<=value[670] && value[670]<=426)) {
   say(64,1654,0);
   }
   if (bitest(evar(670),9)) {
   say(64,1655,0);
   }
   if ((have(114,0,3)) ||
   have(111,0,3)) {
   say(64,1656,0);
   }
   say(64,1657,0);
return done;
}
#ifdef __STDC__
int p562(void)
#else
int p562()
#endif
{
int done=0;
   say(0,775,0);
   say(0,774,0);
   value[698] = irand(1676-1670+1)+1670;
   say(2,698,0);
   say(64,1677,0);
return done;
}
#ifdef __STDC__
int p202(void)
#else
int p202()
#endif
{
int done=0;
   if ((437<=value[670] && value[670]<=461)) {
   say(64,936,0);
   }
   if (bitest(evar(670),7)) {
   say(76,1679,668);
   }
   say(76,1680,668);
return done;
}
#ifdef __STDC__
int p123(void)
#else
int p123()
#endif
{
int done=0;
   if (value[769]==0) {
   if (bitest(evar(670),7)) {
   say(64,1685,0);
   }
   if (bitest(evar(733),5)) {
   say(64,1688,0);
   }
   p80(-1,1686,0,27,0,0);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   bitmod('s',evar(733),5);
   say(64,1687,0);
   }
   say(64,1689,0);
   }
return done;
}
#ifdef __STDC__
int p488(void)
#else
int p488(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(60)) return 0;
   if (isnear(60,-1,-1)) {
   if (value[60]==1) {
   say(72,1690,1);
   }
   set('E',60,'c',1,NULL,NULL);
   say(72,1691,1);
   }
return done;
}
#ifdef __STDC__
int p603(void)
#else
int p603(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(60)) return 0;
   if (isnear(60,-1,-1)) {
   if (value[60]==0) {
   say(72,1690,0);
   }
   if (have(60,-1,-1)) {
   if (bitest(evar(733),7)) {
   say(64,1693,0);
   }
   bitmod('s',evar(733),7);
   say(64,1692,0);
   }
   set('E',60,'c',0,NULL,NULL);
   say(72,1691,0);
   }
return done;
}
#ifdef __STDC__
int p1(void)
#else
int p1()
#endif
{
int done=0;
   say(0,774,0);
   bitmod('s',98,3);
   bitmod('s',99,3);
   bitmod('s',100,3);
   bitmod('s',102,3);
   bitmod('s',104,3);
   bitmod('s',101,3);
   bitmod('s',105,3);
   bitmod('s',106,3);
   bitmod('s',107,3);
   bitmod('s',108,3);
   bitmod('s',109,3);
   bitmod('s',110,3);
   bitmod('s',111,3);
   bitmod('s',115,3);
   bitmod('s',38,3);
   bitmod('s',39,3);
   bitmod('s',44,3);
   bitmod('s',45,3);
   bitmod('s',46,3);
   bitmod('s',47,3);
   bitmod('s',48,3);
   bitmod('s',49,3);
   bitmod('s',50,3);
   bitmod('s',51,3);
   bitmod('s',53,3);
   bitmod('s',54,3);
   bitmod('s',55,3);
   bitmod('s',58,3);
   bitmod('s',59,3);
   bitmod('s',60,3);
   bitmod('s',61,3);
   bitmod('s',63,3);
   bitmod('s',64,3);
   bitmod('s',65,3);
   bitmod('s',42,3);
   bitmod('s',52,3);
   bitmod('s',117,3);
   bitmod('s',118,3);
   bitmod('s',119,3);
   bitmod('s',66,3);
   bitmod('s',67,3);
   bitmod('s',68,3);
   bitmod('s',116,3);
   bitmod('s',43,3);
   bitmod('s',56,3);
   bitmod('s',57,3);
   bitmod('s',114,3);
   bitmod('s',103,3);
   bitmod('s',62,3);
   bitmod('s',78,3);
   bitmod('s',92,3);
   bitmod('s',89,3);
   bitmod('s',80,3);
   bitmod('s',85,3);
   bitmod('s',81,3);
   bitmod('s',88,3);
   bitmod('s',90,3);
   bitmod('s',83,3);
   bitmod('s',84,3);
   bitmod('s',95,3);
   bitmod('s',97,3);
   bitmod('s',123,3);
   bitmod('s',101,12);
   bitmod('s',38,12);
   bitmod('s',97,12);
   bitmod('s',64,12);
   bitmod('s',59,12);
   bitmod('s',136,3);
   bitmod('s',137,3);
   bitmod('s',437,3);
   bitmod('s',438,3);
   bitmod('s',439,3);
   bitmod('s',440,3);
   bitmod('s',441,3);
   bitmod('s',442,3);
   bitmod('s',443,3);
   bitmod('s',444,3);
   bitmod('s',445,3);
   bitmod('s',446,3);
   bitmod('s',447,3);
   bitmod('s',448,3);
   bitmod('s',449,3);
   bitmod('s',450,3);
   bitmod('s',451,3);
   bitmod('s',452,3);
   bitmod('s',453,3);
   bitmod('s',454,3);
   bitmod('s',455,3);
   bitmod('s',456,3);
   bitmod('s',461,3);
   bitmod('s',460,3);
   bitmod('s',459,3);
   bitmod('s',458,3);
   bitmod('s',138,3);
   bitmod('s',139,3);
   bitmod('s',140,3);
   bitmod('s',457,3);
   bitmod('s',141,3);
   bitmod('s',142,3);
   bitmod('s',143,3);
   bitmod('s',144,3);
   bitmod('s',436,3);
   bitmod('s',145,3);
   bitmod('s',146,3);
   bitmod('s',228,3);
   bitmod('s',252,3);
   bitmod('s',324,3);
   bitmod('s',376,3);
   bitmod('s',377,3);
   bitmod('s',256,3);
   bitmod('s',257,3);
   bitmod('s',463,3);
   bitmod('s',253,3);
   bitmod('s',254,3);
   bitmod('s',290,3);
   bitmod('s',291,3);
   bitmod('s',295,3);
   bitmod('s',382,3);
   bitmod('s',243,3);
   bitmod('s',242,3);
   bitmod('s',419,3);
   bitmod('s',399,3);
   bitmod('s',400,3);
   bitmod('s',401,3);
   bitmod('s',402,3);
   bitmod('s',403,3);
   bitmod('s',404,3);
   bitmod('s',383,3);
   bitmod('s',483,3);
   bitmod('s',378,3);
   bitmod('s',380,3);
   bitmod('s',379,3);
   bitmod('s',145,5);
   bitmod('s',146,5);
   bitmod('s',227,5);
   bitmod('s',244,5);
   bitmod('s',245,5);
   bitmod('s',249,5);
   bitmod('s',228,5);
   bitmod('s',229,5);
   bitmod('s',250,5);
   bitmod('s',251,5);
   bitmod('s',252,5);
   bitmod('s',296,5);
   bitmod('s',297,5);
   bitmod('s',298,5);
   bitmod('s',299,5);
   bitmod('s',192,5);
   bitmod('s',158,5);
   bitmod('s',159,5);
   bitmod('s',200,5);
   bitmod('s',377,5);
   bitmod('s',376,5);
   bitmod('s',253,5);
   bitmod('s',254,5);
   bitmod('s',255,5);
   bitmod('s',256,5);
   bitmod('s',257,5);
   bitmod('s',463,5);
   bitmod('s',258,5);
   bitmod('s',259,5);
   bitmod('s',260,5);
   bitmod('s',261,5);
   bitmod('s',262,5);
   bitmod('s',263,5);
   bitmod('s',264,5);
   bitmod('s',265,5);
   bitmod('s',315,5);
   bitmod('s',266,5);
   bitmod('s',267,5);
   bitmod('s',268,5);
   bitmod('s',269,5);
   bitmod('s',270,5);
   bitmod('s',271,5);
   bitmod('s',272,5);
   bitmod('s',273,5);
   bitmod('s',274,5);
   bitmod('s',275,5);
   bitmod('s',276,5);
   bitmod('s',277,5);
   bitmod('s',278,5);
   bitmod('s',279,5);
   bitmod('s',280,5);
   bitmod('s',281,5);
   bitmod('s',282,5);
   bitmod('s',283,5);
   bitmod('s',284,5);
   bitmod('s',285,5);
   bitmod('s',286,5);
   bitmod('s',287,5);
   bitmod('s',288,5);
   bitmod('s',289,5);
   bitmod('s',290,5);
   bitmod('s',291,5);
   bitmod('s',292,5);
   bitmod('s',293,5);
   bitmod('s',294,5);
   bitmod('s',295,5);
   bitmod('s',240,5);
   bitmod('s',241,5);
   bitmod('s',242,5);
   bitmod('s',462,5);
   bitmod('s',323,5);
   bitmod('s',393,5);
   bitmod('s',388,5);
   bitmod('s',433,5);
   bitmod('s',383,5);
   bitmod('s',384,5);
   bitmod('s',405,5);
   bitmod('s',406,5);
   bitmod('s',432,5);
   bitmod('s',420,5);
   bitmod('s',421,5);
   bitmod('s',428,5);
   bitmod('s',419,5);
   bitmod('s',422,5);
   bitmod('s',423,5);
   bitmod('s',424,5);
   bitmod('s',425,5);
   bitmod('s',426,5);
   bitmod('s',418,5);
   bitmod('s',417,5);
   bitmod('s',416,5);
   bitmod('s',415,5);
   bitmod('s',205,5);
   bitmod('s',434,5);
   bitmod('s',484,5);
   bitmod('s',485,5);
   bitmod('s',147,5);
   bitmod('s',148,5);
   bitmod('s',149,5);
   bitmod('s',150,5);
   bitmod('s',411,5);
   bitmod('s',204,5);
   bitmod('s',382,5);
   bitmod('s',435,5);
   bitmod('s',136,7);
   bitmod('s',137,7);
   bitmod('s',437,7);
   bitmod('s',438,7);
   bitmod('s',439,7);
   bitmod('s',440,7);
   bitmod('s',441,7);
   bitmod('s',442,7);
   bitmod('s',443,7);
   bitmod('s',444,7);
   bitmod('s',445,7);
   bitmod('s',446,7);
   bitmod('s',447,7);
   bitmod('s',448,7);
   bitmod('s',449,7);
   bitmod('s',450,7);
   bitmod('s',451,7);
   bitmod('s',452,7);
   bitmod('s',453,7);
   bitmod('s',454,7);
   bitmod('s',455,7);
   bitmod('s',456,7);
   bitmod('s',141,7);
   bitmod('s',461,7);
   bitmod('s',458,7);
   bitmod('s',459,7);
   bitmod('s',460,7);
   bitmod('s',457,7);
   bitmod('s',138,7);
   bitmod('s',139,7);
   bitmod('s',140,7);
   bitmod('s',142,7);
   bitmod('s',143,7);
   bitmod('s',144,7);
   bitmod('s',436,7);
   bitmod('s',169,6);
   bitmod('s',170,6);
   bitmod('s',171,6);
   bitmod('s',182,6);
   bitmod('s',185,6);
   bitmod('s',189,6);
   bitmod('s',172,6);
   bitmod('s',173,6);
   bitmod('s',174,6);
   bitmod('s',175,6);
   bitmod('s',176,6);
   bitmod('s',183,6);
   bitmod('s',177,6);
   bitmod('s',190,6);
   bitmod('s',193,6);
   bitmod('s',186,6);
   bitmod('s',178,6);
   bitmod('s',184,6);
   bitmod('s',191,6);
   bitmod('s',179,6);
   bitmod('s',180,6);
   bitmod('s',187,6);
   bitmod('s',188,6);
   bitmod('s',181,6);
   bitmod('s',301,6);
   bitmod('s',192,6);
   bitmod('s',302,6);
   bitmod('s',303,6);
   bitmod('s',304,6);
   bitmod('s',305,6);
   bitmod('s',306,6);
   bitmod('s',307,6);
   bitmod('s',308,6);
   bitmod('s',309,6);
   bitmod('s',310,6);
   bitmod('s',311,6);
   bitmod('s',232,6);
   bitmod('s',370,6);
   bitmod('s',371,6);
   bitmod('s',240,6);
   bitmod('s',221,6);
   bitmod('s',238,6);
   bitmod('s',244,6);
   bitmod('s',245,6);
   bitmod('s',236,6);
   bitmod('s',227,6);
   bitmod('s',228,6);
   bitmod('s',229,6);
   bitmod('s',216,6);
   bitmod('s',329,6);
   bitmod('s',331,6);
   bitmod('s',333,6);
   bitmod('s',335,6);
   bitmod('s',336,6);
   bitmod('s',337,6);
   bitmod('s',338,6);
   bitmod('s',339,6);
   bitmod('s',340,6);
   bitmod('s',341,6);
   bitmod('s',342,6);
   bitmod('s',343,6);
   bitmod('s',345,6);
   bitmod('s',346,6);
   bitmod('s',347,6);
   bitmod('s',349,6);
   bitmod('s',350,6);
   bitmod('s',351,6);
   bitmod('s',352,6);
   bitmod('s',353,6);
   bitmod('s',354,6);
   bitmod('s',328,6);
   bitmod('s',327,6);
   bitmod('s',271,6);
   bitmod('s',272,6);
   bitmod('s',273,6);
   bitmod('s',274,6);
   bitmod('s',275,6);
   bitmod('s',276,6);
   bitmod('s',277,6);
   bitmod('s',278,6);
   bitmod('s',279,6);
   bitmod('s',280,6);
   bitmod('s',281,6);
   bitmod('s',282,6);
   bitmod('s',283,6);
   bitmod('s',284,6);
   bitmod('s',285,6);
   bitmod('s',286,6);
   bitmod('s',287,6);
   bitmod('s',288,6);
   bitmod('s',289,6);
   bitmod('s',253,6);
   bitmod('s',255,6);
   bitmod('s',256,6);
   bitmod('s',263,6);
   bitmod('s',243,6);
   bitmod('s',382,6);
   bitmod('s',385,6);
   bitmod('s',386,6);
   bitmod('s',387,6);
   bitmod('s',388,6);
   bitmod('s',389,6);
   bitmod('s',390,6);
   bitmod('s',428,6);
   bitmod('s',393,6);
   bitmod('s',432,6);
   bitmod('s',164,6);
   bitmod('s',270,6);
   bitmod('s',461,6);
   bitmod('s',168,10);
   bitmod('s',169,10);
   bitmod('s',170,10);
   bitmod('s',171,10);
   bitmod('s',182,10);
   bitmod('s',185,10);
   bitmod('s',189,10);
   bitmod('s',172,10);
   bitmod('s',173,10);
   bitmod('s',174,10);
   bitmod('s',175,10);
   bitmod('s',176,10);
   bitmod('s',183,10);
   bitmod('s',177,10);
   bitmod('s',190,10);
   bitmod('s',193,10);
   bitmod('s',186,10);
   bitmod('s',178,10);
   bitmod('s',184,10);
   bitmod('s',191,10);
   bitmod('s',179,10);
   bitmod('s',180,10);
   bitmod('s',187,10);
   bitmod('s',188,10);
   bitmod('s',181,10);
   bitmod('s',300,10);
   bitmod('s',301,10);
   bitmod('s',192,10);
   bitmod('s',302,10);
   bitmod('s',303,10);
   bitmod('s',304,10);
   bitmod('s',305,10);
   bitmod('s',306,10);
   bitmod('s',307,10);
   bitmod('s',308,10);
   bitmod('s',309,10);
   bitmod('s',310,10);
   bitmod('s',311,10);
   bitmod('s',385,10);
   bitmod('s',386,10);
   bitmod('s',387,10);
   bitmod('s',388,10);
   bitmod('s',389,10);
   bitmod('s',390,10);
   bitmod('s',329,10);
   bitmod('s',330,10);
   bitmod('s',331,10);
   bitmod('s',332,10);
   bitmod('s',333,10);
   bitmod('s',334,10);
   bitmod('s',335,10);
   bitmod('s',336,10);
   bitmod('s',337,10);
   bitmod('s',338,10);
   bitmod('s',339,10);
   bitmod('s',340,10);
   bitmod('s',341,10);
   bitmod('s',342,10);
   bitmod('s',343,10);
   bitmod('s',344,10);
   bitmod('s',345,10);
   bitmod('s',346,10);
   bitmod('s',347,10);
   bitmod('s',348,10);
   bitmod('s',349,10);
   bitmod('s',350,10);
   bitmod('s',351,10);
   bitmod('s',352,10);
   bitmod('s',353,10);
   bitmod('s',354,10);
   bitmod('s',355,10);
   bitmod('s',356,10);
   bitmod('s',357,10);
   bitmod('s',358,10);
   bitmod('s',359,10);
   bitmod('s',360,10);
   bitmod('s',361,10);
   bitmod('s',362,10);
   bitmod('s',363,10);
   bitmod('s',364,10);
   bitmod('s',271,10);
   bitmod('s',272,10);
   bitmod('s',273,10);
   bitmod('s',274,10);
   bitmod('s',275,10);
   bitmod('s',276,10);
   bitmod('s',277,10);
   bitmod('s',278,10);
   bitmod('s',279,10);
   bitmod('s',280,10);
   bitmod('s',281,10);
   bitmod('s',282,10);
   bitmod('s',283,10);
   bitmod('s',284,10);
   bitmod('s',285,10);
   bitmod('s',286,10);
   bitmod('s',287,10);
   bitmod('s',288,10);
   bitmod('s',289,10);
   bitmod('s',154,11);
   bitmod('s',394,11);
   bitmod('s',165,11);
   bitmod('s',166,11);
   bitmod('s',182,11);
   bitmod('s',185,11);
   bitmod('s',189,11);
   bitmod('s',172,11);
   bitmod('s',183,11);
   bitmod('s',190,11);
   bitmod('s',186,11);
   bitmod('s',197,11);
   bitmod('s',214,11);
   bitmod('s',219,11);
   bitmod('s',184,11);
   bitmod('s',191,11);
   bitmod('s',187,11);
   bitmod('s',188,11);
   bitmod('s',234,11);
   bitmod('s',242,11);
   bitmod('s',311,11);
   bitmod('s',462,11);
   bitmod('s',318,11);
   bitmod('s',321,11);
   bitmod('s',330,11);
   bitmod('s',334,11);
   bitmod('s',338,11);
   bitmod('s',339,11);
   bitmod('s',345,11);
   bitmod('s',346,11);
   bitmod('s',369,11);
   bitmod('s',377,11);
   bitmod('s',411,11);
   bitmod('s',407,11);
   bitmod('s',205,11);
   bitmod('s',433,11);
   bitmod('s',483,11);
   bitmod('s',4,9);
   bitmod('s',6,9);
   bitmod('s',106,9);
   bitmod('s',107,9);
   bitmod('s',114,9);
   bitmod('s',63,9);
   bitmod('s',35,9);
   bitmod('s',118,9);
   bitmod('s',49,9);
   bitmod('s',73,9);
   bitmod('s',93,9);
   bitmod('s',113,10);
   bitmod('s',112,10);
   bitmod('s',5,10);
   bitmod('s',73,10);
   bitmod('s',8,10);
   bitmod('s',10,10);
   bitmod('s',16,10);
   bitmod('s',13,10);
   bitmod('s',18,10);
   bitmod('s',19,10);
   bitmod('s',31,10);
   bitmod('s',30,10);
   bitmod('s',32,10);
   bitmod('s',36,10);
   bitmod('s',40,10);
   bitmod('s',134,10);
   bitmod('s',109,10);
   bitmod('s',14,10);
   bitmod('s',12,10);
   bitmod('s',135,10);
   bitmod('s',75,10);
   bitmod('s',70,10);
   bitmod('s',85,10);
   bitmod('s',91,10);
   bitmod('s',122,10);
   bitmod('s',17,10);
   bitmod('s',9,10);
   bitmod('s',93,10);
   bitmod('s',8,10);
   bitmod('s',168,8);
   bitmod('s',169,8);
   bitmod('s',170,8);
   bitmod('s',171,8);
   bitmod('s',182,8);
   bitmod('s',185,8);
   bitmod('s',189,8);
   bitmod('s',172,8);
   bitmod('s',173,8);
   bitmod('s',174,8);
   bitmod('s',175,8);
   bitmod('s',176,8);
   bitmod('s',183,8);
   bitmod('s',177,8);
   bitmod('s',190,8);
   bitmod('s',193,8);
   bitmod('s',186,8);
   bitmod('s',178,8);
   bitmod('s',184,8);
   bitmod('s',191,8);
   bitmod('s',179,8);
   bitmod('s',180,8);
   bitmod('s',187,8);
   bitmod('s',188,8);
   bitmod('s',181,8);
   bitmod('s',300,8);
   bitmod('s',301,8);
   bitmod('s',192,8);
   bitmod('s',302,8);
   bitmod('s',303,8);
   bitmod('s',304,8);
   bitmod('s',305,8);
   bitmod('s',306,8);
   bitmod('s',307,8);
   bitmod('s',308,8);
   bitmod('s',309,8);
   bitmod('s',310,8);
   bitmod('s',311,8);
   bitmod('s',149,8);
   bitmod('s',144,8);
   bitmod('s',155,8);
   bitmod('s',165,8);
   bitmod('s',166,8);
   bitmod('s',236,8);
   bitmod('s',228,8);
   bitmod('s',227,8);
   bitmod('s',229,8);
   bitmod('s',328,8);
   bitmod('s',329,8);
   bitmod('s',330,8);
   bitmod('s',331,8);
   bitmod('s',332,8);
   bitmod('s',333,8);
   bitmod('s',334,8);
   bitmod('s',335,8);
   bitmod('s',336,8);
   bitmod('s',337,8);
   bitmod('s',338,8);
   bitmod('s',339,8);
   bitmod('s',340,8);
   bitmod('s',341,8);
   bitmod('s',342,8);
   bitmod('s',343,8);
   bitmod('s',344,8);
   bitmod('s',345,8);
   bitmod('s',346,8);
   bitmod('s',347,8);
   bitmod('s',348,8);
   bitmod('s',349,8);
   bitmod('s',350,8);
   bitmod('s',351,8);
   bitmod('s',352,8);
   bitmod('s',353,8);
   bitmod('s',354,8);
   bitmod('s',355,8);
   bitmod('s',356,8);
   bitmod('s',357,8);
   bitmod('s',358,8);
   bitmod('s',359,8);
   bitmod('s',360,8);
   bitmod('s',361,8);
   bitmod('s',362,8);
   bitmod('s',363,8);
   bitmod('s',364,8);
   bitmod('s',256,8);
   bitmod('s',239,8);
   bitmod('s',434,8);
   bitmod('s',252,8);
   bitmod('s',254,8);
   bitmod('s',323,8);
   bitmod('s',259,8);
   bitmod('s',314,8);
   bitmod('s',315,8);
   bitmod('s',264,8);
   bitmod('s',427,8);
   bitmod('s',428,8);
   bitmod('s',141,9);
   bitmod('s',136,9);
   bitmod('s',142,9);
   bitmod('s',143,9);
   bitmod('s',200,9);
   bitmod('s',224,9);
   bitmod('s',239,9);
   bitmod('s',240,9);
   bitmod('s',412,9);
   bitmod('s',427,9);
   bitmod('s',428,9);
   bitmod('s',98,11);
   bitmod('s',48,11);
   bitmod('s',108,11);
   bitmod('s',39,11);
   bitmod('s',45,11);
   bitmod('s',61,11);
   bitmod('s',62,11);
   bitmod('s',88,11);
   bitmod('s',123,11);
   bitmod('s',117,11);
   bitmod('s',140,12);
   bitmod('s',150,12);
   bitmod('s',152,12);
   bitmod('s',153,12);
   bitmod('s',156,12);
   bitmod('s',157,12);
   bitmod('s',160,12);
   bitmod('s',165,12);
   bitmod('s',166,12);
   bitmod('s',199,12);
   bitmod('s',201,12);
   bitmod('s',193,12);
   bitmod('s',210,12);
   bitmod('s',211,12);
   bitmod('s',215,12);
   bitmod('s',221,12);
   bitmod('s',224,12);
   bitmod('s',230,12);
   bitmod('s',239,12);
   bitmod('s',240,12);
   bitmod('s',238,12);
   bitmod('s',242,12);
   bitmod('s',244,12);
   bitmod('s',245,12);
   bitmod('s',252,12);
   bitmod('s',253,12);
   bitmod('s',261,12);
   bitmod('s',463,12);
   bitmod('s',262,12);
   bitmod('s',265,12);
   bitmod('s',266,12);
   bitmod('s',267,12);
   bitmod('s',325,12);
   bitmod('s',326,12);
   bitmod('s',327,12);
   bitmod('s',365,12);
   bitmod('s',204,12);
   bitmod('s',376,12);
   bitmod('s',382,12);
   bitmod('s',395,12);
   bitmod('s',394,12);
   bitmod('s',408,12);
   bitmod('s',399,12);
   bitmod('s',400,12);
   bitmod('s',401,12);
   bitmod('s',402,12);
   bitmod('s',403,12);
   bitmod('s',404,12);
   bitmod('s',151,12);
   bitmod('s',44,5);
   bitmod('s',45,5);
   bitmod('s',46,5);
   bitmod('s',47,5);
   bitmod('s',48,5);
   bitmod('s',49,5);
   bitmod('s',50,5);
   bitmod('s',51,5);
   bitmod('s',53,5);
   bitmod('s',55,5);
   bitmod('s',58,5);
   bitmod('s',59,5);
   bitmod('s',60,5);
   bitmod('s',61,5);
   bitmod('s',63,5);
   bitmod('s',68,5);
   bitmod('s',66,5);
   bitmod('s',67,5);
   bitmod('s',64,5);
   bitmod('s',65,5);
   bitmod('s',42,5);
   bitmod('s',52,5);
   bitmod('s',43,5);
   bitmod('s',56,5);
   bitmod('s',57,5);
   bitmod('s',62,5);
   bitmod('s',78,5);
   bitmod('s',92,5);
   bitmod('s',83,5);
   bitmod('s',81,5);
   bitmod('s',95,5);
   bitmod('s',49,7);
   bitmod('s',66,7);
   bitmod('s',100,7);
   bitmod('s',68,7);
   bitmod('s',117,7);
   bitmod('s',119,7);
   bitmod('s',42,7);
   bitmod('s',43,7);
   bitmod('s',57,7);
   bitmod('s',103,7);
   bitmod('s',62,7);
   bitmod('s',92,7);
   bitmod('s',111,7);
   bitmod('s',95,7);
   bitmod('s',39,7);
   bitmod('s',123,7);
   bitmod('s',97,7);
   bitmod('s',22,8);
   bitmod('s',134,8);
   bitmod('s',20,8);
   bitmod('s',7,8);
   bitmod('s',17,8);
   bitmod('s',38,8);
   bitmod('s',106,8);
   bitmod('s',107,8);
   bitmod('s',24,8);
   bitmod('s',101,8);
   bitmod('s',27,8);
   bitmod('s',28,8);
   bitmod('s',121,8);
   bitmod('s',25,8);
   bitmod('s',135,8);
   bitmod('s',82,8);
   bitmod('s',87,8);
   bitmod('s',91,8);
   bitmod('s',43,16);
   bitmod('s',62,16);
   bitmod('s',67,16);
   bitmod('s',64,16);
   bitmod('s',47,16);
   bitmod('s',52,16);
   bitmod('s',38,15);
   bitmod('s',63,15);
   bitmod('s',85,15);
   bitmod('s',84,15);
   bitmod('s',88,15);
   bitmod('s',101,15);
   bitmod('s',106,15);
   bitmod('s',107,15);
   bitmod('s',100,15);
   bitmod('s',105,15);
   bitmod('s',49,15);
   bitmod('s',50,15);
   bitmod('s',51,15);
   bitmod('s',53,15);
   bitmod('s',60,15);
   bitmod('s',52,15);
   bitmod('s',68,15);
   bitmod('s',116,15);
   bitmod('s',43,15);
   bitmod('s',56,15);
   bitmod('s',57,15);
   bitmod('s',103,15);
   bitmod('s',78,15);
   bitmod('s',81,15);
   bitmod('s',80,15);
   bitmod('s',461,4);
   bitmod('s',243,4);
   bitmod('s',420,13);
   bitmod('s',421,13);
   bitmod('s',422,13);
   bitmod('s',423,13);
   bitmod('s',424,13);
   bitmod('s',425,13);
   bitmod('s',426,13);
   value[670]=484;*bitword(670)=-1;
   set('V',758,'c',1,NULL,NULL);
   value[681]=203;*bitword(681)=-1;
   value[754] = irand(300-150+1)+150;
   set('V',731,'c',1,NULL,NULL);
   value[759] = irand(30-15+1)+15;
   value[757] = irand(800-650+1)+650;
   value[761] = irand(160-120+1)+120;
   set('V',760,'c',-1,NULL,NULL);
   value[683]=1352;*bitword(683)=-1;
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   apport(value[674],484);
   value[699] = irand(100);
   }
   apport(98,141);
   apport(99,141);
   apport(4,144);
   apport(100,146);
   apport(102,147);
   apport(5,150);
   apport(101,149);
   apport(6,223);
   apport(105,225);
   apport(7,155);
   apport(8,152);
   apport(106,232);
   apport(108,236);
   apport(110,484);
   apport(111,140);
   apport(11,159);
   apport(12,156);
   apport(13,238);
   apport(16,165);
   apport(18,226);
   apport(20,247);
   apport(21,244);
   apport(22,244);
   apport(38,299);
   apport(30,252);
   apport(34,311);
   apport(40,225);
   apport(44,154);
   apport(45,153);
   apport(46,160);
   apport(47,161);
   apport(48,162);
   apport(50,222);
   apport(51,224);
   apport(53,226);
   apport(55,228);
   apport(58,229);
   apport(124,229);
   apport(61,296);
   apport(63,299);
   apport(65,374);
   apport(42,377);
   apport(41,377);
   apport(52,313);
   apport(118,321);
   apport(119,433);
   apport(66,346);
   apport(68,369);
   apport(35,314);
   apport(32,370);
   apport(33,367);
   apport(116,434);
   apport(24,323);
   apport(36,291);
   apport(37,291);
   apport(56,291);
   apport(43,462);
   apport(31,254);
   apport(14,256);
   apport(57,239);
   apport(67,295);
   apport(114,294);
   apport(25,263);
   apport(103,268);
   apport(62,242);
   apport(26,240);
   apport(78,393);
   apport(79,394);
   apport(86,388);
   apport(87,388);
   apport(92,411);
   apport(89,419);
   apport(91,421);
   apport(135,383);
   apport(80,416);
   apport(85,205);
   apport(81,204);
   apport(75,203);
   apport(76,419);
   apport(77,393);
   apport(70,312);
   apport(120,140);
   apport(71,434);
   apport(90,435);
   apport(95,463);
   apport(72,393);
   apport(120,140);
   apport(93,137);
   apport(123,318);
   apport(121,484);
   apport(113,158);
   bitmod('s',4,6);
   bitmod('s',5,6);
   bitmod('s',8,6);
   bitmod('s',12,6);
   bitmod('s',16,6);
   bitmod('s',20,6);
   bitmod('s',21,6);
   bitmod('s',22,6);
   bitmod('s',23,6);
   bitmod('s',32,6);
   bitmod('s',35,6);
   bitmod('s',14,6);
   bitmod('s',30,6);
   bitmod('s',25,6);
   bitmod('s',75,6);
   bitmod('s',95,6);
   bitmod('s',72,6);
   set('E',114,'c',1,NULL,NULL);
   set('V',725,'c',35,NULL,NULL);
   set('V',726,'c',25,NULL,NULL);
   bitmod('s',evar(696),1);
   set('V',723,'c',0,NULL,NULL);
   value[717]=775;*bitword(717)=-1;
   value[714] = irand(25-15+1)+15;
   value[697] = irand(460-440+1)+440;
   value[713] = irand(8-4+1)+4;
   if (irand(100)<75) {
   bitmod('s',evar(709),1);
   }
   set('E',63,'c',0,NULL,NULL);
   set('E',14,'c',8,NULL,NULL);
   set('V',704,'c',0,NULL,NULL);
   set('V',719,'c',7,NULL,NULL);
   set('V',728,'c',0,NULL,NULL);
   move(136,-1);
   say(0,860,0);
   p80(-1,776,0,3,0,0);
return done;
}
#ifdef __STDC__
int p3(void)
#else
int p3()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if ((value[769]==1) ||
   value[769]==2) {
   set('V',769,'c',0,NULL,NULL);
   }
   if (value[769]==0) {
   return 0;
   }
   input(1714);
   set('L',0,'v',769,lval, lbts);
   if (lval[0]==6) {
   set('V',769,'c',0,NULL,NULL);
   value[706] += 10;
   say(64,1083,0);
   }
   if (lval[0]==16) {
   if (value[696]==0) {
   say(64,1715,0);
   }
   set('V',769,'c',0,NULL,NULL);
   special(11,&value[0]);
   (*procs[489])();
   }
   if (lval[0]==20) {
   if (value[696]==0) {
   say(64,1716,0);
   }
   set('V',769,'c',0,NULL,NULL);
   special(11,&value[0]);
   (*procs[490])();
   }
   if ((value[696]==0) ||
   KEY(603)) {
   set('V',770,'c',1,NULL,NULL);
   } else    if (anyof(514,604,571,-1)) {
   set('V',770,'c',0,NULL,NULL);
   } else {
   say(0,1717,0);
   say(66,771,0);
   }
   set('V',696,'c',0,NULL,NULL);
   if (lval[0]==13) {
   p95();
   } else    if (lval[0]==8) {
   p319();
   } else    if (lval[0]==9) {
   p320();
   } else    if (lval[0]==10) {
   p321();
   } else    if (lval[0]==11) {
   special(24, &value[0]);
   (*procs[548])();
   } else    if (lval[0]==14) {
   p259();
   } else    if (lval[0]==15) {
   p260();
   } else    if (lval[0]==12) {
   special(24, &value[0]);
   (*procs[224])();
   } else    if (lval[0]==7) {
   (*procs[571])();
   } else    if (lval[0]==26) {
   p81();
   } else    if (lval[0]==27) {
   (*procs[609])();
   } else    if (lval[0]==28) {
   special(24, &value[0]);
   if (value[670]<LPROC && value[670]>= 0) (*procs[value[670]])(); else pcall(value[670]);
   } else    if (lval[0]==13) {
   p95();
   } else    if (lval[0]==30) {
   p255();
   } else    if (lval[0]==29) {
   p437();
   } else    if ((lval[0]==31) ||
   lval[0]==32) {
   special(24, &value[0]);
   if (value[670]<LPROC && value[670]>= 0) (*procs[value[670]])(); else pcall(value[670]);
   } else    if (lval[0]==33) {
   if (value[770]==1) {
   say(0,1177,0);
   }
   finita();
   } else    if (((lval[0]==17) ||
   lval[0]==18) ||
   lval[0]==19) {
   special(24, &value[0]);
   if ((lval[0]==19) &&
   value[770]==1) {
   special(3,&value[0]);
   }
   (*procs[489])();
   } else    if (lval[0]==24) {
   (*procs[577])();
   }
   set('V',769,'c',0,NULL,NULL);
   if (lval[0]==4) {
   if (value[770]==1) {
   p315(-1,1558,-1,1559);
   }
   longjmp(loop_back,1);
   } else    if (lval[0]==23) {
   if (value[770]==1) {
   p315(*bitword(699),value[699],*bitword(700),value[700]);
   }
   longjmp(loop_back,1);
   }
   if (lval[0]==19) {
   special(24, &value[0]);
   special(3,&value[0]);
   (*procs[489])();
   } else    if (lval[0]==21) {
   if (value[770]==0) {
   special(24, &value[0]);
   special(3,&value[0]);
   }
   say(2,717,0);
   move(value[670],-1);
   bitmod('s',evar(696),0);
   bitmod('c',evar(670),4);
   } else    if (lval[0]==18) {
   say(2,717,0);
   if (value[770]==0) {
   finita();
   }
   set('L',0,'c',0,lval, lbts);
   longjmp(loop_back,1);
   } else    if (lval[0]==5) {
   if (KEY(603)) {
   p80(-1,1082,0,6,0,0);
   }
   say(66,717,0);
   } else    if (lval[0]==25) {
   if (value[770]==1) {
   say(0,1268,0);
   finita();
   }
   say(64,1256,0);
   } else    if (lval[0]==21) {
   if (value[770]==1) {
   say(2,717,0);
   } else {
   value[676] = irand(1070-1067+1)+1067;
   say(2,676,0);
   special(24, &value[0]);
   special(3,&value[0]);
   }
   move(value[670],-1);
   say(64,774,0);
   } else    if (lval[0]==value[594]) {
   special(24, &value[0]);
   special(3,&value[0]);
   say(66,717,0);
   } else    if (lval[0]==3) {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   say(0,779,0);
   p80(-1,1560,0,4,0,0);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p4(void)
#else
int p4()
#endif
{
int done=0;
   value[698] = irand(100);
   if ((bitest(evar(696),6)) &&
   (value[HERE]==393)) {
   if ((KEY(534)) ||
   KEY(556)) {
   p652();
   }}
   if (((irand(100)<3) &&
   value[715]==0) &&
   value[713]<10) {
   p353();
   }
   if (value[715]==3) {
   p548();
   }
   if (bitest(evar(696),0)) {
   value[711] += 1;
   if ((value[HERE]==155)) {
   set('V',680,'v',671,NULL,NULL);
   }
   if ((437<=value[670] && value[670]<=461)) {
   apport(122,value[670]);
   }
   if (value[134]>0) {
   if ((bitest(evar(670),7)) ||
   bitest(evar(670),5)) {
   if (irand(100)<15) {
   value[134] -= 1;
   if (value[134]==0) {
   apport(134,484);
   }}
   } else {
   if (!(((location[134]==value[670])) ||
   (location[134]==value[671]))) {
   set('E',134,'c',0,NULL,NULL);
   apport(134,484);
   }}}
   if ((bitest(19,13)) &&
   bitest(evar(670),7)) {
   bitmod('c',19,13);
   }
   if ((bitest(evar(671),7)) &&
   !(bitest(evar(670),7))) {
   bitmod('c',19,13);
   }}
   if (bitest(evar(709),0)) {
   p585();
   }
   if (bitest(evar(696),0)) {
   if ((isnear(95,-1,-1)) &&
   value[95]>1) {
   if ((location[95]==value[670])) {
   set('E',95,'c',3,NULL,NULL);
   } else {
   set('E',95,'c',2,NULL,NULL);
   }}
   if (((bitest(evar(671),11)) &&
   (location[134]==value[671])) &&
   !(bitest(evar(709),4))) {
   if (irand(100)<97) {
   move(value[671],-1);
   bitmod('c',evar(696),0);
   say(0,780,0);
   return 0;
   } else {
   p530();
   }}
   } else {
   if ((isnear(134,-1,-1)) &&
   irand(100)<value[725]) {
   p147();
   }
   return 0;
   }
   if (isnear(14,-1,-1)) {
   p445();
   }
   bitmod('c',evar(696),0);
   value[684] = irand(1113-1108+1)+1108;
   if (irand(100)<1) {
   value[684]=1114;*bitword(684)=-1;
   }
   if (isnear(99,-1,-1)) {
   if ((value[99]==1) &&
   !(value[HERE]==256)) {
   value[697] -= 1;
   if ((value[697]==40) ||
   value[697]==0) {
   p326();
   }}}
   if ((isnear(85,-1,-1)) &&
   isnear(99,0,1)) {
   p436();
   }
   if (!(((location[121]==484)) ||
   (location[121]==485))) {
   apport(121,value[670]);
   if (value[121]>0) {
   p311();
   if (value[698]==0) {
   say(0,1160,0);
   }}}
   if (((bitest(evar(670),4)) &&
   bitest(evar(696),1)) ||
   bitest(evar(696),2)) {
   set('V',699,'c',0,NULL,NULL);
   } else {
   bitmod('s',evar(696),3);
   set('V',699,'c',1,NULL,NULL);
   if (value[135]==5) {
   set('E',135,'c',4,NULL,NULL);
   }}
   p311();
   if (value[698]==0) {
   say(2,670,0);
   if (value[699]>0) {
   if ((value[HERE]==463)) {
   say(2,683,0);
   } else {
   if (((value[HERE]==150)) &&
   value[151]==0) {
   say(0,1228,0);
   }}}
   if (bitest(evar(670),15)) {
   say(0,874,0);
   }
   if (bitest(evar(670),4)) {
   set('V',700,'c',2,NULL,NULL);
   } else {
   set('V',700,'c',3,NULL,NULL);
   if ((value[HERE]==434)) {
   say(0,1339,0);
   }}
   if (!(bitest(evar(670),7))) {
   value[714] -= value[700];
   }
   bitmod('s',evar(670),4);
   if (!(value[134]<1)) {
   if (!((bitest(evar(670),7)) ||
   bitest(evar(670),5))) {
   apport(134,value[670]);
   }}
   p255();
   if ((((isnear(134,-1,-1)) &&
   value[134]==1) &&
   value[685]!=0) &&
   irand(100)<67) {
   say(0,1341,0);
   }
   if (have(38,-1,-1)) {
   say(0,937,0);
   }
   if (((((irand(100)<1) &&
   irand(100)<5) &&
   value[715]<3) &&
   value[710]>150) &&
   !(bitest(evar(670),3))) {
   p128();
   }
   } else {
   if (!(bitest(evar(671),3))) {
   if (!(((location[99]==value[671])) &&
   value[99]==1)) {
   if (!(((location[95]==value[671])) &&
   value[95]!=1)) {
   if ((((have(58,-1,-1)) ||
   irand(100)<25) &&
   !(bitest(evar(709),5))) &&
   value[715]<3) {
   say(0,810,0);
   p95();
   }}}}
   say(0,803,0);
   }
   bitmod('c',evar(696),3);
   bitmod('c',evar(709),5);
   if ((value[HERE]==163)) {
   if (irand(100)<35) {
   say(0,789,0);
   }}
   p248();
   if (!((bitest(evar(670),7)) ||
   value[715]>2)) {
   if (value[714]<1) {
   p167();
   } else {
   bitmod('c',evar(696),7);
   value[759] -= 1;
   if (value[759]==0) {
   value[759] = irand(20-10+1)+10;
   p241();
   }}}
   if (isnear(134,-1,-1)) {
   set('V',726,'c',50,NULL,NULL);
   p147();
   }
   if ((((location[99]==485)) &&
   (value[HERE]==136)) &&
   value[715]<4) {
   say(0,994,0);
   set('V',716,'c',1,NULL,NULL);
   p192();
   }
return done;
}
