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
	int n,i;
	double a,b,c,deta,sq;
	double x1,x2;
	scanf("%d",&n);
	i=0;
	while (i<n)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		deta=b*b-4*a*c;
		if (deta==0)
		{
			x1=x2=-b/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else if(deta>0)
		{
			x1=(-b+sqrt(deta))/(2*a);
			x2=(-b-sqrt(deta))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else 
		{
			sq=sqrt(0-deta)/(2*a);
			x1=-b/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,sq,x1,sq);
		}
		i++;
	}
	return 0;
}