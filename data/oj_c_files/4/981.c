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
	int k = 0, row = 0, col = 0, i = 0, j = 0,min=0,rowbegin=0;
	cin >> row >> col;
	int a[row][col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	min=row<col?row:col;
	while (k <= col+row-1) {
		i = 0;
		if (k > col-1)
			rowbegin++;

		for (i=rowbegin; i <= k &&i<row; i++) {
			cout << a[i][k - i]<<endl;
		}
		k++;
	}
	return 0;
}
