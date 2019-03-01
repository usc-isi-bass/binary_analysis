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

int main()
{
	int row, col, array[101][101], i, j;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> array[i][j];
	col--; row--;
	for (i = 0; i <= row + col; i++)
		for (j = 0; j <= i; j++)
			if (i - j <= col && j <= row)
				cout << array[j][i-j] << endl;
	return 0;
}