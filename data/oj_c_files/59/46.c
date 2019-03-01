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

void main()
{
	int n,i,j,m,k,count=0;
	char a[100][101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	scanf("%d",&m);
	if (m==1)
	{
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if (a[i][j]=='@')
				count++;
		}
		printf("%d",count);
	}
	else 
	{
	for(k=1;k<m;k++)
	{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if (a[i][j]=='@')
			{
				if (j!=n-1)
				{
					if (a[i][j+1]=='.')
					{
						a[i][j+1]='!';
					}
				}
				if (j!=0)
				{
					if (a[i][j-1]=='.')
					{
						a[i][j-1]='!';
					}
				}
				if (i!=n-1)
				{
					if (a[i+1][j]=='.')
					{
						a[i+1][j]='!';
					}
				}
				if (i!=0)
				{
					if (a[i-1][j]=='.')
					{
						a[i-1][j]='!';
					}
				}
			}
		}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if (a[i][j]=='!')
					a[i][j]='@';
			}

	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if (a[i][j]=='@')
				count++;
		}
		printf("%d",count);
	}
}
		
