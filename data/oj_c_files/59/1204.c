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
	char b;
	int a[101][101],n,i,j,d,r,m=0;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			cin >> b;
			if (b=='.')
				a[i][j]=1;
			if (b=='#')
				a[i][j]=0;
			if (b=='@')
				a[i][j]=2;
		}

	}
	cin >> d;
	for (r=2;r<=d;r++)
	{
      	for (i=1;i<=n;i++)
		{
		for (j=1;j<=n;j++)
		{
			if (a[i][j]==3)
				a[i][j]=2;
		}
		}
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
				if (a[i][j]==2)
				{
					if (a[i+1][j]==1)
						a[i+1][j]=3;
					if (a[i-1][j]==1)
						a[i-1][j]=3;
					if (a[i][j-1]==1)
						a[i][j-1]=3;
					if (a[i][j+1]==1)
						a[i][j+1]=3;
				}
			}
		}
	}

	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (a[i][j]==2||a[i][j]==3)
				m++;
		}
	}
	cout << m;
	return 0;
}
