/*
 * Copyright 2007 by Ko Soe Min
 * Copyright 2010 by Seth N. Hetu
 *
 * Please refer to the end of the file for licensing information
 */

#ifndef _BURGLISH_DATA
#define _BURGLISH_DATA


#include <string>
#include "NGram/wz_utilities.h"


const std::wstring BURGLISH_ONSETS =	waitzar::preparse_json(std::wstring(L"") + 
										L"{\"zz\":\"\u1008\",\"zw\":\"\u1007\u103D\",\"zh\":\"\u1008\",\"z\":\"\u1007|\u1008\",\"yy\":\"\u101A|\u101A\u103B\",\"yw\":\"\u101B\u103D|\u101A\u103D\",\"yh\":\"\u101A|\u101A\u103B|\u101A\u103E\",\"y\":\"\u101B|\u101A|\u101C\u103B|\u101A\u103B\",\"x\":\"\u1006|\u1005\",\"wh\":\"\u101D\u103E\",\"w\":\"\u101D\",\"v\":\"\u1017|\u1018\",\"u\":\"\u1021\",\"ty\":\"\u1010\u103B|\u1010\u103C\",\"tw\":\"\u1010\u103D\",\"tt\":\"\u100B\",\"tr\":\"\u1010\u103B|\u1010\u103C\",\"thw\":\"\u101E\u103D\",\"th\":\"\u101E\",\"t\":\"\u1010|\u100B|\u1011\",\"sy\":\"\u1006\u103C\",\"sw\":\"\u1005\u103D|\u1006\u103D\",\"ss\":\"\u1006\",\"shw\":\"\u101B\u103D\u103E\",\"sh\":\"\u101B\u103E|\u101C\u103B\u103E|\u101E\u103B\u103E\",\"s\":\"\u1005|\u1006\",\"r\":\"\u101B|\u101A|\u101C\u103B\",\"q\":\"\u1000\",\"py\":\"\u1015\u103C|\u1015\u103B\",\"pw\":\"\u1015\u103D\",\"phy\":\"\u1016\u103C|\u1016\u103B\",\"phw\":\"\u1016\u103D\",\"ph\":\"\u1016\",\"p\":\"\u1015\",\"o\":\"\u1021\",\"ny\":\"\u100A|\u1004\u103C|\u1009\",\"nw\":\"\u1014\u103D\",\"nn\":\"\u100F\",\"nhy\":\"\u100A\u103E|\u1004\u103C\u103E|\u1025\u103E\"," + 
										L"\"nhw\":\"\u1014\u103D\u103E\",\"nhg\":\"\u1004\u103E\",\"nh\":\"\u1004\u103E|\u1014\u103E|\u100F\u103E\",\"ngw\":\"\u1004\u103D\",\"ngh\":\"\u1004\u103E\",\"ng\":\"\u1004\",\"n\":\"\u1014|\u100F\",\"my\":\"\u1019\u103C|\u1019\u103B\",\"mw\":\"\u1019\u103D|\u1019\u103C\u103D\",\"mhy\":\"\u1019\u103B\u103E|\u1019\u103C\u103E\",\"mhw\":\"\u1019\u103D\u103E|\u1019\u103C\u103D\u103E\",\"mh\":\"\u1019\u103E\",\"m\":\"\u1019\",\"ly\":\"\u101C\u103B|\u101C\u103B\u103E\",\"lw\":\"\u101C\u103D|\u101C\u103D\u103E\",\"ll\":\"\u1020\",\"lhy\":\"\u101C\u103B\u103E|\u101C\u103B\",\"lhw\":\"\u101C\u103D\u103E\",\"lh\":\"\u101C\u103E|\u1020\u103E\",\"l\":\"\u101C|\u1020\",\"kyw\":\"\u1000\u103C\u103D|\u1000\u103B\u103D\",\"ky\":\"\u1000\u103B|\u1000\u103C\",\"kw\":\"\u1000\u103D\",\"khw\":\"\u1001\u103D\",\"kh\":\"\u1001\",\"k\":\"\u1000|\u1001\",\"j\":\"\u1002\u103B|\u1002\u103C\",\"i\":\"\u1021\",\"hw\":\"\u101F\u103D\",\"htw\":\"\u1011\u103D\",\"htt\":\"\u100C\",\"ht\":\"\u1011|\u100C|\u100B\u1039\u100C\",\"hs\":\"\u1006\",\"hnw\":\"\u1014\u103D\u103E\",\"hn\":\"\u1014\u103E|\u100F\u103E\"," + 
										L"\"hmy\":\"\u1019\u103B\u103E|\u1019\u103C\u103E\",\"hmw\":\"\u1019\u103D\u103E|\u1019\u103C\u103D\u103E\",\"hm\":\"\u1019\u103E\",\"hly\":\"\u101C\u103B\u103E|\u101C\u103B\",\"hlw\":\"\u101C\u103D\u103E\",\"hl\":\"\u101C\u103E|\u1020\u103E\",\"hdd\":\"\u100E\",\"hd\":\"\u100D|\u100E\",\"h\":\"\u101F\",\"gy\":\"\u1002\u103B|\u1002\u103C|\u1000\u103C\",\"gw\":\"\u1002\u103D\",\"gh\":\"\u1003\",\"gg\":\"\u1003\",\"g\":\"\u1002|\u1000|\u1003\",\"fy\":\"\u1016\u103C|\u1016\u103B\",\"fw\":\"\u1016\u103D|\u1018\u103D\",\"f\":\"\u1016\",\"e\":\"\u1021\",\"dw\":\"\u1012\u103D|\u1012\u103C\",\"dr\":\"\u1012\u103D|\u1012\u103C\",\"dd\":\"\u1013\",\"d\":\"\u1012|\u1013|\u1010|\u100D|\u100E\",\"chw\":\"\u1001\u103B\u103D|\u1001\u103C\u103D\",\"ch\":\"\u1001\u103B|\u1001\u103C\",\"c\":\"\u1000\",\"by\":\"\u1017\u103B|\u1017\u103C|\u1018\u103B\",\"bw\":\"\u1018\u103D|\u1017\u103D|\u1015\u103D\",\"b\":\"\u1018|\u1017|\u1015\",\"a\":\"\u1021\"}");

