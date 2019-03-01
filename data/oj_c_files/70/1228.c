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
	int n, i, j;
	cin >> n;
	double x[1000], y[1000], d[1000][1000], max;
	max = 0;
	for (i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			d[i][j] = sqrt((x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(y[j] - y[i]));
			if (d[i][j]>max)
				max = d[i][j];
		}
	}
	cout << fixed;
	cout << setprecision(4) << max << endl;
return 0;
}