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
 * sanchushuzu.cpp
 *??????????
 *  Created on: 2012-11-2
 *      Author: ??
 */

int main() {
	int n, i, j = 0, k, num = 0;
	cin >> n;//????
	int a[n];//????
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;//??
	for (i = 0; i < n; i++)
		if (a[i] != k)
			num++;
	for (i = 0; i < n; i++)
		if (a[i] != k) {
			a[j] = a[i];
			j++;
		}//????
	if (a[0] != k)
		cout << a[0];
	for (i = 1; i < j; i++)
		cout << " " << a[i];//??
	return 0;
}