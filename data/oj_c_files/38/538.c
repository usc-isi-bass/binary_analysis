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
	int k,n,i,j;
	double *x,sum,b,s,a;
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		sum=0;
		b=0;
		scanf("%d",&n);
        x=(double*)malloc(sizeof(double)*n);
		for(i=0;i<n;i++)
		{
		   scanf("%lf",&x[i]);
           sum+=x[i];
		}
		a=sum/n;
		for(i=0;i<n;i++)
		{
			b+=(x[i]-a)*(x[i]-a);
		}
		s=sqrt(b/n);
		printf("%.5lf\n",s);
	}
		free(x);
		return 0;
}