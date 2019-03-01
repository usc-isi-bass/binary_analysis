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

double i,h,a,b,c,d,e;
double f(double a,double b,double c,double d,double h)
{
	double g;
	g=sqrt((i-a)*(i-b)*(i-c)*(i-d)-a*b*c*d*cos(h)*cos(h));
	return(g);
}
void main()
{
	double s;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
    i=(a+b+c+d)/2;
    h=e/2/180*3.1415926;
	if((i-a)*(i-b)*(i-c)*(i-d)<a*b*c*d*cos(h)*cos(h))printf("Invalid input");
	else
	{
		s=f(a,b,c,d,h);
	    printf("%.4lf",s);
	}
}
