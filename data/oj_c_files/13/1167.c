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
 * unrepeatedout.cpp
 *
 *  Created on: 2012-10-29
 *      Author: Administrator
 */

int main() {
	int n, i = 0, a[20001], used[200];//i?????,used[k]?0??k?????,?1??k?????
	for (i = 0; i < 200; i++)
		used[i] = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];//?????
	cout << a[0];
	used[a[0]] = 1;
	for (i = 1; i < n; i++) {
		if (used[a[i]])
			continue;//??????????"??"
		cout << " " << a[i];//????????,??
		used[a[i]] = 1;//?????????
	}
	return 0;//????
}
