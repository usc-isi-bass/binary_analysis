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
	int m,n,i,j,max,re,x=0;
	int a[9][9];
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for (i=0;i<m;i++)
	{
		max=a[i][0];
		re=0;
		for (j=1;j<n;j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				re=j;
			}
		}
		for (j=0;j<m;j++)
		{
			if (a[j][re]<max)
				break;
		}
		if (j==m)
		{
			printf("%d+%d\n",i,re);
			x=1;
			break;
		}
	}
	if (x==0)
		printf("No\n");
}
