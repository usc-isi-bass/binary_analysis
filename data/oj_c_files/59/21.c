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
	int i,j,n,day,k=1,num=0;
	char a[101][101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	scanf("%d",&day);
again:;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				if(a[i+1][j]=='.')
				{
					a[i+1][j]='%';
				}
				if(a[i-1][j]=='.')
				{
					a[i-1][j]='%';
				}
				if(a[i][j+1]=='.')
				{	
					a[i][j+1]='%';
				}
				if(a[i][j-1]=='.')
					a[i][j-1]='%';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='%')
				a[i][j]='@';
		}
	}
	k++;
	if(k<day)
		goto again;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				num++;
			}
		}
	}
	printf("%d",num);
}