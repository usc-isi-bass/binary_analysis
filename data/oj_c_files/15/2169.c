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
	int a[1000][1000]={0};
	int n,i,j,b,c,d,e;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[i][j-1]==0&&a[i-1][j]==0&&a[i-1][j-1]==0)
			{
				b=i;
				c=j;
			}
		}
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[i][j+1]==0&&a[i+1][j]==0&&a[i+1][j+1]==0)
			{
				d=i;
				e=j;
			}

		}
	}
	cout<<(d-b+1)*(e-c+1)<<endl;
	return 0;
}