const std::wstring BURGLISH_RHYMES =	waitzar::preparse_json(std::wstring(L"") + 
										L"{\"ynn\":\"-\u1004\u103A\u1038\",\"yn\":\"-\u1004\u103A|-\u1004\u103A\u1038\",\"ye\":\"-\u102D\u102F\u1004\u103A\u1038|-\u102D\u102F\u1004\u103A|-\u102D\u102F\u1004\u103A\u1037\",\"y\":\"-\u102D\u102F\u1004\u103A|-\u102D\u102F\u1004\u103A\u1038|-\u102D\u102F\u1004\u103A\u1037\",\"uz\":\"-\u103D\u1007\u103A|-\u1031\u102C\u1007\u103A\",\"uu\":\"-\u1030\u1038\",\"ut\":\"-\u103D\u1010\u103A|-\u103D\u1015\u103A|-\u1031\u102C\u1010\u103A|-\u103D\u100B\u103A\",\"urt\":\"-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"urr\":\"-\u102C\u1038\",\"urk\":\"-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"urh\":\"-\u102C\u1037\",\"urd\":\"-\u102C\u1012\u103A|-\u102C\u100B\u1039\u100C\u103A|-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"urb\":\"-\u102C\u1018\u103A\",\"ur\":\"-\u102C|-\u102C\u1038|-\u102C\u1037\",\"unt\":\"-\u103D\u1014\u103A\u1037|-\u103D\u1036\u1037|-\u103D\u1019\u103A\u1037\",\"unn\":\"-\u103D\u1014\u103A\u1038|-\u103D\u1019\u103A\u1038|-\u1014\u103A\u1038|-\u103D\u100F\u103A\u1038\"," + 
										L"\"un\":\"-\u103D\u1014\u103A|-\u103D\u1014\u103A\u1038|-\u103D\u1019\u103A|-\u103D\u1036|-\u103D\u100F\u103A|-\u103D\u100F\u103A\u1038\",\"umt\":\"-\u103D\u1019\u103A\u1037\",\"umm\":\"-\u103D\u1019\u103A\u1038|-\u103D\u1019\u103A\",\"um\":\"-\u103D\u1019\u103A|-\u103D\u1019\u103A\u1038\",\"uh\":\"-\u1030\u1037\",\"u\":\"-\u1030|-\u102F|-\u1030\u1037\",\"t\":\"-\u1031\u102C\u1000\u103A\",\"rr\":\"-\u102C\u1038\",\"rh\":\"-\u102C\u1037\",\"r\":\"-\u102C|-\u102C\u1038|-\u102C\u1037\",\"oy\":\"-\u103D\u102D\u102F\u1004\u103A\",\"ove\":\"-\u102F\u1017\u103A\",\"ov\":\"-\u102F\u1017\u103A\",\"out\":\"-\u1031\u102C\u1000\u103A|-\u1031\u102C\u1010\u103A|-\u1031\u102C\u1002\u103A\",\"ount\":\"-\u1031\u102C\u1004\u103A\u1037\",\"ounh\":\"-\u1031\u102C\u1004\u103A\u1037\",\"oung\":\"-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038\",\"oun\":\"-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038|-\u1031\u102C\u1004\u103A\u1037|-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038\",\"o\":\"-\u102D\u102F\u1038|-\u102D\u102F\"," + 
										L"\"oth\":\"-\u102D\u102F\u1037\",\"ote\":\"-\u102F\u1010\u103A|-\u102F\u1015\u103A|-\u102F\u1000\u103A|-\u102F\u1005\u103A|-\u102F\u1007\u103A|-\u102F\u1002\u103A|-\u102F\u100B\u103A\",\"ot\":\"-\u1031\u102C\u1037|-\u102F\u1010\u103A|-\u102F\u1015\u103A|-\u102F\u1000\u103A|-\u102F\u1005\u103A|-\u102F\u1007\u103A|-\u102F\u1002\u103A|-\u102F\u100B\u103A|-\u102D\u102F\u1037|-\u1031\u102C\u1037|-\u102D\u102F\u101A\u103A\u1037\",\"ort\":\"-\u1031\u102C\u1037\",\"orh\":\"-\u1031\u102C\u1037\",\"or\":\"-\u1031\u102C\u103A|-\u1031\u102C\",\"ope\":\"-\u102F\u1015\u103A|-\u102F\u1010\u103A\",\"op\":\"-\u102D\u102F\u1037|-\u1031\u102C\u1037|-\u102D\u102F\u101A\u103A\u1037|-\u102F\u1015\u103A|-\u102F\u1010\u103A\",\"ooz\":\"-\u103D\u1007\u103A|-\u1031\u102C\u1007\u103A\",\"oot\":\"-\u103D\u1010\u103A|-\u103D\u1015\u103A\",\"oont\":\"-\u103D\u1014\u103A\u1037|-\u103D\u1019\u103A\u1037\",\"oonh\":\"-\u103D\u1014\u103A\u1037|-\u103D\u1019\u103A\u1037\",\"oon\":\"-\u103D\u1014\u103A\u1038|-\u103D\u1014\u103A|-\u103D\u1019\u103A\u1038|-\u103D\u1019\u103A\"," + 
										L"\"oomt\":\"-\u103D\u1019\u103A\u1037|-\u103D\u1014\u103A\u1037\",\"oomh\":\"-\u103D\u1019\u103A\u1037|-\u103D\u1014\u103A\u1037\",\"oom\":\"-\u103D\u1019\u103A\u1038|-\u103D\u1019\u103A\",\"ood\":\"-\u103D\u1012\u103A|-\u103D\u1010\u103A\",\"oo\":\"-\u102D\u102F\u1038|-\u1030\u1038\",\"ont\":\"-\u103D\u1014\u103A\u1037|-\u103D\u1036\u1037|-\u103D\u1019\u103A\u1037|-\u102F\u1014\u103A\u1037|-\u102F\u1036\u1037\",\"one\":\"-\u102F\u1014\u103A\u1038|-\u102F\u1019\u103A\u1038|-\u102F\u1036\u1038|-\u102F\u1009\u103A\u1038|-\u102F\u1014\u103A|-\u102F\u1019\u103A|-\u102F\u1036\",\"on\":\"-\u103D\u1014\u103A|-\u103D\u1036|-\u102F\u1036|-\u103D\u100F\u103A\",\"ol\":\"-\u102D\u102F\u101C\u103A|-\u1031\u102C|-\u102D\u102F\u1020\u103A\",\"oke\":\"-\u102F\u1000\u103A\",\"ok\":\"-\u102F\u1000\u103A\",\"oi\":\"-\u103D\u102D\u102F\u1004\u103A\",\"ohnh\":\"-\u102F\u1014\u103A\u1037|-\u102F\u1019\u103A\u1037\",\"ohn\":\"-\u102F\u1014\u103A\u1038|-\u102F\u1019\u103A\u1038\",\"ohmh\":\"-\u102F\u1014\u103A\u1037|-\u102F\u1019\u103A\u1037\"," + 
										L"\"ohm\":\"-\u102F\u1014\u103A\u1038|-\u102F\u1019\u103A\u1038\",\"oh\":\"-\u102D\u102F\u1037|-\u1031\u102C\u1037|-\u102D\u102F\u101A\u103A\u1037\",\"oet\":\"-\u102D\u102F\u1037\",\"oeh\":\"-\u102D\u102F\u1037\",\"oe\":\"-\u102D\u102F\u1038\",\"ode\":\"-\u102F\u1012\u103A|-\u102F\u100E\u103A\",\"od\":\"-\u102F\u1012\u103A|-\u102F\u100E\u103A\",\"oav\":\"-\u102F\u1017\u103A\",\"oat\":\"-\u102F\u1010\u103A|-\u102F\u1015\u103A|-\u102F\u1000\u103A|-\u102F\u1005\u103A|-\u102F\u1007\u103A|-\u102F\u1002\u103A|-\u102F\u100B\u103A\",\"oap\":\"-\u102F\u1015\u103A|-\u102F\u1010\u103A\",\"oant\":\"-\u102F\u1014\u103A\u1037|-\u102F\u1019\u103A\u1037|-\u102F\u1036\u1037|-\u102F\u1009\u103A\u1037\",\"oann\":\"-\u102F\u1014\u103A\u1038|-\u102F\u1019\u103A\u1038|-\u102F\u1036\u1038|-\u102F\u1009\u103A\u1038\",\"oanh\":\"-\u102F\u1014\u103A\u1037|-\u102F\u1019\u103A\u1037|-\u102F\u1036\u1037|-\u102F\u1009\u103A\u1037\",\"oan\":\"-\u102F\u1014\u103A|-\u102F\u1019\u103A|-\u102F\u1036|-\u102F\u100F\u103A|-\u102F\u1009\u103A|-\u102F\u101C\u103A\"," + 
										L"\"oak\":\"-\u102F\u1000\u103A\",\"oad\":\"-\u102F\u1012\u103A|-\u102F\u100E\u103A|-\u102F\u101E\u103A\",\"oa\":\"-\u103D\u102C\",\"o\":\"-\u102D\u102F|-\u102D\u102F\u1038|-\u102D\u102F\u101B\u103A|-\u102D\u102F\u101A\u103A|-\u102D\u102F\u1020\u103A|-\u102D\u102F\u101F\u103A\",\"iz\":\"-\u1007\u103A|-\u102C\u1007\u103A\",\"ite\":\"-\u102D\u102F\u1000\u103A\",\"it\":\"-\u1005\u103A|-\u1010\u103A|-\u1031\u1010\u103A|-\u1031\u1000\u103A|-\u100B\u103A|-\u1031\u1005\u103A\",\"is\":\"-\u1005\u103A|-\u1010\u103A|-\u1031\u1010\u103A|-\u1031\u1000\u103A|-\u100B\u103A|-\u1031\u1005\u103A|-\u1005\u103A|-\u1031\u1005\u103A\",\"int\":\"-\u1004\u103A\u1037|-\u1009\u103A\u1037\",\"inn\":\"-\u1004\u103A\u1038|-\u1009\u103A\u1038\",\"ing\":\"-\u1004\u103A\u1038|-\u1009\u103A\u1038\",\"ine\":\"-\u102D\u102F\u1004\u103A|-\u102D\u102F\u1004\u103A\u1038|-\u102D\u102F\u100F\u103A\u1038\",\"in\":\"-\u1004\u103A|-\u1004\u103A\u1038|-\u1009\u103A|-\u1031\u1014\u103A|-\u1009\u103A\u1038\",\"ike\":\"-\u102D\u102F\u1000\u103A\"," + 
										L"\"ik\":\"-\u1005\u103A|-\u1010\u103A|-\u1031\u1010\u103A|-\u1031\u1000\u103A|-\u100B\u103A|-\u1031\u1005\u103A\",\"ii\":\"-\u102E\u1038|-\u100A\u103A\u1038|-\u100A\u103A\u1037\",\"ih\":\"-\u100A\u103A\u1037\",\"ide\":\"-\u102D\u102F\u1012\u103A\",\"id\":\"-\u1005\u103A\",\"i\":\"-\u102D|-\u102E|-\u100A\u103A|-\u100A\u103A\u1038|-\u100A\u103A\u1037\",\"g\":\"-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038\",\"f\":\"-\u103A\",\"eyy\":\"-\u1031\u1038|-\u100A\u103A\u1038\",\"eyt\":\"-\u1031\u1037|-\u100A\u103A\u1037\",\"eyh\":\"-\u1031\u1037|-\u100A\u103A\u1037\",\"ey\":\"-\u1031|-\u100A\u103A|-\u1031\u1038|-\u1031\u1037|-\u100A\u103A\u1038|-\u1031\u1038|-\u100A\u103A\u1038\",\"et\":\"-\u1000\u103A|-\u1010\u103A|-\u1015\u103A\",\"ert\":\"-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A|-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"err\":\"-\u102C\u1038\",\"erk\":\"-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"erh\":\"-\u102C\u1037\",\"erd\":\"-\u102C\u1012\u103A|-\u102C\u100B\u1039\u100C\u103A\"," + 
										L"\"erb\":\"-\u102C\u1018\u103A\",\"er\":\"-\u102C|-\u102C\u1038|-\u102C\u1037\",\"en\":\"-\u1032\u1014\u103A\u1038|-\u1032\u1014\u103A|-\u1014\u103A\",\"elh\":\"-\u1032\u1037|-\u101A\u103A\u1037|-\u100A\u103A\u1037\",\"el\":\"-\u1032|-\u101A\u103A|-\u100A\u103A|-\u100A\u103A\u1038|-\u1032\u1037|-\u100A\u103A\u1037\",\"ek\":\"-\u1000\u103A\",\"eit\":\"-\u102D\u1010\u103A|-\u102D\u1015\u103A|-\u102D\u1000\u103A|-\u102D\u100B\u103A|-\u102D\u101E\u103A\",\"eint\":\"-\u102D\u1014\u103A\u1037|-\u102D\u1019\u103A\u1037\",\"einn\":\"-\u102D\u1014\u103A\u1038|-\u102D\u1019\u103A\u1038|-\u102D\u100F\u103A\u1038\",\"einh\":\"-\u102D\u1014\u103A\u1037|-\u102D\u1019\u103A\u1037\",\"ein\":\"-\u102D\u1014\u103A|-\u102D\u1019\u103A|-\u102D\u1036|-\u102D\u1004\u103A|-\u102D\u1009\u103A|-\u102D\u100F\u103A|-\u102D\u101C\u103A\",\"eih\":\"-\u1031\u1037|-\u1032\u1037|-\u101A\u103A\u1037|-\u100A\u103A\u1037\",\"ei\":\"-\u1031\u1038|-\u1032|-\u101A\u103A|-\u1031|-\u100A\u103A\u1038|-\u100A\u103A\",\"eh\":\"-\u1032\u1037|-\u100A\u103A\u1037|-\u1031\u1037|-\u1032|-\u100A\u103A\"," + 
										L"\"ee\":\"-\u102E\u1038|-\u100A\u103A\u1038\",\"eck\":\"-\u1000\u103A\",\"ec\":\"-\u1000\u103A\",\"e`\":\"-\u1032\u1037|-\u1032\",\"e\":\"-\u102E|-\u1032|-\u100A\u103A|-\u101A\u103A|-\u1031|-\u1031\u1038|-\u100A\u103A\u1037|-\u1032\u1037\",\"ayy\":\"-\u1031\u1038|-\u100A\u103A\u1038\",\"ayt\":\"-\u1031\u1037|-\u100A\u103A\u1037\",\"ayh\":\"-\u1031\u1037|-\u100A\u103A\u1037\",\"aye\":\"-\u1031\u1038|-\u100A\u103A\u1038\",\"ay\":\"-\u1031|-\u100A\u103A|-\u1031\u1038|-\u1031\u1037|-\u100A\u103A\u1038\",\"aww\":\"-\u1031\u102C\",\"awt\":\"-\u1031\u102C\u1037\",\"awn\":\"-\u1031\u102C\u1014\u103A\",\"awh\":\"-\u1031\u102C\u1037\",\"aw\":\"-\u1031\u102C|-\u1031\u102C\u103A|-\u1031\u102C\u1037|-\u1031\u102C\u101D\u103A\",\"ave\":\"-\u102D\u1017\u103A\",\"av\":\"-\u1017\u103A\",\"aut\":\"-\u1031\u102C\u1000\u103A|-\u1031\u102C\u1010\u103A\",\"aunt\":\"-\u1031\u102C\u1004\u103A\u1037\",\"aunh\":\"-\u1031\u102C\u1004\u103A\u1037\",\"aung\":\"-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038\"," + 
										L"\"aun\":\"-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038|-\u1031\u102C\u1004\u103A\u1037|-\u1031\u102C\u1004\u103A|-\u1031\u102C\u1004\u103A\u1038\",\"auk\":\"-\u1031\u102C\u1000\u103A|-\u1031\u102C\u1010\u103A\",\"a\":\"-\u1031\u102C\",\"ath\":\"-\u101E\u103A\",\"ate\":\"-\u102D\u1010\u103A|-\u102D\u1015\u103A|-\u102D\u1007\u103A|-\u102D\u1005\u103A|-\u102D\u1000\u103A|-\u102D\u100B\u103A|-\u102D\u101E\u103A\",\"at\":\"-\u1010\u103A|-\u1000\u103A|-\u1015\u103A|-\u101F\u103A|-\u100B\u103A\",\"art\":\"-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A|-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"arr\":\"-\u102C\u1038\",\"arnn\":\"-\u102C\u1014\u103A\u1038|-\u102C\u100F\u103A\u1038\",\"arn\":\"-\u102C\u1014\u103A|-\u102C\u100F\u103A|-\u102C\u101F\u103A\",\"arl\":\"-\u102C\u101A\u103A|-\u102C\u100A\u103A\",\"ark\":\"-\u102C\u1010\u103A|-\u102C\u1000\u103A|-\u102C\u101F\u103A\",\"arh\":\"-\u102C\u1037\",\"ard\":\"-\u102C\u1012\u103A|-\u102C\u100B\u1039\u100C\u103A\",\"arb\":\"-\u102C\u1018\u103A\"," + 
										L"\"ar\":\"-\u102C|-\u102C\u1038|-\u102C\u1037\",\"ape\":\"-\u102D\u1015\u103A\",\"ap\":\"-\u1015\u103A\",\"ant\":\"-\u1014\u103A\u1037|-\u1036\u1037|-\u1019\u103A\u1037\",\"ann\":\"-\u1014\u103A\u1038|-\u1019\u103A\u1038|-\u100F\u103A\u1038\",\"an\":\"-\u1014\u103A|-\u1036|-\u1019\u103A|-\u100F\u103A|-\u101C\u103A\",\"amm\":\"-\u1019\u103A\u1038\",\"am\":\"-\u1019\u103A|-\u1019\u103A\u1038|-\u1014\u103A|-\u1036\",\"alh\":\"-\u101A\u103A\u1037|-\u1032\u1037|-\u100A\u103A\u1037|-\u1032|-\u100A\u103A\",\"al\":\"-\u101A\u103A|-\u1032|-\u100A\u103A|-\u100A\u103A\u1038|-\u1032\u1037|-\u100A\u103A\u1037|-\u101C\u103A\",\"ake\":\"-\u102D\u1000\u103A|-\u102D\u1010\u103A\",\"ak\":\"-\u1000\u103A\",\"aiv\":\"-\u102D\u1017\u103A\",\"ait\":\"-\u102D\u1010\u103A|-\u102D\u1015\u103A|-\u102D\u1007\u103A|-\u102D\u1005\u103A|-\u102D\u1000\u103A\",\"aip\":\"-\u102D\u1015\u103A\",\"aint\":\"-\u102D\u1014\u103A\u1037|-\u102D\u1019\u103A\u1037\",\"ainn\":\"-\u102D\u1014\u103A\u1038|-\u102D\u1019\u103A\u1038|-\u102D\u100F\u103A\u1038\",\"ainh\":\"-\u102D\u1014\u103A\u1037|-\u102D\u1019\u103A\u1037\"," + 
										L"\"aing\":\"-\u102D\u102F\u1004\u103A|-\u102D\u102F\u1004\u103A\u1038\",\"ain\":\"-\u102D\u1014\u103A|-\u102D\u1019\u103A|-\u102D\u1036|-\u102D\u1004\u103A|-\u102D\u1009\u103A|-\u102D\u100F\u103A|-\u102D\u101C\u103A\",\"aik\":\"-\u102D\u1000\u103A|-\u102D\u1010\u103A\",\"aid\":\"-\u102D\u1010\u103A|-\u102D\u1015\u103A|-\u102D\u1000\u103A|-\u102D\u100B\u103A|-\u102D\u101E\u103A|-\u102D\u1012\u103A\",\"ai\":\"-\u102D\u102F\u1004\u103A\u1038|-\u102D\u102F\u1004\u103A|-\u102D\u102F\u100F\u103A\u1038|-\u102D\u102F\u1004\u103A\u1037|-\u1031\",\"ag\":\"-\u1002\u103A\",\"aeh\":\"-\u1031\u1037|-\u100A\u103A\u1037|-\u1032\u1037\",\"ae\":\"-\u101A\u103A|-\u1032|-\u1031|-\u100A\u103A|-\u1031\u1038\",\"ade\":\"-\u102D\u1012\u103A\",\"ad\":\"-\u1012\u103A|-\u100E\u103A\",\"ack\":\"-\u1000\u103A\",\"ac\":\"-\u1000\u103A\",\"ab\":\"-\u1018\u103A\",\"a`\":\"-\u1032\u1037|-\u1032\",\"a\":\"-|-\u102C\u1037\",\"`\":\"-\u1032\u1037|-\u1032\"}");

