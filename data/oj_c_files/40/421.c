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
	double area(double w,double x,double y,double z,double v);
	double a,b,c,d,t,s,p,r;
	scanf("%lf",&a);
	scanf("%lf",&b); 
	scanf("%lf",&c);
	scanf("%lf",&d); 
scanf("%lf",&t);
s=0.5*(a+b+c+d);
    r=PI*t/360;
	if (((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(r)*cos(r))<0) 
		printf("Invalid input");
	else 
	{
		p=area(a,b,c,d,t);
		printf("%.4lf",p);
	}
}
   double area(double w,double x,double y,double z,double v)
	{
        double s1,S;
		s1=0.5*(w+x+y+z);
		v=PI*v/360;
        S = sqrt((s1-w)*(s1-x)*(s1-y)*(s1-z) - w*x*y*z*cos(v)*cos(v));
         return(S);
	}

