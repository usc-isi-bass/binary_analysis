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
	int a[5][11][11] = {0};
	int m, n, i, j, k;
	cin >> m >> n;
	a[0][5][5] = m;
	for(i = 1; i < n + 1; i++)
	{
		for(k = 1; k < 10; k++)
			for(j = 1; j < 10; j++)
			{
				a[i][k][j] = a[i - 1][k][j] * 2 + a[i - 1][k - 1][j] + a[i - 1][k + 1][j] + a[i - 1][k][j + 1] + a[i - 1][k][j - 1] + a[i - 1][k + 1][j+1] + a[i - 1][k + 1][j -1] + a[i - 1][k - 1][j + 1] + a[i - 1][k - 1][j - 1];
			}
	}
	for(i = 1; i < 10; i++)
	{
		cout << a[n][i][1];
		for(j = 2; j < 10; j++)
			cout << ' ' << a[n][i][j];
		cout << endl;
	}
	return 0;
}