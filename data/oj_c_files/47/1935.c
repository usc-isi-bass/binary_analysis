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
 * ????????.cpp
 * ??????
 * ?????2012.11.9
 * ??????????????????
 */
int main() {
	int n, i, j, temp;//????
	cin >> n;//?????????
	int a[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];//?????
	}
	for (i = 0, j = n - 1; i < j; i++, j--) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;//???????
	}
	for (i = 0; i < n - 1; i++) {
		cout << a[i] << " ";
	}//??????
	cout << a[n - 1] << endl;
}
