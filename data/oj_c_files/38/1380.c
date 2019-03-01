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
    int n,i,k,m[100];
    double a[1000],sum1,sum2,s[100]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m[i]);
		for(k=1;k<=m[i];k++)
		{
			scanf("%lf",&a[k]);
		}
		sum1=0;
		sum2=0;
		for(k=1;k<=m[i];k++)
		{
			sum1+=a[k];
		}
		sum1=sum1/m[i];
		for(k=1;k<=m[i];k++)
		{
			sum2+=(a[k]-sum1)*(a[k]-sum1);
		}
		sum2=sum2/m[i]; 
		s[i]=(double)sqrt(sum2);
	}
    for(i=1;i<=n;i++)
	{
		printf("%.5lf\n",s[i]);
	}
	return 0;
}