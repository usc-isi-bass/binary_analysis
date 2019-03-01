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
	int a[100][100],m,n,i,j,k;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(k=0;k<m+n-1;k++)
	{
		for(i=n-1;i>=0;i--)
		{
			if(k-i>=0&&k-i<m)
			{
				cout<<a[k-i][i]<<endl;
			}
		}
	}
	return 0;
}