const std::wstring BURGLISH_SPECIALS =  waitzar::preparse_json(std::wstring(L"") + 
										L"{\"a\":\"\u1021\u1005\u103A|\u1021|\u1021\u1031\",\"ae\":\"\u1021\u1032\",\"ag\":\"\u1021\u1031\u102C\u1004\u103A\",\"ah\":\"\u1021\",\"aw\":\"\u102A\",\"ay\":\"\u1027\",\"b\":\"\u1015\u103C\u102E\",\"d\":\"\u1012\u102E\",\"e\":\"\u1024\",\"ei\":\"\u1023|\u104F|\u1024|\u1021\u102D|\u1021\u102E\",\"el\":\"\u1027\u100A\u103A\u1037\",\"eu\":\"\u1021\u1030\",\"f\":\"--\u103A\",\"h\":\"--\u1037\",\"hnite\":\"\u104C\",\"imm\":\"\u1021\u1004\u103A\u1038\u1019\u103A...\",\"it\":\"\u1027\u1010\u103A\",\"kyar\":\"\u1000\u103B\u102C\u103A\",\"kyarr\":\"\u1000\u103B\u102C\u103A\u1038\",\"kyunote\":\"\u1000\u103B\u103D\u1014\u103A\u102F\u1015\u103A\",\"nhite\":\"\u104C\",\"nyin\":\"\u100A\u102C\u1009\u103A\",\"o\":\"\u1021\u102D\u102F\",\"oh\":\"\u1021\u102D\u102F\u1038\",\"oo\":\"\u1025|\u1026\u1038\",\"or\":\"\u102A\",\"own\":\"\u1021\u102F\u1036\u1038\",\"p\":\"\u1015\u103C\u102E\",\"r\":\"\u1021\u102C\",\"shat\":\"\u101A\u103E\u1000\u103A\",\"shin\":\"\u101A\u103E\u1009\u103A\",\"tun\":\"\u1011\u103D\u1014\u103A\u1038\",\"u\":\"\u101A\u1030|\u1025|\u1026\u1038|\u1021\u1030|\u1021\u102F\"," + 
										L"\"um\":\"\u1021\u1019\u103A\",\"umm\":\"\u1021\u1019\u103A\",\"yin\":\"\u101A\u102C\u1009\u103A|\u101A\u103B\u102C\u1009\u103A\",\"yway\":\"\u104D\",\"ywe\":\"\u104D\",\"4\":\"\u104E\u1004\u103A\u1038\",\";\":\"\u1038\",\".\":\"\u104B|\u1015\u103C\u102E|\u1024|\u101E\u100A\u103A|\u104F\",\",\":\"\u104A|\u1015\u103C\u102E\u1038|\u104D|\u1014\u103E\u1004\u103A\u1037|\u104C\"}");

