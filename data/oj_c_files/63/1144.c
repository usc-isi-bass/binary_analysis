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
	int a[105][105],b[105][105],c[105][105],x1,y1,x2,y2,i,j,k,sum=0;
	scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			sum=0;
			for(k=0;k<x2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<x1;i++)
	{
		printf("%d",c[i][0]);
		for(j=1;j<y2;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
