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
	int a[1000] = {0}, n = 0, x[1000] ={0}, y[1000]={0},k, m, j, t = 0;
	char b, c;
	for (n = 0; ; n++)
	{
		cin >> x[n];
		cin.get(b);
		if (b == '\n')
		{
			break;
		}
	}
	for (n = 0; ; n++)
	{
		cin >> y[n];
		cin.get(c);
		if (c == '\n')
		{
			break;
		}
	}
	for (k = 0; k <= n; k++)
	{
		for (j = x[k]; j < y[k]; j++)
		{
			a[j] ++;
		}
	}
	for (m = 0; m < 1000; m++)
	{
		if (t < a[m])
		{
			t = a[m];
		}
	}
	cout << n + 1 << " " << t << endl;
	return 0;
}