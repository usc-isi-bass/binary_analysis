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
	int n,m[101],i,j;
	double x[1001],s[101],a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		double b=0,sum=0;
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)
		{
			scanf("%lf",&x[j]);
			sum=sum+x[j];
		}
		a=sum/m[i];
		for(j=0;j<m[i];j++)
		{
			b=b+(x[j]-a)*(x[j]-a);
		}
		s[i]=sqrt(b/m[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%.5lf\n",s[i]);
	}
	return 0;
}

