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
 * 3.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */


int main()
{
	int n;
	cin >> n;
	int i, j, k;
	char ans[1000];
	int tans[1000];
	ans[0] = 1 + '0';
	ans[1] = '\0';
	for (i = 0; i < n; i++) {
		int len = strlen(ans);
		for (j = 0; j < len; j++) {
			tans[j] = (ans[j] - '0') * 2;
		}
		int carry = 0;
		for (j = 0; j < len; j++) {
			int carrytem = tans[j] / 10;
			tans[j] = (tans[j] + carry) % 10;
			carry = carrytem;		}

		if (carry == 1) {
			tans[j] = 1;
			j++;
		}

		for (k = 0; k < j; k++) {
			ans[k] = tans[k] + '0';
		}
		ans[j] = '\0';
	}
	int lentem = strlen(ans);
	for (i = lentem - 1; i >= 0; i--)
		cout << ans[i];
	return 0;
}
