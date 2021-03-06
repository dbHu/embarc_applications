
/*
 * n = m << 7 + 192, y = round(x << 10) 
 * m: tangent value
 * n: array index
 * x: atan(m)
 * y: array[n]
 */

const short atan_tables[256] = {
	-1006,  -1004,  -1001,  -999,   -996,   -994,   -991,   -989,   				
	-986,   -983,   -981,   -978,   -976,   -973,   -970,   -967,   				
	-965,   -962,   -959,   -956,   -953,   -951,   -948,   -945,   				
	-942,   -939,   -936,   -933,   -930,   -927,   -924,   -921,   				
	-918,   -914,   -911,   -908,   -905,   -902,   -898,   -895,   				
	-892,   -888,   -885,   -882,   -878,   -875,   -871,   -868,   				
	-864,   -861,   -857,   -854,   -850,   -846,   -843,   -839,   				
	-835,   -831,   -828,   -824,   -820,   -816,   -812,   -808,   				
	-804,   -800,   -796,   -792,   -788,   -784,   -780,   -775,   				
	-771,   -767,   -763,   -758,   -754,   -750,   -745,   -741,   				
	-736,   -732,   -727,   -722,   -718,   -713,   -708,   -703,   				
	-699,   -694,   -689,   -684,   -679,   -674,   -669,   -664,   				
	-659,   -654,   -649,   -643,   -638,   -633,   -628,   -622,   				
	-617,   -611,   -606,   -600,   -595,   -589,   -583,   -578,   				
	-572,   -566,   -560,   -555,   -549,   -543,   -537,   -531,   				
	-525,   -519,   -512,   -506,   -500,   -494,   -487,   -481,   				
	-475,   -468,   -462,   -455,   -449,   -442,   -436,   -429,   				
	-422,   -416,   -409,   -402,   -395,   -388,   -381,   -374,   				
	-367,   -360,   -353,   -346,   -339,   -332,   -325,   -317,   				
	-310,   -303,   -296,   -288,   -281,   -273,   -266,   -258,   				
	-251,   -243,   -236,   -228,   -221,   -213,   -205,   -198,   				
	-190,   -182,   -174,   -167,   -159,   -151,   -143,   -135,   				
	-127,   -119,   -112,   -104,   -96,    -88,    -80,    -72,   				
	-64,    -56,    -48,    -40,    -32,    -24,    -16,    -8,   				
	0,      8,      16,     24,     32,     40,     48,     56,   				
	64,     72,     80,     88,     96,     104,    112,    119,   				
	127,    135,    143,    151,    159,    167,    174,    182,   				
	190,    198,    205,    213,    221,    228,    236,    243,   				
	251,    258,    266,    273,    281,    288,    296,    303,   				
	310,    317,    325,    332,    339,    346,    353,    360,   				
	367,    374,    381,    388,    395,    402,    409,    416,   				
	422,    429,    436,    442,    449,    455,    462,    468   				
};