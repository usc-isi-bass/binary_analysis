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
	int n,k,i,j;
	double a[1000],s,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		double sum=0,sumx=0;
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			scanf("%lf",&a[j]);
			sum=sum+a[j];
		}
		x=(double)sum/k;
		for(j=0;j<k;j++)
		{
			sumx=sumx+(a[j]-x)*(a[j]-x);
		}
		s=(double)sqrt(sumx/k);
		printf("%.5lf\n",s);
	}
	return 0;
}