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
 * ArrayDelete.cpp
 *
 *  Created on: 2012-10-30
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int main() {
	int n = 0, k = 0, p = 0;
	cin >> n;
	int a[(const int) n];					//???n???
	for (int i = 0; i < n; i++) {			//???????
		cin >> a[i];
	}
	cin >> k;
	for (int i = 0; i < n; i++) {
		if (a[i] == k) {					//??????????????
			p++;							//???+1
			for (int j = i; j < n; j++) {	//??
				a[j] = a[j + 1];
			}
			i -= 1;							//?i???????
		}
	}
	cout << a[0];
	for (int i = 1; i < n - p; i++) {
		cout << ' ' << a[i];				//??
	}
}
