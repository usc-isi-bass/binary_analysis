#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
 * er_cha_shu.cpp
 * ?? - ???
 * ??????????1, 2, 3, ...???????????????????????????1?????????
 * ????????10????????(10, 5, 2, 1)??4????????(4, 2, 1)?????1????????
 * ???????1???????(1)???????x?y???????????????(x1, x2, ... ,1)?
 * (y1, y2, ... ,1)??????x = x1?y = y1?????????????i?j????xi ? yj???
 * ?xi = yj , xi + 1 = yj + 1, xi + 2 = yj + 2,... ??????????x?y???xi????yj??
 *  Created on: 2013-11-20
 *      Author: ???
 */
int find(int x , int y){ // ???????
	if(x == y) return x; // ??????????
	while( (x /= 2) > y ){} // ?????????? /2 ?????????????????????
	return find(y , x);
}
int main(){
	int x , y;
	cin >> x >> y;
	cout << ( x > y ? find(x , y) : find(y , x) ) << endl;
	return 0;
}