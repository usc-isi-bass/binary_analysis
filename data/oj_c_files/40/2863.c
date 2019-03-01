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

int main ()
{
	double a,b,c,d,q;
	double y(double a,double b,double c,double d,double q);
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&q);
	if(y(a,b,c,d,q)==-1)
		printf("Invalid input\n");
	else
		printf("%.4lf\n",y(a,b,c,d,q));
	return 0;
}

double y(double a,double b,double c,double d,double q)
{
	double s,f,test;
	s=(a+b+c+d)/2;
	f=(q/360)*PI;
	test=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	if (test<0)
		return -1;
	else 
		return (sqrt(test));
}
	