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
	int i,n;
	double a,b,c;
	double d,x1,x2;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		d=b*b-4*a*c;

		if (d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if (d==0)
		{
			x1=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if (d<0)
		{
			double t;
			t=sqrt(-d);
			printf("x1=-%.5lf+%.5lfi;x2=-%.5lf-%.5lfi\n",b/(2*a),t/(2*a),b/(2*a),t/(2*a));
		}
	}
}
