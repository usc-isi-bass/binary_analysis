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
	int x, y, c = 0, max = 0;
	char r = 0;
	int a[1005] = {0};
	while (1)
	{
		cin >> x;
		for (int i = x; i <= 1001; i++)
		{
			a[i]++;
		}
		c++;
		if (cin.get() == '\n') break;
	}
	while (1)
	{
		cin >> y;
		for (int i = y; i <= 1001; i++)
		{
			a[i]--;
		}
		if (cin.get() == '\n') break;
	}
	for (int i = 1; i <= 1004; i++)
	{
		if (a[i] > max) max = a[i];
	}
	cout << c << " " << max << endl;
	return 0;
}
