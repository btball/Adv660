/* adv03.c: Adv660 - copyright Mike Arnautov, 25 Dec 2014.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p260(void)
#else
int p260()
#endif
{
int done=0;
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   value[676] += 1;
   say(2,676,0);
   value[706] += 20;
   bitmod('c',evar(670),8);
   bitmod('c',evar(670),14);
   value[676] -= 1;
   if ((value[HERE]==427)) {
   bitmod('c',428,8);
   }
   if ((value[HERE]==428)) {
   bitmod('c',427,8);
   }
   if (isnear(7,-1,-1)) {
   if ((value[676]==1583)) {
   bitmod('c',evar(733),0);
   } else {
   bitmod('s',evar(670),8);
   bitmod('s',evar(733),0);
   }}
   if ((value[HERE]==254)) {
   if ((value[676]==1516)) {
   bitmod('c',evar(733),1);
   } else {
   bitmod('s',evar(670),8);
   bitmod('s',evar(733),1);
   }}
   if ((((value[HERE]==228)) ||
   (value[HERE]==227)) ||
   (value[HERE]==229)) {
   bitmod('c',228,8);
   bitmod('c',229,8);
   bitmod('c',227,8);
   }
   if ((((value[HERE]==254)) &&
   bitest(197,4)) &&
   bitest(evar(733),1)) {
   say(0,1444,0);
   }
   if (isnear(35,-1,-1)) {
   bitmod('c',314,8);
   bitmod('c',315,8);
   }
   if ((value[HERE]==236)) {
   bitmod('s',evar(733),2);
   }
   if ((328<=value[670] && value[670]<=364)) {
   value[675]=328-1; while(++value[675]<=364) {
   bitmod('c',evar(675),8);
   }}
   if ((271<=value[670] && value[670]<=289)) {
   value[675]=271-1; while(++value[675]<=289) {
   bitmod('c',evar(675),8);
   }}
   if ((385<=value[670] && value[670]<=390)) {
   value[675]=385-1; while(++value[675]<=390) {
   bitmod('c',evar(675),8);
   }}
   if ((168<=value[670] && value[670]<=193)) {
   value[675]=168-1; while(++value[675]<=193) {
   bitmod('c',evar(675),8);
   }}
   if ((300<=value[670] && value[670]<=311)) {
   value[675]=300-1; while(++value[675]<=311) {
   bitmod('c',evar(675),8);
   }}
   if (isnear(16,-1,-1)) {
   bitmod('c',165,8);
   bitmod('c',166,8);
   }
   } else {
   p649();
   }
return done;
}
#ifdef __STDC__
int p407(void)
#else
int p407()
#endif
{
int done=0;
   p311();
   if (value[698]==0) {
   if (KEY(527)) {
   set('V',673,'v',669,NULL,NULL);
   } else {
   set('V',673,'v',668,NULL,NULL);
   }
   value[676] = irand(795-790+1)+790;
   say(78,676,673);
   }
   if (((irand(100)<25) &&
   !(value[HERE]==393)) &&
   value[715]<3) {
   say(0,810,0);
   p95();
   }
   say(64,796,0);
return done;
}
#ifdef __STDC__
int p46(void)
#else
int p46()
#endif
{
int done=0;
   apport(118,485);
   say(0,1095,0);
   value[676] = irand(1102-1096+1)+1096;
   say(2,676,0);
   if (isnear(33,-1,-1)) {
   set('E',118,'c',8,NULL,NULL);
   apport(33,485);
   } else {
   if (isnear(134,-1,-1)) {
   say(0,774,0);
   if (value[134]==1) {
   set('E',118,'c',1,NULL,NULL);
   } else {
   set('E',118,'c',2,NULL,NULL);
   }
   set('V',703,'e',134,NULL,NULL);
   say(0,118,0);
   p322();
   longjmp(loop_back,1);
   }
   if (isnear(22,-1,-1)) {
   set('E',118,'c',3,NULL,NULL);
   }
   if (isnear(38,-1,-1)) {
   set('E',118,'c',4,NULL,NULL);
   if (value[38]>0) {
   set('E',118,'c',5,NULL,NULL);
   }}
   if (isnear(7,-1,-1)) {
   set('E',118,'c',6,NULL,NULL);
   }
   if (isnear(101,-1,-1)) {
   set('E',118,'c',7,NULL,NULL);
   }
   if ((isnear(20,-1,-1)) &&
   value[20]==0) {
   set('E',118,'c',9,NULL,NULL);
   }
   if (isnear(27,-1,-1)) {
   set('E',118,'c',10,NULL,NULL);
   }
   if ((isnear(25,-1,-1)) &&
   value[25]<2) {
   set('E',118,'c',11,NULL,NULL);
   }
   if (isnear(121,-1,-1)) {
   set('E',118,'c',12,NULL,NULL);
   apport(121,484);
   }
   if (isnear(87,-1,-1)) {
   set('E',118,'c',13,NULL,NULL);
   }
   if (isnear(24,-1,-1)) {
   set('E',118,'c',14,NULL,NULL);
   }}
   if (value[118]>0) {
   say(0,118,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p142(void)
#else
int p142()
#endif
{
int done=0;
   if ((have(118,-1,-1)) &&
   irand(100)<10) {
   say(0,1094,0);
   apport(118,485);
   p95();
   }
return done;
}
#ifdef __STDC__
int p147(void)
#else
int p147()
#endif
{
int done=0;
   p311();
   if (value[698]==0) {
   set('V',699,'e',134,NULL,NULL);
   value[699] += 2;
   value[699] = irand(value[699]);
   value[699] -= 1;
   if (value[699]<1) {
   return 0;
   }
   say(13,782,699);
   set('V',700,'v',719,NULL,NULL);
   value[700] -= value[704];
   value[700] *= 5;
   if (bitest(134,14)) {
   value[700] -= 20;
   }
   value[726] += value[700];
   value[726] += 35;
   value[726] /= value[699];
   if (value[64]==2) {
   value[700] = irand(5);
   if (value[700]>0) {
   value[676]=784;*bitword(676)=-1;
   value[676] += value[700];
   say(15,676,699);
   return 0;
   }}
   if ((irand(100)<value[726]) ||
   bitest(134,13)) {
   say(13,783,699);
   bitmod('c',134,13);
   } else {
   say(13,784,699);
   p95();
   }}
return done;
}
#ifdef __STDC__
int p628(void)
#else
int p628()
#endif
{
int done=0;
   if (have(value[669],-1,-1)) {
   if (KEY(556)) {
   apport(value[669],HERE);
   }
   if (isnear(134,-1,-1)) {
   set('V',698,'v',719,NULL,NULL);
   value[698] -= value[704];
   value[698] *= 5;
   set('V',699,'e',134,NULL,NULL);
   value[699] += 2;
   value[699] *= 15;
   value[698] += value[699];
   if ((KEY(115)) ||
   KEY(546)) {
   if (!((KEY(115)) &&
   KEY(546))) {
   value[698] += 15;
   }}
   if (irand(100)<value[698]) {
   if ((irand(100)<5) &&
   !(bitest(evar(709),7))) {
   say(12,950,669);
   bitmod('s',evar(709),7);
   } else {
   say(0,949,0);
   }
   set('V',703,'c',1,NULL,NULL);
   p322();
   if (value[134]>0) {
   set('V',726,'c',0,NULL,NULL);
   set('V',725,'c',100,NULL,NULL);
   }
   } else {
   say(0,832,0);
   set('V',726,'c',0,NULL,NULL);
   set('V',725,'c',100,NULL,NULL);
   }
   } else {
   if (isnear(7,-1,-1)) {
   if (KEY(556)) {
   apport(value[669],INHAND);
   }
   say(64,830,0);
   }
   if (isnear(20,-1,-1)) {
   say(76,953,669);
   }
   if (isnear(38,-1,-1)) {
   if (value[38]==0) {
   if (KEY(556)) {
   if (KEY(115)) {
   set('E',115,'c',1,NULL,NULL);
   say(64,972,0);
   }
   say(64,1105,0);
   }
   if (irand(100)<50) {
   say(64,1106,0);
   }
   say(0,1107,0);
   p95();
   }
   say(76,973,38);
   }
   if (isnear(22,-1,-1)) {
   say(64,965,0);
   }
   if (isnear(24,-1,-1)) {
   if (KEY(546)) {
   say(12,1118,669);
   p95();
   }
   if (KEY(115)) {
   say(12,1119,669);
   p95();
   }
   bitmod('c',323,8);
   apport(24,485);
   apport(116,HERE);
   set('V',731,'c',6,NULL,NULL);
   bitmod('c',323,5);
   say(64,1120,0);
   }
   if (isnear(17,-1,-1)) {
   say(76,1140,669);
   }
   if (isnear(25,-1,-1)) {
   if (value[25]>1) {
   if (KEY(556)) {
   apport(value[669],INHAND);
   }
   say(64,974,0);
   }
   say(12,1149,669);
   p95();
   }
   if (isnear(27,-1,-1)) {
   say(76,1150,669);
   }
   if (isnear(121,-1,-1)) {
   say(12,1151,669);
   p95();
   }
   if (isnear(135,-1,-1)) {
   say(12,1317,669);
   p95();
   }
   if (KEY(556)) {
   apport(value[669],INHAND);
   return 0;
   }
   say(12,1493,668);
   say(76,1494,669);
   }
   } else {
   say(76,1023,669);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p439(void)
#else
int p439()
#endif
{
int done=0;
   if (isnear(35,-1,-1)) {
   bitmod('c',314,8);
   bitmod('c',315,8);
   if (value[35]==0) {
   if (((value[696]==2) &&
   value[669]==value[682]) ||
   value[668]==value[682]) {
   set('E',35,'c',1,NULL,NULL);
   bitmod('s',35,13);
   if (!(bitest(462,4))) {
   set('V',731,'c',11,NULL,NULL);
   }
   say(64,1134,0);
   }
   if (!(bitest(35,13))) {
   set('E',35,'c',2,NULL,NULL);
   set('E',17,'c',1,NULL,NULL);
   bitmod('s',evar(709),0);
   bitmod('s',evar(709),2);
   set('E',4,'c',0,NULL,NULL);
   say(64,1137,0);
   }}}
   say(64,826,0);
return done;
}
#ifdef __STDC__
int p585(void)
#else
int p585()
#endif
{
int done=0;
   if (value[17]>0) {
   value[17] += 1;
   if (value[17]>15) {
   apport(17,value[670]);
   }
   value[676]=1525;*bitword(676)=-1;
   value[676] += value[17];
   value[676] -= 2;
   say(2,676,0);
   if (value[17]==18) {
   p95();
   }}
return done;
}
#ifdef __STDC__
int p465(void)
#else
int p465()
#endif
{
int done=0;
   if (value[696]>1) {
   say(12,1036,669);
   }
return done;
}
#ifdef __STDC__
int p463(void)
#else
int p463()
#endif
{
int done=0;
   move(485,-1);
   if (value[99]==1) {
   set('V',697,'c',0,NULL,NULL);
   if (have(99,-1,-1)) {
   say(0,1161,0);
   } else {
   say(0,1162,0);
   }
   } else {
   say(0,1162,0);
   }
   p95();
return done;
}
#ifdef __STDC__
int p606(void)
#else
int p606()
#endif
{
int done=0;
   if ((KEY(101)) ||
   KEY(38)) {
   return 0;
   }
   set('V',676,'c',0,NULL,NULL);
   if ((value[HERE]==140)) {
   value[676]=1203;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==150)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=151;*bitword(675)=-1;
   }
   if ((value[HERE]==152)) {
   value[676]=1205;*bitword(676)=-1;
   value[675]=224;*bitword(675)=-1;
   }
   if ((value[HERE]==153)) {
   value[676]=1205;*bitword(676)=-1;
   value[675]=224;*bitword(675)=-1;
   }
   if ((value[HERE]==156)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=159;*bitword(675)=-1;
   }
   if ((value[HERE]==157)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=158;*bitword(675)=-1;
   }
   if ((value[HERE]==160)) {
   value[676]=1206;*bitword(676)=-1;
   value[675]=198;*bitword(675)=-1;
   }
   if ((value[HERE]==165)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=237;*bitword(675)=-1;
   }
   if ((value[HERE]==166)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=237;*bitword(675)=-1;
   }
   if ((value[HERE]==199)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=200;*bitword(675)=-1;
   }
   if ((value[HERE]==201)) {
   value[676]=1206;*bitword(676)=-1;
   value[675]=202;*bitword(675)=-1;
   }
   if ((value[HERE]==193)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=149;*bitword(675)=-1;
   }
   if ((value[HERE]==210)) {
   value[676]=1207;*bitword(676)=-1;
   value[675]=209;*bitword(675)=-1;
   }
   if ((value[HERE]==211)) {
   value[676]=1207;*bitword(676)=-1;
   value[675]=207;*bitword(675)=-1;
   }
   if ((value[HERE]==215)) {
   value[676]=1208;*bitword(676)=-1;
   value[675]=216;*bitword(675)=-1;
   }
   if ((value[HERE]==221)) {
   value[676]=1207;*bitword(676)=-1;
   value[675]=213;*bitword(675)=-1;
   }
   if ((value[HERE]==224)) {
   value[676]=1209;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==230)) {
   value[676]=1210;*bitword(676)=-1;
   value[675]=224;*bitword(675)=-1;
   }
   if ((value[HERE]==238)) {
   value[676]=1207;*bitword(676)=-1;
   value[675]=176;*bitword(675)=-1;
   }
   if (((value[HERE]==239)) ||
   (value[HERE]==240)) {
   value[676]=1218;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==242)) {
   value[676]=1207;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==244)) {
   value[676]=1211;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==245)) {
   value[676]=1211;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==252)) {
   value[676]=1212;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==253)) {
   value[676]=1212;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==261)) {
   value[676]=1213;*bitword(676)=-1;
   value[675]=260;*bitword(675)=-1;
   }
   if ((value[HERE]==463)) {
   value[676]=1217;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==262)) {
   value[676]=1214;*bitword(676)=-1;
   value[675]=255;*bitword(675)=-1;
   }
   if ((value[HERE]==265)) {
   value[676]=1215;*bitword(676)=-1;
   value[675]=266;*bitword(675)=-1;
   }
   if ((value[HERE]==266)) {
   value[676]=1215;*bitword(676)=-1;
   value[675]=267;*bitword(675)=-1;
   }
   if ((value[HERE]==267)) {
   value[676]=1215;*bitword(676)=-1;
   value[675]=268;*bitword(675)=-1;
   }
   if ((value[HERE]==325)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==326)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==327)) {
   value[676]=1216;*bitword(676)=-1;
   value[675]=328;*bitword(675)=-1;
   }
   if ((value[HERE]==365)) {
   value[676]=1204;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==376)) {
   value[676]=1217;*bitword(676)=-1;
   value[675]=377;*bitword(675)=-1;
   }
   if ((value[HERE]==382)) {
   value[676]=1212;*bitword(676)=-1;
   value[675]=485;*bitword(675)=-1;
   }
   if ((value[HERE]==204)) {
   value[676]=1207;*bitword(676)=-1;
   value[675]=203;*bitword(675)=-1;
   }
   if ((value[HERE]==395)) {
   value[676]=952;*bitword(676)=-1;
   value[675]=394;*bitword(675)=-1;
   }
   if ((value[HERE]==408)) {
   value[676]=952;*bitword(676)=-1;
   value[675]=203;*bitword(675)=-1;
   }
   if ((399<=value[670] && value[670]<=404)) {
   value[676]=952;*bitword(676)=-1;
   set('V',675,'v',670,NULL,NULL);
   value[675] -= 1;
   }
   if ((value[HERE]==394)) {
   set('V',676,'c',1,NULL,NULL);
   }
   if ((value[HERE]==151)) {
   value[676]=1682;*bitword(676)=-1;
   if (bitest(evar(669),11)) {
   value[676] += 1;
   }
   value[675]=150;*bitword(675)=-1;
   }
   if (value[676]==0) {
   return 0;
   }
   if ((value[HERE]==394)) {
   p583();
   } else {
   say(14,676,669);
   apport(value[669],value[675]);
   }
   if (KEY(53)) {
   apport(53,485);
   apport(54,value[675]);
   if (!((location[54]==485))) {
   say(64,1219,0);
   }}
   if ((value[HERE]==151)) {
   if (KEY(44)) {
   set('E',154,'c',1,NULL,NULL);
   set('E',7,'c',1,NULL,NULL);
   say(64,1684,0);
   }}
   if (KEY(111)) {
   if ((value[111]==3) ||
   value[111]==4) {
   bitmod('s',evar(675),15);
   }}
   if ((KEY(113)) ||
   KEY(112)) {
   set('V',699,'c',3,NULL,NULL);
   if (KEY(113)) {
   set('V',699,'c',4,NULL,NULL);
   }
   if (have(111,0,value[699])) {
   set('E',111,'c',2,NULL,NULL);
   } else {
   if (have(114,0,value[699])) {
   set('E',114,'c',2,NULL,NULL);
   }}}
   if ((KEY(100)) &&
   have(101,-1,-1)) {
   apport(101,value[675]);
   if (!((location[101]==485))) {
   if ((value[HERE]==151)) {
   set('V',699,'c',1,NULL,NULL);
   } else {
   set('V',699,'c',0,NULL,NULL);
   say(0,774,0);
   }
   say(12,1547,699);
   }
   longjmp(loop_back,1);
   }
   if ((KEY(99)) &&
   value[99]==1) {
   p311();
   if (value[698]>0) {
   say(64,803,0);
   }}
   if ((value[HERE]==151)) {
   say(0,774,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p250(void)
#else
int p250()
#endif
{
int done=0;
   if (value[696]==1) {
   say(64,1222,0);
   }
   if (bitest(evar(669),0)) {
   if ((have(value[669],-1,-1)) ||
   !(bitest(evar(669),3))) {
   return 0;
   }
   set('V',698,'v',704,NULL,NULL);
   value[698] -= value[719];
   value[698] *= 5;
   value[698] += 60;
   if (irand(100)<value[698]) {
   say(12,1223,669);
   p95();
   }
   say(76,1224,669);
   }
return done;
}
#ifdef __STDC__
int p466(void)
#else
int p466()
#endif
{
int done=0;
   value[730] += 1;
   if (irand(100)<40) {
   value[730] -= 2;
   if (value[730]<0) {
   set('V',730,'c',1,NULL,NULL);
   }}
   value[676]=1240;*bitword(676)=-1;
   value[676] += value[730];
   say(0,774,0);
   if (value[730]==7) {
   if (((value[HERE]==420)) ||
   (value[HERE]==421)) {
   value[676] += 1;
   }
   if (have(110,-1,-1)) {
   apport(110,484);
   }
   move(419,-1);
   say(2,676,0);
   p95();
   }
   say(2,676,0);
return done;
}
#ifdef __STDC__
int p245(void)
#else
int p245()
#endif
{
int done=0;
   if (value[135]>3) {
   if (((have(95,-1,-1)) ||
   bitest(135,14)) &&
   bitest(27,14)) {
   say(0,1369,0);
   apport(135,485);
   set('E',135,'c',0,NULL,NULL);
   } else {
   if ((irand(100)<20) ||
   !(bitest(27,14))) {
   bitmod('s',135,14);
   }
   set('E',135,'c',5,NULL,NULL);
   move(139,-1365);
   }
   return 0;
   }
   if (have(88,-1,-1)) {
   say(0,1309,0);
   if (!(bitest(27,14))) {
   say(0,1310,0);
   }
   apport(83,value[670]);
   apport(135,140);
   set('E',135,'c',4,NULL,NULL);
   apport(88,485);
   return 0;
   }
   if (have(50,-1,-1)) {
   set('E',135,'c',2,NULL,NULL);
   value[755] = irand(60-40+1)+40;
   say(8,1308,0);
   say(0,1311,0);
   apport(50,484);
   if (!(bitest(385,4))) {
   set('V',731,'c',3,NULL,NULL);
   }
   } else {
   if (value[135]==0) {
   if ((((bitest(135,4)) &&
   !have(110,-1,-1)) &&
   !(bitest(135,13))) &&
   irand(100)<10) {
   say(0,1318,0);
   bitmod('s',135,13);
   return 0;
   } else {
   set('V',700,'c',0,NULL,NULL);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if ((have(value[674],-1,-1)) &&
   !(value[674]==99)) {
   if (bitest(evar(674),16)) {
   value[699]=value[value[674]];*bitword(699)=0;
   if (value[699]<2) {
   apport(value[674],HERE);
   value[700] += 1;
   }
   } else {
   apport(value[674],HERE);
   value[700] += 1;
   }}}
   if (isnear(110,-1,-1)) {
   value[700] -= 1;
   }
   say(12,1308,700);
   if (isnear(110,-1,-1)) {
   apport(110,484);
   move(412,-1312);
   } else {
   set('E',135,'c',1,NULL,NULL);
   value[755] = irand(10-6+1)+6;
   value[756] = irand(10-8+1)+8;
   move(384,-1313);
   }}}
   if (value[135]==1) {
   say(8,1308,0);
   if (value[755]>0) {
   move(384,-1313);
   }
   say(0,1314,0);
   set('E',135,'c',0,NULL,NULL);
   p95();
   }}
return done;
}
#ifdef __STDC__
int p145(void)
#else
int p145()
#endif
{
int done=0;
   if (value[135]==1) {
   p311();
   if ((value[698]==0) &&
   value[756]==0) {
   say(0,1265,0);
   }
   if (value[755]<1) {
   set('V',698,'c',9,NULL,NULL);
   value[698] += value[755];
   if (value[698]<1) {
   set('V',698,'c',1,NULL,NULL);
   }
   value[698] *= 10;
   if (irand(100)<value[698]) {
   say(0,1315,0);
   } else {
   say(0,1316,0);
   say(0,1314,0);
   move(383,-1);
   set('E',135,'c',0,NULL,NULL);
   p95();
   }}}
return done;
}
#ifdef __STDC__
int p574(void)
#else
int p574()
#endif
{
int done=0;
   value[757] -= value[704];
   if ((value[757]<155) &&
   value[757]>135) {
   say(0,1345,0);
   value[757] = irand(135-110+1)+110;
   } else {
   if ((value[757]<60) &&
   value[757]>40) {
   say(0,1346,0);
   value[757] = irand(39-25+1)+25;
   } else {
   if (value[757]<0) {
   say(0,1347,0);
   value[757] = irand(650-550+1)+550;
   p95();
   }}}
return done;
}
#ifdef __STDC__
int p521(void)
#else
int p521()
#endif
{
int done=0;
   if (bitest(16,14)) {
   bitmod('s',16,13);
   bitmod('c',16,14);
   }
return done;
}
#ifdef __STDC__
int p201(void)
#else
int p201()
#endif
{
int done=0;
   if (value[712]>-1) {
   say(0,1076,0);
   } else {
   say(0,826,0);
   }
   set('V',712,'c',0,NULL,NULL);
return done;
}
#ifdef __STDC__
int p450(void)
#else
int p450()
#endif
{
int done=0;
   if (bitest(evar(669),16)) {
   value[699]=value[value[669]];*bitword(699)=0;
   if (value[699]>1) {
value[value[669]]=1;
   if (!((value[669]==64))) {
   bitmod('c',evar(669),12);
   }}}
   if (bitest(evar(669),7)) {
   value[699]=value[value[669]];*bitword(699)=0;
   if (value[699]==0) {
   if ((value[669]==111)) {
   set('E',111,'c',2,NULL,NULL);
   } else {
value[value[669]]=1;
   }}}
return done;
}
#ifdef __STDC__
int p199(void)
#else
int p199()
#endif
{
int done=0;
   if (value[677]==value[671]) {
   move(value[678],-2);
   }
   if (value[678]==value[671]) {
   move(value[677],-2);
   }
   say(64,797,0);
return done;
}
#ifdef __STDC__
int p460(void)
#else
int p460()
#endif
{
int done=0;
   if (bitest(8,13)) {
   say(0,1492,0);
   } else {
   say(0,1491,0);
   bitmod('s',8,13);
   }
return done;
}
#ifdef __STDC__
int p470(void)
#else
int p470()
#endif
{
int done=0;
   if (value[91]>1) {
   if (KEY(553)) {
   say(64,865,0);
   }
   if (KEY(558)) {
   say(64,1506,0);
   }
   say(64,1505,0);
   }
   say(76,816,91);
return done;
}
#ifdef __STDC__
int p544(void)
#else
int p544()
#endif
{
int done=0;
   set('E',117,'c',0,NULL,NULL);
   if (((KEY(556)) &&
   !(value[HERE]==393)) &&
   !isnear(121,-1,-1)) {
   p606();
   }
   say(0,1514,0);
   apport(117,HERE);
   if ((value[HERE]==393)) {
   p652();
   }
   if (isnear(121,-1,-1)) {
   apport(117,485);
   apport(121,485);
   say(64,1154,0);
   }
return done;
}
#ifdef __STDC__
int p345(void)
#else
int p345()
#endif
{
int done=0;
   if (isnear(8,-1,-1)) {
   say(64,1542,0);
   }
   if (isnear(30,-1,-1)) {
   say(64,1553,0);
   }
   if (isnear(21,-1,-1)) {
   if (value[21]==0) {
   say(64,1543,0);
   }
   say(64,1544,0);
   }
return done;
}
#ifdef __STDC__
int p626(void)
#else
int p626()
#endif
{
int done=0;
   value[676]=1595;*bitword(676)=-1;
   value[676] += value[11];
   say(2,676,0);
   value[11] += 1;
   if (value[11]>2) {
   set('E',11,'c',0,NULL,NULL);
   bitmod('s',12,10);
   } else {
   bitmod('c',12,10);
   }
   say(0,774,0);
   say(0,11,0);
   set('E',12,'e',11,NULL,NULL);
return done;
}
#ifdef __STDC__
int p171(void)
#else
int p171()
#endif
{
int done=0;
   if ((KEY(120)) ||
   KEY(125)) {
   if ((KEY(570)) ||
   KEY(561)) {
   say(64,1401,0);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p174(void)
#else
int p174()
#endif
{
int done=0;
   if (KEY(526)) {
   say(64,1555,0);
   }
   if (!(KEY(638))) {
   return 0;
   }
   if (KEY(570)) {
   say(64,1640,0);
   }
   if ((((KEY(555)) ||
   KEY(563)) ||
   KEY(535)) ||
   KEY(537)) {
   say(76,1641,668);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p172(void)
#else
int p172()
#endif
{
int done=0;
   if (KEY(209)) {
   if (KEY(570)) {
   say(64,1644,0);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p173(void)
#else
int p173()
#endif
{
int done=0;
   if (KEY(5)) {
   say(76,1550,5);
   }
return done;
}
#ifdef __STDC__
int p9(void)
#else
int p9()
#endif
{
int done=0;
   if (value[715]==5) {
   if (bitest(evar(715),0)) {
   say(0,1666,0);
   } else {
   bitmod('s',evar(715),0);
   say(0,1665,0);
   }
   move(value[678],-2);
   }
   move(value[677],-2);
return done;
}
#ifdef __STDC__
int p601(void)
#else
int p601()
#endif
{
int done=0;
   if ((location[82]==379)) {
   if (bitest(82,14)) {
   if (bitest(82,13)) {
   bitmod('c',82,13);
   say(64,1586,0);
   } else {
   apport(82,485);
   say(64,1588,0);
   }
   } else {
   say(0,1586,0);
   if (bitest(82,13)) {
   bitmod('s',82,14);
   say(64,1587,0);
   }
   bitmod('s',82,13);
   longjmp(loop_back,1);
   }}
   say(64,1586,0);
return done;
}
#ifdef __STDC__
int p432(void)
#else
int p432()
#endif
{
int done=0;
   if (!isnear(value[669],-1,-1)) return 0;
   if (have(value[669],-1,-1)) {
   say(76,923,669);
   }
   if (have(51,-1,-1)) {
   if (KEY(106)) {
   apport(106,485);
   apport(107,value[670]);
   apport(59,234);
   say(64,925,0);
   }
   say(64,926,0);
   }
   say(76,924,669);
return done;
}
#ifdef __STDC__
int p84(void)
#else
int p84()
#endif
{
int done=0;
   if ((KEY(533)) ||
   KEY(534)) {
   return 0;
   }
   value[699]=3;*bitword(699)=-1;
   if (value[699]==value[668]) {
   say(64,1489,0);
   }
   if (KEY(598)) {
   say(64,1681,0);
   }
   say(12,1487,668);
   say(76,1488,669);
return done;
}
#ifdef __STDC__
int p126(void)
#else
int p126()
#endif
{
int done=0;
   if ((have(114,0,4)) ||
   have(111,0,4)) {
   if (have(111,0,4)) {
   set('E',111,'c',2,NULL,NULL);
   } else {
   set('E',114,'c',2,NULL,NULL);
   }
   } else {
   say(76,1023,113);
   }
return done;
}
#ifdef __STDC__
int p506(void)
#else
int p506()
#endif
{
int done=0;
   if (!(isnear(66,-1,-1))) {
   say(76,816,669);
   }
   set('V',698,'v',669,NULL,NULL);
   value[701]=639;*bitword(701)=-1;
   value[698] -= value[701];
   if (((value[66]==0) &&
   value[698]==1) ||
   value[66]==value[698]) {
   value[701]=66;*bitword(701)=-1;
   special(10,&value[701]);
   } else {
   say(76,816,669);
   }
   if (!anyof(640,641,642,643,644,645,646,647,
   648,649,650,651,652,653,654,-1)) return 0;
   say(64,774,0);
return done;
}
#ifdef __STDC__
int p421(void)
#else
int p421()
#endif
{
int done=0;
   if ((661<=value[668] && value[668]<=667)) {
   value[698]=661;*bitword(698)=-1;
   value[698] += 1;
   value[698] += value[724];
   if (value[698]==value[668]) {
   value[698] += 1;
   if ((value[698]==667)) {
   set('V',724,'c',0,NULL,NULL);
   bitmod('s',evar(709),4);
   say(64,1520,0);
   }
   value[724] += 1;
   } else {
   set('V',724,'c',0,NULL,NULL);
   }
   set('V',668,'c',-2,NULL,NULL);
   } else {
   if (value[724]>0) {
   set('V',724,'c',0,NULL,NULL);
   }}
return done;
}
#ifdef __STDC__
int p80(int typ0,int par0,int typ1,int par1,int typ2,int par2)
#else
int p80(typ0,par0,typ1,par1,typ2,par2)
int typ0;int par0;
int typ1;int par1;
int typ2;int par2;
#endif
{
int done=0;
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = par2;
   lbts [2] = typ2;
   if (lval[2]!=0) {
   special(23, &value[0]);
   }
   set('V',769,'l',1,lval, lbts);
   set('V',771,'l',0,lval, lbts);
   say(66,771,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p315(int typ0,int par0,int typ1,int par1)
#else
int p315(typ0,par0,typ1,par1)
int typ0;int par0;
int typ1;int par1;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   say(0,lval[0],0);
   lval[0] += 1;
   if (lval[0]>lval[1]) {
   say(64,774,0);
   }
   set('V',699,'l',0,lval, lbts);
   set('V',700,'l',1,lval, lbts);
   p80(-1,942,0,23,0,0);
return done;
}
#ifdef __STDC__
int p485(void)
#else
int p485()
#endif
{
int done=0;
   if (KEY(570)) {
   if (KEY(141)) {
   say(64,1643,0);
   }
   return 0;
   }
   move(137,0,136,520,-523);
   move(141,0,525,141,-516);
   move(142,0,597,623,518,-524);
   move(440,0,514,-619);
   move(458,0,-515);
   move(460,0,-517);
   move(450,0,-519);
   move(457,0,521,-457);
   move(138,0,-138);
   if ((KEY(144)) ||
   KEY(616)) {
   value[678]=461;*bitword(678)=-1;
   if (KEY(144)) {
   value[677]=144;*bitword(677)=-1;
   } else {
   value[677]=140;*bitword(677)=-1;
   }
   p9();
   }
   if (KEY(6)) {
   say(72,1462,525);
   }
return done;
}
#ifdef __STDC__
int p257(void)
#else
int p257()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(136,0,136,141,-516);
   move(457,0,-514);
   move(440,0,515,-619);
   move(142,0,-517);
   move(450,0,-518);
   move(461,0,-519);
   move(438,0,-521);
   if (!anyof(520,528,595,-1)) return 0;
   p80(-1,1267,0,25,0,0);
return done;
}
#ifdef __STDC__
int p258(void)
#else
int p258()
#endif
{
int done=0;
   p171();
   if (!keyword(537,93,-1)) return 0;
   say(76,1132,669);
return done;
}
#ifdef __STDC__
int p50(void)
#else
int p50()
#endif
{
int done=0;
   if (KEY(6)) {
   say(72,1462,526);
   }
   if (KEY(636)) {
   say(64,1590,0);
   }
   if (KEY(635)) {
   say(64,1589,0);
   }
   if (!keyword(570,141,-1)) return 0;
   say(64,1643,0);
return done;
}
#ifdef __STDC__
int p51(void)
#else
int p51()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(136,0,136,526,-520);
   if (value[715]<2) {
   move(147,value[684],-497);
   move(163,value[684],-501);
   }
   if (!anyof(623,597,-1)) return 0;
   say(64,1022,0);
return done;
}
#ifdef __STDC__
int p609(void)
#else
int p609()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(136,0,596,514,515,-521);
   move(460,0,-516);
   move(454,0,-517);
   move(451,0,-519);
   move(450,0,520,-619);
   if (KEY(523)) {
   if (irand(100)<50) {
   move(450,-2);
   }
   move(460,-2);
   }
   if (KEY(141)) {
   value[678]=143;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (KEY(144)) {
   value[678]=440;*bitword(678)=-1;
   value[677]=144;*bitword(677)=-1;
   p9();
   }
   if (!keyword(527,623,-1)) return 0;
   value[677]=136;*bitword(677)=-1;
   value[678]=143;*bitword(678)=-1;
   p199();
return done;
}
#ifdef __STDC__
int p610(void)
#else
int p610()
#endif
{
int done=0;
   if (!anyof(518,524,597,-1)) return 0;
   move(143,-2);
return done;
}
#ifdef __STDC__
int p527(void)
#else
int p527()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   if (value[143]>0) {
   if (KEY(141)) {
   value[678]=436;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (KEY(144)) {
   value[678]=142;*bitword(678)=-1;
   value[677]=144;*bitword(677)=-1;
   p9();
   }
   } else {
   move(136,0,-141);
   move(144,0,-144);
   }
   move(142,0,596,-514);
   move(144,0,597,637,518,-144);
   move(460,0,-515);
   move(454,0,-516);
   move(455,0,-517);
   move(452,0,-519);
   move(451,0,520,-619);
   move(450,0,-521);
   if (KEY(523)) {
   if (irand(100)<50) {
   move(451,-2);
   }
   move(454,-2);
   }
   if (!anyof(143,623,524,525,-1)) return 0;
   if (value[769]==0) {
   if (value[143]==0) {
   say(64,899,0);
   }
   set('V',715,'c',6,NULL,NULL);
   p239();
   say(0,1394,0);
   p80(-1,1395,0,31,0,1);
   } else    if (value[770]==1) {
   if (value[769]==31) {
   say(0,1396,0);
   p80(-1,1395,0,32,0,0);
   } else {
   if (value[707]>658) {
   say(0,1398,0);
   } else {
   say(0,1397,0);
   }}}
   set('V',716,'c',0,NULL,NULL);
   p192();
return done;
}
#ifdef __STDC__
int p121(void)
#else
int p121()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(454,0,-515);
   move(455,0,-516);
   move(456,0,-517);
   move(436,0,-518);
   move(453,0,-519);
   move(452,0,520,-619);
   move(451,0,-521);
   if (KEY(141)) {
   value[678]=436;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (KEY(523)) {
   if (irand(100)<50) {
   move(455,-2);
   }
   move(452,-2);
   }
   move(143,0,596,514,-143);
   if (!anyof(525,524,525,-1)) return 0;
   if (value[4]==1) {
   move(145,-2);
   }
   say(64,897,0);
return done;
}
#ifdef __STDC__
int p304(void)
#else
int p304()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(146,0,624,146,525,-520);
   move(150,0,-150);
   move(147,0,-147);
   if (!anyof(523,526,526,617,-1)) return 0;
   if (value[4]==1) {
   move(144,-2);
   }
   say(64,897,0);
return done;
}
#ifdef __STDC__
int p93(void)
#else
int p93()
#endif
{
int done=0;
   move(145,0,526,617,620,-516);
   move(147,0,525,229,520,-147);
   move(150,0,-150);
return done;
}
#ifdef __STDC__
int p118(void)
#else
int p118()
#endif
{
int done=0;
   move(145,0,-620);
   move(146,0,624,146,622,213,-516);
   move(148,0,148,525,523,-520);
   move(150,0,-150);
   if (value[4]==1) {
   move(144,0,-144);
   } else {
   move(145,897,-144);
   }
   if (KEY(497)) {
   if ((value[715]>1) ||
   bitest(evar(709),2)) {
   bitmod('s',evar(709),3);
   say(64,932,0);
   }
   move(141,-value[684]);
   }
   if (!keyword(125,-1)) return 0;
   if ((KEY(570)) ||
   KEY(561)) {
   say(64,1618,0);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p53(void)
#else
int p53()
#endif
{
int done=0;
   move(145,0,-620);
   move(147,0,524,516,-147);
   move(149,0,525,523,-520);
   move(150,0,-150);
   if (value[4]==1) {
   move(144,0,-144);
   } else {
   move(145,897,-144);
   }
return done;
}
#ifdef __STDC__
int p32(void)
#else
int p32()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(145,0,-620);
   move(147,0,-147);
   move(148,0,148,-516);
   move(150,0,622,150,-520);
   if (value[4]==1) {
   move(144,0,-144);
   } else {
   move(145,897,-144);
   }
return done;
}
#ifdef __STDC__
int p452(void)
#else
int p452()
#endif
{
int done=0;
   if (value[154]==0) {
   if (have(44,-1,-1)) {
   apport(5,484);
   } else {
   apport(5,150);
   }}
   if (KEY(570)) {
   return 0;
   }
   move(145,0,-620);
   move(147,0,-147);
   move(149,0,622,-516);
   move(151,0,-524);
   if (value[4]==1) {
   move(144,0,-144);
   } else {
   move(145,897,-144);
   }
   if (!anyof(524,150,5,-1)) return 0;
   if (ishere(5,-1,-1)) {
   move(151,-2);
   }
   say(0,1010,0);
   move(151,-1);
   p95();
return done;
}
#ifdef __STDC__
int p453(void)
#else
int p453()
#endif
{
int done=0;
   if (!anyof(520,613,-1)) return 0;
   if (KEY(570)) {
   say(64,1021,0);
   }
   say(64,1020,0);
return done;
}
#ifdef __STDC__
int p454(void)
#else
int p454()
#endif
{
int done=0;
   if (!keyword(530,-1)) return 0;
   move(151,-1);
   p546();
return done;
}
#ifdef __STDC__
int p395(void)
#else
int p395()
#endif
{
int done=0;
   if (value[154]==0) {
   if (have(44,-1,-1)) {
   apport(5,484);
   set('E',151,'c',1,NULL,NULL);
   } else {
   apport(5,150);
   set('E',151,'c',0,NULL,NULL);
   }}
   if (KEY(570)) {
   return 0;
   }
   move(154,0,-518);
   move(312,0,-516);
   move(152,0,528,625,-520);
   move(155,0,524,-514);
   move(164,0,-163);
   if (!anyof(595,523,150,615,622,5,-1)) return 0;
   if (ishere(5,-1,-1)) {
   move(150,-2);
   }
   say(64,1011,0);
return done;
}
#ifdef __STDC__
int p151(void)
#else
int p151()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(151,0,516,-625);
   if (!anyof(528,531,520,-1)) return 0;
   if (value[8]==0) {
   say(64,901,0);
   }
   p460();
   move(153,-2);
return done;
}
#ifdef __STDC__
int p152(void)
#else
int p152()
#endif
{
int done=0;
   if (KEY(530)) {
   if (value[8]==1) {
   say(64,900,0);
   }
   move(224,-1);
   p546();
   }
   if ((KEY(9)) &&
   value[8]==1) {
   apport(9,value[670]);
   }
return done;
}
#ifdef __STDC__
int p419(void)
#else
int p419()
#endif
{
int done=0;
   move(151,0,514,526,-625);
   if (!keyword(125,-1)) return 0;
   if ((KEY(570)) ||
   KEY(561)) {
   say(76,1619,154);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p399(void)
#else
int p399()
#endif
{
int done=0;
   set('V',675,'c',0,NULL,NULL);
   if (KEY(570)) {
   return 0;
   }
   if (!anyof(5,523,516,-1)) return 0;
   value[675]=151;*bitword(675)=-1;
return done;
}
#ifdef __STDC__
int p400(void)
#else
int p400()
#endif
{
int done=0;
   if (KEY(514)) {
   value[675]=160;*bitword(675)=-1;
   } else {
   if ((KEY(519)) ||
   KEY(621)) {
   value[675]=215;*bitword(675)=-1;
   } else {
   if (KEY(518)) {
   value[675]=161;*bitword(675)=-1;
   } else {
   if (KEY(520)) {
   value[675]=162;*bitword(675)=-1;
   } else {
   if (KEY(524)) {
   value[675]=314;*bitword(675)=-1;
   } else {
   if (KEY(515)) {
   value[675]=313;*bitword(675)=-1;
   } else {
   if (KEY(521)) {
   value[675]=319;*bitword(675)=-1;
   } else {
   if (KEY(517)) {
   value[675]=316;*bitword(675)=-1;
   }}}}}}}}
   if (value[675]==0) {
   return 0;
   }
   if ((isnear(7,-1,-1)) &&
   value[675]!=value[680]) {
   p530();
   if (value[7]==1) {
   say(0,1430,0);
   set('E',7,'c',0,NULL,NULL);
   } else {
   say(64,1012,0);
   }}
   if ((KEY(519)) &&
   irand(100)<66) {
   set('V',680,'v',675,NULL,NULL);
   say(64,841,0);
   }
   move(value[675],-2);
return done;
}
#ifdef __STDC__
int p643(void)
#else
int p643()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(157,0,516,-531);
   move(209,0,520,-209);
   move(159,0,524,-150);
   if (!keyword(618,-1)) return 0;
   say(64,948,0);
return done;
}
#ifdef __STDC__
int p153(void)
#else
int p153()
#endif
{
int done=0;
   move(157,0,523,-526);
return done;
}
#ifdef __STDC__
int p642(void)
#else
int p642()
#endif
{
int done=0;
   move(156,0,523,-526);
   if (KEY(595)) {
   if (value[11]==0) {
   say(64,1024,0);
   }
   if (value[11]==1) {
   move(156,-1025);
   }
   if (!(bitest(220,4))) {
   set('V',731,'c',2,NULL,NULL);
   }
   move(220,-1026);
   }
   if (!keyword(533,11,-1)) return 0;
   say(64,918,0);
return done;
}
#ifdef __STDC__
int p641(void)
#else
int p641()
#endif
{
int done=0;
   move(167,0,-520);
   if (KEY(530)) {
   if (value[8]==1) {
   say(64,900,0);
   }
   move(224,-1);
   p546();
   }
   if (KEY(514)) {
   move(167,-1013);
   }
   if ((KEY(9)) &&
   value[8]==1) {
   apport(9,value[670]);
   }
   if (!anyof(528,531,516,-1)) return 0;
   if (value[8]==0) {
   say(64,901,0);
   }
   p460();
   move(152,-2);
return done;
}
#ifdef __STDC__
int p350(void)
#else
int p350()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(155,0,518,526,-625);
   move(163,0,514,-163);
   move(198,0,524,-618);
   move(198,0,-618);
return done;
}
#ifdef __STDC__
int p540(void)
#else
int p540()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(155,0,514,526,-625);
   move(395,0,524,-5);
   p173();
return done;
}
#ifdef __STDC__
int p644(void)
#else
int p644()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(155,0,516,526,-625);
   move(196,0,520,-523);
return done;
}
#ifdef __STDC__
int p654(void)
#else
int p654()
#endif
{
int done=0;
   move(160,0,-518);
   move(164,0,516,-164);
   move(165,0,-520);
   if (!anyof(501,228,-1)) return 0;
   if ((value[696]==2) &&
   !KEY(493)) {
   return 0;
   }
   if (KEY(228)) {
   bitmod('c',228,8);
   bitmod('c',227,8);
   bitmod('c',229,8);
   move(228,-2);
   }
   if ((value[715]>1) ||
   bitest(evar(709),2)) {
   bitmod('s',evar(709),3);
   say(64,932,0);
   }
   move(141,-value[684]);
return done;
}
#ifdef __STDC__
int p313(void)
#else
int p313()
#endif
{
int done=0;
   move(163,0,524,-163);
   move(151,0,-523);
return done;
}
#ifdef __STDC__
int p155(void)
#else
int p155()
#endif
{
int done=0;
   move(163,0,516,-163);
   p174();
   if (!keyword(530,-1)) return 0;
   say(0,1010,0);
   move(237,-1);
   p95();
return done;
}
#ifdef __STDC__
int p125(void)
#else
int p125()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(199,0,516,-624);
   move(160,0,523,-618);
   move(201,0,-520);
   move(207,0,-207);
return done;
}
#ifdef __STDC__
int p48(void)
#else
int p48()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(198,0,520,-624);
   move(200,0,524,595,-150);
return done;
}
#ifdef __STDC__
int p557(void)
#else
int p557()
#endif
{
int done=0;
   move(199,0,523,526,-595);
   if (!anyof(143,623,524,596,597,-1)) return 0;
   say(64,899,0);
return done;
}
#ifdef __STDC__
int p146(void)
#else
int p146()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(198,0,516,-622);
   move(202,0,524,-618);
   move(207,0,-207);
return done;
}
#ifdef __STDC__
int p640(void)
#else
int p640()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(168,0,518,523,622,-595);
   move(153,0,-516);
   move(194,0,520,-624);
   if (!keyword(514,-1)) return 0;
   move(153,-1013);
return done;
}
#ifdef __STDC__
int p355(void)
#else
int p355()
#endif
{
int done=0;
   move(167,0,-523);
   move(168,0,-514);
   move(169,0,-516);
   move(171,0,-518);
   move(178,0,-520);
return done;
}
#ifdef __STDC__
int p356(void)
#else
int p356()
#endif
{
int done=0;
   move(168,0,-520);
   move(170,0,-518);
   move(171,0,-516);
return done;
}
#ifdef __STDC__
int p357(void)
#else
int p357()
#endif
{
int done=0;
   move(169,0,-516);
   move(189,0,-524);
   move(173,0,-518);
   move(191,0,-514);
return done;
}
#ifdef __STDC__
int p358(void)
#else
int p358()
#endif
{
int done=0;
   move(168,0,-520);
   move(169,0,-514);
   move(182,0,-516);
   move(185,0,-518);
   move(181,0,523,-524);
   move(181,0,-524);
return done;
}
#ifdef __STDC__
int p359(void)
#else
int p359()
#endif
{
int done=0;
   move(171,0,526,-520);
return done;
}
#ifdef __STDC__
int p360(void)
#else
int p360()
#endif
{
int done=0;
   move(171,0,526,-516);
return done;
}
#ifdef __STDC__
int p361(void)
#else
int p361()
#endif
{
int done=0;
   move(170,0,526,-523);
return done;
}
#ifdef __STDC__
int p362(void)
#else
int p362()
#endif
{
int done=0;
   move(173,0,-516);
   move(174,0,-520);
return done;
}
#ifdef __STDC__
int p363(void)
#else
int p363()
#endif
{
int done=0;
   move(170,0,-516);
   move(172,0,-520);
   move(174,0,-524);
   move(175,0,-518);
return done;
}
#ifdef __STDC__
int p364(void)
#else
int p364()
#endif
{
int done=0;
   move(172,0,-520);
   move(173,0,-523);
   move(175,0,-516);
   move(176,0,-518);
return done;
}
#ifdef __STDC__
int p365(void)
#else
int p365()
#endif
{
int done=0;
   move(173,0,-520);
   move(174,0,-516);
   move(175,0,-518);
   move(176,0,-523);
   move(177,0,-514);
   move(188,0,-524);
return done;
}
#ifdef __STDC__
int p366(void)
#else
int p366()
#endif
{
int done=0;
   move(174,0,-520);
   move(175,0,-514);
   move(183,0,-518);
return done;
}
#ifdef __STDC__
int p367(void)
#else
int p367()
#endif
{
int done=0;
   move(176,0,526,-520);
return done;
}
#ifdef __STDC__
int p368(void)
#else
int p368()
#endif
{
int done=0;
   move(175,0,-520);
   move(177,0,-514);
   move(190,0,-524);
   move(193,0,-516);
return done;
}
#ifdef __STDC__
int p369(void)
#else
int p369()
#endif
{
int done=0;
   move(177,0,526,-523);
return done;
}
#ifdef __STDC__
int p379(void)
#else
int p379()
#endif
{
int done=0;
   move(149,0,524,-595);
   move(177,0,-520);
   move(186,0,-518);
   move(179,0,-514);
   move(180,0,-516);
return done;
}
#ifdef __STDC__
int p370(void)
#else
int p370()
#endif
{
int done=0;
   move(193,0,526,-516);
return done;
}
#ifdef __STDC__
int p333(void)
#else
int p333()
#endif
{
int done=0;
   move(167,0,516,523,-624);
   move(195,0,-520);
   move(196,0,514,524,-618);
return done;
}
#ifdef __STDC__
int p334(void)
#else
int p334()
#endif
{
int done=0;
   move(194,0,-516);
   move(196,0,-514);
   move(300,0,-518);
return done;
}
#ifdef __STDC__
int p101(void)
#else
int p101()
#endif
{
int done=0;
   move(194,0,-520);
   move(197,0,-514);
   move(162,0,-516);
   move(195,0,-518);
return done;
}
#ifdef __STDC__
int p115(void)
#else
int p115()
#endif
{
int done=0;
   move(196,0,526,-518);
return done;
}
#ifdef __STDC__
int p94(void)
#else
int p94()
#endif
{
int done=0;
   move(201,0,523,-595);
   move(207,0,520,-207);
   move(232,0,514,-232);
   move(235,0,-516);
return done;
}
#ifdef __STDC__
int p31(void)
#else
int p31()
#endif
{
int done=0;
   move(202,0,-516);
   move(208,0,-520);
   move(209,0,-209);
   if (KEY(521)) {
   if (irand(100)<50) {
   say(64,841,0);
   }
   move(226,-2);
   }
   if (!anyof(514,518,523,524,-1)) return 0;
   if (irand(100)<65) {
   say(64,927,0);
   }
   move(235,0,-524);
   if (irand(100)<75) {
   move(213,0,-514);
   move(201,0,-523);
   move(209,0,-518);
   } else {
   move(212,0,-514);
   move(211,0,-523);
   move(218,0,-518);
   }
return done;
}
#ifdef __STDC__
int p569(void)
#else
int p569()
#endif
{
int done=0;
   move(207,0,-515);
   move(157,0,-520);
   move(218,0,-148);
   move(225,0,516,-225);
   move(226,0,-226);
   if (!anyof(521,518,-1)) return 0;
   if (irand(100)<33) {
   move(218,0,-518);
   move(226,0,-521);
   } else {
   say(64,841,0);
   }
return done;
}
#ifdef __STDC__
int p154(void)
#else
int p154()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(208,0,-516);
   move(156,0,520,-531);
   move(158,0,524,-150);
return done;
}
#ifdef __STDC__
int p524(void)
#else
int p524()
#endif
{
int done=0;
   move(156,0,-518);
   move(210,0,523,-595);
   move(207,0,514,-207);
   move(207,0,-207);
   p172();
return done;
}
#ifdef __STDC__
int p513(void)
#else
int p513()
#endif
{
int done=0;
   move(209,0,524,-209);
   move(237,0,514,-10);
   move(239,0,-239);
   move(247,0,-518);
return done;
}
#ifdef __STDC__
int p514(void)
#else
int p514()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(212,0,-514);
   move(207,0,524,-622);
   move(238,0,-518);
return done;
}
#ifdef __STDC__
int p510(void)
#else
int p510()
#endif
{
int done=0;
   move(207,0,-517);
   move(211,0,-518);
   move(166,0,-514);
return done;
}
#ifdef __STDC__
int p349(void)
#else
int p349()
#endif
{
int done=0;
   move(207,0,-207);
   move(246,0,-519);
   move(214,0,-514);
   move(226,0,517,-226);
return done;
}
#ifdef __STDC__
int p116(void)
#else
int p116()
#endif
{
int done=0;
   move(213,0,518,526,-624);
return done;
}
#ifdef __STDC__
int p509(void)
#else
int p509()
#endif
{
int done=0;
   move(155,0,-516);
   move(216,0,-524);
   if (!keyword(520,-1)) return 0;
   if (value[20]==0) {
   move(248,-2);
   }
   move(247,-2);
return done;
}
#ifdef __STDC__
int p647(void)
#else
int p647()
#endif
{
int done=0;
   move(217,0,-518);
   move(218,0,-514);
return done;
}
#ifdef __STDC__
int p586(void)
#else
int p586()
#endif
{
int done=0;
   move(216,0,-514);
return done;
}
#ifdef __STDC__
int p571(void)
#else
int p571()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(216,0,-516);
   move(219,0,-520);
   move(208,0,514,-624);
   move(483,0,518,-525);
return done;
}
#ifdef __STDC__
int p611(void)
#else
int p611()
#endif
{
int done=0;
   if (KEY(125)) {
   if ((KEY(570)) ||
   KEY(561)) {
   say(64,1620,0);
   }
   say(64,913,0);
   }
   move(218,0,514,-526);
   if (KEY(525)) {
   say(64,1579,0);
   }
   if ((KEY(534)) &&
   value[696]==2) {
   if (!(have(value[669],-1,-1))) {
   say(76,1023,669);
   }
   if (KEY(80)) {
   say(0,1569,0);
   } else {
   if ((KEY(100)) &&
   have(101,-1,-1)) {
   say(0,1570,0);
   } else {
   if (KEY(101)) {
   apport(101,HERE);
   set('E',101,'c',0,NULL,NULL);
   say(64,1571,0);
   }
   if (KEY(95)) {
   if (value[95]==1) {
   say(0,1573,0);
   } else {
   say(0,1574,0);
   }
   } else {
   if (KEY(53)) {
   say(0,1572,0);
   } else {
   say(12,1568,669);
   }}}}
   if (bitest(evar(709),6)) {
   say(0,1576,0);
   } else {
   say(0,1575,0);
   bitmod('s',evar(709),6);
   }
   if ((KEY(100)) &&
   have(101,-1,-1)) {
   say(0,1578,0);
   apport(101,149);
   set('E',101,'c',0,NULL,NULL);
   }
   say(0,1577,0);
   if (KEY(80)) {
   bitmod('s',80,5);
   }
   if ((KEY(97)) ||
   KEY(108)) {
   say(0,1565,0);
   } else {
   if (KEY(95)) {
   say(0,1567,0);
   } else {
   if (KEY(53)) {
   say(0,1566,0);
   } else {
   if (bitest(evar(669),5)) {
   say(0,1563,0);
   } else {
   say(0,1564,0);
   }}}}
   apport(value[669],485);
   if (KEY(111)) {
   set('E',111,'c',2,NULL,NULL);
   }
   if (KEY(114)) {
   set('E',114,'c',2,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   if (KEY(634)) {
   if (KEY(570)) {
   say(64,1580,0);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p117(void)
#else
int p117()
#endif
{
int done=0;
   move(218,0,-518);
return done;
}
#ifdef __STDC__
int p371(void)
#else
int p371()
#endif
{
int done=0;
   move(168,0,-514);
   move(178,0,520,-518);
   move(184,0,-516);
return done;
}
#ifdef __STDC__
int p372(void)
#else
int p372()
#endif
{
int done=0;
   move(178,0,520,-526);
return done;
}
#ifdef __STDC__
int p373(void)
#else
int p373()
#endif
{
int done=0;
   move(170,0,526,-518);
return done;
}
#ifdef __STDC__
int p374(void)
#else
int p374()
#endif
{
int done=0;
   move(193,0,-518);
   move(180,0,-516);
   move(187,0,-520);
return done;
}
#ifdef __STDC__
int p375(void)
#else
int p375()
#endif
{
int done=0;
   move(193,0,-514);
   move(179,0,-520);
   move(192,0,-521);
return done;
}
#ifdef __STDC__
int p376(void)
#else
int p376()
#endif
{
int done=0;
   move(179,0,526,-516);
return done;
}
#ifdef __STDC__
int p377(void)
#else
int p377()
#endif
{
int done=0;
   move(175,0,526,-523);
return done;
}
#ifdef __STDC__
int p378(void)
#else
int p378()
#endif
{
int done=0;
   move(171,0,523,-524);
return done;
}
#ifdef __STDC__
int p403(void)
#else
int p403()
#endif
{
int done=0;
   move(159,0,516,524,-595);
   move(222,0,-520);
return done;
}
#ifdef __STDC__
int p404(void)
#else
int p404()
#endif
{
int done=0;
   if (!keyword(530,-1)) return 0;
   move(159,-1);
   p546();
return done;
}
#ifdef __STDC__
int p306(void)
#else
int p306()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(224,0,514,224,-622);
   move(213,1115,524,-595);
return done;
}
#ifdef __STDC__
int p244(void)
#else
int p244()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(220,0,518,-249);
   move(322,0,-516);
   move(223,0,-514);
return done;
}
#ifdef __STDC__
int p302(void)
#else
int p302()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(222,0,518,-622);
   move(222,0,-622);
   if (!anyof(514,525,224,-1)) return 0;
   if (value[6]==0) {
   say(64,914,0);
   }
   move(224,-2);
return done;
}
#ifdef __STDC__
int p77(void)
#else
int p77()
#endif
{
int done=0;
   move(223,0,518,-526);
   move(221,0,520,-221);
   if (!anyof(524,530,-1)) return 0;
   if (value[769]==0) {
   p80(-1,1169,0,12,0,1);
   }
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   bitmod('c',239,8);
   set('V',700,'c',0,NULL,NULL);
   if (have(101,-1,-1)) {
   apport(101,485);
   }
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (((have(value[674],-1,-1)) &&
   !(bitest(evar(674),12))) &&
   !(value[674]==99)) {
   apport(value[674],485);
   value[700] += 1;
   }}
   if (have(99,-1,-1)) {
   set('V',704,'c',1,NULL,NULL);
   set('V',700,'c',1,NULL,NULL);
   } else {
   set('V',704,'c',0,NULL,NULL);
   }
   say(12,1170,704);
   if (value[700]>0) {
   say(12,1171,704);
   } else {
   say(0,774,0);
   }
   move(240,-1172);
   }
   say(66,717,0);
return done;
}
#ifdef __STDC__
int p533(void)
#else
int p533()
#endif
{
int done=0;
   move(429,0,-516);
   move(392,0,-517);
   move(208,0,520,526,-208);
   if (!anyof(514,518,519,521,515,-1)) return 0;
   say(64,1251,0);
return done;
}
#ifdef __STDC__
int p534(void)
#else
int p534()
#endif
{
int done=0;
   if (KEY(570)) {
   if (KEY(658)) {
   say(64,1600,0);
   }
   if (KEY(40)) {
   say(76,1550,669);
   }}
return done;
}
#ifdef __STDC__
int p433(void)
#else
int p433()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(208,0,-517);
   move(213,0,520,-624);
   move(213,0,-624);
   move(230,0,514,523,-224);
return done;
}
#ifdef __STDC__
int p396(void)
#else
int p396()
#endif
{
int done=0;
   move(226,0,518,-226);
   move(227,0,-520);
   if (!keyword(530,-1)) return 0;
   move(224,-1);
   p546();
return done;
}
#ifdef __STDC__
int p7(void)
#else
int p7()
#endif
{
int done=0;
   move(230,0,521,-224);
   if (!anyof(516,622,228,-1)) return 0;
   set('V',698,'v',704,NULL,NULL);
   if (have(55,-1,-1)) {
   value[698] -= 1;
   }
   if (have(58,-1,-1)) {
   value[698] -= 1;
   }
   if (value[698]==0) {
   move(228,-2);
   }
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if ((have(value[674],-1,-1)) &&
   !(bitest(evar(674),12))) {
   say(64,920,0);
   }}
   move(228,-2);
return done;
}
#ifdef __STDC__
int p461(void)
#else
int p461()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(229,0,515,229,-525);
   if (KEY(228)) {
   if (have(55,-1,-1)) {
   apport(55,HERE);
   say(0,1585,0);
   }
   move(163,-2);
   }
   if (!anyof(520,622,227,-1)) return 0;
   set('V',698,'v',704,NULL,NULL);
   if (have(55,-1,-1)) {
   value[698] -= 1;
   }
   if (have(58,-1,-1)) {
   value[698] -= 1;
   }
   if (value[698]==0) {
   move(227,-2);
   }
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if ((have(value[674],-1,-1)) &&
   !(bitest(evar(674),12))) {
   say(64,920,0);
   }}
   move(227,-2);
return done;
}
