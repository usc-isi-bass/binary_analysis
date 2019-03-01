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
	double dis, x[100], y[100];
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	dis = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
	for(i = 0; i <= n - 2; i++)
	{
		for(j = i + 1; j <= n - 1; j++)
		{
			if(sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i])) > dis)
			{
				dis = sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
			}
		}
	}
	cout << fixed << setprecision(4) << dis << endl;
	return 0;
}