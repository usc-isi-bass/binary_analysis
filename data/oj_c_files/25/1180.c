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
	int a[200] = {0}, i, j, k, n, t;
	cin >> n;
	a[0] = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < 200; j++)
			a[j] *= 2;
		t = a[0] / 10;
		a[0] %= 10;
		for (j = 1; j < 200; j++)
		{
			a[j] = t + a[j];
			t = a[j] / 10;
			a[j] %= 10;
		}
	}
	for (i = 199; i >= 0; i--)
	{
		if (a[i] != 0)
		{
			k = i;
			break;
		}
	}
	for (i = k; i >= 0; i--)
		cout << a[i];
	cout << endl;

	return 0;
}
