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
	int a[101][101] = {0};
	int row, col, i, j, m, n, k, num = 0;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	for (i = 0; i < col; i++)
	{
		j = i;
		while (j >= 0 && i - j < row)
		{
			cout << a[i - j][j] << endl;
			j--;
		}
	}
	for (i = 1; i < row; i++)
	{
		j = i;
		while (j < row && col - 1 + i - j >= 0)
		{
			cout << a[j][col - 1 + i - j] << endl;
			j++;
		}
	}
	return 0;
}

