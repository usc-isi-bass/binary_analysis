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
	int a[100000], n, i, k, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	for (i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			n -= 1;
			for (j = i; j < n; j++)
			{
				a[j] = a[j+1];
			}
			i -= 1;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			cout << " ";
		cout << a[i];
	}
	return 0;
}
