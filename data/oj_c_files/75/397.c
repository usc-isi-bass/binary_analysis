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
	int x[10000] = {0}, y[10000] = {0}, t[1000] = {0};
	int i, j, k, max;
	for (k = 0; ; k++)
	{
		cin >> x[k];
		if (cin.get() == '\n')
			break;
	}
	for (k = 0; ; k++)
	{
		cin >> y[k];
		if (cin.get() == '\n')
			break;
	}
	for (i = 0; i < 1000; i++)
		for (j = 0; j < k + 1; j++)
			if ((x[j] <= i) && (i < y[j]))
				t[i]++;
	max = 0;
	for (i = 1; i < 1000; i++)
		if (t[max] < t[i])
			max = i;
	cout << k + 1 << ' ' << t[max] << endl;
	return 0;
}
