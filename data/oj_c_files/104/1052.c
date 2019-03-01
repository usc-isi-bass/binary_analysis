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
 *  ???.cpp
 *  Created on: 2012-11-19
 *  Author:???
 */
int f(int a, int b) {
	if (a == b)
		return a;
	if (a > b) {
		a = a % 2 == 0 ? a / 2 : (a - 1) / 2;
		return f(a, b);
	} else {
		b = b % 2 == 0 ? b / 2 : (b - 1) / 2;
		return f(a, b);
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << f(a, b) << endl;
	return 0;
}
