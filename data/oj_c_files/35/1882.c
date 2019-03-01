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
	int i,j,h,a[8][8],m,n,x,p;//m????????n???????//
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		x=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>x)
			{
				x=a[i][j];
				p=j;
			}
		}
		for(h=0;h<m;h++)
		{
			if(a[h][p]<x)
				break;
		}
		if(h==m)
		{
			printf("%d+%d\n",i,p);
			break;
		}
	}
	if(i==m)
		printf("No\n");
}