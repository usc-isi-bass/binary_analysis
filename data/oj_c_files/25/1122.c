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
 * jisuan2deNcifang.cpp
 *
 *  Created on: 2013-1-11
 *      Author: 120001791??
 *      ???
 */
int main() {
	int N = 0, i = 0, n = 0, r = 0, temp = 0;//5????????N?????r????
	int a[35];//1????????????
	cin >> N;//??N
	memset(a, 0, sizeof(a));//a??
	a[0] = 1;//????1
	while (N--) {//N????
		for (i = 0; i < 35; i++) {//???????
			temp = r;//????
			r = (a[i] * 2 + r) / 10;//??????
			a[i] = (a[i] * 2 + temp) % 10;//????
		}
	}
	for (n = 34; a[n] == 0; n--)
		;//?????0
	for (; n >= 0; n--)//???
		cout << a[n];//????
	return 0;
}
