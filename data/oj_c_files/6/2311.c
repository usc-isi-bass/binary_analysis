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
	int a[100][100];
	int k,i,j,l,m,n,x = 0,y = 0;
	cin >> k;
	for (l = 1;l <= k;l++)
	{
		cin >> m >> n;
		for (i = 1;i <= m;i++)
	    {
			for (j = 1;j <= n;j++)
		    {
				cin >> a[i][j];
		    }
		}
		for (i = 1;i <= m;i++)
	    {
			for (j = 1;j <= n;j++)
			{
				x = x + a[i][j];
		    }
		}
		for  (i = 2;i <= m - 1;i++)
		{
			for (j = 2;j <= n - 1;j++)
			{
				y = y + a[i][j];
		    }
	    }
		cout << x - y << endl;
		x = 0;
		y = 0;
	}
	return 0;
}