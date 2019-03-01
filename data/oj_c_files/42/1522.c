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
 * delete.cpp
 *
 *  Created on: 2012-11-8
 *      Author: alias
 */
int main() {
	int n;//????n
	cin >> n;
	int a[n], m;//????
	for (int i = 0; i < n; i++)//????????
		cin >> a[i];
	int k;//????????
	cin >> k;
	for (int j = 0; j < n;j++) {
		if (a[j] == k) {//?a[0]???????????k
			for (m = j; m < n; m++) {//??????????????
				a[m] = a[m + 1];
			}
			n--;
			j--;//???j????
		}
	}
	for (int v = 0; v < n; v++) {//????k????
		if (v == 0)
			cout << a[v];
		else
				cout << " " << a[v];
	}
	return 0;
}
