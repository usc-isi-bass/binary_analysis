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

void f(double num[100],int n,double sum)
{
	int i;
	for(i=0;i<n;i++)
	{
		num[i]=(num[i]-sum)*(num[i]-sum);
	}
}
int main()
{
	int k,n,i,j;
	double num[100],sum;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&n);
		sum=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",&num[j]);
			sum+=num[j];
		}
		sum=sum/n;
		f(num,n,sum);
		sum=0;
		for(j=0;j<n;j++)
			sum+=num[j];
		sum=sum/n;
		sum=sqrt(sum);
		printf("%.5lf\n",sum);
	}
	return 0;
}
