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
 * feibonaqi.cpp
 *?? - 1063 ??????
 *?? ?????????????: ?????????????1????????????2?????
???????a???????????a??????
 *  Created on: 2013-11-18
 *      Author: ???
 */
int f[20] = { 1 , 1 }; // ??????
void cal(int x){ // ????????
	f[x] = f[ x - 1 ] + f[ x - 2 ];
}
int main(){
	int n , a , needle = 1; // ??????????? needle ??
	for(cin >> n; n --; ){
		cin >> a;
		for(int i = needle + 1; i < a; i ++) // ??????????? a ?
			cal(i);
		cout << f[ a - 1 ] << endl;
	}
	return 0;
}