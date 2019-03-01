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
	double sq(double w,double x,double y,double z,double v);
	double b,c,d,e,a,s;
	scanf("%lf%lf%lf%lf%lf",&b,&c,&d,&e,&a);
	printf("\n");
	s=sq(b,c,d,e,a);
	if(s>0)
		printf("%.4lf",s);
	else
		printf("Invalid input\n");
}

	double sq(double w,double x,double y,double z,double v)
	{
		double u,q,r,t;
		q=(v/(double)(360))*3.1415926;
		r=cos(q);
		t=(w+x+y+z)/2;
		if(((t-w)*(t-x)*(t-y)*(t-z)-w*x*y*z*r*r)>0)
			u=sqrt((t-w)*(t-x)*(t-y)*(t-z)-w*x*y*z*r*r);
		else
			u=0;
		return(u);
	}


