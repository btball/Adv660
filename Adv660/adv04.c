/* adv04.c: Adv660 - copyright Mike Arnautov, 25 Dec 2014.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p111(void)
#else
int p111()
#endif
{
int done=0;
   move(228,0,518,526,-228);
   if (!keyword(124,-1)) return 0;
   if ((KEY(561)) ||
   KEY(570)) {
   say(64,1007,0);
   }
   say(76,1550,124);
return done;
}
#ifdef __STDC__
int p12(void)
#else
int p12()
#endif
{
int done=0;
   move(232,0,524,-232);
   move(370,0,516,-523);
return done;
}
#ifdef __STDC__
int p523(void)
#else
int p523()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(231,0,523,520,-625);
   move(233,0,524,-249);
   if (!anyof(518,202,-1)) return 0;
   if (have(106,-1,-1)) {
   say(76,921,106);
   }
   if (have(107,-1,-1)) {
   say(76,921,107);
   }
   move(202,-2);
return done;
}
#ifdef __STDC__
int p469(void)
#else
int p469()
#endif
{
int done=0;
   move(232,0,523,-232);
   move(234,0,-524);
return done;
}
#ifdef __STDC__
int p104(void)
#else
int p104()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(233,0,523,526,-249);
   move(232,0,-232);
return done;
}
#ifdef __STDC__
int p10(void)
#else
int p10()
#endif
{
int done=0;
   move(413,0,-515);
   move(203,0,-518);
   move(202,0,-523);
   move(207,0,-520);
   if (KEY(516)) {
   bitmod('c',evar(733),2);
   move(236,-2);
   }
   p171();
return done;
}
#ifdef __STDC__
int p380(void)
#else
int p380()
#endif
{
int done=0;
   move(302,0,-518);
   move(303,0,-519);
   move(304,0,-515);
   move(305,0,-517);
   move(306,0,-523);
   move(307,0,-521);
   move(308,0,-516);
   move(309,0,-520);
   move(310,0,-514);
   move(195,0,-524);
return done;
}
#ifdef __STDC__
int p650(void)
#else
int p650()
#endif
{
int done=0;
   if (KEY(520)) {
   bitmod('c',evar(733),2);
   move(236,-2);
   }
   if (!anyof(514,518,516,523,524,515,521,517,519,-1)) return 0;
   if (bitest(evar(733),2)) {
   set('V',699,'c',50,NULL,NULL);
   } else {
   set('V',699,'c',95,NULL,NULL);
   }
   if (irand(100)<value[699]) {
   move(236,-2);
   }
   move(235,-2);
return done;
}
#ifdef __STDC__
int p393(void)
#else
int p393()
#endif
{
int done=0;
   move(210,0,-518);
   move(239,0,514,-239);
   if (!anyof(10,638,-1)) return 0;
   say(64,948,0);
return done;
}
#ifdef __STDC__
int p645(void)
#else
int p645()
#endif
{
int done=0;
   move(212,0,-520);
   p174();
   if (!keyword(530,-1)) return 0;
   say(0,1010,0);
   move(237,-1);
   p95();
return done;
}
#ifdef __STDC__
int p589(void)
#else
int p589()
#endif
{
int done=0;
   move(211,0,-514);
   if ((KEY(524)) &&
   irand(100)<67) {
   if (irand(100)<50) {
   move(176,-2);
   }
   move(171,-2);
   }
   if (!anyof(530,595,524,-1)) return 0;
   move(173,-2);
return done;
}
#ifdef __STDC__
int p381(void)
#else
int p381()
#endif
{
int done=0;
   move(302,0,-519);
   move(303,0,-514);
   move(304,0,-516);
   move(305,0,-521);
   move(306,0,-517);
   move(307,0,-515);
   move(308,0,-520);
   move(309,0,-524);
   move(310,0,-523);
   move(311,0,-518);
return done;
}
#ifdef __STDC__
int p480(void)
#else
int p480()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(237,0,518,-10);
   move(397,0,-520);
   if (!anyof(514,531,-1)) return 0;
   say(64,1165,0);
return done;
}
#ifdef __STDC__
int p481(void)
#else
int p481()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(241,0,514,241,-622);
   move(242,0,-242);
   if (!anyof(518,531,-1)) return 0;
   if (isnear(28,-1,-1)) {
   apport(28,484);
   move(239,-1166);
   }
   say(64,1165,0);
return done;
}
#ifdef __STDC__
int p619(void)
#else
int p619()
#endif
{
int done=0;
   move(240,0,518,-239);
   move(242,0,515,-242);
return done;
}
#ifdef __STDC__
int p20(void)
#else
int p20()
#endif
{
int done=0;
   move(241,0,520,526,-241);
   move(240,0,-239);
   if (!keyword(530,-1)) return 0;
   move(485,-1);
   p546();
return done;
}
#ifdef __STDC__
int p354(void)
#else
int p354()
#endif
{
int done=0;
   move(180,0,-517);
return done;
}
#ifdef __STDC__
int p559(void)
#else
int p559()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(246,0,519,524,246,-249);
   if (KEY(556)) {
   if ((value[696]==1) ||
   isnear(23,-1,-1)) {
   return 0;
   }
   if ((KEY(115)) ||
   KEY(116)) {
   if (have(value[669],-1,-1)) {
   apport(value[669],HERE);
   say(76,966,669);
   }
   return 0;
   }
   if (bitest(evar(669),0)) {
   if (bitest(evar(669),5)) {
   if (have(value[669],-1,-1)) {
   if (KEY(50)) {
   if (bitest(22,13)) {
   set('E',22,'c',0,NULL,NULL);
   apport(50,485);
   bitmod('s',50,14);
   say(64,1453,0);
   }
   bitmod('s',50,13);
   }
   set('E',22,'c',1,NULL,NULL);
   apport(22,484);
   apport(23,244);
   apport(value[669],485);
   say(76,967,669);
   }}}}
   if (KEY(530)) {
   if (value[21]==0) {
   say(64,900,0);
   }
   move(485,-1);
   p546();
   }
   if (KEY(9)) {
   apport(9,value[670]);
   }
   if (KEY(120)) {
   if ((KEY(561)) ||
   KEY(570)) {
   say(64,1401,0);
   }
   say(64,913,0);
   }
   if (!anyof(531,515,-1)) return 0;
   if (value[21]>0) {
   say(64,969,0);
   }
   if (value[22]==0) {
   say(64,968,0);
   }
   if (value[22]==2) {
   set('E',22,'c',0,NULL,NULL);
   apport(22,244);
   apport(23,484);
   say(64,1451,0);
   }
   if (value[22]==1) {
   set('E',22,'c',2,NULL,NULL);
   }
   move(245,-2);
return done;
}
#ifdef __STDC__
int p528(void)
#else
int p528()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(213,0,524,519,526,-213);
   move(244,0,523,515,-21);
return done;
}
#ifdef __STDC__
int p511(void)
#else
int p511()
#endif
{
int done=0;
   move(210,0,514,-526);
   if (KEY(60)) {
   if (value[20]==0) {
   say(64,1028,0);
   }}
   if (!anyof(528,516,-1)) return 0;
   if (value[20]==0) {
   p530();
   say(64,954,0);
   }
   move(215,-2);
return done;
}
#ifdef __STDC__
int p512(void)
#else
int p512()
#endif
{
int done=0;
   move(215,0,516,-526);
   if (KEY(60)) {
   if (value[20]==0) {
   say(64,1028,0);
   }}
   if (!anyof(528,514,-1)) return 0;
   if (value[20]==0) {
   p530();
   say(64,954,0);
   }
   move(210,-2);
return done;
}
#ifdef __STDC__
int p405(void)
#else
int p405()
#endif
{
int done=0;
   if (((KEY(534)) ||
   KEY(556)) &&
   KEY(38)) {
   if ((have(38,-1,-1)) &&
   isnear(22,-1,-1)) {
   set('E',22,'c',3,NULL,NULL);
   apport(22,485);
   apport(23,244);
   apport(38,HERE);
   say(0,1700,0);
   say(64,971,0);
   }}
   if (KEY(556)) {
   if ((value[696]==1) ||
   isnear(23,-1,-1)) {
   return 0;
   }
   if ((KEY(115)) ||
   KEY(116)) {
   if (have(value[669],-1,-1)) {
   apport(value[669],HERE);
   say(76,966,669);
   }
   return 0;
   }
   if (bitest(evar(669),0)) {
   if (bitest(evar(669),5)) {
   if (have(value[669],-1,-1)) {
   if (KEY(50)) {
   if (bitest(22,13)) {
   set('E',22,'c',0,NULL,NULL);
   apport(50,485);
   bitmod('s',50,14);
   say(64,1453,0);
   }
   bitmod('s',50,13);
   }
   set('E',22,'c',1,NULL,NULL);
   apport(22,484);
   apport(23,244);
   apport(value[669],485);
   say(76,967,669);
   }}}}
   if (KEY(530)) {
   if (value[21]==0) {
   say(64,900,0);
   }
   move(485,-1);
   p546();
   }
   if (KEY(570)) {
   return 0;
   }
   move(249,0,515,-249);
   move(250,0,-250);
   move(252,0,-616);
   move(298,0,-298);
   if (KEY(9)) {
   apport(9,value[670]);
   }
   if (!anyof(531,519,-1)) return 0;
   if (value[21]>0) {
   say(64,969,0);
   }
   if (value[22]==0) {
   say(64,968,0);
   }
   if (value[22]==2) {
   set('E',22,'c',0,NULL,NULL);
   apport(22,244);
   apport(23,484);
   say(64,1451,0);
   }
   if (value[22]==1) {
   set('E',22,'c',2,NULL,NULL);
   }
   if (have(38,-1,-1)) {
   say(0,970,0);
   set('E',21,'c',1,NULL,NULL);
   apport(23,484);
   move(485,-1);
   p95();
   }
   if ((value[22]==3) &&
   bitest(22,13)) {
   if (isnear(38,-1,-1)) {
   apport(38,INHAND);
   set('E',21,'c',1,NULL,NULL);
   say(0,1103,0);
   } else {
   set('E',21,'c',2,NULL,NULL);
   say(0,1104,0);
   }
   apport(23,484);
   move(485,-1);
   p95();
   }
   move(244,-2);
return done;
}
#ifdef __STDC__
int p96(void)
#else
int p96()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(245,0,520,-21);
   move(250,0,516,-250);
   move(252,0,-616);
   move(298,0,-298);
return done;
}
#ifdef __STDC__
int p223(void)
#else
int p223()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(245,0,-21);
   move(249,0,520,-249);
   move(251,0,-515);
   move(297,0,517,-524);
   move(252,0,-616);
   move(298,0,-298);
return done;
}
#ifdef __STDC__
int p620(void)
#else
int p620()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(250,0,518,-250);
   move(252,0,514,-616);
   move(296,0,516,-624);
return done;
}
#ifdef __STDC__
int p47(void)
#else
int p47()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(251,0,518,526,-622);
   move(250,0,-250);
   if (KEY(530)) {
   move(485,-1);
   p546();
   }
   if ((KEY(9)) &&
   value[30]==2) {
   apport(9,value[670]);
   }
   if (!anyof(142,531,514,-1)) return 0;
   if (value[30]==0) {
   say(64,1123,0);
   }
   if (have(64,0,2)) {
   if (have(38,-1,-1)) {
   say(0,1127,0);
   apport(38,485);
   } else {
   if (!(bitest(253,4))) {
   bitmod('c',252,8);
   say(0,1125,0);
   }}
   if (!(bitest(253,4))) {
   set('V',731,'c',8,NULL,NULL);
   }
   move(253,-2);
   }
   if (have(38,-1,-1)) {
   say(0,1126,0);
   } else {
   say(0,1124,0);
   }
   if (have(64,-1,-1)) {
   say(0,1428,0);
   }
   move(485,-1);
   p95();
return done;
}
#ifdef __STDC__
int p41(void)
#else
int p41()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(251,0,520,526,-624);
   move(250,0,-250);
   move(252,0,-616);
return done;
}
#ifdef __STDC__
int p331(void)
#else
int p331()
#endif
{
int done=0;
   move(250,0,514,523,-250);
   move(298,0,518,524,-298);
   move(252,0,-616);
return done;
}
#ifdef __STDC__
int p22(void)
#else
int p22()
#endif
{
int done=0;
   move(297,0,520,-523);
   move(250,0,-250);
   move(299,0,516,525,-298);
   move(252,0,-616);
   p171();
return done;
}
#ifdef __STDC__
int p30(void)
#else
int p30()
#endif
{
int done=0;
   move(298,0,520,-526);
   move(250,0,-250);
   move(252,0,-616);
   if (!keyword(533,115,-1)) return 0;
   if (!isnear(115,-1,-1)) return 0;
   if (!((have(115,-1,-1)) ||
   value[115]==0)) {
   say(76,1027,669);
   }
return done;
}
#ifdef __STDC__
int p382(void)
#else
int p382()
#endif
{
int done=0;
   move(300,0,-520);
   move(303,0,-517);
   move(304,0,-521);
   move(305,0,-519);
   move(306,0,-515);
   move(307,0,-523);
   move(308,0,-524);
   move(309,0,-514);
   move(310,0,-518);
   move(301,0,-516);
return done;
}
#ifdef __STDC__
int p383(void)
#else
int p383()
#endif
{
int done=0;
   move(300,0,-521);
   move(302,0,-523);
   move(304,0,-514);
   move(305,0,-518);
   move(306,0,-520);
   move(307,0,-519);
   move(308,0,-515);
   move(309,0,-516);
   move(310,0,-524);
   move(301,0,-517);
return done;
}
#ifdef __STDC__
int p384(void)
#else
int p384()
#endif
{
int done=0;
   move(300,0,-523);
   move(302,0,-524);
   move(303,0,-520);
   move(305,0,-515);
   move(306,0,-519);
   move(307,0,-516);
   move(308,0,-514);
   move(309,0,-521);
   move(310,0,-517);
   move(301,0,-518);
return done;
}
#ifdef __STDC__
int p385(void)
#else
int p385()
#endif
{
int done=0;
   move(300,0,-515);
   move(302,0,-514);
   move(303,0,-521);
   move(304,0,-517);
   move(306,0,-516);
   move(307,0,-524);
   move(308,0,-518);
   move(309,0,-523);
   move(310,0,-520);
   move(301,0,-519);
return done;
}
#ifdef __STDC__
int p386(void)
#else
int p386()
#endif
{
int done=0;
   move(300,0,-514);
   move(302,0,-517);
   move(303,0,-524);
   move(304,0,-518);
   move(305,0,-516);
   move(307,0,-520);
   move(308,0,-519);
   move(309,0,-515);
   move(310,0,-521);
   move(301,0,-523);
return done;
}
#ifdef __STDC__
int p387(void)
#else
int p387()
#endif
{
int done=0;
   move(300,0,-516);
   move(302,0,-520);
   move(303,0,-523);
   move(304,0,-519);
   move(305,0,-524);
   move(306,0,-518);
   move(308,0,-521);
   move(309,0,-517);
   move(310,0,-515);
   move(301,0,-514);
return done;
}
#ifdef __STDC__
int p388(void)
#else
int p388()
#endif
{
int done=0;
   move(300,0,-517);
   move(302,0,-515);
   move(303,0,-518);
   move(304,0,-524);
   move(305,0,-523);
   move(306,0,-521);
   move(307,0,-514);
   move(309,0,-519);
   move(310,0,-516);
   move(301,0,-520);
return done;
}
#ifdef __STDC__
int p389(void)
#else
int p389()
#endif
{
int done=0;
   move(300,0,-524);
   move(302,0,-516);
   move(303,0,-515);
   move(304,0,-523);
   move(305,0,-520);
   move(306,0,-514);
   move(307,0,-518);
   move(308,0,-517);
   move(310,0,-519);
   move(301,0,-521);
return done;
}
#ifdef __STDC__
int p390(void)
#else
int p390()
#endif
{
int done=0;
   move(300,0,-519);
   move(302,0,-521);
   move(303,0,-516);
   move(304,0,-520);
   move(305,0,-514);
   move(306,0,-524);
   move(307,0,-517);
   move(308,0,-523);
   move(309,0,-518);
   move(301,0,-515);
return done;
}
#ifdef __STDC__
int p391(void)
#else
int p391()
#endif
{
int done=0;
   move(301,0,514,-526);
   if (!keyword(534,48,-1)) return 0;
   if (!have(48,-1,-1)) return 0;
   apport(48,485);
   apport(39,value[670]);
   bitmod('s',39,4);
   set('E',34,'c',1,NULL,NULL);
   say(64,1498,0);
return done;
}
#ifdef __STDC__
int p330(void)
#else
int p330()
#endif
{
int done=0;
   move(141,0,-526);
return done;
}
#ifdef __STDC__
int p497(void)
#else
int p497()
#endif
{
int done=0;
   move(320,0,-524);
   p173();
   move(151,0,520,526,-151);
return done;
}
#ifdef __STDC__
int p397(void)
#else
int p397()
#endif
{
int done=0;
   move(155,0,518,-526);
return done;
}
#ifdef __STDC__
int p612(void)
#else
int p612()
#endif
{
int done=0;
   if (KEY(525)) {
   if (value[35]==1) {
   set('V',679,'v',670,NULL,NULL);
   move(462,-2);
   }
   say(64,1163,0);
   }
   if (!anyof(523,526,514,-1)) return 0;
   if (value[35]==1) {
   say(64,1138,0);
   }
   move(155,-2);
return done;
}
#ifdef __STDC__
int p308(void)
#else
int p308()
#endif
{
int done=0;
   move(value[679],0,-526);
   if (!keyword(35,-1)) return 0;
   if (value[696]==1) {
   bitmod('s',evar(696),5);
   say(76,1019,35);
   }
   if (KEY(537)) {
   say(64,1164,0);
   }
   if (KEY(535)) {
   say(76,1130,669);
   }
   if (KEY(570)) {
   say(64,1607,0);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p648(void)
#else
int p648()
#endif
{
int done=0;
   move(155,0,-518);
   move(317,0,-514);
return done;
}
#ifdef __STDC__
int p646(void)
#else
int p646()
#endif
{
int done=0;
   move(316,0,518,521,-520);
   move(318,0,514,515,-516);
   move(318,0,-516);
return done;
}
#ifdef __STDC__
int p587(void)
#else
int p587()
#endif
{
int done=0;
   move(317,0,526,-518);
return done;
}
#ifdef __STDC__
int p127(void)
#else
int p127()
#endif
{
int done=0;
   move(155,0,-518);
   move(321,0,-514);
   move(320,0,-516);
return done;
}
#ifdef __STDC__
int p103(void)
#else
int p103()
#endif
{
int done=0;
   move(312,0,523,-516);
   p173();
   move(319,0,518,249,-526);
return done;
}
#ifdef __STDC__
int p545(void)
#else
int p545()
#endif
{
int done=0;
   move(319,0,526,514,-249);
return done;
}
#ifdef __STDC__
int p310(void)
#else
int p310()
#endif
{
int done=0;
   move(222,0,-518);
   move(323,0,-514);
return done;
}
#ifdef __STDC__
int p246(void)
#else
int p246()
#endif
{
int done=0;
   move(322,0,-518);
   if (!anyof(514,324,-1)) return 0;
   if (isnear(24,-1,-1)) {
   p530();
   say(64,1117,0);
   }
   move(324,-2);
return done;
}
#ifdef __STDC__
int p325(void)
#else
int p325()
#endif
{
int done=0;
   move(325,0,-516);
   move(323,0,-520);
return done;
}
#ifdef __STDC__
int p38(void)
#else
int p38()
#endif
{
int done=0;
   move(324,0,-514);
   move(326,0,-520);
   move(365,0,-516);
   move(324,0,-514);
   if (!keyword(530,-1)) return 0;
   p463();
return done;
}
#ifdef __STDC__
int p40(void)
#else
int p40()
#endif
{
int done=0;
   move(325,0,-514);
   move(327,0,-517);
   if (!keyword(530,-1)) return 0;
   p463();
return done;
}
#ifdef __STDC__
int p265(void)
#else
int p265()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(326,0,-521);
   move(328,1115,524,516,-328);
return done;
}
#ifdef __STDC__
int p526(void)
#else
int p526()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(332,0,-518);
   move(335,0,-521);
   if (!anyof(328,523,514,595,-1)) return 0;
   say(64,1116,0);
return done;
}
#ifdef __STDC__
int p266(void)
#else
int p266()
#endif
{
int done=0;
   move(331,0,-520);
   move(330,0,-514);
return done;
}
#ifdef __STDC__
int p279(void)
#else
int p279()
#endif
{
int done=0;
   move(329,0,-518);
return done;
}
#ifdef __STDC__
int p280(void)
#else
int p280()
#endif
{
int done=0;
   move(329,0,-516);
   move(333,0,-520);
   move(332,0,-514);
return done;
}
#ifdef __STDC__
int p292(void)
#else
int p292()
#endif
{
int done=0;
   move(328,0,-514);
   move(331,0,-518);
return done;
}
#ifdef __STDC__
int p293(void)
#else
int p293()
#endif
{
int done=0;
   move(331,0,-516);
   move(334,0,-514);
return done;
}
#ifdef __STDC__
int p295(void)
#else
int p295()
#endif
{
int done=0;
   move(333,0,-518);
return done;
}
#ifdef __STDC__
int p296(void)
#else
int p296()
#endif
{
int done=0;
   move(328,0,-516);
   move(336,0,-520);
return done;
}
#ifdef __STDC__
int p297(void)
#else
int p297()
#endif
{
int done=0;
   move(335,0,-515);
   move(337,0,-518);
return done;
}
#ifdef __STDC__
int p298(void)
#else
int p298()
#endif
{
int done=0;
   move(336,0,-514);
   move(338,0,-518);
   move(340,0,-520);
return done;
}
#ifdef __STDC__
int p299(void)
#else
int p299()
#endif
{
int done=0;
   move(337,0,-514);
return done;
}
#ifdef __STDC__
int p300(void)
#else
int p300()
#endif
{
int done=0;
   move(340,0,-514);
return done;
}
#ifdef __STDC__
int p301(void)
#else
int p301()
#endif
{
int done=0;
   move(337,0,-516);
   move(339,0,-518);
   move(341,0,-514);
return done;
}
#ifdef __STDC__
int p267(void)
#else
int p267()
#endif
{
int done=0;
   move(340,0,-518);
   move(342,0,-521);
return done;
}
#ifdef __STDC__
int p268(void)
#else
int p268()
#endif
{
int done=0;
   move(341,0,-516);
   move(343,0,-520);
return done;
}
#ifdef __STDC__
int p269(void)
#else
int p269()
#endif
{
int done=0;
   move(342,0,-515);
   move(344,0,-518);
   move(347,0,-520);
return done;
}
#ifdef __STDC__
int p270(void)
#else
int p270()
#endif
{
int done=0;
   move(343,0,-514);
   move(345,0,-518);
return done;
}
#ifdef __STDC__
int p271(void)
#else
int p271()
#endif
{
int done=0;
   move(344,0,-514);
return done;
}
#ifdef __STDC__
int p272(void)
#else
int p272()
#endif
{
int done=0;
   move(348,0,-514);
return done;
}
#ifdef __STDC__
int p273(void)
#else
int p273()
#endif
{
int done=0;
   move(343,0,-516);
   move(348,0,-518);
   move(349,0,-521);
return done;
}
#ifdef __STDC__
int p274(void)
#else
int p274()
#endif
{
int done=0;
   move(346,0,-518);
   move(347,0,-514);
return done;
}
#ifdef __STDC__
int p275(void)
#else
int p275()
#endif
{
int done=0;
   move(347,0,-516);
   move(350,0,-520);
return done;
}
#ifdef __STDC__
int p276(void)
#else
int p276()
#endif
{
int done=0;
   move(349,0,-515);
   move(351,0,-518);
return done;
}
#ifdef __STDC__
int p277(void)
#else
int p277()
#endif
{
int done=0;
   move(350,0,-514);
   move(352,0,-518);
   move(354,0,-520);
   move(355,0,-521);
return done;
}
#ifdef __STDC__
int p278(void)
#else
int p278()
#endif
{
int done=0;
   move(351,0,-514);
   move(353,0,-520);
return done;
}
#ifdef __STDC__
int p281(void)
#else
int p281()
#endif
{
int done=0;
   move(352,0,-516);
   move(354,0,-514);
return done;
}
#ifdef __STDC__
int p282(void)
#else
int p282()
#endif
{
int done=0;
   move(351,0,-516);
   move(353,0,-518);
return done;
}
#ifdef __STDC__
int p283(void)
#else
int p283()
#endif
{
int done=0;
   move(351,0,-517);
   move(356,0,-521);
return done;
}
#ifdef __STDC__
int p284(void)
#else
int p284()
#endif
{
int done=0;
   move(355,0,-516);
   move(357,0,-520);
return done;
}
#ifdef __STDC__
int p285(void)
#else
int p285()
#endif
{
int done=0;
   move(356,0,-515);
   move(358,0,-518);
   move(363,0,-520);
return done;
}
#ifdef __STDC__
int p286(void)
#else
int p286()
#endif
{
int done=0;
   move(357,0,-514);
   move(359,0,-518);
   move(361,0,-520);
   move(362,0,-521);
return done;
}
#ifdef __STDC__
int p287(void)
#else
int p287()
#endif
{
int done=0;
   move(358,0,-514);
   move(360,0,-521);
return done;
}
#ifdef __STDC__
int p288(void)
#else
int p288()
#endif
{
int done=0;
   move(359,0,-517);
   move(361,0,-514);
return done;
}
#ifdef __STDC__
int p289(void)
#else
int p289()
#endif
{
int done=0;
   move(358,0,-516);
   move(360,0,-518);
return done;
}
#ifdef __STDC__
int p290(void)
#else
int p290()
#endif
{
int done=0;
   move(358,0,-517);
   move(363,0,-514);
return done;
}
#ifdef __STDC__
int p291(void)
#else
int p291()
#endif
{
int done=0;
   move(357,0,-516);
   move(362,0,-518);
   move(364,0,-521);
return done;
}
#ifdef __STDC__
int p294(void)
#else
int p294()
#endif
{
int done=0;
   move(363,0,-516);
   move(327,value[684],-498);
   if (KEY(120)) {
   say(76,1649,669);
   }
return done;
}
#ifdef __STDC__
int p39(void)
#else
int p39()
#endif
{
int done=0;
   move(325,0,-514);
   move(366,0,515,-613);
   if (!keyword(530,-1)) return 0;
   p463();
return done;
}
#ifdef __STDC__
int p97(void)
#else
int p97()
#endif
{
int done=0;
   move(365,0,-519);
   move(367,0,-517);
return done;
}
#ifdef __STDC__
int p98(void)
#else
int p98()
#endif
{
int done=0;
   move(366,0,-520);
   if (!keyword(518,-1)) return 0;
   if (isnear(33,-1,-1)) {
   say(0,1087,0);
   p95();
   }
   move(368,-2);
return done;
}
#ifdef __STDC__
int p99(void)
#else
int p99()
#endif
{
int done=0;
   move(367,0,-514);
   move(369,0,518,-624);
return done;
}
#ifdef __STDC__
int p529(void)
#else
int p529()
#endif
{
int done=0;
   move(368,0,514,526,-624);
return done;
}
#ifdef __STDC__
int p13(void)
#else
int p13()
#endif
{
int done=0;
   move(231,0,-520);
   if (!anyof(516,531,-1)) return 0;
   if (((value[32]==0) ||
   have(106,-1,-1)) ||
   have(107,-1,-1)) {
   set('E',32,'c',0,NULL,NULL);
   if (bitest(32,13)) {
   say(0,1086,0);
   } else {
   say(0,1085,0);
   bitmod('s',32,13);
   }
   move(485,-1);
   p95();
   }
   set('E',32,'c',0,NULL,NULL);
   move(371,-2);
return done;
}
#ifdef __STDC__
int p14(void)
#else
int p14()
#endif
{
int done=0;
   move(372,0,-514);
   if (!anyof(520,531,-1)) return 0;
   if (value[32]==0) {
   if (bitest(32,13)) {
   say(0,1086,0);
   } else {
   say(0,1085,0);
   bitmod('s',32,13);
   }
   move(485,-1);
   p95();
   }
   set('E',32,'c',0,NULL,NULL);
   move(370,-2);
return done;
}
#ifdef __STDC__
int p15(void)
#else
int p15()
#endif
{
int done=0;
   move(371,0,-518);
   move(375,0,514,-375);
   move(373,0,516,-373);
return done;
}
#ifdef __STDC__
int p224(void)
#else
int p224()
#endif
{
int done=0;
   move(372,0,-521);
   move(376,0,-519);
return done;
}
#ifdef __STDC__
int p486(void)
#else
int p486()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(375,0,-520);
   move(377,0,524,-5);
   p173();
return done;
}
#ifdef __STDC__
int p27(void)
#else
int p27()
#endif
{
int done=0;
   set('E',41,'c',1,NULL,NULL);
   if (!anyof(523,376,5,520,-1)) return 0;
   move(376,-2);
return done;
}
#ifdef __STDC__
int p28(void)
#else
int p28()
#endif
{
int done=0;
   p173();
   if (!anyof(112,559,554,-1)) return 0;
   if ((KEY(112)) ||
   KEY(554)) {
   if ((have(114,0,3)) ||
   have(111,0,3)) {
   return 0;
   }}
   say(64,868,0);
return done;
}
#ifdef __STDC__
int p312(void)
#else
int p312()
#endif
{
int done=0;
   move(374,0,-518);
   move(372,0,-520);
return done;
}
#ifdef __STDC__
int p305(void)
#else
int p305()
#endif
{
int done=0;
   move(373,0,514,-526);
   if (KEY(13)) {
   say(64,1473,0);
   }
return done;
}
#ifdef __STDC__
int p169(void)
#else
int p169()
#endif
{
int done=0;
   move(254,0,-514);
   if ((KEY(9)) &&
   value[30]==2) {
   apport(9,value[670]);
   }
   if (!anyof(531,30,518,-1)) return 0;
   if (value[30]==0) {
   say(64,1123,0);
   }
   if (have(64,-1,-1)) {
   if (have(56,-1,-1)) {
   say(0,1128,0);
   move(485,-1);
   set('E',30,'c',0,NULL,NULL);
   p95();
   }
   move(252,-2);
   }
   say(0,1124,0);
   move(485,-1);
   p95();
return done;
}
#ifdef __STDC__
int p52(void)
#else
int p52()
#endif
{
int done=0;
   if (value[31]==1) {
   move(255,0,-521);
   move(263,0,-514);
   move(292,0,-515);
   }
   move(253,0,-518);
return done;
}
#ifdef __STDC__
int p456(void)
#else
int p456()
#endif
{
int done=0;
   move(254,0,-518);
   if (!keyword(514,-1)) return 0;
   set('E',14,'c',0,NULL,NULL);
   apport(14,256);
   move(256,-2);
return done;
}
#ifdef __STDC__
int p457(void)
#else
int p457()
#endif
{
int done=0;
   if (!anyof(514,516,518,520,515,521,517,519,-1)) return 0;
   value[675]=485;*bitword(675)=-1;
   p502();
   value[698]=514;*bitword(698)=-1;
   value[698] += value[15];
   if ((((value[698]==value[669]) &&
   value[696]==2) ||
   value[698]==value[668]) &&
   isnear(15,-1,-1)) {
   set('E',14,'c',8,NULL,NULL);
   value[683] = irand(1355-1352+1)+1352;
   move(257,-2);
   }
   move(256,-2);
return done;
}
#ifdef __STDC__
int p458(void)
#else
int p458()
#endif
{
int done=0;
   if (KEY(524)) {
   apport(14,255);
   move(258,-2);
   }
   if (!anyof(514,516,518,520,515,521,517,519,-1)) return 0;
   set('E',14,'c',0,NULL,NULL);
   move(256,-2);
return done;
}
#ifdef __STDC__
int p408(void)
#else
int p408()
#endif
{
int done=0;
   move(259,0,514,-259);
   if (!anyof(523,518,-1)) return 0;
   apport(14,256);
   move(257,-2);
return done;
}
#ifdef __STDC__
int p443(void)
#else
int p443()
#endif
{
int done=0;
   if (!keyword(534,114,-1)) return 0;
   if (!have(114,-1,-1)) return 0;
   if (value[114]==1) {
   apport(114,HERE);
   set('E',114,'c',0,NULL,NULL);
   say(64,1192,0);
   }
return done;
}
#ifdef __STDC__
int p444(void)
#else
int p444()
#endif
{
int done=0;
   move(258,0,520,526,-258);
   move(260,0,514,613,-260);
   if (!keyword(570,259,-1)) return 0;
   say(64,1515,0);
return done;
}
#ifdef __STDC__
int p86(void)
#else
int p86()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(261,0,523,595,-261);
   move(259,0,518,613,-259);
return done;
}
#ifdef __STDC__
int p599(void)
#else
int p599()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(260,0,524,595,-260);
   move(262,0,518,328,-261);
   move(463,0,-521);
return done;
}
#ifdef __STDC__
int p600(void)
#else
int p600()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(255,1115,518,524,-328);
   move(261,0,-514);
   move(260,0,260,-261);
return done;
}
#ifdef __STDC__
int p412(void)
#else
int p412()
#endif
{
int done=0;
   move(254,0,-518);
   if (KEY(514)) {
   value[25] += 1;
   if (value[25]==1) {
   say(0,1145,0);
   }
   move(264,-2);
   }
return done;
}
#ifdef __STDC__
int p25(void)
#else
int p25()
#endif
{
int done=0;
   move(265,0,-514);
   if (KEY(518)) {
   value[25] -= 1;
   if (value[25]==0) {
   p530();
   if (have(103,0,2)) {
   say(0,1146,0);
   set('E',25,'c',2,NULL,NULL);
   bitmod('c',264,8);
   } else {
   say(0,1147,0);
   p95();
   }}
   move(263,-2);
   }
return done;
}
#ifdef __STDC__
int p538(void)
#else
int p538()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(315,0,514,-315);
   move(264,0,-518);
   move(266,0,524,-5);
   p173();
return done;
}
#ifdef __STDC__
int p441(void)
#else
int p441()
#endif
{
int done=0;
   if (KEY(525)) {
   if (value[35]==1) {
   set('V',679,'v',670,NULL,NULL);
   move(462,-2);
   }
   say(64,1163,0);
   }
   if (!anyof(518,526,250,-1)) return 0;
   if (value[35]==1) {
   say(64,1138,0);
   }
   move(265,-2);
return done;
}
#ifdef __STDC__
int p422(void)
#else
int p422()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(265,0,-523);
   move(267,0,524,-5);
   p173();
return done;
}
#ifdef __STDC__
int p547(void)
#else
int p547()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(266,0,-523);
   move(268,0,524,-5);
   move(269,0,514,-526);
   p173();
return done;
}
#ifdef __STDC__
int p549(void)
#else
int p549()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(267,0,523,-5);
   p173();
return done;
}
#ifdef __STDC__
int p175(void)
#else
int p175()
#endif
{
int done=0;
   move(267,0,-518);
   move(271,0,-520);
   move(270,0,-516);
   if (!anyof(501,228,-1)) return 0;
   if (bitest(evar(709),2)) {
   say(64,826,0);
   }
   move(382,-value[684]);
return done;
}
#ifdef __STDC__
int p170(void)
#else
int p170()
#endif
{
int done=0;
   move(269,0,520,-524);
   move(271,0,-523);
return done;
}
#ifdef __STDC__
int p16(void)
#else
int p16()
#endif
{
int done=0;
   move(291,0,-516);
   move(281,0,-520);
return done;
}
#ifdef __STDC__
int p17(void)
#else
int p17()
#endif
{
int done=0;
   move(290,0,-520);
return done;
}
#ifdef __STDC__
int p346(void)
#else
int p346()
#endif
{
int done=0;
   move(254,0,-521);
   move(293,0,-514);
return done;
}
#ifdef __STDC__
int p249(void)
#else
int p249()
#endif
{
int done=0;
   move(294,0,515,-294);
   move(295,0,521,-295);
   move(292,0,-518);
return done;
}
#ifdef __STDC__
int p11(void)
#else
int p11()
#endif
{
int done=0;
   move(293,0,518,-526);
return done;
}
#ifdef __STDC__
int p598(void)
#else
int p598()
#endif
{
int done=0;
   if (!anyof(526,516,529,-1)) return 0;
   if ((location[121]==484)) {
   apport(121,value[670]);
   set('E',121,'c',0,NULL,NULL);
   }
   move(293,-2);
return done;
}
#ifdef __STDC__
int p459(void)
#else
int p459()
#endif
{
int done=0;
   move(269,value[684],501,-228);
   if (!anyof(524,595,514,518,516,520,515,
   521,517,519,530,-1)) return 0;
   say(0,1139,0);
   move(485,-1);
   p95();
return done;
}
#ifdef __STDC__
int p418(void)
#else
int p418()
#endif
{
int done=0;
   if (KEY(658)) {
   say(64,1603,0);
   }
   move(243,0,514,515,516,517,518,519,520,521,523,-524);
   if (!anyof(496,497,498,499,500,501,502,503,
   504,505,506,507,508,509,510,511,-1)) return 0;
   if (KEY(493)) {
   set('V',698,'v',669,NULL,NULL);
   } else {
   if (value[696]==1) {
   set('V',698,'v',668,NULL,NULL);
   } else {
   say(64,802,0);
   }}
   set('V',700,'v',698,NULL,NULL);
   value[699]=495;*bitword(699)=-1;
   value[699] += 1;
   value[700] -= value[699];
   if (value[700]==value[723]) {
   value[699]=512;*bitword(699)=-1;
   value[699] -= 1;
   if (value[698]==value[699]) {
   set('V',715,'c',5,NULL,NULL);
   if ((location[95]==140)) {
   apport(95,243);
   } else {
   apport(95,485);
   }
   bitmod('c',95,3);
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (bitest(evar(674),3)) {
   if ((location[value[674]]==141)) {
   apport(value[674],243);
   } else {
   apport(value[674],485);
   }}}
   move(136,-1399);
   } else {
   say(0,775,0);
   value[723] += 1;
   }
   } else {
   value[700] -= 1;
   if (value[700]==value[723]) {
   say(0,1562,0);
   } else {
   if (value[723]>2) {
   if ((irand(100)<20) ||
   !(bitest(evar(733),4))) {
   say(0,1454,0);
   bitmod('s',evar(733),4);
   } else {
   say(0,800,0);
   }
   } else {
   say(0,826,0);
   }}
   set('V',723,'c',0,NULL,NULL);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p55(void)
#else
int p55()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',734,NULL,NULL);
   value[677]=272;*bitword(677)=-1;
   value[678]=271;*bitword(678)=-1;
   p54();
   set('V',734,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p65(void)
#else
int p65()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',735,NULL,NULL);
   value[677]=273;*bitword(677)=-1;
   value[678]=271;*bitword(678)=-1;
   p54();
   set('V',735,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p66(void)
#else
int p66()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',736,NULL,NULL);
   value[677]=274;*bitword(677)=-1;
   value[678]=272;*bitword(678)=-1;
   p54();
   set('V',736,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p67(void)
#else
int p67()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',737,NULL,NULL);
   value[677]=275;*bitword(677)=-1;
   value[678]=273;*bitword(678)=-1;
   p54();
   set('V',737,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p68(void)
#else
int p68()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',738,NULL,NULL);
   value[677]=276;*bitword(677)=-1;
   value[678]=274;*bitword(678)=-1;
   p54();
   set('V',738,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p69(void)
#else
int p69()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',739,NULL,NULL);
   value[677]=277;*bitword(677)=-1;
   value[678]=275;*bitword(678)=-1;
   p54();
   set('V',739,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p70(void)
#else
int p70()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',740,NULL,NULL);
   value[677]=278;*bitword(677)=-1;
   value[678]=276;*bitword(678)=-1;
   p54();
   set('V',740,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p71(void)
#else
int p71()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',741,NULL,NULL);
   value[677]=279;*bitword(677)=-1;
   value[678]=277;*bitword(678)=-1;
   p54();
   set('V',741,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p72(void)
#else
int p72()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',742,NULL,NULL);
   value[677]=280;*bitword(677)=-1;
   value[678]=278;*bitword(678)=-1;
   p54();
   set('V',742,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p56(void)
#else
int p56()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',743,NULL,NULL);
   value[677]=281;*bitword(677)=-1;
   value[678]=279;*bitword(678)=-1;
   p54();
   set('V',743,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p57(void)
#else
int p57()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',744,NULL,NULL);
   value[677]=282;*bitword(677)=-1;
   value[678]=289;*bitword(678)=-1;
   p54();
   set('V',744,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p58(void)
#else
int p58()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',745,NULL,NULL);
   value[677]=283;*bitword(677)=-1;
   value[678]=281;*bitword(678)=-1;
   p54();
   set('V',745,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p59(void)
#else
int p59()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',746,NULL,NULL);
   value[677]=284;*bitword(677)=-1;
   value[678]=282;*bitword(678)=-1;
   p54();
   set('V',746,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p60(void)
#else
int p60()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',747,NULL,NULL);
   value[677]=285;*bitword(677)=-1;
   value[678]=283;*bitword(678)=-1;
   p54();
   set('V',747,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p61(void)
#else
int p61()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',748,NULL,NULL);
   value[677]=286;*bitword(677)=-1;
   value[678]=284;*bitword(678)=-1;
   p54();
   set('V',748,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p62(void)
#else
int p62()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',749,NULL,NULL);
   value[677]=287;*bitword(677)=-1;
   value[678]=285;*bitword(678)=-1;
   p54();
   set('V',749,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p63(void)
#else
int p63()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',750,NULL,NULL);
   value[677]=288;*bitword(677)=-1;
   value[678]=287;*bitword(678)=-1;
   p54();
   set('V',750,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p64(void)
#else
int p64()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',751,NULL,NULL);
   value[677]=269;*bitword(677)=-1;
   value[678]=287;*bitword(678)=-1;
   p54();
   set('V',751,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p73(void)
#else
int p73()
#endif
{
int done=0;
   if (KEY(516)) {
   if (!(bitest(290,4))) {
   set('V',731,'c',10,NULL,NULL);
   }
   move(290,-2);
   }
   if (!anyof(514,515,517,518,519,520,521,523,524,-1)) return 0;
   set('V',700,'v',752,NULL,NULL);
   value[677]=280;*bitword(677)=-1;
   value[678]=281;*bitword(678)=-1;
   p54();
   set('V',752,'v',701,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p251(void)
#else
int p251()
#endif
{
int done=0;
   move(161,0,-523);
   move(394,0,-524);
   p173();
return done;
}
#ifdef __STDC__
int p79(void)
#else
int p79()
#endif
{
int done=0;
   if (KEY(595)) {
   say(64,1664,0);
   }
   if (KEY(77)) {
   say(64,1663,0);
   }
   if (((KEY(78)) ||
   KEY(601)) &&
   (location[78]==393)) {
   say(64,1230,0);
   }
   if (KEY(72)) {
   if (!((KEY(113)) ||
   KEY(570))) {
   say(64,1229,0);
   }}
   move(395,0,523,-5);
   p173();
return done;
}
#ifdef __STDC__
int p82(void)
#else
int p82()
#endif
{
int done=0;
   move(204,0,-595);
   move(235,0,-514);
   move(205,0,-520);
   move(408,0,-523);
   move(407,0,-524);
   p173();
return done;
}
#ifdef __STDC__
int p615(void)
#else
int p615()
#endif
{
int done=0;
   move(203,0,516,-526);
return done;
}
#ifdef __STDC__
int p467(void)
#else
int p467()
#endif
{
int done=0;
   move(384,0,-514);
   move(385,0,-518);
   move(412,0,-516);
   if (!keyword(631,-1)) return 0;
   say(72,1550,631);
return done;
}
#ifdef __STDC__
int p29(void)
#else
int p29()
#endif
{
int done=0;
   move(203,0,526,-524);
return done;
}
#ifdef __STDC__
int p143(void)
#else
int p143()
#endif
{
int done=0;
   move(383,0,-518);
   if (KEY(74)) {
   if (KEY(560)) {
   set('V',671,'c',0,NULL,NULL);
   move(405,-1238);
   }
   if (KEY(570)) {
   say(64,1621,0);
   }
   say(64,913,0);
   }
return done;
}
#ifdef __STDC__
int p630(void)
#else
int p630()
#endif
{
int done=0;
   move(412,0,-412);
   move(386,0,-516);
   move(389,0,-520);
   move(390,0,-523);
   move(387,0,-524);
   move(383,0,-514);
return done;
}
#ifdef __STDC__
int p631(void)
#else
int p631()
#endif
{
int done=0;
   move(385,0,-514);
   move(386,0,516,-524);
   move(389,0,-520);
   move(387,0,-518);
   move(388,0,-523);
return done;
}
#ifdef __STDC__
int p632(void)
#else
int p632()
#endif
{
int done=0;
   move(386,0,-514);
   move(387,0,516,-524);
   move(385,0,-520);
   move(388,0,-518);
   move(389,0,-523);
return done;
}
#ifdef __STDC__
int p634(void)
#else
int p634()
#endif
{
int done=0;
   if (!keyword(556,115,-1)) return 0;
   if (!have(115,-1,-1)) return 0;
   if (!isnear(87,-1,-1)) return 0;
   set('E',115,'c',2,NULL,NULL);
   apport(115,HERE);
   say(64,1327,0);
return done;
}
#ifdef __STDC__
int p635(void)
#else
int p635()
#endif
{
int done=0;
   if (KEY(533)) {
   default_to(0,value[HERE],3);
   if ((KEY(115)) &&
   value[115]==2) {
   say(64,1307,0);
   }}
   if ((KEY(88)) &&
   value[86]==1) {
   say(64,1334,0);
   }
   move(386,0,-514);
   move(390,0,-520);
   move(387,0,-516);
   move(389,0,-523);
   if (KEY(518)) {
   p530();
   if (value[86]==0) {
   say(64,1307,0);
   }
   if (value[86]==1) {
   say(64,1333,0);
   }
   move(433,-2);
   }
   if ((KEY(525)) &&
   value[86]==2) {
   move(433,-2);
   }
return done;
}
#ifdef __STDC__
int p636(void)
#else
int p636()
#endif
{
int done=0;
   move(390,0,-514);
   move(385,0,-516);
   move(389,0,520,-523);
   move(388,0,-518);
   move(387,0,-524);
return done;
}
#ifdef __STDC__
int p637(void)
#else
int p637()
#endif
{
int done=0;
   move(389,0,520,-514);
   move(385,0,-516);
   move(388,0,-518);
   move(389,0,-523);
   move(386,0,-524);
return done;
}
#ifdef __STDC__
int p24(void)
#else
int p24()
#endif
{
int done=0;
   move(392,0,523,-5);
   p171();
   p172();
   p173();
   move(393,1236,525,-518);
return done;
}
#ifdef __STDC__
int p78(void)
#else
int p78()
#endif
{
int done=0;
   if (KEY(72)) {
   if (!((KEY(113)) ||
   KEY(570))) {
   say(64,1229,0);
   }}
   p172();
   p173();
   if (((KEY(77)) &&
   KEY(527)) ||
   KEY(524)) {
   say(64,1368,0);
   }
return done;
}
#ifdef __STDC__
int p107(void)
#else
int p107()
#endif
{
int done=0;
   move(391,0,-524);
   move(412,0,-523);
   p173();
   move(225,0,521,525,-225);
return done;
}
#ifdef __STDC__
int p75(void)
#else
int p75()
#endif
{
int done=0;
   move(397,0,516,-531);
   move(432,0,520,514,518,521,-519);
   if (KEY(524)) {
   say(0,1250,0);
   move(485,-1);
   p95();
   }
   if (KEY(637)) {
   say(64,1554,0);
   }
return done;
}
#ifdef __STDC__
int p74(void)
#else
int p74()
#endif
{
int done=0;
   move(396,0,520,-531);
   move(239,0,518,517,516,-239);
   if (KEY(524)) {
   say(0,1250,0);
   move(485,-1);
   p95();
   }
   if (KEY(637)) {
   say(64,1554,0);
   }
return done;
}
#ifdef __STDC__
int p590(void)
#else
int p590()
#endif
{
int done=0;
   move(408,0,514,-526);
   move(399,0,523,-595);
   p173();
return done;
}
#ifdef __STDC__
int p593(void)
#else
int p593()
#endif
{
int done=0;
   move(398,0,-524);
   move(400,0,523,-595);
   p173();
return done;
}
#ifdef __STDC__
int p592(void)
#else
int p592()
#endif
{
int done=0;
   move(399,0,-524);
   move(401,0,523,-595);
   p174();
   p173();
return done;
}
#ifdef __STDC__
int p591(void)
#else
int p591()
#endif
{
int done=0;
   if (KEY(524)) {
   if (irand(100)<80) {
   move(402,-2);
   }
   move(400,-2);
   }
   p173();
   if (!anyof(523,595,-1)) return 0;
   if (irand(100)<80) {
   move(400,-2);
   }
   move(402,-2);
return done;
}
#ifdef __STDC__
int p596(void)
#else
int p596()
#endif
{
int done=0;
   move(403,0,523,-595);
   move(401,0,-524);
   p174();
   p173();
return done;
}
#ifdef __STDC__
int p595(void)
#else
int p595()
#endif
{
int done=0;
   move(404,0,523,-595);
   move(402,0,-524);
   p171();
   if (KEY(6)) {
   if ((KEY(535)) ||
   KEY(563)) {
   say(76,1424,669);
   }
   if (KEY(537)) {
   say(76,1132,669);
   }
   if (KEY(113)) {
   if ((have(114,0,4)) ||
   have(111,0,4)) {
   if (have(111,0,4)) {
   set('E',111,'c',2,NULL,NULL);
   } else {
   set('E',114,'c',2,NULL,NULL);
   }
   say(12,1493,113);
   say(76,1494,6);
   }
   say(76,1023,668);
   }
   if (KEY(570)) {
   say(64,1608,0);
   }
   say(64,913,0);
   }
   if (KEY(120)) {
   if ((KEY(561)) ||
   KEY(570)) {
   say(64,1609,0);
   }
   say(64,913,0);
   }
   p173();
return done;
}
#ifdef __STDC__
int p594(void)
#else
int p594()
#endif
{
int done=0;
   move(403,0,-524);
   p174();
   p173();
   if (!anyof(523,595,-1)) return 0;
   value[676]=1252;*bitword(676)=-1;
   value[676] += value[728];
   if (value[728]==2) {
   if (value[769]==0) {
   p80(*bitword(676),value[676],0,28,0,1);
   }
   set('V',769,'c',0,NULL,NULL);
   if (value[770]==1) {
   value[676] += 1;
   } else {
   say(64,1256,0);
   }
   } else {
   value[728] += 1;
   }
   say(2,676,0);
   if (have(99,-1,-1)) {
   apport(99,HERE);
   }
   *bitword(674)= -1; value[674]=FOBJ-1; while (++value[674]<=LOBJ) {
   if (have(value[674],-1,-1)) {
   apport(value[674],485);
   }}
   p95();
return done;
}
#ifdef __STDC__
int p144(void)
#else
int p144()
#endif
{
int done=0;
   move(406,0,524,-518);
   if (KEY(523)) {
   set('V',671,'c',0,NULL,NULL);
   move(384,-1582);
   }
return done;
}
#ifdef __STDC__
int p638(void)
#else
int p638()
#endif
{
int done=0;
   move(405,0,514,-523);
   if (KEY(595)) {
   if (value[715]<2) {
   set('V',671,'c',0,NULL,NULL);
   move(141,-1239);
   }
   say(64,1581,0);
   }
   if (!keyword(635,-1)) return 0;
   say(64,936,0);
return done;
}
#ifdef __STDC__
int p102(void)
#else
int p102()
#endif
{
int done=0;
   move(203,0,523,526,-5);
   p173();
   if (!keyword(628,-1)) return 0;
   say(72,1550,628);
return done;
}
#ifdef __STDC__
int p588(void)
#else
int p588()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(203,0,524,-5);
   move(409,0,-514);
   move(398,0,-518);
   move(412,0,520,-412);
   if (KEY(18)) {
   say(64,1383,0);
   }
   p173();
return done;
}
#ifdef __STDC__
int p537(void)
#else
int p537()
#endif
{
int done=0;
   move(408,0,-518);
   move(410,0,-514);
   move(412,0,519,-412);
return done;
}
#ifdef __STDC__
int p411(void)
#else
int p411()
#endif
{
int done=0;
   move(409,0,-518);
   move(411,0,514,-525);
return done;
}
#ifdef __STDC__
int p120(void)
#else
int p120()
#endif
{
int done=0;
   move(410,0,-518);
   move(409,0,-526);
   if (KEY(629)) {
   say(64,1549,0);
   }
   if (!keyword(630,-1)) return 0;
   say(72,1550,630);
return done;
}
#ifdef __STDC__
int p438(void)
#else
int p438()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(408,0,-516);
   move(409,0,-515);
   move(392,0,514,524,-5);
   move(383,0,-520);
return done;
}
#ifdef __STDC__
int p604(void)
#else
int p604()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(235,0,-518);
   move(414,0,-514);
   if (!anyof(520,613,618,143,-1)) return 0;
   p417();
   move(415,-2);
return done;
}
#ifdef __STDC__
int p614(void)
#else
int p614()
#endif
{
int done=0;
   move(413,0,-518);
return done;
}
#ifdef __STDC__
int p352(void)
#else
int p352()
#endif
{
int done=0;
   move(416,0,-520);
   move(416,0,-596);
   if (KEY(524)) {
   if (bitest(91,13)) {
   move(418,-2);
   }
   move(417,-2);
   }
   if (!anyof(523,516,613,618,143,-1)) return 0;
   p417();
   move(413,-2);
return done;
}
#ifdef __STDC__
int p37(void)
#else
int p37()
#endif
{
int done=0;
   if (KEY(94)) {
   say(64,1260,0);
   }
   move(415,0,516,524,-526);
return done;
}
#ifdef __STDC__
int p447(void)
#else
int p447()
#endif
{
int done=0;
   if (!anyof(523,526,529,-1)) return 0;
   bitmod('s',91,13);
   set('E',91,'c',0,NULL,NULL);
   value[730] = irand(4);
   move(415,-2);
return done;
}
#ifdef __STDC__
int p448(void)
#else
int p448()
#endif
{
int done=0;
   if (!anyof(524,530,-1)) return 0;
   say(0,1249,0);
   say(0,1248,0);
   move(419,-1);
   p95();
return done;
}
#ifdef __STDC__
int p522(void)
#else
int p522()
#endif
{
int done=0;
   move(415,0,523,-526);
   if (!anyof(530,524,-1)) return 0;
   bitmod('c',91,13);
   bitmod('s',91,14);
   move(420,-1249);
return done;
}
#ifdef __STDC__
int p105(void)
#else
int p105()
#endif
{
int done=0;
   move(419,0,-514);
   move(421,0,-518);
return done;
}
#ifdef __STDC__
int p507(void)
#else
int p507()
#endif
{
int done=0;
   move(420,0,518,-526);
   if (KEY(76)) {
   say(64,1299,0);
   }
return done;
}
#ifdef __STDC__
int p106(void)
#else
int p106()
#endif
{
int done=0;
   if ((KEY(91)) &&
   value[696]>1) {
   p470();
   }
   move(420,0,-514);
   move(425,0,-519);
   move(426,0,520,-521);
   move(422,0,516,518,-517);
return done;
}
#ifdef __STDC__
int p516(void)
#else
int p516()
#endif
{
int done=0;
   move(421,0,-514);
   move(423,0,517,-519);
return done;
}
#ifdef __STDC__
int p517(void)
#else
int p517()
#endif
{
int done=0;
   move(422,0,-514);
   move(424,0,518,-517);
return done;
}
#ifdef __STDC__
int p518(void)
#else
int p518()
#endif
{
int done=0;
   move(423,0,514,-526);
return done;
}
#ifdef __STDC__
int p519(void)
#else
int p519()
#endif
{
int done=0;
   move(421,0,-515);
   if (!anyof(523,525,624,-1)) return 0;
   set('V',718,'c',1,NULL,NULL);
   move(427,-2);
return done;
}
#ifdef __STDC__
int p520(void)
#else
int p520()
#endif
{
int done=0;
   move(421,0,516,-526);
return done;
}
#ifdef __STDC__
int p555(void)
#else
int p555()
#endif
{
int done=0;
   if (!anyof(524,597,-1)) return 0;
   bitmod('s',91,14);
   move(425,-2);
return done;
}
#ifdef __STDC__
int p556(void)
#else
int p556()
#endif
{
int done=0;
   move(425,0,524,-597);
   if (KEY(623)) {
   say(64,922,0);
   }
   if (!anyof(514,515,516,517,518,519,520,521,523,596,-1)) return 0;
   set('V',729,'c',0,NULL,NULL);
   move(428,-2);
return done;
}
#ifdef __STDC__
int p552(void)
#else
int p552()
#endif
{
int done=0;
   if ((KEY(523)) &&
   !(bitest(91,14))) {
   if (value[729]<2) {
   value[675]=419;*bitword(675)=-1;
   p502();
   value[729] += 1;
   move(428,-2);
   }
   set('V',729,'c',0,NULL,NULL);
   bitmod('c',91,14);
   move(164,-2);
   }
   if (KEY(623)) {
   say(64,922,0);
   }
   if (!anyof(524,597,-1)) return 0;
   if (irand(100)<10) {
   move(427,-2);
   }
return done;
}
#ifdef __STDC__
int p553(void)
#else
int p553()
#endif
{
int done=0;
   if (!anyof(514,518,516,520,515,517,521,519,596,524,597,523,-1)) return 0;
   value[675]=419;*bitword(675)=-1;
   p502();
   value[729] += 1;
   move(428,-2);
return done;
}
#ifdef __STDC__
int p21(void)
#else
int p21()
#endif
{
int done=0;
   move(225,0,-520);
   move(430,0,-514);
return done;
}
#ifdef __STDC__
int p351(void)
#else
int p351()
#endif
{
int done=0;
   move(429,0,-518);
   move(431,0,-514);
return done;
}
#ifdef __STDC__
int p327(void)
#else
int p327()
#endif
{
int done=0;
   move(430,0,-519);
   move(432,0,-514);
return done;
}
#ifdef __STDC__
int p565(void)
#else
int p565()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,-1)) return 0;
   value[675]=485;*bitword(675)=-1;
   p502();
return done;
}
#ifdef __STDC__
int p566(void)
#else
int p566()
#endif
{
int done=0;
   if (!anyof(516,520,-1)) return 0;
   p348();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p567(void)
#else
int p567()
#endif
{
int done=0;
   if (!anyof(518,517,519,-1)) return 0;
   if (irand(100)<33) {
   move(431,-2);
   }
   p348();
return done;
}
#ifdef __STDC__
int p568(void)
#else
int p568()
#endif
{
int done=0;
   if (!anyof(514,515,521,-1)) return 0;
   if (irand(100)<33) {
   move(396,-2);
   }
   p348();
return done;
}
#ifdef __STDC__
int p110(void)
#else
int p110()
#endif
{
int done=0;
   if (!anyof(514,529,526,-1)) return 0;
   move(388,-2);
return done;
}
#ifdef __STDC__
int p570(void)
#else
int p570()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,529,-1)) return 0;
   move(432,-2);
return done;
}
#ifdef __STDC__
int p550(void)
#else
int p550()
#endif
{
int done=0;
   move(403,0,-526);
return done;
}
#ifdef __STDC__
int p558(void)
#else
int p558()
#endif
{
int done=0;
   move(139,0,138,457,526,-517);
   if (KEY(141)) {
   value[678]=139;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (KEY(530)) {
   move(485,-1);
   p546();
   }
   if (!anyof(632,633,-1)) return 0;
   if (KEY(570)) {
   if (KEY(632)) {
   say(64,1551,0);
   }
   say(64,1645,0);
   }
   if (KEY(632)) {
   say(72,1550,632);
   }
   say(64,913,0);
return done;
}
#ifdef __STDC__
int p471(void)
#else
int p471()
#endif
{
int done=0;
   move(139,0,-520);
   move(457,0,-517);
   if (KEY(141)) {
   value[678]=140;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (!keyword(527,457,-1)) return 0;
   value[677]=139;*bitword(677)=-1;
   value[678]=457;*bitword(678)=-1;
   p199();
return done;
}
#ifdef __STDC__
int p472(void)
#else
int p472()
#endif
{
int done=0;
   move(138,0,-516);
   move(140,0,-521);
   if (KEY(141)) {
   value[678]=140;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (!keyword(527,457,-1)) return 0;
   value[677]=138;*bitword(677)=-1;
   value[678]=140;*bitword(678)=-1;
   p199();
return done;
}
#ifdef __STDC__
int p440(void)
#else
int p440()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(138,0,521,-138);
   move(437,0,514,-619);
   move(441,0,-515);
   move(440,0,-516);
   move(136,0,-517);
   move(137,0,-518);
   move(438,0,519,-520);
   if (KEY(141)) {
   value[678]=140;*bitword(678)=-1;
   value[677]=136;*bitword(677)=-1;
   p9();
   }
   if (!keyword(527,457,-1)) return 0;
   value[677]=136;*bitword(677)=-1;
   value[678]=138;*bitword(678)=-1;
   p199();
return done;
}
#ifdef __STDC__
int p413(void)
#else
int p413()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(442,0,514,-619);
   move(443,0,-515);
   move(444,0,-516);
   move(459,0,-517);
   move(136,0,519,-141);
   move(440,0,-520);
   move(441,0,-521);
   if (KEY(518)) {
   if (irand(100)<50) {
   move(459,-2);
   }
   move(136,-2);
   }
return done;
}
#ifdef __STDC__
int p149(void)
#else
int p149()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(444,0,-514);
   move(445,0,-515);
   move(446,0,516,-619);
   move(448,0,-517);
   move(447,0,-518);
   move(460,0,-519);
   move(458,0,-521);
   move(136,0,-141);
   if (KEY(520)) {
   if (irand(100)<50) {
   move(458,-2);
   }
   move(460,-2);
   }
return done;
}
#ifdef __STDC__
int p539(void)
#else
int p539()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(459,0,-515);
   move(447,0,-516);
   move(449,0,-517);
   move(454,0,518,-619);
   move(143,0,-519);
   move(142,0,520,-524);
   move(136,0,521,-141);
   if (KEY(514)) {
   if (irand(100)<50) {
   move(459,-2);
   }
   move(136,-2);
   }
return done;
}
#ifdef __STDC__
int p165(void)
#else
int p165()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(144,0,514,-144);
   move(136,0,-141);
   move(143,0,-143);
   move(142,0,-142);
   move(455,0,-515);
   move(456,0,-516);
   move(453,0,520,-619);
   move(452,0,-521);
   if (KEY(595)) {
   say(64,1227,0);
   }
return done;
}
#ifdef __STDC__
int p203(void)
#else
int p203()
#endif
{
int done=0;
   move(461,0,514,515,520,-521);
   move(441,0,-516);
   move(440,0,-517);
   move(457,0,518,-519);
return done;
}
#ifdef __STDC__
int p214(void)
#else
int p214()
#endif
{
int done=0;
   move(457,0,515,-516);
   move(137,0,-517);
   move(461,0,518,519,-520);
   move(439,0,-521);
return done;
}
#ifdef __STDC__
int p216(void)
#else
int p216()
#endif
{
int done=0;
   move(461,0,514,517,518,519,520,-521);
   move(438,0,515,-516);
return done;
}
#ifdef __STDC__
int p217(void)
#else
int p217()
#endif
{
int done=0;
   move(441,0,-514);
   move(442,0,-515);
   move(458,0,-516);
   move(136,0,517,518,519,-141);
   move(457,0,-520);
   move(437,0,-521);
return done;
}
#ifdef __STDC__
int p218(void)
#else
int p218()
#endif
{
int done=0;
   move(461,0,514,515,-521);
   move(442,0,-516);
   move(458,0,-517);
   move(440,0,-518);
   move(457,0,-519);
   move(437,0,-520);
return done;
}
#ifdef __STDC__
int p219(void)
#else
int p219()
#endif
{
int done=0;
   move(461,0,514,515,-521);
   move(443,0,-516);
   move(444,0,-517);
   move(458,0,-518);
   move(440,0,-519);
   move(441,0,-520);
return done;
}
#ifdef __STDC__
int p220(void)
#else
int p220()
#endif
{
int done=0;
   move(461,0,514,515,516,-521);
   move(445,0,-517);
   move(444,0,-518);
   move(458,0,-519);
   move(442,0,-520);
return done;
}
#ifdef __STDC__
int p221(void)
#else
int p221()
#endif
{
int done=0;
   move(443,0,-514);
   move(461,0,-515);
   move(445,0,-516);
   move(446,0,-517);
   move(459,0,-518);
   move(458,0,-520);
   move(442,0,-521);
   if (KEY(519)) {
   if (irand(100)<50) {
   move(458,-2);
   }
   move(459,-2);
   }
return done;
}
#ifdef __STDC__
int p222(void)
#else
int p222()
#endif
{
int done=0;
   move(461,0,514,515,516,-517);
   move(446,0,-518);
   move(459,0,-519);
   move(444,0,-520);
   move(443,0,-521);
return done;
}
#ifdef __STDC__
int p204(void)
#else
int p204()
#endif
{
int done=0;
   move(445,0,-514);
   move(461,0,515,516,-517);
   move(448,0,-518);
   move(447,0,-519);
   move(459,0,-520);
   move(444,0,-521);
return done;
}
#ifdef __STDC__
int p205(void)
#else
int p205()
#endif
{
int done=0;
   move(459,0,-514);
   move(446,0,-515);
   move(448,0,-516);
   move(461,0,-517);
   move(449,0,-518);
   move(454,0,-519);
   move(460,0,-520);
   if (KEY(521)) {
   if (irand(100)<50) {
   move(459,-2);
   }
   move(460,-2);
   }
return done;
}
#ifdef __STDC__
int p206(void)
#else
int p206()
#endif
{
int done=0;
   move(446,0,-514);
   move(461,0,515,516,517,-518);
   move(449,0,-519);
   move(447,0,-520);
   move(459,0,-521);
return done;
}
#ifdef __STDC__
int p207(void)
#else
int p207()
#endif
{
int done=0;
   move(447,0,-514);
   move(448,0,-515);
   move(461,0,516,517,-518);
   move(455,0,-519);
   move(454,0,-520);
   move(460,0,-521);
return done;
}
#ifdef __STDC__
int p208(void)
#else
int p208()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(136,0,514,-515);
   move(142,0,524,516,-142);
   move(143,0,-517);
   move(451,0,-518);
   move(461,0,519,520,-521);
return done;
}
#ifdef __STDC__
int p209(void)
#else
int p209()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(450,0,-514);
   move(142,0,-515);
   move(143,0,516,524,-142);
   move(144,0,-517);
   move(452,0,-518);
   move(461,0,519,520,-521);
return done;
}
#ifdef __STDC__
int p210(void)
#else
int p210()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(451,0,-514);
   move(143,0,-515);
   move(144,0,516,524,-142);
   move(436,0,-517);
   move(453,0,-518);
   move(461,0,519,520,-521);
return done;
}
#ifdef __STDC__
int p211(void)
#else
int p211()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(452,0,-514);
   move(144,0,-515);
   move(436,0,516,524,-142);
   move(461,0,517,518,519,520,-521);
return done;
}
#ifdef __STDC__
int p212(void)
#else
int p212()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(460,0,-514);
   move(447,0,-515);
   move(449,0,-516);
   move(461,0,-517);
   move(455,0,-518);
   move(144,0,-519);
   move(143,0,520,524,-142);
   move(142,0,-521);
return done;
}
#ifdef __STDC__
int p213(void)
#else
int p213()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(454,0,-514);
   move(449,0,-515);
   move(461,0,516,-517);
   move(456,0,-518);
   move(436,0,-519);
   move(144,0,520,524,-142);
   move(143,0,-521);
return done;
}
#ifdef __STDC__
int p215(void)
#else
int p215()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(455,0,-514);
   move(461,0,515,516,517,518,-519);
   move(436,0,520,524,-142);
   move(144,0,-521);
return done;
}
#ifdef __STDC__
int p112(void)
#else
int p112()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,-1)) return 0;
   value[699]=516;*bitword(699)=-1;
   set('V',698,'v',668,NULL,NULL);
   if (value[696]>1) {
   set('V',698,'v',669,NULL,NULL);
   }
   value[698] -= value[699];
   if ((value[760]<0) &&
   irand(100)<20) {
   set('V',760,'v',698,NULL,NULL);
   }
   if (value[760]==value[698]) {
   say(64,1557,0);
   }
   value[675]=485;*bitword(675)=-1;
   p502();
   set('V',760,'c',-1,NULL,NULL);
   set('V',698,'v',761,NULL,NULL);
   if (value[698]>100) {
   set('V',698,'c',100,NULL,NULL);
   }
   if (irand(100)<value[698]) {
   value[761] -= 10;
   if (value[761]<1) {
   set('V',761,'c',1,NULL,NULL);
   }
   move(461,-2);
   }
   value[761] = irand(160-120+1)+120;
   value[675] = irand(456-437+1)+437;
   move(value[675],-2);
return done;
}
#ifdef __STDC__
int p23(void)
#else
int p23()
#endif
{
int done=0;
   if (KEY(570)) {
   return 0;
   }
   move(261,0,516,-261);
   if (!keyword(530,-1)) return 0;
   move(485,-1);
   p546();
return done;
}
#ifdef __STDC__
int p406(void)
#else
int p406()
#endif
{
int done=0;
   move(379,0,-519);
   p171();
   if (!keyword(533,11,-1)) return 0;
   say(64,918,0);
return done;
}
#ifdef __STDC__
int p34(void)
#else
int p34()
#endif
{
int done=0;
   move(379,0,-519);
   move(381,0,-515);
return done;
}
#ifdef __STDC__
int p560(void)
#else
int p560()
#endif
{
int done=0;
   if (KEY(515)) {
   if (bitest(381,4)) {
   move(380,-2);
   }
   move(378,-2);
   }
return done;
}
#ifdef __STDC__
int p113(void)
#else
int p113()
#endif
{
int done=0;
   move(380,0,-519);
   move(482,0,515,523,518,520,-514);
   if (!anyof(516,517,524,521,-1)) return 0;
   p601();
return done;
}
#ifdef __STDC__
int p114(void)
#else
int p114()
#endif
{
int done=0;
   if (!anyof(514,515,516,517,518,519,520,521,523,524,-1)) return 0;
   if (irand(100)<25) {
   move(381,-2);
   }
   if (irand(100)<40) {
   move(482,-2);
   }
   p601();
return done;
}
#ifdef __STDC__
int p328(void)
#else
int p328()
#endif
{
int done=0;
   if (KEY(4)) {
   if (isnear(4,-1,-1)) {
   if (value[4]==1) {
   say(76,1130,4);
   }
   say(76,1701,668);
   }
   return 0;
   }
   (*procs[533])();
return done;
}
#ifdef __STDC__
int p229(void)
#else
int p229()
#endif
{
int done=0;
   if (!anyof(554,591,-1)) return 0;
   set('V',696,'c',1,NULL,NULL);
   if (value[669]<LPROC && value[669]>= 0) (*procs[value[669]])(); else pcall(value[669]);
return done;
}
#ifdef __STDC__
int p230(void)
#else
int p230()
#endif
{
int done=0;
   if (KEY(3)) {
   default_to(1,value[670],3);
   }
   if ((((value[715]==3) &&
   value[696]>1) &&
   bitest(evar(669),3)) &&
   !(bitest(evar(669),4))) {
   set('V',699,'c',0,NULL,NULL);
   if (((value[HERE]==378)) &&
   bitest(evar(669),13)) {
   set('V',699,'c',1,NULL,NULL);
   }
   if (((value[HERE]==379)) &&
   bitest(evar(669),14)) {
   set('V',699,'c',1,NULL,NULL);
   }
   if (value[699]==1) {
   apport(value[669],value[670]);
   bitmod('s',evar(669),4);
   }}
   p311();
   if (value[698]==1) {
   if ((KEY(85)) &&
   isnear(85,-1,-1)) {
   say(64,1306,0);
   }
   p250();
   }
   set('V',700,'c',0,NULL,NULL);
   if (value[696]==1) {
   set('V',700,'c',1,NULL,NULL);
   }
   default_to(0,value[HERE],3);
   if (!anyof(101,100,113,112,63,38,106,
   116,56,109,78,95,82,-1)) return 0;
   if (KEY(101)) {
   p233();
   } else {
   if (KEY(100)) {
   p234();
   } else {
   if (KEY(113)) {
   p236();
   } else {
   if (KEY(112)) {
   p243();
   } else {
   if ((((KEY(63)) &&
   (value[HERE]==299)) &&
   ishere(63,-1,-1)) &&
   value[63]!=1) {
   say(64,977,0);
   }
   if (KEY(38)) {
   p232();
   } else {
   if (KEY(116)) {
   p242();
   } else {
   if (KEY(56)) {
   p238();
   } else {
   if (KEY(109)) {
   p235();
   } else {
   if (KEY(78)) {
   p237();
   } else {
   if (KEY(95)) {
   p240();
   } else {
   if ((KEY(82)) &&
   ishere(82,-1,-1)) {
   say(64,1669,0);
   }}}}}}}}}}}
return done;
}
