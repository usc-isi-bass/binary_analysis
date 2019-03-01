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
	int a,b,c=0,e,n,i,k;
	int sz[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
	sz[c]++;
		}
		else
		{
		c++;
		}
	}
	for(i=0;i<99;i++)
	{
		for(k=0;k<99-i;k++)
		{
			if(sz[k]>sz[k+1])
			{
				e=sz[k];
				sz[k]=sz[k+1];
				sz[k+1]=e;
			}
		}
	}
	printf("%d",sz[99]);


	return 0;
}