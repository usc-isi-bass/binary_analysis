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
	int n, i, k, j, m=0, h, l;
	cin >> n;
	int a[110000];
	for (i=1 ;i<=n;i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (j=n;j>=1;j--)
	{
		if (a[j]==k)
		{
			for (l=j;l<=n;l++)
			{
				a[l]=a[l+1];
			}
			m=m+1;
		}
	}
	for (h=1;h<=n-m;h++)
	{
		if (h==1)
			cout << a[h];
		else
			cout << " " << a[h];
	}
	return 0;
}



