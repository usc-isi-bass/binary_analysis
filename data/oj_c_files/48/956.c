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
 * 1.cpp
 *
 *  Created on: 2012-12-25
 *      Author: Administrator
 */
int main()
{
	int a[10][10] = {0}, b[10][10] = {0};
	int i, j, m, n, p = 0, k;
	cin >> m >> n;
	a[5][5] = m;
	for(k = 0; k < n; k++)
	{
		for(i = 1; i <= 9; i++)
			for(j = 1; j <= 9; j++)
			{
				if(a[i][j] != 0)
				{
					p = a[i][j];
					b[i][j] = b[i][j] + 2 * p;
					b[i - 1][j] = b[i - 1][j] + p;
					b[i + 1][j] = b[i + 1][j] + p;
					b[i - 1][j + 1] = b[i - 1][j + 1] + p;
					b[i - 1][j - 1] = b[i - 1][j - 1] + p;
					b[i][j + 1] = b[i][j + 1] + p;
					b[i][j - 1] = b[i][j - 1] + p;
					b[i + 1][j + 1] = b[i + 1][j + 1] + p;
					b[i + 1][j - 1] = b[i + 1][j - 1] + p;
				}
			}
		for(i = 1; i <= 9; i++)
			for(j = 1; j <= 9; j++)
			{
				a[i][j] = b[i][j];
				b[i][j] = 0;
			}
	}
	for (i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			cout << a[i][j];
			if(j != 9)
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
