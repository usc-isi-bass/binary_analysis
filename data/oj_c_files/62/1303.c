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
 * zz2.cpp
 * function:???????
 * Created on: 2012-12-12
 * Author: sear
 */
int main() {
	char a[100][20]; //a[100][20]
	int j = 0, k = 0; //j,k??????j????????,
	char *i; //i????????
	while (cin >> a[j++]);//??????
	do { //??????
		cout << a[k++] << " ";
		i = &a[k - 1][0]; //??????????????
	} while (i != &a[j - 3][0]);//???????????????
	cout << a[j-2];//????????
	return 0;
}