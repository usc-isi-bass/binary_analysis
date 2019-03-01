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

/*	???:???
	???:1000012896 leo
	????:2010.12.1
	????:??????????
	*/
int main()
{
	int atime[10000], ltime[10000], min = 1000, max = 0, count = 0, per, maxp = 0, i, j;
	for (i = 1; ;i++)
	{
		cin >> atime[i];
		if (atime[i] < min)
			min = atime[i];
			if (getchar() == '\n')
			break;
	}
	for (i = 1; ;i++)
	{
		cin >> ltime[i];
		if (ltime[i] > max)
			max = ltime[i];
			if (getchar() == '\n')
			break;
	}
	count = i;
	for (j = min; j <= max - 1; j++)
	{
		per = 0;
		for (i = 1; i <= count; i++)
			if ( atime[i] <= j && ltime[i] > j)
				per ++;
		if (per > maxp)
			maxp = per;
	}
	cout << count << ' ' << maxp;
	return 0;
}


