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
	double A,B,C,D,E,F;
	double s(double a,double b,double c,double d,double e);
	scanf("%lf%lf%lf%lf%lf",&A,&B,&C,&D,&E);
	F=s(A,B,C,D,E);
	if (F==0)
		printf("Invalid input");
	else
	    printf("%.4lf",F);
	return 0;
}
double s(double a,double b,double c,double d,double e)
{
	double g,h,z;
	g=(a+b+c+d)/2;
	h=e/360*PI;
	if (((g-a)*(g-b)*(g-c)*(g-d))>=0)
		z=sqrt((g-a)*(g-b)*(g-c)*(g-d)-a*b*c*d*(cos(h))*(cos(h)));
	else
		z=0;
	return z;
}