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
 * jishu.cpp
 *
 *  Created on: 2012-11-3
 *      Author: ???
 */

int main() {
	int n = 0;   //??????
	cin >> n;   //??
	int a[n], b[n];  //????
	int i = 0, j = 0, sum = 0;
	for (i = 0; i < n; i++) { //???
		b[i] = 0;
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {    //???????????b?
		if (a[i] % 2 == 1) {
			b[j] = a[i];
			j++;
			sum++;
		}
	}
	sort(b, b + sum);  //??
	cout << b[0];
	for (i = 1; i < sum; i++)
		cout << "," << b[i];    //??
	return 0;
}
