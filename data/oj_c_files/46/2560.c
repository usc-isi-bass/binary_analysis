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

int main() {
	int row = 0, col = 0, sumtimes = 0, i = 0, j = 0,sum=0;
	cin >> row >> col;
	int max = row > col ? row : col;
	int a[row][col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
	while (sum<row*col) {
		for (j = sumtimes / 4; j <= col - 1 - sumtimes / 4; j++) {
			cout << a[i][j] << endl;
			sum++;
		}
		if (sum==row*col)break;
		sumtimes++;
		for (i = sumtimes / 4 + 1; i <= row - 1 - sumtimes / 4 - 1; i++) {
			cout << a[i][j - 1] << endl;
			sum++;
		}
		if (sum==row*col)break;
		sumtimes++;
		for (j--; j >= sumtimes / 4; j--) {
			cout << a[i][j] << endl;
			sum++;
		}
		if (sum==row*col)break;
		sumtimes++;
		for (i--; i >= sumtimes / 4 + 1; i--) {
			cout << a[i][j + 1] << endl;
			sum++;
		}
		if (sum==row*col)break;
		i++;
		sumtimes++;

	}
	return 0;
}
