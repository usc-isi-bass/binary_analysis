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

int main ()
{
	int row, col, a[105][105],i, j, k, min;
	cin >> row >> col;
	for (i = 0; i < row; i ++ )
	{
		for (j = 0; j < col; j ++)
		{
			cin >> a[i][j];
		}
	}
	if (row < col)
		min = row;
	else 
		min = col;
	if (min % 2 == 0)
		min = min / 2;
	else
		min = min / 2 + 1;
	for (k = 0; k < min; k ++)
	{
		for (j = k; j < col - k; j ++)
		{
			cout << a[k][j] << endl;
		}
		for (i = k + 1; i < row - k ; i ++)
		{
			cout << a [i][col - k -1] << endl;
		}
		for (j = col - 2 - k; j >= k && (row - k - 1 > k); j --)
		{
			cout << a [row - k - 1][j] << endl;
		}
		for (i = row - 2 - k; i >= 1 + k && (col - k - 1 > k); i -- )
		{
			cout << a [i][k] << endl;
		}
	}
	return 0;
}