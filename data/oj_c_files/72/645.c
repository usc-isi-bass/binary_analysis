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

/*????
 * exercise7.cpp
 *
 *  Created on: 2011-12-30
 *      Author: WJ
 */

int main() {
	int a[20][20], b[400][2], i, j, m, n, p = 0; //?a?????????b??????????
	cin >> m >> n; //p???????
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	if ((a[0][0] >= a[0][1]) && (a[0][0] >= a[1][0])) { //?????????????????
		b[p][0] = 0;
		b[p][1] = 0;
		p++;
	}
	if ((a[0][n - 1] >= a[1][n - 1]) && (a[0][n - 1] >= a[0][n - 2])) {
		b[p][0] = 0;
		b[p][1] = n - 1;
		p++;
	}
	if ((a[m - 1][0] >= a[m - 1][1]) && (a[m - 1][0] >= a[m - 2][0])) {
		b[p][0] = m - 1;
		b[p][1] = 0;
		p++;
	}
	if ((a[m - 1][n - 1] >= a[m - 1][n - 2]) && (a[m - 1][n - 1] >= a[m - 2][n
			- 1])) {
		b[p][0] = m - 1;
		b[p][1] = n - 1;
		p++;
	}
	for (i = 1; i < m - 1; i++) {
		if ((a[i][0] >= a[i - 1][0]) && (a[i][0] >= a[i + 1][0]) && (a[i][0]
				>= a[i][1])) {
			b[p][0] = i;
			b[p][1] = 0;
			p++;
		}
	}
	for (i = 1; i < m - 1; i++) {
		if ((a[i][n - 1] >= a[i - 1][n - 1])
				&& (a[i][n - 1] >= a[i + 1][n - 1]) && (a[i][n - 1] >= a[i][n
				- 2])) {
			b[p][0] = i;
			b[p][1] = n-1;
			p++;
		}
	}
	for (j = 1; j < n - 1; j++) {
		if ((a[0][j] >= a[0][j - 1]) && (a[0][j] >= a[0][j + 1]) && (a[0][j]
				>= a[1][j])) {
			b[p][0] = 0;
			b[p][1] = j;
			p++;
		}
	}
	for (j = 1; j < n - 1; j++) {
		if ((a[m - 1][j] >= a[m - 1][j - 1])
				&& (a[m - 1][j] >= a[m - 1][j + 1]) && (a[m - 1][j]
				>= a[m - 2][j])) {
			b[p][0] = m - 1;
			b[p][1] = j;
			p++;
		}
	}
	for (i = 1; i < m - 1; i++) //???????????????
		for (j = 1; j < n - 1; j++)
			if ((a[i][j] >= a[i + 1][j]) && (a[i][j] >= a[i - 1][j])
					&& (a[i][j] >= a[i][j - 1]) && (a[i][j] >= a[i][j + 1])) {
				b[p][0] = i;
				b[p][1] = j;
				p++;
			}
	int temp1, temp2, temp3; //???????
	for (i = 0; i < p - 1; i++) {
		for (j = 0; j < p - 1 - i; j++) {
			if (b[j][0] > b[j + 1][0]) {
				temp1 = b[j][0];
				b[j][0] = b[j + 1][0];
				b[j + 1][0] = temp1;
				temp2 = b[j][1];
				b[j][1] = b[j + 1][1];
				b[j + 1][1] = temp2;
			}
			if ((b[j][0] == b[j + 1][0]) && (b[j][1] > b[j + 1][1])) {
				temp3 = b[j][1];
				b[j][1] = b[j + 1][1];
				b[j + 1][1] = temp3;
			}
		}
	}
	for (i = 0; i < p; i++) {
		cout << b[i][0] << " " << b[i][1] << endl;
	}
	return 0;
}