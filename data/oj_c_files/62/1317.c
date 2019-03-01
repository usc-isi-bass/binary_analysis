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
 * ???????.cpp
 *  Created on: 2012-12-11
 *  Author: ???
 */
int main() {
	int n;
	char a[100], *p = a;
	cin >> a;
	n = strlen(a);
	for (int i = 0; i < n; i++) {
		cout << *(p + i);
	}
	while (cin >> a) {
		cout<<' ';
		n = strlen(a);
		for (int i = 0; i < n; i++) {
			cout << *(p + i);
		}
	}
	return 0;
}