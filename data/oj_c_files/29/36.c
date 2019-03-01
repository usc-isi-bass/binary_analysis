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
	int n,i,j,k;
	float a[201],sum[100];
	for(i=1;i<=200;i++)
	{
		if(i==1){a[i]=1;}
		else if(i==2){a[i]=2;}
		else {a[i]=a[i-1]+a[i-2];}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		sum[i]=0;
		for(j=0;j<k;j++)
		{
			sum[i]=sum[i]+(a[j+2]/a[j+1]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%.3f\n",sum[i]);
	}
	return 0;
}
