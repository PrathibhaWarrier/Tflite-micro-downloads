#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv2_golden_int16_test_data.h"

const unsigned int g_conv2_golden_int16_test_data_size = 2560;alignas(16) const int16_t g_conv2_golden_int16_test_data[] = {-32768,9714,-32768,-32768,32767,-6413,-15865,-32768,-13074,-21615,-2042,-712,4626,-28977,-16739,-800,15314,22469,32767,32767,32767,-32768,32767,19192,32767,32767,12982,-4084,756,28724,-32768,-15024,-19427,5423,-32768,18545,32767,-32768,-32768,32767,-32768,13351,-32768,739,6077,8947,-32768,-852,21710,8566,-13400,-2627,-32768,32767,19259,-8926,13099,32767,-3447,30675,21880,10852,24033,-6145,9340,-32768,13156,32767,4941,-32768,-32768,-32768,-12512,19245,-32768,-4816,29030,9679,-17984,-32768,-20987,32767,-32768,-32768,-6896,11574,8103,32767,15220,13432,-32768,32767,32767,-16302,24796,32767,-24312,-32768,32767,-32768,32767,-3907,31288,-32768,32767,-7334,-20898,-26683,-6328,10739,24337,4296,18991,948,-32768,-32768,-32768,-13083,2487,-32768,365,17867,-15548,-4199,-32768,-7344,12345,-24822,11488,4149,-32768,32767,-435,-32768,14867,19929,32767,32767,32767,24564,-13609,-6553,2995,-32768,22421,22936,13555,32767,-32768,19662,32767,-30849,22385,-12903,-2362,1369,10654,32767,24008,-4891,-11948,-32768,-4897,-17690,-32768,9970,-21215,27554,-32768,-22773,-32768,27611,-4897,32767,-1571,-918,-23403,-32768,-32768,-32768,-32768,3784,32767,32767,-32768,-343,-14764,8966,-32768,16678,-32768,-29259,-25811,16195,-606,-32768,8143,1018,9609,-32768,32767,32767,-6282,-7912,-32768,-25643,-767,32767,-32768,-26516,-31336,-32768,32767,32767,-32768,-32768,32767,-6747,32767,-23141,-32768,-15471,32767,32767,-4301,-32768,32767,2492,23364,32767,30032,32767,12615,11814,-18023,9006,30382,-18803,32767,3450,-664,32767,-32768,-7413,-29689,-28056,5930,-32768,17986,11159,-6765,-13719,-32768,-32768,-5869,-22148,-32768,-32768,-32768,21437,11470,32767,-32768,32767,10392,13300,-3959,-32768,-4716,-14681,-32623,-16295,-22514,32767,-25638,4828,-2828,8225,-27438,32767,2100,12193,-702,6068,15890,1423,32767,32767,30222,32224,-16765,-6392,-32768,32767,32767,32767,-8208,-15064,32767,20058,32767,3167,3193,31704,-32768,13703,-14825,32767,32767,4803,-25453,32767,10823,30289,-20080,32767,32767,-5544,32767,32767,22709,2517,-32768,29404,-32768,-32768,31447,3366,-12676,-28157,14051,1806,-32768,8295,-7435,-3536,-19159,32767,-4231,-25058,32767,6041,32767,26745,-32768,13624,32767,1749,32767,18025,1984,22367,-2772,-3095,32767,-10098,32767,-5943,32767,-12239,-10309,13966,-32768,23200,32767,9549,32767,7847,14431,6330,32767,-1331,-32768,-7440,-11631,32767,-14188,-17272,-32768,-21309,-10246,32767,-18005,523,19973,-24812,-22807,32767,-32768,2157,-32768,-32768,-30592,-32768,22365,-32768,-32768,-15487,-19199,-32768,-25952,32767,25729,-32768,-23551,32767,-27100,-32768,4014,23044,13846,2536,32767,-22481,-32768,25419,-8976,-32768,-16720,-32768,-32768,13001,-32768,-32768,8494,32767,-16907,29982,-30997,6185,32767,-32768,32767,-694,-2092,32767,-32768,-32768,-32768,19775,32767,19762,22911,-30276,13796,-24246,-16689,-32768,32767,-693,32767,4754,32767,12212,1327,-32768,29815,-32768,-32768,-28332,16984,32767,-19476,11942,32767,27129,31990,-12608,32767,-6054,14689,32767,-18851,5478,-32768,32767,32767,24109,-15672,32767,18226,-17918,-11808,-32768,-32113,-32768,8871,32767,32767,-32768,-32768,-13231,32767,-32768,-20474,8467,32767,32767,32767,32767,32767,-881,-8919,32767,26706,480,32767,-6610,32767,5810,-32210,-32768,-32768,-32768,32767,-32768,32767,32767,-19615,32767,32767,-7684,32767,28853,32767,32767,32767,32767,-30387,-18556,19056,32767,-32768,-32768,-15274,32767,-32768,-32768,-20297,-23697,-32768,-32768,-9943,-13641,-21616,-32768,32767,-32768,32767,6648,-32768,13207,-17081,32121,-32768,-23375,-32768,-24747,-6685,-32768,28395,24850,-32768,5860,-32768,12888,4976,32767,-28711,-6899,29869,-10513,3097,32767,-32768,-32768,-32768,-32768,-32768,-23434,-32768,-32768,9900,-32768,-32768,-32768,-32768,-7185,-20145,-32768,32767,-32768,17216,22664,-10646,29641,-32768,-29661,32767,-32768,-24870,-10486,-32768,-32768,-5037,-11080,-32768,-24027,32767,-32768,9386,-32768,21936,-1103,-12753,-32768,32767,2880,-32768,27034,349,32767,-14285,-32768,30813,2633,-32768,32767,-32768,-32768,7120,32767,32767,-31670,3549,-13199,-9718,-14419,-28741,-32768,29804,2856,1,-10062,-32768,15719,3147,32767,-18308,-17144,11509,3653,2659,32767,-32768,-22890,29903,32767,32000,32767,32767,8549,32767,-32768,8257,25225,616,812,20235,-6877,20796,-17489,-32768,5522,12237,-32768,2204,25220,27690,-32768,-12965,-32768,-32768,-2004,-32768,10801,4660,32767,-5704,32767,32767,-32768,10122,-2541,32767,-32768,22308,-32768,11817,-17277,18954,27623,32767,32767,-32768,-32768,32767,-32768,-32768,1819,-32768,-32768,-20216,-1369,-32768,4855,-10725,-32768,32767,-13337,-13540,32767,2761,-32410,32767,-7343,32767,-31109,-32768,-32768,-32768,4675,-32768,32767,-7122,-31253,32767,-2810,32767,3601,20157,-32768,32767,32767,32767,-32768,32767,-3926,32767,32767,5813,-6722,32767,5169,-3346,4019,-32768,-32768,32767,32767,23957,15976,-32768,-17049,32767,32767,13738,-32768,26767,-32392,749,-32768,32767,-10291,-7102,-3626,32767,-32768,-32768,9774,-8527,32767,-32768,-32768,20917,9054,-32768,-23983,-32768,-32768,-5183,-32768,277,-32768,-18321,-22915,-32768,29686,-32768,-32768,-30144,-32768,-21948,-9615,-32768,3274,-17672,-32768,32767,-25713,12870,-32768,4571,-32768,-32768,-3649,15706,-26654,32767,8279,32767,-32768,-32768,24703,9059,-32768,-5245,-1680,32767,-799,20795,-5004,-20204,18317,4254,-12363,-32768,-32768,32767,-32768,14946,27102,-8916,-28206,-32768,745,-32768,26721,-32768,-32768,-32768,-32768,-32768,-32768,-25033,-32768,-6065,-32768,-32768,-32768,19103,-32768,-32768,-25956,-2818,-685,-21908,32767,32767,-12561,32767,-32768,-32768,-25002,32767,-15207,-22643,-21395,32767,-32768,-19745,-24844,16289,11293,-32768,18407,17520,32767,32767,-9920,32767,-6877,32767,21207,-2578,32767,24602,32767,32767,-32768,-27639,-32645,32767,-32768,-13098,32767,4009,-20506,-32768,30862,32767,32767,27135,9424,32767,25830,25330,-6886,-4619,30524,32767,-2843,-8455,2176,-27489,-25598,4387,29855,32767,32767,1651,32767,32767,32767,-32087,19724,-21956,439,32767,-3040,-32768,7553,3311,21834,-32768,-32768,32767,-32768,-32768,-7810,-9069,15673,-26208,-32768,-32768,-32768,32767,-32768,-9999,609,-32768,10419,-3858,-30483,29822,2606,-12829,32767,-32768,-32768,-32768,20448,28725,32767,32767,4787,-29478,22762,-27261,-32768,-32768,-32768,21219,-32768,-21358,-32768,10860,4581,22885,-7058,-13748,32767,-11609,342,32767,-7413,-32768,-15456,2078,-32768,28307,32767,8692,-32768,-7834,-4897,32767,-32768,18159,-11336,-32768,-3810,10298,12064,32767,32767,-16281,-32768,-11535,25,-32768,32767,-9878,29586,32767,32767,-32768,-18374,-1765,23239,-32768,25929,-32768,32767,26098,8393,32767,-32768,32767,27683,11804,-19546,903,-6233,32767,21228,32767,-4954,-17447,-32768,-27090,-4369,22126,32767,-32768,-22213,32767,32767,11719,-25544,-32768,32767,32767,-32768,-32768,32767,4188,32767,32767,32767,15314,-21692,32111,32767,-8470,32767,-32768,-7941,32767,32767,26171,32767,409,31528,-864,7476,-15869,-32768,32767,27511,32767,2158,32767,14124,9626,19019,-6613,32767,-15425,32767,-19286,6862,-8400,-16270,4352,922,-32768,32767,-18205,23476,-17646,-32768,-32768,32767,-32768,25040,-32768,-7963,18559,28370,12081,3429,-17512,32767,-29122,10907,19708,32767,32767,32767,32767,-13152,21790,-494,-32768,32767,17954,-32768,32767,32767,1173,13730,-4741,30267,-11747,-32768,-32768,-32768,32767,5235,-15420,-32768,19369,32767,-14422,17836,-32768,15554,32767,32767,-32768,-32768,32767,32767,30641,15304,-32768,32767,-5443,-32768,-24631,861,32613,12337,2524,32767,6097,-32768,23099,1853,32767,-10867,32767,32767,27946,28866,32767,-9053,-32768,1663,20632,32767,6101,20260,-1137,11310,32767,32767,32767,-3189,25581,-20808,29342,24934,32767,10213,32767,-18408,22107,-32768,9753,-599,28175,-21864,20464,4949,-32768,32767,-32768,14633,-32768,-13020,-32768,32767,-32768,2227,20280,-9157,24047,-32768,-14774,32767,-3367,-2958,-4774,3166,-3136,32767,25165,-18500,-11382,-32435,32767,32767,32767,8642,23780,32767,-12067,-32768,32767,32767,-32768,20443,32767,-32768,-24208,-32768,32767,-32768,8218,32767,32767,32767,32767,32767,32767,27172,32767,-12715,2114,32767,32767,15113,32767,18924,-6042,491,32767,29406,-32768,7716,-27097,-19536,32767,-21919,32767,-32768,-17818,13623,32767,32767,19431,-19355,16245,32767,18299,-32768,-26684,-7662,-25888,-29680,32767,-26859,-21674,-32768,-32768,9485,-32768,21683,32767,-14161,-27748,-32768,-32768,-32768,-32768,-29224,-12488,24257,-32768,-32768,-21776,-12985,-22626,-32768,4562,-32768,-30406,-6913,-2028,-32768,32767,-21438,23292,-4988,30549,-31499,32767,-30675,-32768,-32768,32767,32767,-1935,3808,29279,-2749,32351,32767,-29003,-32768,-32768,8921,32767,-12843,-13285,-28864,-7107,-32768,-26446,-32768,-22211,32588,-32768,-32768,-1090,-32768,-12433,-16674,-24125,-32768,-32768,-29979,29159,20104,-4792,-108,32767,-32768,32767,15106,1125,-32768,-32768,-32768,32767,-32768,-32768,2565,-7572,-2214,-27961,27847,3293,32767,32767,-32768,-32768,32767,20226,32767,32767,-501,-32768,-32768,-11828,10405,21840,-11816,32767,-25932,-32768,-18973,-10390,-32768,-15377,-32768,-32768,-29557,-30144,5381,-32768,-26930,12662,14816,18616,26664,-32768,7053,-32768,-32768,-32768,19807,32767,-27755,-8531,2692,-32768,-32768,25453,-29761,32767,-8535,32767,1421,-18500,-32768,-25636,14021,32767,10982,32767,-32768,32767,32767,6501,-32768,-27969,32767,-27227,-2871,32767,-30693,-32768,-21236,25570,132,-3444,-31359,16631,13499,-5218,-17825,-32768,8713,-32768,-32768,-16466,-32768,6691,-32768,-13762,-31424,-8489,-32768,-32768,-16427,19257,2287,32767,32767,32767,20512,-6347,-13298,6250,-6251,32767,8630,7141,-664,32767,32767,32767,32767,32767,32767,32767,-11506,32767,-15340,32767,835,32767,24754,32767,32767,22653,32767,-32768,28038,-32768,-15377,-11718,-32768,-25259,-32768,-32768,-32768,-32768,-19735,-20996,-23591,-28804,-32768,-16481,-27408,-30269,-32768,20344,7985,32767,-32768,32767,-32768,32767,-13152,-4097,4899,32767,32767,-11676,32767,-32768,32767,7604,-32768,-7020,32767,-32768,-18973,28262,-32768,32767,-32768,32767,3432,1643,32349,32767,-32768,32767,32767,14629,-32768,-14408,-12509,-17694,32767,32767,32767,32767,32767,32767,32767,32767,32767,-32768,-2340,29431,-20208,-26749,-18575,32767,12069,-22573,20458,32767,-11815,-7583,29660,32767,28351,32767,-32768,8350,32767,32767,-6490,-32768,-32768,32767,7760,-32768,-29026,25902,24386,-25644,-29927,-32768,-21820,-32768,32767,-31814,1787,-32768,3129,19637,-32563,-32768,-10354,32767,13943,-11285,-31428,-32768,-27122,32767,19141,32767,-5202,-32768,-5761,-7208,32767,-32768,-32768,-28245,2224,-31118,32767,32767,9221,-32768,32767,-2578,14097,30926,10411,-10723,32767,-32768,-32768,15418,32767,32767,32767,-32768,32767,5781,32767,-2218,32767,4933,32767,32767,32767,7399,-32768,-530,32767,-32768,8349,32767,32767,32767,32767,32767,12199,32767,28145,-32768,-32768,20256,32767,-32768,19485,-10039,-13514,32767,-3536,46,11928,-27229,-32768,-14327,29721,-6190,-32768,8915,10789,-15075,32767,-32768,-32768,32767,-9057,-24696,32767,-16191,32767,2065,-3980,32767,24957,-32768,15869,-18204,-32768,-32768,32767,-32768,30569,25318,-32768,-32768,24652,25908,534,-32768,-8342,32767,1383,-32768,-12876,-32768,-16362,32767,-32768,-18096,3015,-10072,-6056,4926,9766,19448,-32768,-23696,15637,-32768,-32768,-32768,31948,20546,11522,2663,-32768,-20790,-27859,32767,-31111,2402,32767,32767,17380,32350,23480,31230,2529,-14725,26743,32767,32767,7531,-22446,32767,32767,32767,2018,32767,32767,11622,-2127,14810,32767,12946,32767,32767,11174,-24111,11093,32767,32767,-32768,-32768,32767,14922,31016,8630,28787,32767,-32768,-285,-32768,-2941,-32768,-23388,32767,-32768,32767,32767,-32768,-6101,32767,26475,32767,-11223,23393,-162,-769,-16001,-12142,32767,28589,7098,4974,3947,32767,-961,-32768,-19685,-8031,-15851,-32768,32767,-10698,-32768,-11398,-32768,32767,-2665,-32768,-23241,-32768,-926,-18450,-32768,-4308,-32150,-32768,-32768,-32768,12392,-30906,-32768,-29935,-4725,32767,-32768,9152,32767,18504,-3443,32767,9700,32767,-19948,32767,29359,32767,32233,-11564,-20786,32767,32767,-32768,-22965,1789,-32768,-32768,-32768,3439,-28624,-32768,32767,-3155,32767,-29395,31808,-32768,-31532,-26700,-32768,-29566,-25794,-32768,32767,14314,-4574,-32768,32767,-26664,-3342,-17303,8381,-32768,-32768,-32768,-32768,14697,-32768,32767,-32768,-32768,11577,26310,-32768,-17416,32767,15098,-24923,-32768,32767,32767,-18587,-22464,-32768,-32768,32767,-32768,-14288,-32768,-32768,14654,-18341,-32768,-32768,-32768,-30919,1395,-32768,-32768,28273,-32768,32767,-13144,-4896,-2355,32767,-27349,32767,-20333,-6236,-28804,-32768,-32768,19514,32767,32767,-32768,26901,4010,1207,11416,32767,-19643,14191,-4045,32767,32767,-32768,-32768,-2202,-806,-13594,-17218,16216,32767,7855,-24017,-32768,16738,32767,18362,32767,-14044,32767,32767,-32768,31512,16587,-32768,-11671,-32768,2992,20511,32767,14260,-2288,27044,32767,-32768,26001,-32768,32767,2987,1382,32767,2768,22153,-23046,-32768,-32768,-32768,-6997,12241,-20657,-20345,-32768,-5918,-25967,1930,-32768,-32768,-32768,-32768,-25406,-32768,-32768,-19428,17819,22726,-8537,-29607,-3221,-32768,-32768,29929,-13852,-32768,-32768,-32768,-32768,-32768,-32768,-32768,25839,-18072,-32768,-9284,-32768,-11584,-32768,-14809,-32768,3532,10585,-32768,-21440,-9097,-32768,12971,-6993,-32768,-14600,-28818,17503,-32768,-32768,-24524,-5026,32767,-32768,32767,4390,-32768,-32768,-11115,-8735,1071,31457,-32768,32767,16113,32767,-12918,-32768,-18522,32767,-32768,23546,2268,-4645,1532,-32768,32077,-31564,32767,-16592,-28951,497,-32768,-32768,7717,32767,-29272,-32768,-32768,-32768,-12906,-18444,-32768,-32768,-32768,-32768,230,-32768,-4735,32767,-5045,4805,32767,-12215,-27353,32767,9357,16151,32767,-32768,-31464,-32768,-32768,232,32767,27042,32767,-32768,32767,32767,32767,-32768,32767,-21521,32767,-27833,5158,32767,1816,32767,-23988,-5696,32767,21300,32767,15063,-32768,-32768,-32768,28615,32767,19982,-6757,-31253,32767,18227,13908,-1887,-27110,4061,32767,32767,32767,32767,-29994,20621,-23500,25845,32767,23296,-25081,22671,23022,-4979,32767,32767,-904,32767,11494,32767,32767,8236,17259,998,32767,32767,32767,32767,32767,32767,21288,30187,-32659,9172,12106,15099,16008,-32768,-32768,-19759,15230,-32768,27455,-31731,32767,-14159,-32768,28213,5297,-5335,-9374,-32768,107,-32768,16320,30079,-32768,25480,-30349,32767,5406,5518,-32768,30979,-32768,-32768,-32768,-32768,32767,32767,27209,-4430,-32768,-32768,-32768,14289,-32768,32767,20114,1897,32767,32169,18899,32767,-32768,32767,1719,15524,32767,1392,-32768,32767,18969,5288,32767,32767,32767,15610,-14528,18177,23744,63,32767,32555,32767,24490,32767,15913,10964,32767,-7338,-4981,-21075,20536,32767,32767,-32768,32767,32767,9448,32767,-32768,32767,32767,-31951,-32768,14781,-32768,32767,6843,-21318,32767,21073,17153,-32768,-4591,32767,32767,32767,32767,32767,32767,-25518,32767,-32768,1597,-50,-21151,16635,32767,15318,-32768,-32768,-16443,24663,-32768,-25533,-11582,16752,-13648,27795,-25824,-3340,32767,-1105,6586,-32768,32767,-25765,-30097,-32768,32767,463,20358,32767,-2807,-32768,-32768,-32768,-14356,-32768,-22467,-32768,-26593,4354,9648,6584,-147,5092,3441,-15011,13520,4350,10913,32767,-10001,32767,-32768,31929,-26510,13425,-21264,32767,14502,1680,-31699,32767,-20198,32767,-15801,12692,32767,21382,-14652,-11619,-1410,-11682,-9475,32767,32767,-26934,-12311,23011,15037,4005,12664,-11712,32767,19986,-32768,20124,1017,10890,5534,32767,-32768,32767,6700,32767,25883,23126,-17772,-32768,-32768,26617,8096,32767,-4183,3810,32767,9636,-26111,7146,7361,32767,-99,-32768,-32768,32767,4838,32767,-32768,-18995,-10266,32767,7615,21948,32767,32767,32767,32767,32767,32767,7814,-32768,32767,2092,-32768,32767,19215,8424,-30296,-1260,23190,32767,10955,32767,29277,32767,-13130,32767,32767,-25935,-32768,32767,-13132,32767,18562,-32768,17865,21819,5688,13600,32767,-32768,32767,22355,-32768,4542,-9665,16106,31670,-217,32767,32767,-32768,601,32767,32767,-21924,32767,-5417,13414,32767,32767,32767,-32768,-5816,32767,19818,14391,18121,32767,32767,-32768,32767,32767,27180,-5006,32767,32767,17129,23886,24546,-3763,-25317,32767,32767,5083,32767,-32768,32767,32767,32767,-25757,32767,7599,30529,6302,32767,32767,-18274,-32768,-18098,-20602,-32768,-32768,32767,32767,11477,31332,15657,-21686,-3482,13856,23930,25601,32767,-32768,10889
};
