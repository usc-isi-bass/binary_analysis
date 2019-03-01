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
 * 38.cpp
 *??????
 *  Created on: 2012-11-2
 *      Author: ???
 */
int main() {              //?????
	int i, j, n, m;       //??int???
	int f[25];            //????f
	f[1] = 1;
	f[2] = 1;             //???f[1],f[2]??
	cin >> m;             //??????
	for (j = 1; j <= m; j++) {
		cin >> n;          //?????n
		if ((n == 1) || (n == 2)) {
			cout << f[n] << endl;
		}                   //??n??1?2???1
		else {
			for (i = 3; i <= n; i++) {
				f[i] = f[i - 1] + f[i - 2];
			}             //??n??2????????
			cout << f[n] << endl;   //????
		}

	}
	return 0;                //?????

}
