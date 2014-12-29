/* adv07.c: Adv660 - copyright Mike Arnautov, 25 Dec 2014.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p5(void)
#else
int p5()
#endif
{
int done=0;
   if (bitest(evar(670),8)) {
   value[718] += 1;
   if (value[718]>25) {
   p259();
   }
   } else {
   set('V',718,'c',0,NULL,NULL);
   }
   if (isnear(91,-1,-1)) {
   value[91] += 1;
   if (value[91]<6) {
   if (value[91]>1) {
   value[698]=1500;*bitword(698)=-1;
   value[698] += value[91];
   value[698] -= 2;
   say(2,698,0);
   }
   } else {
   say(0,1504,0);
   move(419,-1);
   if (have(110,-1,-1)) {
   apport(110,484);
   }
   set('E',91,'c',0,NULL,NULL);
   p95();
   }}
   if (bitest(evar(670),13)) {
   p466();
   }
   value[755] -= 1;
   if (isnear(135,-1,-1)) {
   p245();
   }
   if (((value[135]>0) &&
   value[135]<4) &&
   value[755]<1) {
   if (value[135]==2) {
   set('E',135,'c',3,NULL,NULL);
   bitmod('c',135,4);
   value[755] = irand(7-4+1)+4;
   } else {
   if (bitest(135,4)) {
   set('E',135,'c',0,NULL,NULL);
   }}}
   p401();
   if ((((value[HERE]==412)) &&
   !(bitest(96,4))) &&
   irand(100)<3) {
   p8();
   if (value[700]==0) {
   say(0,1264,0);
   bitmod('s',96,4);
   }}
   value[756] -= 1;
   if ((value[HERE]==384)) {
   p145();
   }
   if (bitest(evar(696),6)) {
   bitmod('c',evar(696),6);
   set('V',704,'c',0,NULL,NULL);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if ((have(value[674],-1,-1)) &&
   !(bitest(evar(674),12))) {
   value[704] += 1;
   }}}
   p574();
   set('V',726,'c',25,NULL,NULL);
   set('V',725,'c',35,NULL,NULL);
   if (bitest(81,13)) {
   if (bitest(81,14)) {
   bitmod('c',81,14);
   } else {
   bitmod('c',81,13);
   }}
   if (bitest(16,14)) {
   if (isnear(16,-1,-1)) {
   say(0,1432,0);
   }
   bitmod('c',16,14);
   }
   if (bitest(16,13)) {
   bitmod('s',16,14);
   bitmod('c',16,13);
   }
   if ((bitest(evar(709),8)) &&
   !KEY(503)) {
   bitmod('c',evar(709),8);
   }
   if (!(value[710]<1999)) {
   say(0,1078,0);
   p192();
   }
   bitmod('c',43,13);
   if (!(((((((value[HERE]==252)) ||
   (value[HERE]==253)) ||
   (value[HERE]==251)) ||
   value[43]<2) ||
   value[696]==0) ||
   bitest(evar(696),5))) {
   if (have(43,-1,-1)) {
   if (value[43]>2) {
   value[698]=1622;*bitword(698)=-1;
   value[698] += value[43];
   value[698] -= 2;
   say(2,698,0);
   }
   if (!(value[43]<9)) {
   bitmod('s',evar(753),10);
   }
   bitmod('s',evar(696),7);
   if (((((irand(100)<40) ||
   value[43]>9) ||
   value[43]==2) &&
   value[43]!=7) ||
   KEY(540)) {
   value[43] += 1;
   if (value[43]>19) {
   p95();
   }
   bitmod('s',43,13);
   }
   } else {
   if (value[43]>1) {
   if (!(value[43]<9)) {
   say(0,1622,0);
   }
   set('E',43,'c',1,NULL,NULL);
   }}}
   input(0);
   value[712] -= 1;
   value[710] += 1;
   p421();
   if (KEY(489)) {
   (*procs[489])();
   longjmp(loop_back,1);
   }
   if (value[696]==0) {
   longjmp(loop_back,1);
   }
   if ((value[668]==-2) ||
   value[668]==-3) {
   if (value[668]==-2) {
   value[699] = irand(850-845+1)+845;
   } else {
   value[699] = irand(1467-1464+1)+1464;
   }
   say(14,699,668);
   p521();
   longjmp(loop_back,1);
   }
   if (KEY(493)) {
   p465();
   }
   if (KEY(3)) {
   p84();
   }
   if (value[696]>1) {
   if ((value[669]==-2) ||
   value[669]==-3) {
   if (!((487<=value[668] && value[668]<=494))) {
   if (value[669]==-3) {
   say(12,1464,669);
   } else {
   value[699] = irand(855-850+1)+850;
   say(14,699,669);
   }
   p521();
   longjmp(loop_back,1);
   }}}
   if ((KEY(520)) &&
   KEY(527)) {
   value[727] += 1;
   if (value[727]==5) {
   value[699]=527;*bitword(699)=-1;
   if (value[699]==value[668]) {
   say(12,1513,668);
   } else {
   say(12,1513,669);
   }}}
   if (value[715]==5) {
   p561();
   }
   if ((KEY(524)) &&
   value[696]>1) {
   if ((bitest(evar(669),0)) &&
   bitest(evar(669),3)) {
   say(64,1668,0);
   }}
   if ((value[696]>1) &&
   (639<=value[669] && value[669]<=655)) {
   p506();
   }
   if (!(((KEY(493)) &&
   value[696]>1) &&
   !(495<=value[669] && value[669]<=512))) {
   if (value[670]<LPROC && value[670]>= 0) (*procs[value[670]])(); else pcall(value[670]);
   }
   if (value[715]==5) {
   p561();
   }
   if (bitest(evar(668),1)) {
   if ((value[HERE]==value[668])) {
   say(0,936,0);
   } else {
   say(0,935,0);
   }
   } else {
   if (value[715]==3) {
   if (KEY(659)) {
   say(64,1519,0);
   }
   p83();
   if (KEY(102)) {
   p487();
   }}
   if (KEY(73)) {
   if ((((value[HERE]==225)) ||
   (value[HERE]==392)) ||
   (value[HERE]==429)) {
   apport(73,value[670]);
   }}
   if (KEY(659)) {
   say(64,1520,0);
   }
   if (KEY(598)) {
   say(64,797,0);
   }
   if (KEY(147)) {
   p119();
   longjmp(loop_back,1);
   }
   if (KEY(69)) {
   say(64,1278,0);
   }
   if (bitest(evar(670),13)) {
   if ((KEY(112)) ||
   KEY(559)) {
   say(64,1546,0);
   }}
   if (value[668]<LPROC && value[668]>= 0) (*procs[value[668]])(); else pcall(value[668]);
   p521();
   if (bitest(evar(668),0)) {
   if (((KEY(112)) &&
   bitest(evar(670),9)) ||
   isnear(value[668],-1,-1)) {
   say(12,1019,668);
   bitmod('s',evar(696),5);
   } else {
   say(12,816,668);
   }
   } else {
   p19();
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p6(void)
#else
int p6()
#endif
{
int done=0;
   if (!anyof(662,663,664,665,666,-1)) return 0;
   say(64,1520,0);
return done;
}
