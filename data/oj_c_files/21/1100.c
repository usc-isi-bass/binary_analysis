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
	int n, m = 0;
	float sum = 0, a[500], average, max = -1, aver[250] = {0.1};
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	average = sum / n;
	for(int j = 0; j < n; j++)
	{
		if(fabs(a[j] - average) > max)
		{
			max = fabs(a[j] - average);
		}
	}
	for(int x = 0; x < n; x++)
	{
		if(fabs(fabs(a[x] - average) - max) < 1e-6)
		{
			aver[m] = a[x];
			m += 1;
		}
	}
	for(int k = 0; k < m; k++)
	{
		for(int p = k + 1; p < m; p++)
		{
			if(aver[k] > aver[p])
			{
				double f;
				f = aver[k];
				aver[k] = aver[p];
				aver[p] = f;
			}
		}
	}
	for(int z = 0; z < m; z++)
	{
		cout << aver[z];
		if(z != m - 1)
		{
			cout << ",";
		}
	}
	return 0;
}