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
	int a[101][101];
	int i, j, k, r, p, t;
	int m, n, s;


	cin >> t;
	for (p = 1; p<=t; p++)
	{
		s=0;
		cin >> m >> n;
		                                                                                                                                                        
		for(j=1;j<=m;j++)
		{
			for(k=1;k<=n;k++)
			{
				cin >> a[j][k];
			}
		}
        if (m==1&&n==1)
		{
            cout << a[1][1];
            continue;
        }
		for(i=1; i <= n; i++)
		{
			s=s+a[1][i]+a[m][i];
		}
		for(r=1; r <= m; r++)
		{
			s=s+a[r][1]+a[r][n];
		}
		s=s-a[1][1]-a[1][n]-a[m][1]-a[m][n];
		cout << s << endl;
	}

	return 0;
}

