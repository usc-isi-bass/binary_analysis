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
 * daoxu.cpp
 *
 *  Created on: 2012-10-30
 *      Author: Administrator
 */

int main() {
	int n, i, a[150], b[150];//??,i?????,a[]?????,b[]?????
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];//??????a[]?
	for (i = 0; i < n; i++)
		b[i] = a[n - 1 - i];//??????????
	for (i = 0; i < n; i++)
		a[i] = b[i];//????????
	cout << a[0];
	for (i = 1; i < n; i++)
		cout << " " << a[i];//????
	return 0;//????

}