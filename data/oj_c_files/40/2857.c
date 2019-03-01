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


double S(double a,double b,double c,double d,double jd)
{
	double s,t;
	s=(a+b+c+d)/2;
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(jd*PI/360)*cos(jd*PI/360);
	if(t<0) return 0;
	else return sqrt(t);  
}

int main()
{
	double a,b,c,d,jd;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jd);
	if(S(a,b,c,d,jd)==0) printf("Invalid input");
	else printf("%.4lf",S(a,b,c,d,jd));
	return 0;
}