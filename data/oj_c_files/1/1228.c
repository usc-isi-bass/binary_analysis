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

/* ????.cpp
 *  Created on: 2012-11-21
 *   Author: ??
 */
int ans(int a, int i) {//??????
	int sum = 0;//??
	for (int j = i; j <= sqrt(a); j++) {//?i???a??
		if (a % j != 0)
			continue;//??????
		sum++;//??????1
		if (a >= j * j)
			sum += ans(a / j, j);//????????????????????
	}
	return sum;
}
int main() {
	int n, a;//???????
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << ans(a, 2) + 1 << endl;
	}
	return 0;
}
