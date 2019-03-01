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
	int m,n,i,j;
	int height[22][22],check[20][20];
	cin>>m>>n;
	for(i=0;i<22;i++)
	{
		for(j=0;j<22;j++)
		{
			height[i][j]=0;
		}
	}
	for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			cin>>height[i][j];
		}
	}
	for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(height[i][j]>=height[i-1][j]&&height[i][j]>=height[i+1][j]&&height[i][j]>=height[i][j-1]&&height[i][j]>=height[i][j+1])
			{
				check[i][j]=1;
			}
			else
			{
				check[i][j]=0;
			}
		}
	}
    for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(check[i][j]==1)
			{
				cout<<i-1<<" "<<j-1<<endl;
			}
			else
			{
				continue;
			}
		}
	}
	return 0;
}