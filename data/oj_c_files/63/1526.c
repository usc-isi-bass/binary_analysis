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
	int a[100][100], b[100][100], c[100][100] = {0};
	int x1, y1, x2, y2, i, j, k;
	cin >> x1 >> y1;
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
			cin >> a[i][j];
	}
	cin >> x2 >> y2;
	for (i = 0; i < x2; i++)
	{
		for (j = 0; j < y2; j++)
			cin >> b[i][j];
	}
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y2; j++)
		{
			for (k = 0; k < y1; k++)
				c[i][j] = a[i][k] * b[k][j] + c[i][j];
		}
	}
	k = 0;
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y2; j++)
		{
			if (k != y2 - 1)
			{
				cout << c[i][j] << " ";
				k++;
			}
			else
			{
				cout << c[i][j] << endl;
				k = 0;
			}
		}
	}
	return 0;
}