const std::wstring BURGLISH_NUMBER_LITERALS[] = {L"\u1010\u1005\u103A", L"\u1014\u103E\u1005\u103A", L"\u101E\u102F\u1036\u1038", L"\u101C\u1031\u1038", L"\u1004\u102B\u1038", L"\u1001\u103C\u1031\u102C\u1000\u103A", L"\u1001\u102F\u1014\u103E\u1005\u103A", L"\u101B\u103E\u1005\u103A", L"\u1000\u102D\u102F\u1038"};
const std::wstring BURGLISH_NUMBER_COMBINERS_SING[] = {L"\u1006\u101A\u103A", L"\u101B\u102C", L"\u1011\u1031\u102C\u1004\u103A", L"\u101E\u1031\u102C\u1004\u103A\u1038", L"\u101E\u102D\u1014\u103A\u1038", L"\u101E\u1014\u103A\u1038", L"\u1000\u102F\u100B\u1031"};const std::wstring BURGLISH_NUMBER_COMBINERS_DOUB[] = {L"\u1006\u101A\u103A\u1037", L"\u101B\u102C\u1037", L"\u1011\u1031\u102C\u1004\u103A\u1037", L"\u101E\u1031\u102C\u1004\u103A\u1038", L"\u101E\u102D\u1014\u103A\u1038", L"\u101E\u1014\u103A\u1038", L"\u10ac00\u102F\u100B\u1031"};
const unsigned int BURGLISH_TOTAL_COMBINERS = 7;


#endif //_BURGLISH_DATA

/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

