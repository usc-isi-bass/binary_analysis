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
*??? 1200012851
*???????
*2013.1.4
**/

int main()
{
	int a[2][11][11] = {0};
	int t, i, k, j, n, days, flag = 0;
	cin >> n >> days;
	a[0][5][5] = n;
	for (t = 1; t <= days; t++)
	{
		i = t % 2;
		for (k = 0; k < 11; k++)
			for (j = 0; j < 11; j++)
				a[i][k][j] = 0;
		for (k = 1; k <= 9; k++)
			for (j = 1; j <= 9; j++)
			{
				a[i][k][j] += 2 * a[1 - i][k][j];
				a[i][k + 1][j] += a[1 - i][k][j];
				a[i][k - 1][j] += a[1 - i][k][j];
				a[i][k][j + 1] += a[1 - i][k][j];
				a[i][k][j - 1] += a[1 - i][k][j];
				a[i][k + 1][j + 1] += a[1 - i][k][j];
				a[i][k - 1][j - 1] += a[1 - i][k][j];
				a[i][k - 1][j + 1] += a[1 - i][k][j];
				a[i][k + 1][j - 1] += a[1 - i][k][j];
			}
	}
	for (k = 1; k <= 9; k++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (flag)
				cout << " ";
			cout << a[i][k][j];
			flag = 1;
		}
		flag = 0;
		cout << endl;
	}
	return 0;
}


