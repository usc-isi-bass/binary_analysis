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
	int n, a[20000], i, j, k;
	cin >> n;
	for (i = 0; i < n ; i++)
		cin >> a[i];
	for (i = n - 1; i > 0; i--)
	{
        for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				for (k = i ; k < n; k++)
				{
					a[k] = a[k + 1];
				}
				n = n - 1;
			}
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		cout << a[i];
		if (i != n - 1)                        
			cout << " ";
	}
    return 0;
}