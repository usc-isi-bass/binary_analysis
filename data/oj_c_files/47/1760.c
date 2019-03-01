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
 *???????
 *  Created on: 2012-11-3
 *      Author: ??
 */

int main() {
	int n, i;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
		cin >> a[i];//???????
	for (i = 0; i <= 0.5 * (n - 1); i++)
		swap(a[i], a[n - 1 - i]);//??
	cout << a[0];
	for (i = 1; i < n; i++)
		cout << " " << a[i];//??
	return 0;
}