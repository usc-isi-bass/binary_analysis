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
	int n,m;
	double sz[2000];
	int i,j;
	double average,sum=0,count=0,fangcha;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		average=0;
		fangcha=0;
		count=0;
		for(j=0;j<m;j++)
		{
			sz[i]=0;
		}
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&sz[j]);
			sum=sum+sz[j];
		}
		average=sum/m;
		for(j=0;j<m;j++)
		{
			count=count+(sz[j]-average)*(sz[j]-average);
		}
		fangcha=count/m;
		fangcha=sqrt(fangcha);
		printf("%.5lf\n",fangcha);
	}
	return 0;
}