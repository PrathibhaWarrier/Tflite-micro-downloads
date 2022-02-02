#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv11_input_int16_test_data.h"

const unsigned int g_conv11_input_int16_test_data_size = 1344;alignas(16) const int16_t g_conv11_input_int16_test_data[] = {17810,-16490,-1248,-11427,-28679,20985,-10961,19729,-4961,11689,-30851,474,-29275,25662,16029,-10940,13955,-15434,17644,-23083,23181,9706,17048,-24306,17096,5925,18009,12877,-3743,-11970,2925,24344,20920,-12423,329,12333,-24677,31646,17882,15004,-30103,-24727,-14747,3441,-3199,-22090,6706,979,-9690,-31973,21899,19399,-27278,430,-17816,27520,-32655,20367,6861,-23284,-59,-6253,4629,5329,-18461,32416,28110,-21612,8840,-23875,-32026,-22159,27715,11024,3223,-25225,-4820,-14402,15634,7792,27636,-18837,24428,-9332,32198,5791,25116,-817,-29200,-12016,-9283,24106,7444,-6981,1551,-17308,-26351,-2299,-28472,-10632,-27410,-14719,29610,-31516,25224,8065,21034,-18587,32517,23124,-28192,14351,25665,30871,8965,25283,830,16100,17428,25832,29919,2657,-8471,-29457,10205,15637,17033,-30269,21571,-31382,5573,31958,-9114,1284,-31852,15425,-19670,31359,-12359,-17594,30152,18698,-16409,-11193,124,21459,-6177,8347,-30191,22457,-22095,28405,-25972,-29292,-25221,13782,-13376,18721,12478,-28292,26878,1640,-4148,-7815,25340,-12573,-12152,-22853,507,29073,19954,-21729,-1066,14933,1298,18330,-23694,-27384,5552,2312,-1724,8882,-5678,-13034,9723,-17799,-15717,9981,-7640,-30796,-24761,9593,-9785,24458,-8956,9026,-25130,15133,15202,-4740,23030,-31164,-1699,-24034,20018,-7569,-5149,27215,7558,-30528,4814,-26978,-7276,32383,-4011,15405,-14471,-9084,15951,-20313,-26748,-7075,-10337,-23754,-30050,-9292,15337,-6857,14305,73,462,12092,14690,21051,-17367,30263,17495,2609,-6761,-5608,-22540,-4641,15668,-27701,13382,18956,-11649,-20567,29853,-31133,-4042,-24807,29046,-14575,13179,-5621,12583,-14229,-28429,10032,5355,28337,938,-20381,9251,15799,6217,-1019,20425,6394,18576,13139,-19622,-3422,17620,4732,-14440,24449,-4503,-32752,-15926,-14279,12622,12788,-6212,-22526,-7228,-21978,5633,31647,30944,12152,1560,-18408,-25258,16390,14366,26748,20784,-1461,18192,-25368,31179,-9913,-10228,9638,-31418,21995,7618,-16623,-18652,2063,15785,7823,3558,8787,-1546,-26302,-11013,19518,12146,-17780,-19068,-159,23998,3557,-6912,-24663,-24851,-148,22083,-28580,32208,-21493,-31294,-26216,-10808,7280,-24037,-27003,21925,-28251,30351,-25881,31657,27561,-19951,-1156,24685,-20893,-29878,-13310,-799,-10444,20639,28398,-32239,22488,30131,-17402,28234,30300,-13413,-17026,16102,-19812,26142,21485,15649,-27120,12237,30515,-12073,7308,-10450,1602,8328,21666,9234,-27583,-11036,-19891,-21677,-10546,-6845,5062,30132,5003,7427,-2628,12541,-6961,17981,-29187,7215,5196,-31096,-20452,-20079,1036,15459,-32651,8641,-18343,25688,9666,21614,26034,-29627,-27801,-8883,8538,-30190,-21578,26942,-7889,13139,5094,-5955,15337,23062,25581,8836,8892,-28505,-2692,-27032,15157,-17739,-31849,-22495,10223,-29207,-10523,-29280,27073,20218,7820,4000,9384,17415,25394,23404,-17943,-24146,18961,10511,-11840,-6444,-19274,-6653,21058,6652,-7416,-8482,4634,-31933,-571,-22225,28470,-5279,6813,-12928,-29336,-28000,-12637,-13456,29835,5610,19412,-27283,6894,-962,26872,11922,-9774,-5242,20690,2897,17414,-14215,-4906,4329,-6161,-30933,-243,14557,-22982,25022,-28231,18541,-2962,10191,-19733,15898,-4953,696,29933,5927,15437,9560,4607,-4356,20752,3075,26659,-24713,-5651,1008,21387,15773,31823,-16716,-14679,-30844,-22829,1940,16848,-13665,-15569,-10661,-1756,26430,-18933,-23166,12386,17613,-9869,1892,10469,-30984,-32621,-19034,11550,-4530,20118,-4921,29858,-31769,-31000,-10450,11218,-32653,16891,31456,-27604,-26589,-1914,-31726,-12909,6763,-9910,6981,-31265,-16506,3479,20748,22988,15971,-22654,-4587,-1572,-18124,10904,-19012,7446,-26977,-20975,12234,-27991,1527,26689,23279,17159,8840,-8349,17234,4068,16752,-20729,5797,-26078,-31174,-13762,2539,-11876,-31456,10626,-6524,15823,-23035,-3389,-25867,24959,17941,13312,23796,20132,14931,20375,1033,25535,3590,22601,13466,-31524,-27579,141,-20882,-4178,-29614,-15532,225,7019,-15146,-28402,12796,-8226,7598,32181,-8493,26149,7354,-25326,16944,-28684,1167,-5106,-31918,27453,26408,-8177,-27800,-12830,-26018,-5584,-4238,-10658,17579,25724,11034,6405,4486,31678,9493,-28598,15269,-9031,-5874,28453,17278,13055,-1879,-16522,-2425,-6044,-24799,-25781,-19282,12499,-21726,-28041,-9458,7333,-15765,24218,10160,19463,23574,18167,2511,21113,-11683,-28478,-19577,-32154,-24679,29806,30722,-18500,-10744,21656,-14464,-8173,-19896,-14101,17342,5970,-32652,-26576,-9683,-3939,32213,-7800,3541,9716,28763,20395,20849,6046,28976,9268,-14512,-3473,-17156,-6919,3189,-31400,-12300,16675,29832,-7044,9896,-3898,15207,-10173,5342,-16030,31786,8017,-28040,-31943,-14860,26616,-14953,-22799,-30745,23759,-27068,-13370,-14561,31886,11283,-6303,-31344,-16575,-6313,-3572,-3483,-8273,-15633,-10639,28293,-7288,-15963,13642,-10781,-25202,21817,8382,3495,-15872,614,10729,-27821,6457,-22689,-21577,-25921,-18897,-3492,-24493,-31105,-2427,70,9957,-19496,12454,-19716,17400,-31550,-32339,27413,4439,-6535,20138,11924,12826,31549,-1320,-10162,30587,-20866,-32530,-20792,20644,-1323,-10480,4236,-116,-13455,-13862,9468,17975,-10279,-2907,4385,-21500,-29288,21512,-2799,-3926,-514,14019,29249,-1488,12989,28956,32630,-17700,20949,30931,21864,-25058,7015,-8586,17374,-25135,-29773,-31956,17683,28418,-3484,-32575,-5174,3631,-5449,-10833,28610,-24880,-24309,-24376,2936,21884,32531,9785,-31651,-16296,22768,-14827,25459,-11288,-26919,-9785,7346,-23532,-29656,2608,2664,25521,16501,5750,-21369,1047,-23049,-18597,17329,-9247,-32315,-24727,-417,15584,31431,-32444,7259,-22699,25660,24179,-24129,9669,-32373,-22129,-15971,-2080,3799,27094,6454,-6406,-30717,839,-4303,-12014,95,-25680,21252,-3916,-3971,32684,28494,18391,-20068,-19029,-22167,15926,17373,9053,-14508,-31280,22369,7942,-11572,-2186,-10393,25826,2858,-22781,21150,-6113,-7180,-436,-27428,4672,21028,16806,31460,216,-26893,-16975,-24501,3128,749,-2576,25234,3567,17336,-26833,-30122,-3961,-17951,9554,20359,30824,-16492,22035,-4300,-1466,-6536,29289,-10046,17786,-27272,19967,8382,-17938,-30346,-14718,-16490,-19459,-1601,-30441,24043,-15101,-26707,3981,-15404,14692,-15262,-19491,11858,11443,27744,-28872,-2439,-15556,-26910,-32521,14791,13884,16541,-15650,-3437,6909,-28797,6413,-16190,-15341,-15935,-28986,30454,17672,-11045,-30643,-8611,6926,11321,8979,25131,8732,-32003,-24263,121,9578,-14799,-293,-3121,13123,-31602,25567,-7108,-18527,3872,9426,32419,-2436,-28184,-23585,24263,25931,12612,19150,-5564,-32116,-3398,28930,20827,28567,-12102,-29257,-3628,-14291,-29519,17133,-7696,-18729,32425,30589,17268,4544,20720,-10072,31849,-27986,27895,-22246,16655,24451,-21078,14080,6717,-19631,-20865,4425,15440,1675,3016,20690,16876,905,31300,21571,30325,-25657,17107,29796,20346,-28191,-23061,-23549,1089,-7844,27787,-5225,-2680,-21068,-10142,-6520,4480,-27437,-17509,17315,5574,-19685,-31923,-14773,-9086,23930,7764,18772,31337,-374,-22537,-11315,21443,31875,-25595,-12529,-17238,5612,-13515,12958,8977,-5825,7189,-12621,-12563,-21450,-4188,11118,19915,18624,5339,8432,30675,26412,-17380,22947,-4344,-4747,-860,-13659,16498,-1325,-21720,4579,-21402,1121,27076,24545,15224,-1564,-12520,7,-18615,32146,14287,-29504,2405,24415,8051,-31869,-12914,31001,-10239,-2097,-10294,-26482,-2239,11284,30835,16791,23402,-20428,-26329,-21462,21952,14167,-29413,12258,5612,741,-13029,-4046,-32672,-920,-4555,11658,-23469,-21031,25303,-12171,-32696,31268,-30498,2228,22661,163,-805,-27121,-26005,26592,-4488,-1928,-31300,-32765,-25416,-28882,29128,3988,-24783,-18810,16394,30379,19343,-21643,21819,21681,29672,-11740,-1068,14572,-19009,-9597,-27027,-31441,-32082,6341,-1636,-11310,-3924,-12346,-21516,-20784,-4149,19476,17420,-3924,32058,7248,3556,-12204,-29914,24832,24085,-16840,-12552,144,10451,-18982,8101,22272,-29608,-30950,-2845,-13187,-13013,-21309,21459,-6605,-27843,30777,-2803,16551,1848,10740,2032,9637,-7284,24230,30990,-10203,29656,8299,31458,31357,23618,16027,19918,-32493,2582,11124,-955,27035,-15885,8023,5265,-29629,-28300,18942,-24255,10304,-8357,58,11535,-9754,-13530,-26321,-27849,17065,-18830,-1616,14174,22004,-26845,-19489,2837,-17596,21358,2968,-7322,-25739,-18203,-11964,1196,1426,-23953,-29023,-13737,31142,-26080,-13947,-8713,-20184,32625,-16712,-6776,-25145,-7603,-7609,-28160,12488,32446,5215,3009,-15083,-17813,2614,-2199,21449,10929,17667,19092,11491,27542,3668,5319,26061,15815,27413,23470,12940,623,18317,19771,30839,1528,24187,-14473,5043,-15719,-26156,-9921,-18657,-11813,27740,-18426,2725,5808,-20638,-28171,-16123,-9375,-10255,15077,-25090
};