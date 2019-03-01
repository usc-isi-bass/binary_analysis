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

int c[25], d[25], k;
int D(int a)
{
	int m = 1;
	for (int i = a + 1; i <= k - 1; i ++)
		if (c[i] <= c[a] && m < D(i) + 1)
			m = D(i) + 1;
	return m;
}

int main()
{
	int max = 0;
	cin >> k;
	for (int i = 0; i < k; i ++)
		cin >> c[i];
	for (int i = k - 1; i >= 0; i --)
	{
		d[i] = D(i);
		if (d[i] > max)
			max = d[i];
	}
	cout << max;
	return 0;
}