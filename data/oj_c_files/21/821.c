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
	int i, n, a[300];
	double sum = 0;
	int j;
	double ping;
	double cha = 0;
	double b[300];
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	ping = sum / n;
	for(i = 0; i < n; i++)
	{
		b[i] = fabs(a[i] - ping);
		if(b[i] > cha || fabs(b[i] - cha) < 1e-6)
		{
			cha = b[i];
		}
	}
	for(i = 0; i < n; i++)
	{
		if(fabs(b[i] - cha) < 1e-6)
		{
			j = i;
			cout << a[i];break;
		}
	}
	for(i = j + 1; i < n; i++)
	{
		if(fabs(b[i] - cha) < 1e-6)
		{
			cout << ',' << a[i];
		}
	}
	return 0;
}