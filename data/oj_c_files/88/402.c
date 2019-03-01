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
 * ym.cpp
 *
 *  Created on: 2010-12-31
 *      Author: 10151
 */

int main() {
	char a[31];
	cin.getline(a, 31);
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if ((a[i] > '9' || a[i] < '0')&&(a[i+1] <= '9' && a[i+1] >= '0')){
			cout << endl;
			continue;
		}
		if ((a[i] > '9' || a[i] < '0')&&(a[i+1] > '9' || a[i+1] < '0'))continue;
		cout << a[i];
	}
	return 0;
}
