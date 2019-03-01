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
	int m,n,h[21][21]={0},t[21][21]={0};
	cin >> m >> n;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> h[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if( (h[i][j] >= h[i-1][j]) && (h[i][j] >= h[i+1][j]) && (h[i][j] >= h[i][j-1]) && (h[i][j] >= h[i][j+1]) )
			{
				t[i][j]=1;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if( t[i][j]==1)
			{
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}