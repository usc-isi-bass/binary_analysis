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
	double a[100],sum,ave,s2;
	double *p;
	
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		p=a;
		scanf("%d",&n);
		sum=0;
		for(j=1;j<=n;j++)
		{
			scanf("%lf",p+j-1);
			sum+=*(p+j-1);
		}
		ave=sum/n;
		s2=0;
		for(j=1;j<=n;j++)
		{
			s2+=(*(p+j-1)-ave)*(*(p+j-1)-ave);
		}
		printf("%.5lf\n",sqrt(s2/n));
	}

}