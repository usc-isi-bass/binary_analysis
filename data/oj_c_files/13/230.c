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
* kaiguandiandeng.cpp
*
*  Created on: 2010-10-28
*      Author: ??
*      ???????????
*/
int main()
{
	int N, n, i = 0, j = 0, a[20000];
	cin >> N;//???????
	while (i <= N - 1) {
		cin >> n;
		a[i] = n;
		i++;
	}//?????
	cout << a[0] ;//??????
	for (i = 1; i <= N - 1; i++) {
		for (j = 0; j < i; j++) {
			if (a[j] == a[i])
				break;//??????????????
		}
		if (j == i ) 
			cout << ' ' << a[i] ;//????????
	}
	return 0;
}
