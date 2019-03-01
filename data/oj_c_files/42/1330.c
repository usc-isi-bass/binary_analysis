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
	int n, k;
	cin >> n;
	int a[100000];
	int i, j;
	int m;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	m = n;
	cin >> k;
	for (i = 0; i < m; i++)
	{
		if ( a[i] == k)
		{
			m = m - 1;
			for(j = i; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			i = i - 1;
		}
	}
	cout << a[0];
	for (i = 1; i < m; i++)
		cout << " " << a[i];
	return 0;
}