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
	int n, i, a[200001], j, flag = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	cout << a[1];
	for (i = 2; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (a[j] == a[i])
			{
				flag = 1;
			}
		}
		if (!flag)
			cout << ' ' << a[i];
		flag = 0;
	}
	return 0;
}