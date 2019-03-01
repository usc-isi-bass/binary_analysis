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
	double a,b,c,d,r,s,S;
	double result(double,double,double,double,double);
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&r);
	S=result(a,b,c,d,r);
	if(S!=0)
		printf("%.4lf",S);
	return 0;
}
double result(double a,double b,double c,double d,double r)
{
	double s,S;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(PI*r/360)*cos(PI*r/360)>=0)
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(PI*r/360)*cos(PI*r/360));
	else
	{
		printf("Invalid input");
		S=0;
	}
	return S;
}
