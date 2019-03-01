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
 * ??????.cpp
 *
 *  Created on: 2011-12-31
 *      Author: ???
 */

int main() {
	char a[1000];
	cin >> a;
	int i = 0, j, len = strlen(a);
	while (i < len) {
		if (a[i] >= 'a')
			a[i] = a[i] - 32;
		j = i;
		while (true) {
			if (a[i + 1] >= 'a')
				a[i + 1] = a[i + 1] - 32;
			if (a[i + 1] == a[j])
				i++;
			else
				break;
		}
		cout << "(" << a[j] << "," << i - j + 1 << ")";
		i++;
	}
	return 0;
}
