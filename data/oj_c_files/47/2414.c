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
 *????.cpp
 *
 *  Created on: 2012-10-15
 *      Author: ???
 */

int main() {
	int n = 0, b = 0, i = 0;  //??????????????
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++) {  //??
		cin >> a[i];
	}
	for (i = 0; i < n / 2; i++) {  //??????
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
	cout << a[0];
	for (i = 1; i < n; i++) {   //??
		cout << " " << a[i];
	}
	return 0;
}
