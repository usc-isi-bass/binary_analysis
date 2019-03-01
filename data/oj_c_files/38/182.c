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
	int k,i,j,n;
	double a[100],x,s;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		s=0;
		x=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
			x=x+a[j];
		}
		x=x/(double)n;
		for(j=0;j<n;j++)
		{
			s=s+(a[j]-x)*(a[j]-x);
		}
		s=s/(double)n;
		s=sqrt(s);
		printf("%.5lf\n",s);
	}
	return 0;
}
