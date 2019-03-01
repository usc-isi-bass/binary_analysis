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


int main ()
{
	int n, a[100000], i, j;
	cin >> n;
	for (i = 0; i <= n - 1; i++ )
	{
		cin >> a[i];
	}
	int k, count = 0;
	cin >> k;
	for (i = 0; i <= n - 1 - count; i++ )
	{
		if (a[i] == k)
		{
			count ++ ;
			for (j = i; j <= n  - 1 - count; j++ )
			{
				a[j] = a[j + 1];
			}
			i-- ;
		}
	}
	cout << a[0];
	for (i = 1; i <= n - 1 - count; i++ )
	{
		cout << " " << a[i];
	}
	
	return 0;
}