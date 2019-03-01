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
	int a[5][5], i, j, t, k, l, m, n, flag, count = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cin >> a[i][j];
	}
	for (k = 0; k < 5; k++)
	{
		t = a[k][0];
		flag = 1;
		for (n = 0; n < 5; n++)
		{
			if (t <= a[k][n])
			{
				t = a[k][n];
				m = n;
			}
		}
		for (l = 0; l < 5; l++)
		{
			if (a[k][m] > a[l][m])
			{
				flag = 0;
				continue;
			}
		}
		if (flag == 1)
		{
			cout << k + 1 <<' '<< m + 1 <<' '<< a[k][m] << endl;
			count = 1;
		}
	}
	if (count == 0)
		cout << "not found" << endl;
	return 0;
}