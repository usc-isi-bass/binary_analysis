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
 * zz2.cpp
 * function:??????????
 * Created on: 2012-12-12
 * Author: sear
 */
int main() {
	int row, col, a[100][100], j, k;
	//row,col??????????,a[100][100]????,j,k?????
	cin >> row;//??????
	cin >> col;//??????
	for (k = 0; k < row; k++)
		for (j = 0; j < col; j++)
			cin >> a[k][j];//???????
	for (k = 0; k < col; k++) {
		for (j = k; j >= 0; j--) {
			if ((k - j >= 0) && (k - j) < row)
				cout << *(a[k - j] + j) << endl;
			//?????????????
			else
				break;//????????
		}
	}
	for (k = 1; k < row; k++) {
		for (j = col - 1;j >= 0; j--) {
			if ((k + col - 1 - j) < row)
				cout << *(a[k + col - 1 - j] + j) << endl;
			//??????????????
			else
				break;//????????
		}
	}
	return 0;
}
