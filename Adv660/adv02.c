/* adv02.c: Adv660 - copyright Mike Arnautov, 25 Dec 2014.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p85(void)
#else
int p85()
#endif
{
int done=0;
   if (bitest(evar(669),16)) {
   value[699]=value[value[669]];*bitword(699)=0;
   if (value[699]>1) {
   if (KEY(64)) {
   set('E',64,'c',1,NULL,NULL);
   } else {
   say(76,1610,669);
   }}}
return done;
}
#ifdef __STDC__
int p252(void)
#else
int p252()
#endif
{
int done=0;
   if (value[696]==1) {
   if (((isnear(114,0,4)) ||
   isnear(111,0,4)) ||
   ishere(113,-1,-1)) {
   bitmod('s',evar(696),5);
   say(76,1019,113);
   }
   say(76,816,113);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p253(void)
#else
int p253()
#endif
{
int done=0;
   if (value[696]==1) {
   if (((isnear(114,0,3)) ||
   isnear(111,0,3)) ||
   bitest(evar(670),9)) {
   bitmod('s',evar(696),5);
   say(76,1019,668);
   }
   say(76,816,668);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p311(void)
#else
int p311()
#endif
{
int done=0;
   set('V',698,'c',1,NULL,NULL);
   if ((isnear(99,0,1)) ||
   bitest(evar(670),3)) {
   set('V',698,'c',0,NULL,NULL);
   } else {
   if (isnear(95,0,3)) {
   set('V',698,'c',0,NULL,NULL);
   }}
return done;
}
#ifdef __STDC__
int p656(void)
#else
int p656()
#endif
{
int done=0;
   apport(101,485);
   if ((location[7]==155)) {
   bitmod('s',155,8);
   }
return done;
}
#ifdef __STDC__
int p625(void)
#else
int p625()
#endif
{
int done=0;
   if (value[757]<135) {
   say(0,866,0);
   } else {
   say(2,698,0);
   }
   value[698] = irand(150);
   value[757] += value[699];
   value[757] += value[698];
   if (value[757]>1500) {
   set('V',757,'c',1500,NULL,NULL);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p353(void)
#else
int p353()
#endif
{
int done=0;
   value[713] += 1;
   if (((location[110]==484)) &&
   !(value[HERE]==412)) {
   apport(110,412);
   bitmod('c',110,4);
   }
return done;
}
#ifdef __STDC__
int p87(void)
#else
int p87()
#endif
{
int done=0;
   set('V',685,'c',0,NULL,NULL);
   if (value[713]<1) {
   return 0;
   }
   set('V',701,'v',758,NULL,NULL);
   value[701] *= 100;
   value[701] /= value[713];
   value[701] *= value[134];
   if (irand(100)<value[701]) {
   value[700] = irand(value[758]);
   value[700] += 1;
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if ((bitest(evar(674),3)) &&
   (location[value[674]]==435)) {
   value[700] -= 1;
   if (value[700]==0) {
   set('V',685,'v',674,NULL,NULL);
   return 0;
   }}}}
return done;
}
#ifdef __STDC__
int p322(void)
#else
int p322()
#endif
{
int done=0;
   *bitword(702)= -1; value[702]=FOBJ-1; while (++value[702]<=LOBJ) {
   if (value[685]==0) {
   p87();
   }
   if (!(value[685]==0)) {
   apport(value[685],value[670]);
   value[758] -= 1;
   p311();
   if (value[698]==0) {
   say(2,685,0);
   }
   set('V',685,'c',0,NULL,NULL);
   }
   value[134] -= 1;
   value[713] -= 1;
   if (value[134]==0) {
   apport(134,484);
   return 0;
   }
   value[703] -= 1;
   if (value[703]==0) {
   return 0;
   }}
return done;
}
#ifdef __STDC__
int p652(void)
#else
int p652()
#endif
{
int done=0;
   value[698] = irand(5);
   if (value[698]==0) {
   value[675]=168;*bitword(675)=-1;
   } else {
   if (value[698]==1) {
   value[675]=192;*bitword(675)=-1;
   } else {
   if (value[698]==2) {
   value[675]=151;*bitword(675)=-1;
   } else {
   if (value[698]==3) {
   value[675]=212;*bitword(675)=-1;
   } else {
   value[675]=319;*bitword(675)=-1;
   }}}}
   say(0,1233,0);
   set('V',700,'c',0,NULL,NULL);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (((ishere(value[674],-1,-1)) &&
   !(value[674]==78)) &&
   bitest(evar(674),3)) {
   say(0,1235,0);
   apport(value[674],value[675]);
   set('V',700,'c',1,NULL,NULL);
   }}
   if (value[700]==0) {
   say(0,1234,0);
   }
   move(value[675],-2);
return done;
}
#ifdef __STDC__
int p502(void)
#else
int p502()
#endif
{
int done=0;
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (ishere(value[674],1,3)) {
   apport(value[674],value[675]);
   }}
return done;
}
#ifdef __STDC__
int p417(void)
#else
int p417()
#endif
{
int done=0;
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (have(value[674],1,15)) {
   say(64,1269,0);
   }}
return done;
}
#ifdef __STDC__
int p583(void)
#else
int p583()
#endif
{
int done=0;
   if (bitest(evar(669),15)) {
   apport(value[669],HERE);
   say(12,1493,668);
   say(76,1494,669);
   }
   value[676]=1231;*bitword(676)=-1;
   if ((irand(100)<10) &&
   (location[78]==393)) {
   value[676]=1232;*bitword(676)=-1;
   apport(78,419);
   apport(79,485);
   }
   say(12,1548,669);
   if (bitest(evar(669),11)) {
   say(11,676,1);
   } else {
   say(11,676,0);
   }
   apport(value[669],419);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p616(void)
#else
int p616()
#endif
{
int done=0;
   if (value[731]==11) {
   set('V',698,'c',0,NULL,NULL);
   return 0;
   }
   set('V',698,'v',731,NULL,NULL);
   if (value[698]==value[732]) {
   if (irand(100)<10) {
   set('V',700,'c',11,NULL,NULL);
   value[700] -= value[698];
   value[699] = irand(value[700]);
   value[698] += value[699];
   } else {
   if (irand(100)<80) {
   value[698]=0;*bitword(698)=-1;
   return 0;
   }}
   } else {
   set('V',732,'v',698,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p436(void)
#else
int p436()
#endif
{
int done=0;
   say(0,1300,0);
   say(0,774,0);
   set('V',675,'v',670,NULL,NULL);
   value[700] = irand(3-1+1)+1;
   if (irand(100)<50) {
   value[675] += value[700];
   } else {
   value[698] -= value[700];
   }
   if (((bitest(evar(675),3)) ||
   bitest(evar(675),7)) ||
   bitest(evar(675),5)) {
   set('V',675,'v',681,NULL,NULL);
   }
   apport(85,value[675]);
   if (isnear(85,-1,-1)) {
   apport(85,205);
   }
return done;
}
#ifdef __STDC__
int p435(void)
#else
int p435()
#endif
{
int done=0;
   if (irand(100)<value[700]) {
   say(0,1524,0);
   return 0;
   }
   if (irand(100)<value[699]) {
   say(0,1302,0);
   return 0;
   }
   p311();
   if (value[698]==0) {
   say(0,1301,0);
   } else {
   if (isnear(87,-1,-1)) {
   say(0,1304,0);
   set('V',731,'c',4,NULL,NULL);
   apport(87,485);
   set('E',86,'c',1,NULL,NULL);
   if (value[115]==2) {
   set('E',115,'c',0,NULL,NULL);
   }
   } else {
   if (isnear(134,-1,-1)) {
   say(0,1304,0);
   set('V',703,'e',134,NULL,NULL);
   p322();
   } else {
   if (isnear(20,0,0)) {
   say(0,1471,0);
   apport(85,485);
   } else {
   say(0,1303,0);
   }}}
   value[681]=location[85];*bitword(681)=-1;
   apport(85,value[670]);
   }
return done;
}
#ifdef __STDC__
int p54(void)
#else
int p54()
#endif
{
int done=0;
   set('V',701,'v',669,NULL,NULL);
   if ((value[696]==1) ||
   (513<=value[668] && value[668]<=522)) {
   set('V',701,'v',668,NULL,NULL);
   }
   if (value[700]==0) {
   bitmod('s',evar(670),8);
   move(value[677],-1);
   } else {
   if (value[700]==value[701]) {
   move(value[677],-2);
   }
   move(value[678],-2);
   }
return done;
}
#ifdef __STDC__
int p81(void)
#else
int p81()
#endif
{
int done=0;
   if (value[769]==0) {
   if (bitest(evar(670),7)) {
   value[698]=1697;*bitword(698)=-1;
   set('V',699,'c',200,NULL,NULL);
   p625();
   }
   value[757] = irand(750-600+1)+600;
   apport(81,485);
   bitmod('s',evar(709),9);
   if (bitest(64,4)) {
   say(64,1364,0);
   }
   say(0,1274,0);
   p80(-1,1275,0,26,0,0);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   apport(82,value[670]);
   say(64,1279,0);
   }
   say(64,1276,0);
   }
return done;
}
#ifdef __STDC__
int p8(void)
#else
int p8()
#endif
{
int done=0;
   set('V',700,'c',1,NULL,NULL);
   p311();
   if (value[698]==1) {
   return 0;
   }
   set('V',700,'c',0,NULL,NULL);
   if ((((((((((((bitest(evar(696),7)) ||
   value[715]>0) ||
   bitest(evar(670),7)) ||
   bitest(evar(670),5)) ||
   bitest(evar(670),11)) ||
   bitest(19,13)) ||
   isnear(134,-1,-1)) ||
   isnear(20,-1,-1)) ||
   isnear(22,-1,-1)) ||
   isnear(7,-1,-1)) ||
   isnear(32,-1,-1)) ||
   value[712]>0) {
   set('V',700,'c',1,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p401(void)
#else
int p401()
#endif
{
int done=0;
   value[754] -= 1;
   if ((value[754]<1) &&
   irand(100)<25) {
   p8();
   if (value[700]==1) {
   return 0;
   }
   set('V',753,'c',-1,NULL,NULL);
   if (!((((bitest(evar(753),0)) ||
   irand(100)<75) ||
   (location[81]==485)) ||
   bitest(64,4))) {
   set('V',753,'c',0,NULL,NULL);
   bitmod('s',evar(753),0);
   }
   if (value[753]==-1) {
   if (!(((bitest(evar(753),1)) ||
   irand(100)<75) ||
   bitest(385,4))) {
   set('V',753,'c',1,NULL,NULL);
   bitmod('s',evar(753),1);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),9)) ||
   irand(100)<75) ||
   bitest(119,4)) ||
   !(bitest(116,4)))) {
   set('V',753,'c',9,NULL,NULL);
   bitmod('s',evar(753),9);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),2)) ||
   irand(100)<75) ||
   bitest(253,4)) ||
   !(bitest(250,4)))) {
   set('V',753,'c',2,NULL,NULL);
   bitmod('s',evar(753),2);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),3)) ||
   irand(100)<75) ||
   !(bitest(259,4))) ||
   bitest(27,13))) {
   set('V',753,'c',3,NULL,NULL);
   bitmod('s',evar(753),3);
   }}
   if (value[753]==-1) {
   if (!(((bitest(evar(753),4)) ||
   irand(100)<75) ||
   bitest(253,4))) {
   set('V',753,'c',4,NULL,NULL);
   bitmod('s',evar(753),4);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),6)) ||
   irand(100)<75) ||
   (location[95]==140)) ||
   !(bitest(95,4)))) {
   set('V',753,'c',6,NULL,NULL);
   bitmod('s',evar(753),6);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),7)) ||
   irand(100)<75) ||
   bitest(462,4)) ||
   !(bitest(271,4)))) {
   set('V',753,'c',7,NULL,NULL);
   bitmod('s',evar(753),7);
   }}
   if (value[753]==-1) {
   if (!(((bitest(evar(753),8)) ||
   irand(100)<75) ||
   !(bitest(324,4)))) {
   set('V',753,'c',8,NULL,NULL);
   bitmod('s',evar(753),8);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),11)) ||
   irand(100)<75) ||
   bitest(58,4)) ||
   bitest(228,8))) {
   set('V',753,'c',11,NULL,NULL);
   bitmod('s',evar(753),11);
   }}
   if (value[753]==-1) {
   if (!(((bitest(evar(753),10)) ||
   irand(100)<75) ||
   !(bitest(35,4)))) {
   set('V',753,'c',10,NULL,NULL);
   bitmod('s',evar(753),10);
   }}
   if (value[753]==-1) {
   if (!((((bitest(evar(753),12)) ||
   irand(100)<75) ||
   !(bitest(415,4))) ||
   bitest(420,4))) {
   set('V',753,'c',12,NULL,NULL);
   bitmod('s',evar(753),12);
   }}
   if (value[753]==-1) {
   if (!((bitest(evar(753),5)) ||
   irand(100)<85)) {
   set('V',753,'c',5,NULL,NULL);
   bitmod('s',evar(753),5);
   }}
   value[754] = irand(100-20+1)+20;
   if (value[753]>-1) {
   value[676]=1283;*bitword(676)=-1;
   value[676] += value[753];
   say(0,774,0);
   say(2,676,0);
   value[754] += 100;
   }}
return done;
}
#ifdef __STDC__
int p348(void)
#else
int p348()
#endif
{
int done=0;
   if (irand(100)<20) {
   move(434,-2);
   }
   move(432,-2);
return done;
}
#ifdef __STDC__
int p476(void)
#else
int p476()
#endif
{
int done=0;
   if (bitest(116,13)) {
   say(64,1336,0);
   }
   bitmod('s',116,13);
   say(64,1335,0);
return done;
}
#ifdef __STDC__
int p241(void)
#else
int p241()
#endif
{
int done=0;
   if (value[713]<1) {
   return 0;
   }
   set('V',699,'c',0,NULL,NULL);
   bitmod('s',95,15);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (bitest(evar(674),3)) {
   bitmod('c',evar(674),14);
   if (((bitest(evar(674),4)) &&
   !(bitest(evar(674),15))) &&
   !isnear(value[674],-1,-1)) {
   value[675]=location[value[674]];*bitword(675)=-1;
   if (!((bitest(evar(675),7)) ||
   bitest(evar(675),5))) {
   if (!(bitest(evar(675),10))) {
   value[699] += 1;
   bitmod('s',evar(674),14);
   }}}}}
   bitmod('c',95,15);
   if (value[699]>0) {
   value[700] = irand(value[699]);
   value[700] += 1;
   *bitword(673)= -1; value[673]=FOBJ-1; while (++value[673]<=LOBJ) {
   if (((value[700]>0) &&
   bitest(evar(673),3)) &&
   bitest(evar(673),14)) {
   value[700] -= 1;
   if (value[700]==0) {
   value[675]=location[value[673]];*bitword(675)=-1;
   set('V',674,'v',673,NULL,NULL);
   }}}
   set('V',698,'v',758,NULL,NULL);
   value[698] *= 100;
   value[698] /= value[713];
   value[698] *= value[134];
   if (irand(100)<value[698]) {
   if (!(bitest(evar(674),5))) {
   return 0;
   }
   value[700] = irand(value[758]);
   value[700] += 1;
   *bitword(673)= -1; value[673]=FOBJ-1; while (++value[673]<=LOBJ) {
   if ((value[700]>0) &&
   (location[value[673]]==435)) {
   value[700] -= 1;
   if (value[700]==0) {
   if ((bitest(evar(673),5)) ||
   value[673]==value[685]) {
   return 0;
   }
   value[758] -= 1;
   apport(value[673],value[675]);
   }}}}
   value[758] += 1;
   apport(value[674],435);
   }
return done;
}
#ifdef __STDC__
int p561(void)
#else
int p561()
#endif
{
int done=0;
   if (value[696]==1) {
   set('V',699,'v',668,NULL,NULL);
   } else {
   set('V',699,'v',669,NULL,NULL);
   }
   if ((513<=value[699] && value[699]<=522)) {
   value[699] += 4;
   value[700]=522;*bitword(700)=-1;
   if (!(value[699]<value[700])) {
   value[699] -= 8;
   }
   if (value[696]==1) {
   special(9,&value[699]);
   } else {
   special(10,&value[699]);
   }}
return done;
}
#ifdef __STDC__
int p83(void)
#else
int p83()
#endif
{
int done=0;
   set('V',672,'c',0,NULL,NULL);
   if (value[696]==1) {
   set('V',674,'v',668,NULL,NULL);
   } else {
   set('V',674,'v',669,NULL,NULL);
   }
   if (!(bitest(evar(674),0))) {
   return 0;
   }
   if (isnear(value[674],-1,-1)) {
   return 0;
   }
   if (KEY(102)) {
   if (((bitest(102,4)) &&
   isnear(104,-1,-1)) &&
   !isnear(102,-1,-1)) {
   return 0;
   }}
   if (!((bitest(evar(674),13)) ||
   bitest(evar(674),14))) {
   return 0;
   }
   if (KEY(27)) {
   return 0;
   }
   if (bitest(evar(674),13)) {
   if (!((value[HERE]==378))) {
   return 0;
   }
   } else {
   if (!((value[HERE]==379))) {
   return 0;
   }}
   if (KEY(533)) {
   if (KEY(134)) {
   say(64,913,0);
   }
   if (bitest(evar(674),4)) {
   say(76,1382,669);
   }
   if (value[704]<value[719]) {
   bitmod('s',evar(674),4);
   } else {
   flush_command();
   say(64,895,0);
   }}
   value[672]=location[value[674]];*bitword(672)=-1;
   apport(value[674],value[670]);
return done;
}
#ifdef __STDC__
int p548(void)
#else
int p548()
#endif
{
int done=0;
   if (!(value[672]==0)) {
   if (value[696]==1) {
   set('V',674,'v',668,NULL,NULL);
   } else {
   set('V',674,'v',669,NULL,NULL);
   }
   if (!(bitest(evar(674),0))) {
   return 0;
   }
   if (!(have(value[674],-1,-1))) {
   apport(value[674],value[672]);
   }}
return done;
}
#ifdef __STDC__
int p119(void)
#else
int p119()
#endif
{
int done=0;
   if (((((value[HERE]==147)) ||
   (value[HERE]==419)) ||
   (value[HERE]==370)) ||
   (value[HERE]==380)) {
   say(64,1381,0);
   }
   say(76,827,147);
return done;
}
#ifdef __STDC__
int p487(void)
#else
int p487()
#endif
{
int done=0;
   if (KEY(533)) {
   if (ishere(102,-1,-1)) {
   return 0;
   }
   if (have(104,-1,-1)) {
   say(76,811,669);
   }
   if (!(isnear(104,-1,-1))) {
   if ((value[HERE]==379)) {
   if (bitest(104,4)) {
   say(76,1382,669);
   }
   } else {
   return 0;
   }}
   if (value[704]<value[719]) {
   apport(104,INHAND);
   bitmod('s',104,4);
   set('V',672,'c',0,NULL,NULL);
   say(12,1493,668);
   say(76,1494,669);
   }
   flush_command();
   say(64,895,0);
   }
   if ((KEY(534)) ||
   KEY(556)) {
   if (have(102,-1,-1)) {
   return 0;
   }
   if (have(104,-1,-1)) {
   apport(104,HERE);
   say(12,1493,668);
   say(76,1494,669);
   }
   say(76,1023,669);
   }
   if (KEY(546)) {
   if ((have(102,-1,-1)) ||
   have(104,-1,-1)) {
   say(64,826,0);
   }
   say(76,1023,669);
   }
   if (KEY(570)) {
   if (((isnear(102,-1,-1)) &&
   !have(104,-1,-1)) ||
   have(102,-1,-1)) {
   say(76,1545,669);
   } else {
   bitmod('s',evar(696),4);
   say(0,104,0);
   bitmod('c',evar(696),4);
   longjmp(loop_back,1);
   }
   } else {
   say(64,1400,0);
   }
return done;
}
#ifdef __STDC__
int p437(void)
#else
int p437()
#endif
{
int done=0;
   if (value[769]==0) {
   if (!(value[715]==3)) {
   say(64,1074,0);
   }
   if (!(have(107,-1,-1))) {
   say(64,1075,0);
   }
   if (bitest(107,15)) {
   say(64,1401,0);
   }
   say(9,1391,20);
   p80(-1,1392,0,29,0,0);
   }
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   bitmod('s',107,15);
   value[706] += 20;
   say(64,1393,0);
   }
   say(64,1402,0);
return done;
}
#ifdef __STDC__
int p239(void)
#else
int p239()
#endif
{
int done=0;
   if ((value[716]==0) ||
   value[715]>2) {
   set('V',707,'c',10,NULL,NULL);
   } else {
   set('V',707,'c',0,NULL,NULL);
   }
   set('V',708,'c',10,NULL,NULL);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (bitest(evar(674),5)) {
   if (((location[value[674]]==141)) ||
   (location[value[674]]==243)) {
   value[707] += 15;
   } else {
   if (bitest(evar(674),4)) {
   value[707] += 7;
   }}
   value[708] += 15;
   }}
   if ((location[95]==141)) {
   value[707] -= 8;
   } else {
   if ((location[95]==140)) {
   value[707] += 8;
   }}
   if (!(bitest(80,5))) {
   value[708] += 15;
   }
   if (bitest(97,4)) {
   value[707] += 1;
   if ((location[97]==141)) {
   value[707] += 1;
   }}
   if (!(location[108]==236)) {
   value[707] += 1;
   }
   value[708] += 1;
   if ((bitest(147,4)) ||
   bitest(163,4)) {
   value[707] += 20;
   if (bitest(324,4)) {
   value[707] += 10;
   }
   if (bitest(377,4)) {
   value[707] += 10;
   }
   if (bitest(253,4)) {
   value[707] += 10;
   }
   if (bitest(290,4)) {
   value[707] += 15;
   }
   if (bitest(27,13)) {
   value[707] += 8;
   }}
   value[708] += 73;
   set('V',698,'v',715,NULL,NULL);
   value[698] *= 16;
   value[707] += value[698];
   value[708] += 96;
   set('V',701,'v',705,NULL,NULL);
   value[701] *= 10;
   value[707] -= value[701];
   value[707] -= value[706];
   if (value[707]<0) {
   set('V',707,'c',0,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p192(void)
#else
int p192()
#endif
{
int done=0;
   p239();
   say(13,1029,707);
   say(13,1031,708);
   say(13,1032,710);
   say(0,774,0);
   set('V',699,'v',707,NULL,NULL);
   if (value[707]<30) {
   say(0,1037,0);
   value[699] -= 30;
   } else {
   if (value[707]<100) {
   say(0,1038,0);
   value[699] -= 100;
   } else {
   if (value[707]<200) {
   say(0,1039,0);
   value[699] -= 200;
   } else {
   if (value[707]<300) {
   say(0,1040,0);
   value[699] -= 300;
   } else {
   if (value[707]<400) {
   say(0,1041,0);
   value[699] -= 400;
   } else {
   if (value[707]<500) {
   say(0,1042,0);
   value[699] -= 500;
   } else {
   if (value[707]<600) {
   say(0,1043,0);
   value[699] -= 600;
   } else {
   if (value[707]<650) {
   say(0,1044,0);
   value[699] -= 650;
   } else {
   if (value[707]<660) {
   say(0,1045,0);
   value[699] -= 660;
   } else {
   say(0,1046,0);
   set('V',699,'c',0,NULL,NULL);
   }}}}}}}}}
   say(0,774,0);
   value[699] *= -1;
   if (value[699]>0) {
   if (value[699]==1) {
   say(0,1047,0);
   } else {
   say(13,1048,699);
   }}
   say(0,774,0);
   finita();
return done;
}
#ifdef __STDC__
int p445(void)
#else
int p445()
#endif
{
int done=0;
   if (value[14]<8) {
   value[14] = irand(8);
   }
   value[15] = irand(8);
   if (isnear(99,0,1)) {
   apport(15,484);
   } else {
   apport(15,256);
   if (((value[HERE]==256)) &&
   !(bitest(evar(696),0))) {
   say(0,15,0);
   }}
return done;
}
#ifdef __STDC__
int p95(void)
#else
int p95()
#endif
{
int done=0;
   if (value[769]==0) {
   set('V',716,'c',0,NULL,NULL);
   flush_command();
   say(0,774,0);
   bitmod('c',evar(709),2);
   bitmod('c',evar(709),0);
   bitmod('c',95,13);
   if (value[95]==2) {
   set('E',95,'c',3,NULL,NULL);
   }
   if (((value[HERE]==432)) ||
   (value[HERE]==256)) {
   move(485,-1);
   }
   set('E',17,'c',0,NULL,NULL);
   apport(17,484);
   if (!((location[121]==485))) {
   apport(121,484);
   }
   if (value[25]==1) {
   set('E',25,'c',0,NULL,NULL);
   } else {
   if (value[25]==3) {
   set('E',25,'c',2,NULL,NULL);
   }}
   apport(14,255);
   set('E',14,'c',8,NULL,NULL);
   if (value[43]>1) {
   set('E',43,'c',1,NULL,NULL);
   }
   if (value[35]==1) {
   set('E',35,'c',0,NULL,NULL);
   set('V',682,'c',0,NULL,NULL);
   bitmod('c',35,13);
   }
   value[705] += 1;
   if (value[715]>1) {
   if (value[715]==2) {
   say(0,933,0);
   } else {
   value[705] -= 1;
   }
   p192();
   }
   value[676]=883;*bitword(676)=-1;
   value[676] += value[705];
   value[676] += value[705];
   p80(*bitword(676),value[676],0,13,0,0);
   }
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   value[676] += 1;
   say(2,676,0);
   say(0,774,0);
   value[699]=892;*bitword(699)=-1;
   if (value[676]<value[699]) {
   if (have(53,-1,-1)) {
   apport(53,485);
   apport(54,INHAND);
   }
   if (have(111,-1,-1)) {
   set('E',111,'c',2,NULL,NULL);
   }
   if ((have(114,-1,-1)) &&
   value[114]!=1) {
   set('E',114,'c',2,NULL,NULL);
   }
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (have(value[674],-1,-1)) {
   apport(value[674],HERE);
   }}
   set('V',704,'c',0,NULL,NULL);
   set('E',99,'c',0,NULL,NULL);
   apport(14,255);
   set('E',14,'c',8,NULL,NULL);
   p445();
   move(141,-1);
   set('V',671,'c',0,NULL,NULL);
   apport(99,136);
   if (value[697]==0) {
   if (!(bitest(324,4))) {
   value[675]=location[39];*bitword(675)=-1;
   if ((value[39]==3) ||
   !(bitest(evar(675),7))) {
   apport(99,485);
   }}}
   apport(134,484);
   set('E',134,'c',0,NULL,NULL);
   bitmod('c',19,13);
   longjmp(loop_back,1);
   }}
   p192();
return done;
}
#ifdef __STDC__
int p530(void)
#else
int p530()
#endif
{
int done=0;
   p311();
   if (value[698]==1) {
   say(0,1598,0);
   p95();
   }
return done;
}
#ifdef __STDC__
int p248(void)
#else
int p248()
#endif
{
int done=0;
   if (isnear(121,-1,-1)) {
   if (value[121]==6) {
   p95();
   }
   value[121] += 1;
   }
return done;
}
#ifdef __STDC__
int p255(void)
#else
int p255()
#endif
{
int done=0;
   if (value[769]==0) {
   set('V',703,'c',0,NULL,NULL);
   set('V',700,'c',0,NULL,NULL);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==0) {
   return 0;
   }
   value[703] -= 20;
   set('V',700,'v',703,NULL,NULL);
   value[700] -= 1;
   }
   set('V',699,'c',1,NULL,NULL);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (ishere(value[674],-1,-1)) {
   bitmod('s',evar(674),4);
   if ((value[699]==1) &&
   !(bitest(evar(674),10))) {
   set('V',699,'c',0,NULL,NULL);
   say(0,774,0);
   }
   if (value[700]==20) {
   value[673]=134;*bitword(673)=-1;
   if (value[674]<value[673]) {
   p80(-1,1593,0,30,0,0);
   }
   } else {
   value[700] += 1;
   if (value[700]>=0) {
   bitmod('s',evar(674),4);
   say(2,674,0);
   }}}}
   set('V',769,'c',0,NULL,NULL);
return done;
}
#ifdef __STDC__
int p122(void)
#else
int p122()
#endif
{
int done=0;
   say(2,670,0);
   if ((437<=value[670] && value[670]<=460)) {
   say(0,859,0);
   }
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
   p255();
   if (have(38,-1,-1)) {
   say(0,937,0);
   }
   p248();
return done;
}
#ifdef __STDC__
int p233(void)
#else
int p233()
#endif
{
int done=0;
   if (!isnear(101,-1,-1)) return 0;
   if (have(101,-1,-1)) {
   say(76,811,101);
   }
   if (value[101]==1) {
   apport(100,INHAND);
   bitmod('s',100,4);
   apport(101,INHAND);
   say(12,1493,668);
   say(64,1518,0);
   }
   if (have(100,-1,-1)) {
   if (have(102,-1,-1)) {
   say(64,813,0);
   }
   bitmod('c',149,8);
   apport(101,INHAND);
   set('E',101,'c',1,NULL,NULL);
   say(64,1499,0);
   }
   say(64,814,0);
return done;
}
#ifdef __STDC__
int p234(void)
#else
int p234()
#endif
{
int done=0;
   if (!isnear(100,-1,-1)) return 0;
   if (have(100,-1,-1)) {
   say(76,811,100);
   }
   apport(100,INHAND);
   say(12,1493,668);
   if (value[101]==1) {
   apport(101,INHAND);
   bitmod('s',101,4);
   say(64,1518,0);
   }
   say(76,1494,669);
return done;
}
#ifdef __STDC__
int p235(void)
#else
int p235()
#endif
{
int done=0;
   if (ishere(134,-1,-1)) {
   say(64,919,0);
   }
return done;
}
#ifdef __STDC__
int p237(void)
#else
int p237()
#endif
{
int done=0;
   if (ishere(78,-1,-1)) {
   if (value[704]<value[719]) {
   apport(78,INHAND);
   apport(79,485);
   say(12,1493,668);
   say(76,1494,669);
   }
   flush_command();
   say(64,895,0);
   }
return done;
}
#ifdef __STDC__
int p240(void)
#else
int p240()
#endif
{
int done=0;
   if (((isnear(95,-1,-1)) &&
   value[704]<value[719]) &&
   !have(95,-1,-1)) {
   if (value[95]==0) {
   set('E',95,'c',1,NULL,NULL);
   apport(95,INHAND);
   say(64,1356,0);
   }
   if ((location[95]==value[670])) {
   if (bitest(95,13)) {
   say(64,1358,0);
   }
   bitmod('s',95,13);
   say(64,1357,0);
   }}
return done;
}
#ifdef __STDC__
int p140(void)
#else
int p140()
#endif
{
int done=0;
   if (have(95,-1,-1)) {
   apport(95,HERE);
   bitmod('c',95,13);
   p311();
   if ((value[95]>1) ||
   (value[HERE]==324)) {
   if ((value[HERE]==324)) {
   say(0,1458,0);
   } else {
   say(0,1459,0);
   }
   set('E',95,'c',3,NULL,NULL);
   if (isnear(85,-1,-1)) {
   p436();
   }
   if (value[698]==1) {
   say(0,774,0);
   p122();
   }
   } else {
   if (value[698]==0) {
   say(0,1359,0);
   } else {
   say(0,1360,0);
   }}
   if ((value[HERE]==393)) {
   p652();
   }
   if ((value[HERE]==204)) {
   apport(95,203);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p138(void)
#else
int p138()
#endif
{
int done=0;
   if (!have(97,-1,-1)) return 0;
   if (!isnear(34,-1,-1)) return 0;
   apport(97,HERE);
   say(64,1389,0);
return done;
}
#ifdef __STDC__
int p135(void)
#else
int p135()
#endif
{
int done=0;
   if (!have(101,-1,-1)) return 0;
   apport(101,HERE);
   set('E',101,'c',0,NULL,NULL);
   if (isnear(7,-1,-1)) {
   apport(7,485);
   bitmod('c',155,8);
   say(64,817,0);
   }
   if (isnear(20,-1,-1)) {
   if (value[20]==0) {
   p656();
   say(64,955,0);
   }
   say(76,1496,669);
   }
   if (isnear(22,-1,-1)) {
   say(64,956,0);
   }
   if (isnear(24,-1,-1)) {
   p656();
   say(64,957,0);
   }
   if (isnear(38,-1,-1)) {
   if (value[38]==0) {
   p656();
   say(64,958,0);
   }
   say(64,959,0);
   }
   if ((isnear(25,-1,-1)) &&
   value[25]<2) {
   say(0,960,0);
   p656();
   p95();
   }
   if (isnear(134,-1,-1)) {
   p656();
   say(13,961,134);
   longjmp(loop_back,1);
   }
   if (isnear(87,-1,-1)) {
   p656();
   say(64,962,0);
   }
   if ((value[HERE]==379)) {
   if (!((location[104]==485))) {
   say(0,1388,0);
   say(0,1376,0);
   p95();
   }}
   say(12,1496,669);
   if ((value[HERE]==393)) {
   p652();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p137(void)
#else
int p137()
#endif
{
int done=0;
   if (!have(100,-1,-1)) return 0;
   apport(100,HERE);
   say(12,1493,668);
   if (have(101,-1,-1)) {
   apport(101,HERE);
   say(0,1518,0);
   if ((value[HERE]==204)) {
   say(0,774,0);
   say(0,1547,0);
   apport(101,203);
   }
   } else {
   say(12,1494,669);
   }
   if ((value[HERE]==204)) {
   apport(100,203);
   }
   if ((value[HERE]==393)) {
   p652();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p141(void)
#else
int p141()
#endif
{
int done=0;
   if (!have(53,-1,-1)) return 0;
   apport(53,HERE);
   if ((value[HERE]==225)) {
   say(12,1493,668);
   say(12,1494,669);
   } else {
   if ((value[HERE]==204)) {
   say(0,1219,0);
   apport(53,485);
   apport(54,203);
   } else {
   if ((have(105,-1,-1)) ||
   !isnear(105,-1,-1)) {
   set('E',53,'c',2,NULL,NULL);
   say(0,53,0);
   apport(53,485);
   apport(54,value[670]);
   } else {
   set('E',53,'c',1,NULL,NULL);
   say(0,53,0);
   set('E',53,'c',0,NULL,NULL);
   }}}
   if ((value[HERE]==393)) {
   p652();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p139(void)
#else
int p139()
#endif
{
int done=0;
   if (value[669]==value[112]) {
   set('V',699,'c',3,NULL,NULL);
   } else {
   set('V',699,'c',4,NULL,NULL);
   }
   if (have(111,0,value[699])) {
   set('E',111,'c',2,NULL,NULL);
   if ((isnear(134,-1,-1)) &&
   KEY(556)) {
   bitmod('s',134,14);
   if (value[134]==1) {
   say(76,1071,669);
   }
   say(76,1072,669);
   }
   say(76,873,669);
   }
   if (have(114,0,value[699])) {
   set('E',114,'c',2,NULL,NULL);
   say(64,1371,0);
   }
return done;
}
#ifdef __STDC__
int p136(void)
#else
int p136()
#endif
{
int done=0;
   if (!have(111,-1,-1)) return 0;
   set('V',698,'e',111,NULL,NULL);
   apport(111,HERE);
   set('E',111,'c',2,NULL,NULL);
   if ((value[HERE]==393)) {
   say(12,1548,669);
   say(9,1605,0);
   apport(111,419);
   p652();
   }
   if ((value[HERE]==415)) {
   apport(111,419);
   say(12,1548,669);
   say(72,1266,0);
   }
   if ((((value[HERE]==204)) ||
   (value[HERE]==418)) ||
   (value[HERE]==417)) {
   say(12,1548,669);
   if ((value[HERE]==204)) {
   apport(111,203);
   bitmod('s',203,15);
   say(72,1080,0);
   }
   apport(111,419);
   say(72,1298,0);
   }
   say(12,1493,668);
   say(12,1495,669);
   if (value[698]==3) {
   bitmod('s',evar(670),15);
   say(76,1497,112);
   }
   if (value[698]==4) {
   bitmod('s',evar(670),15);
   say(76,1497,113);
   }
   say(64,774,0);
return done;
}
#ifdef __STDC__
int p236(void)
#else
int p236()
#endif
{
int done=0;
   if (ishere(113,-1,-1)) {
   if (!((have(111,-1,-1)) ||
   have(114,-1,-1))) {
   say(76,907,113);
   }
   if (have(111,0,2)) {
   set('E',111,'c',4,NULL,NULL);
   say(76,910,113);
   }
   if (have(114,0,2)) {
   set('E',114,'c',4,NULL,NULL);
   say(76,911,113);
   }
   if ((have(111,-1,-1)) &&
   have(114,-1,-1)) {
   say(64,1372,0);
   }
   if (have(111,-1,-1)) {
   say(64,908,0);
   }
   say(64,1373,0);
   }
return done;
}
#ifdef __STDC__
int p243(void)
#else
int p243()
#endif
{
int done=0;
   if (!(bitest(evar(670),9))) {
   return 0;
   }
   if (have(81,-1,-1)) {
   if ((value[HERE]==412)) {
   if (!((have(111,-1,-1)) ||
   have(114,-1,-1))) {
   say(64,1271,0);
   }
   } else {
   bitmod('s',81,13);
   bitmod('s',81,14);
   say(64,1272,0);
   }}
   if (!((have(111,-1,-1)) ||
   have(114,-1,-1))) {
   say(76,907,112);
   }
   if (have(111,0,2)) {
   set('E',111,'c',3,NULL,NULL);
   say(76,910,112);
   }
   if (have(114,0,2)) {
   set('E',114,'c',3,NULL,NULL);
   say(76,911,112);
   }
   if ((have(114,-1,-1)) &&
   have(111,-1,-1)) {
   say(64,1372,0);
   }
   if (have(111,-1,-1)) {
   say(64,908,0);
   }
   say(64,1373,0);
return done;
}
#ifdef __STDC__
int p319(void)
#else
int p319()
#endif
{
int done=0;
   if (value[20]>0) {
   say(64,974,0);
   }
   if (value[769]==0) {
   special(23, &value[0]);
   p80(-1,834,0,8,0,1);
   } else {
   set('V',769,'c',0,NULL,NULL);
   special(24, &value[0]);
   }
   if (value[770]==1) {
   set('E',20,'c',1,NULL,NULL);
   apport(60,247);
   apport(117,247);
   bitmod('c',20,6);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (ishere(value[674],-1,-1)) {
   apport(value[674],247);
   }}
   move(247,-1450);
   }
   say(12,1225,668);
   say(76,1226,669);
return done;
}
#ifdef __STDC__
int p318(void)
#else
int p318()
#endif
{
int done=0;
   if (value[715]<3) {
   p656();
   say(64,829,0);
   }
   say(64,1403,0);
return done;
}
#ifdef __STDC__
int p320(void)
#else
int p320()
#endif
{
int done=0;
   if (value[769]==0) {
   p80(-1,834,0,9,0,1);
   } else {
   special(24, &value[0]);
   set('V',769,'c',0,NULL,NULL);
   }
   if (value[770]==1) {
   set('V',698,'v',719,NULL,NULL);
   value[698] -= value[704];
   value[698] += 2;
   value[698] *= 10;
   if (irand(100)<value[698]) {
   set('V',703,'c',1,NULL,NULL);
   say(0,831,0);
   p322();
   longjmp(loop_back,1);
   }
   if (irand(100)<value[698]) {
   say(64,832,0);
   }
   say(0,833,0);
   p95();
   }
   say(12,1225,668);
   say(76,1226,669);
return done;
}
#ifdef __STDC__
int p321(void)
#else
int p321()
#endif
{
int done=0;
   if (value[769]==0) {
   p80(-1,834,0,10,0,1);
   } else {
   special(24, &value[0]);
   set('V',769,'c',0,NULL,NULL);
   }
   if (value[770]==1) {
   if (irand(100)<50) {
   say(64,1121,0);
   }
   say(0,1122,0);
   p95();
   }
   say(12,1225,668);
   say(76,1226,669);
return done;
}
#ifdef __STDC__
int p232(void)
#else
int p232()
#endif
{
int done=0;
   if (!isnear(38,-1,-1)) return 0;
   if (have(38,-1,-1)) {
   say(64,1699,0);
   }
   if (((value[HERE]==299)) &&
   value[38]<2) {
   say(64,976,0);
   }
   apport(38,INHAND);
   say(64,1698,0);
return done;
}
#ifdef __STDC__
int p242(void)
#else
int p242()
#endif
{
int done=0;
   if (!isnear(116,-1,-1)) return 0;
   if ((value[116]==0) &&
   value[704]<value[719]) {
   if (value[119]==2) {
   set('V',731,'c',5,NULL,NULL);
   value[116] += 1;
   apport(116,INHAND);
   bitmod('c',434,8);
   say(64,1092,0);
   }
   say(64,1093,0);
   }
return done;
}
#ifdef __STDC__
int p238(void)
#else
int p238()
#endif
{
int done=0;
   if (!isnear(56,-1,-1)) return 0;
   if ((value[56]==0) &&
   value[704]<value[719]) {
   apport(56,INHAND);
   set('E',56,'c',1,NULL,NULL);
   value[698] = irand(4);
   if (value[698]==0) {
   value[682]=511;*bitword(682)=-1;
   } else {
   if (value[698]==1) {
   value[682]=506;*bitword(682)=-1;
   } else {
   if (value[698]==2) {
   value[682]=505;*bitword(682)=-1;
   } else {
   value[682]=499;*bitword(682)=-1;
   }}}
   apport(37,485);
   if (value[35]==0) {
   say(76,1135,682);
   }
   say(64,1136,0);
   }
return done;
}
#ifdef __STDC__
int p546(void)
#else
int p546()
#endif
{
int done=0;
   value[676]=1014;*bitword(676)=-1;
   value[676] += value[705];
   say(2,676,0);
   p95();
return done;
}
#ifdef __STDC__
int p128(void)
#else
int p128()
#endif
{
int done=0;
   bitmod('s',evar(709),1);
   p8();
   if (value[700]==1) {
   return 0;
   }
   bitmod('s',evar(696),7);
   say(0,774,0);
   value[676] = irand(1202-1193+1)+1193;
   say(2,676,0);
return done;
}
#ifdef __STDC__
int p92(void)
#else
int p92()
#endif
{
int done=0;
   say(0,934,0);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   bitmod('c',evar(674),4);
   if (!((value[674]==27))) {
   bitmod('c',evar(674),13);
   bitmod('c',evar(674),14);
   }
   if (bitest(evar(674),3)) {
   if (have(value[674],-1,-1)) {
   apport(value[674],HERE);
   }}}
   apport(10,379);
   bitmod('s',111,13);
   set('E',111,'c',2,NULL,NULL);
   bitmod('s',11,13);
   bitmod('s',107,13);
   set('E',107,'c',0,NULL,NULL);
   bitmod('s',107,7);
   bitmod('c',107,15);
   bitmod('s',102,13);
   bitmod('s',99,13);
   set('E',99,'c',0,NULL,NULL);
   set('V',697,'c',0,NULL,NULL);
   bitmod('s',134,13);
   set('E',134,'c',0,NULL,NULL);
   bitmod('s',104,14);
   bitmod('s',7,14);
   bitmod('s',100,14);
   set('E',100,'c',1,NULL,NULL);
   bitmod('s',101,14);
   set('E',101,'c',1,NULL,NULL);
   bitmod('s',105,14);
   set('E',120,'c',2,NULL,NULL);
   *bitword(675)= -1; value[675]=FLOC-1; while (++value[675]<=LLOC) {
   if (bitest(evar(675),7)) {
   bitmod('c',evar(675),4);
   }}
   bitmod('s',461,4);
   bitmod('s',243,4);
   set('V',715,'c',3,NULL,NULL);
   set('E',143,'c',1,NULL,NULL);
   set('V',714,'c',999,NULL,NULL);
   set('V',671,'c',0,NULL,NULL);
   move(378,-2);
return done;
}
#ifdef __STDC__
int p264(void)
#else
int p264()
#endif
{
int done=0;
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (bitest(evar(674),5)) {
   if (!(((location[value[674]]==141)) ||
   (location[value[674]]==485))) {
   return 0;
   }}}
   if (!((((location[95]==141)) ||
   (location[95]==140)) ||
   (location[95]==485))) {
   return 0;
   }
   if (!(((have(64,-1,-1)) ||
   (location[64]==141)) ||
   (location[64]==485))) {
   return 0;
   }
   if (((location[80]==141)) ||
   (location[80]==485)) {
   set('V',715,'c',1,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p167(void)
#else
int p167()
#endif
{
int done=0;
   bitmod('s',evar(696),7);
   if (value[43]>1) {
   return 0;
   }
   if (value[715]==0) {
   bitmod('c',95,5);
   bitmod('c',64,5);
   p264();
   bitmod('s',64,5);
   bitmod('s',95,5);
   if (value[715]==1) {
   set('V',714,'c',35,NULL,NULL);
   } else {
   value[714] = irand(39-30+1)+30;
   }
   if (value[66]>0) {
   value[66] = irand(16 - 1) + 1;
   }
   if (value[116]>0) {
   value[116] = irand(14 - 1) + 1;
   }
   if (value[20]==1) {
   value[721] -= value[722];
   if (value[721]<0) {
   set('E',20,'c',2,NULL,NULL);
   }}
   if (!(((location[82]==484)) ||
   isnear(82,-1,-1))) {
   apport(82,485);
   }
   if (((bitest(27,13)) &&
   !(bitest(27,14))) &&
   !isnear(134,-1,-1)) {
   bitmod('s',27,14);
   say(0,1173,0);
   set('V',714,'c',5,NULL,NULL);
   set('V',722,'v',714,NULL,NULL);
   return 0;
   }
   if (value[119]==2) {
   value[720] -= value[722];
   if (value[720]<0) {
   set('E',119,'c',3,NULL,NULL);
   set('V',720,'c',40,NULL,NULL);
   say(0,119,0);
   set('E',119,'c',0,NULL,NULL);
   set('V',719,'c',7,NULL,NULL);
   set('V',714,'c',8,NULL,NULL);
   set('V',722,'v',714,NULL,NULL);
   return 0;
   }}
   if ((bitest(151,4)) ||
   bitest(163,4)) {
   if ((bitest(evar(670),7)) ||
   bitest(evar(670),5)) {
   value[714] = irand(17-8+1)+8;
   } else {
   p311();
   if (((((((((value[698]==0) &&
   value[711]>150) &&
   !(bitest(19,4))) ||
   bitest(19,13)) ||
   irand(100)<10) &&
   !(bitest(49,4))) &&
   !isnear(134,-1,-1)) &&
   !(bitest(evar(670),3))) &&
   !(bitest(43,12))) {
   bitmod('c',19,13);
   set('V',699,'c',0,NULL,NULL);
   if (value[64]==2) {
   bitmod('c',64,5);
   }
   if (bitest(62,12)) {
   bitmod('c',62,5);
   }
   if (bitest(67,12)) {
   bitmod('c',67,5);
   }
   value[675]=location[95];*bitword(675)=-1;
   if (value[675]==value[670]) {
   bitmod('c',95,5);
   }
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (isnear(value[674],1,5)) {
   apport(value[674],192);
   set('V',699,'c',1,NULL,NULL);
   }}
   bitmod('s',64,5);
   bitmod('s',95,5);
   bitmod('s',62,5);
   bitmod('s',67,5);
   if (value[699]==0) {
   if ((bitest(19,4)) ||
   value[711]<150) {
   say(0,928,0);
   bitmod('s',19,13);
   value[714] = irand(13-4+1)+4;
   } else {
   apport(49,192);
   apport(29,311);
   bitmod('s',19,4);
   say(0,995,0);
   }
   } else {
   if (bitest(19,4)) {
   say(0,930,0);
   } else {
   say(0,929,0);
   bitmod('s',19,4);
   apport(49,192);
   apport(29,311);
   }}
   } else {
   set('V',698,'v',713,NULL,NULL);
   value[698] += 2;
   value[698] *= 10;
   if (((isnear(134,-1,-1)) ||
   irand(100)<value[698]) &&
   value[134]<value[713]) {
   if (bitest(115,4)) {
   apport(134,value[670]);
   value[134] += 1;
   if (value[134]==1) {
   p311();
   if (value[698]==0) {
   say(0,134,0);
   }
   bitmod('s',134,13);
   bitmod('c',134,14);
   }
   if (value[685]==0) {
   p87();
   }
   } else {
   if (!(bitest(evar(670),11))) {
   p311();
   if (value[698]==0) {
   apport(115,value[670]);
   bitmod('s',115,4);
   say(0,781,0);
   }}}}}}}
   } else {
   if (value[715]==1) {
   set('V',715,'c',2,NULL,NULL);
   set('E',4,'c',0,NULL,NULL);
   say(0,931,0);
   if (isnear(134,-1,-1)) {
   say(13,1035,134);
   }
   apport(134,484);
   set('E',134,'c',0,NULL,NULL);
   set('V',713,'c',0,NULL,NULL);
   set('V',758,'c',0,NULL,NULL);
   set('V',685,'c',0,NULL,NULL);
   set('E',8,'c',0,NULL,NULL);
   set('E',30,'c',0,NULL,NULL);
   apport(22,485);
   apport(20,485);
   set('E',22,'c',4,NULL,NULL);
   apport(23,244);
   bitmod('s',8,10);
   bitmod('s',30,10);
   apport(82,485);
   set('V',714,'c',30,NULL,NULL);
   } else {
   if (bitest(evar(709),3)) {
   bitmod('c',evar(709),3);
   set('V',714,'c',15,NULL,NULL);
   } else {
   p92();
   }}}
   set('V',722,'v',714,NULL,NULL);
return done;
}
#ifdef __STDC__
int p19(void)
#else
int p19()
#endif
{
int done=0;
   if (KEY(113)) {
   p252();
   }
   if (KEY(112)) {
   p253();
   }
   if (value[696]==1) {
   if (((532<=value[668] && value[668]<=569)) ||
   KEY(493)) {
   bitmod('s',evar(696),5);
   say(76,1034,668);
   }
   if ((612<=value[668] && value[668]<=626)) {
   say(0,935,0);
   } else {
   if ((627<=value[668] && value[668]<=656)) {
   say(12,816,668);
   } else {
   say(0,1507,0);
   }}
   } else {
   if ((value[696]==2) &&
   bitest(evar(669),0)) {
   if ((KEY(112)) &&
   bitest(evar(670),9)) {
   say(64,1592,0);
   }
   if (isnear(value[669],-1,-1)) {
   say(12,1508,668);
   say(12,1509,669);
   } else {
   say(12,816,669);
   }
   } else {
   if ((627<=value[669] && value[669]<=660)) {
   if (KEY(549)) {
   say(0,913,0);
   } else {
   if ((627<=value[669] && value[669]<=656)) {
   say(12,816,669);
   } else {
   say(12,1508,668);
   say(12,1509,669);
   }}
   } else {
   value[698] = irand(1006-1002+1)+1002;
   say(2,698,0);
   }}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p326(void)
#else
int p326()
#endif
{
int done=0;
   if (value[697]>0) {
   if (value[39]==3) {
   say(0,998,0);
   } else {
   if (isnear(39,-1,-1)) {
   say(0,997,0);
   set('E',39,'c',3,NULL,NULL);
   set('V',697,'c',400,NULL,NULL);
   } else {
   if (bitest(39,4)) {
   say(0,996,0);
   } else {
   if ((168<=value[670] && value[670]<=193)) {
   say(9,992,1);
   } else {
   if ((300<=value[670] && value[670]<=311)) {
   say(9,992,2);
   } else {
   say(9,992,0);
   }}}}}
   } else {
   if (value[715]==2) {
   p92();
   } else {
   if (isnear(39,0,1)) {
   say(0,997,0);
   set('E',39,'c',3,NULL,NULL);
   value[697] += 400;
   } else {
   say(0,993,0);
   set('E',99,'c',0,NULL,NULL);
   bitmod('s',evar(709),5);
   p445();
   }}}
return done;
}
#ifdef __STDC__
int p649(void)
#else
int p649()
#endif
{
int done=0;
   bitmod('s',evar(670),14);
   if ((328<=value[670] && value[670]<=364)) {
   value[675]=328-1; while(++value[675]<=364) {
   bitmod('s',evar(675),14);
   }}
   if ((271<=value[670] && value[670]<=289)) {
   value[675]=271-1; while(++value[675]<=289) {
   bitmod('s',evar(675),14);
   }}
   if ((385<=value[670] && value[670]<=390)) {
   value[675]=385-1; while(++value[675]<=390) {
   bitmod('s',evar(675),14);
   }}
   if ((168<=value[670] && value[670]<=193)) {
   value[675]=168-1; while(++value[675]<=193) {
   bitmod('s',evar(675),14);
   }}
   if ((300<=value[670] && value[670]<=311)) {
   value[675]=300-1; while(++value[675]<=311) {
   bitmod('s',evar(675),14);
   }}
return done;
}
#ifdef __STDC__
int p259(void)
#else
int p259()
#endif
{
int done=0;
   if (value[769]==0) {
   if (((bitest(evar(670),14)) &&
   !KEY(577)) ||
   !(bitest(evar(670),8))) {
   return 0;
   }
   set('V',676,'c',0,NULL,NULL);
   if (((value[HERE]==434)) &&
   KEY(577)) {
   set('V',718,'c',0,NULL,NULL);
   say(64,1478,0);
   }
   if ((((value[HERE]==144)) &&
   value[4]==0) &&
   !have(98,-1,-1)) {
   value[676]=857;*bitword(676)=-1;
   }
   if ((((value[HERE]==149)) &&
   isnear(101,0,0)) &&
   have(102,-1,-1)) {
   value[676]=804;*bitword(676)=-1;
   }
   if (((value[HERE]==155)) &&
   isnear(7,-1,-1)) {
   if (bitest(evar(733),0)) {
   if (!((KEY(577)) &&
   !(bitest(evar(670),14)))) {
   value[676]=1583;*bitword(676)=-1;
   }
   } else {
   if ((location[101]==485)) {
   value[676]=808;*bitword(676)=-1;
   } else {
   value[676]=806;*bitword(676)=-1;
   }}}
   if ((value[HERE]==236)) {
   value[676]=989;*bitword(676)=-1;
   }
   if (((((value[HERE]==228)) ||
   (value[HERE]==227)) ||
   (value[HERE]==229)) &&
   !(bitest(229,4))) {
   value[676]=987;*bitword(676)=-1;
   }
   if ((value[HERE]==256)) {
   value[676]=1143;*bitword(676)=-1;
   }
   if ((((168<=value[670] && value[670]<=193)) ||
   (300<=value[670] && value[670]<=311)) ||
   (385<=value[670] && value[670]<=390)) {
   value[676]=985;*bitword(676)=-1;
   }
   if ((328<=value[670] && value[670]<=364)) {
   value[676]=1220;*bitword(676)=-1;
   }
   if ((271<=value[670] && value[670]<=289)) {
   if ((KEY(577)) &&
   !(bitest(evar(670),14))) {
   return 0;
   } else {
   value[676]=1323;*bitword(676)=-1;
   }}
   if (((value[HERE]==427)) ||
   (value[HERE]==428)) {
   value[676]=1658;*bitword(676)=-1;
   }
   if ((value[HERE]==239)) {
   value[676]=1321;*bitword(676)=-1;
   }
   if (isnear(16,-1,-1)) {
   value[676]=1435;*bitword(676)=-1;
   }
   if ((value[HERE]==252)) {
   value[676]=1440;*bitword(676)=-1;
   }
   if ((value[HERE]==264)) {
   value[676]=1521;*bitword(676)=-1;
   }
   if ((value[HERE]==254)) {
   if (bitest(evar(733),1)) {
   if (!((KEY(577)) &&
   !(bitest(evar(670),14)))) {
   value[676]=1516;*bitword(676)=-1;
   }
   } else {
   value[676]=1442;*bitword(676)=-1;
   bitmod('s',evar(733),1);
   }}
   if (isnear(24,-1,-1)) {
   value[676]=1445;*bitword(676)=-1;
   }
   if (isnear(35,-1,-1)) {
   value[676]=1447;*bitword(676)=-1;
   }
   if ((value[HERE]==259)) {
   if (KEY(577)) {
   value[676]=1456;*bitword(676)=-1;
   } else {
   return 0;
   }}
   if (value[676]==0) {
   return 0;
   }
   set('V',718,'c',0,NULL,NULL);
   p80(*bitword(676),value[676],0,14,0,0);
   } else {
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   say(9,983,20);
   p80(-1,984,0,15,0,0);
   } else {
   p649();
   }}
return done;
}
