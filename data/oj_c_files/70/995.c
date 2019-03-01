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
	double a[100], b[100], c[10000];
	int n = 0, k = 0;
	cin >> n;
	int i = 0, j = 0, sum = 0;
	double max = 0;
	for(i = 0; i <= n - 1; i++) 
	{
		cin >> a[i] >> b[i];
	}
	for(i = 0; i <= n - 1; i++)
	{
		for(j = 0; j <= n - 1; j++)
		{
			if(i != j)
			{
				c[k] = sqrt(pow(a[i] - a[j], 2) + pow(b[i] - b[j], 2));
				k++;
			}
		}
	}
	sum = k;
	max = c[0];
	for(i = 0; i <= sum; i++)
	{
		if(max < c[i])
			max = c[i];
	}
	cout << setprecision(4) << fixed << max << endl;
	return 0;
}