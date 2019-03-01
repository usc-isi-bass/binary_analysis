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
	double a,b,c,d,s,ds;
	double e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	e=(double)e*3.1415926/180;
	e=(double)e/2;
	s=(double)(a+b+c+d)/2;
	ds=(double)((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e));
	if(ds<0)
	{
		printf("Invalid input");
	}
	else
	{
		ds=sqrt(ds);
		printf("%.4lf",ds);
	}
	return 0;
}
