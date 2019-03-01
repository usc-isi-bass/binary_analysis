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
 * shuzunixuzhi.cpp
 *???????????
 *  Created on: 2012-12-17
 *      Author: ??
 */

int main() {
	int a[101];
	int i, n, *p = a;//??
	cin >> n;//??
	for (i = 0; i < n; i++)
		cin >> *(p++);//????
	p = a;
	for (i = 0; i < n / 2; i++)
		swap(*(p + i), *(p + n - i - 1));//??
	cout << *(p++);//??
	n--;
	while (n > 0) {
		cout << " " << *(p++);
		n--;//??????
	}
	return 0;
}
