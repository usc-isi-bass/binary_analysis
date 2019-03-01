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
	int i,n;
	double a,b,c,x1,x2,dert,d,e;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
        dert=b*b-4*a*c;
		if(dert>0)
		{
	       x1=(-b+sqrt(dert))/(2*a);
		   x2=(-b-sqrt(dert))/(2*a);
		   printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		if(dert==0)
		{
			x1=(-b+sqrt(dert))/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		if(dert<0)
		{
			dert=-dert;
			d=(-b)/(2*a);
                           d=(d==-0)?(0):(d);
			e=sqrt(dert)/(2*a);
			e=(e>=0)?(e):(-e);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",d,e,d,e);		}
	}
	return 0;
}