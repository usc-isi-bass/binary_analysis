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
	double a[100],b[100],sum[100]={0};
	int i,j,m,n[100];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	a[0]=2;
	b[0]=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n[i];j++)
		{
			sum[i]+=a[j]/b[j];
			a[j+1]=a[j]+b[j];
			b[j+1]=a[j];
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%.3lf\n",sum[i]);
	}
	return 0;
}

