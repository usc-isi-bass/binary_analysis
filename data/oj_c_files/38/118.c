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
	int k;
	scanf("%d",&k);
	int i;
	for(i=1;i<=k;i++)
	{
		int n;
		scanf("%d",&n);
		int j;
		double a[100],sum=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
			sum=sum+a[j];
		}
		double ave;
		ave=sum/n;
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+(a[j]-ave)*(a[j]-ave);
		}
		printf("%.5lf\n",sqrt(sum/n));
	}
}


	