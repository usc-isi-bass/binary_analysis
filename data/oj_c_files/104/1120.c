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
 * ???
 *
 *  Created on: 2012-11-24
 *      Author: zhuyongfu
 */


int binary(int m,int n){//??????????
	if(m == n)//???????????????
		return m;
	if(m < n / 2 + 1)//???????????????????
		return binary(m,n / 2);
	if(n < m / 2 + 1)
		return binary(m / 2,n);
	else//??????????????
		return binary(m / 2,n / 2);
	return 0;
}

int main(){
	int x,y;//?????????
	cin >> x >> y;
	cout << binary(x,y) << endl;
	return 0;
}
