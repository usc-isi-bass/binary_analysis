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
	int n = 0, i, j, x[1000], y[1000], count[1001] = {0}, max = 0;
	while (1)
	{
		cin >> x[n++];
		if (cin.get() == '\n') break;
	}
	for (i = 0; i < n; i++)
	{
		cin >> y[i];
		for (j = x[i]; j < y[i]; j++)
		{
			count[j] ++;  // ?????????????
		}
		if (cin.get() == '\n') break;
	}
	for (i = 0; i < 1001; i++)
	{
		if(max < count[i]) max = count[i];
	}
	cout << n << " " << max << endl;
	return 0;
}