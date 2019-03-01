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
 * shuzunixu.cpp
 *
 *  Created on: 2012-12-15
 *      Author: ???
 *      function:????
 */


void swap(int *a, int *b) {//?????????swap
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int n;
	cin >> n;
	int num[n + 10];
	for (int i = 0; i < n; i++) {//???????
		cin >> *(num + i);
	}
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		swap(num + i, num + j);//??????????
	}
	for (int i = 0; i < n - 1; i++) {
		cout << *(num + i) << ' ';//????????
	}
	cout << *(num + n - 1) << endl;//????????????????????????
	return 0;
}
