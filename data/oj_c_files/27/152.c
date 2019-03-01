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

void main()
{
	int n,i=1;
	double a,b,c,x1,x2,d,e,y,z;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		d=b*b-4*a*c;
		if (d>0)
		{
			e=sqrt(d);
			x1=(-b+e)/(2*a);
			x2=(-b-e)/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if (d==0)
		{
			e=sqrt(d);
			x1=x2=(-b+e)/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if (d<0)
		{
			y=-b/(2*a);
			z=sqrt(-d)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",y,z,y,z);
		}
	}
}
	