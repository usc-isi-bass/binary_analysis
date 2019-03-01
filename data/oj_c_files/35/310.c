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
	int i,j,k,a,b,num[8][8];
	scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
			scanf("%d",&num[i][j]);
	}
	int big[8],x[8],y[8],sum;
	for(i=0;i<a;i++)
	{
		big[i]=num[i][0];
		for(j=0;j<b;j++)
		{
			if(num[i][j]>=big[i])
			{
				big[i]=num[i][j];
				x[i]=i;
				y[i]=j;
			}
		}
	}
	for(i=0;i<a;i++)
	{
		for(k=0;k<a;k++)
		{
			if(num[k][y[i]]<num[x[i]][y[i]])
			{
				sum=0;
				break;
			}
			else
				sum=1;
		}
		if(sum==1)
		{
			printf("%d+%d",x[i],y[i]);
			break;
		}
	}
	if(sum==0)
		printf("No");
}