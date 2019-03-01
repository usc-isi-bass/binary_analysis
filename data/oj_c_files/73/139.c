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
	int a[5][5], i, j, m, k, max = 0, min, flag = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];
	for (i = 0; i < 5; i++)
	{
		max = 0; 
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				m = i;
				k = j;
			}
		}
		min = a[0][k];
		for (int l = 0; l < 5; l++)
		{
			if (a[l][k] < min)
				min = a[l][k];
		}
		if (min == max)
		{
			cout << m + 1 << " " << k + 1 << " " << a[m][k] << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "not found";
	return 0;
}