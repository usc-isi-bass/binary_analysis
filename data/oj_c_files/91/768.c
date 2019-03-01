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
 * theoutputstring.cpp
 *
 *  Created on: 2012-12-17
 *      Author: ???
 */
int main() {
	char a[101], *p = a, b[100], *q = b;
	int n;
	cin.getline(a,101);
	n = strlen(a);
	while (p < a + n - 1) {
		*q = *p + *(p + 1);
		p++;
		q++;
	}

		*q = *p + *a;
	for (q = b; q < b + n; q++)
		cout << *q;
	return 0;
}
