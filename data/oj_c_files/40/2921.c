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


double sqare(double a,double b,double c,double d,double angle);
void main()
{
	double a,b,c,d,angle;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
	double s=sqare(a,b,c,d,angle);
	if(sqare(a,b,c,d,angle)==-1)
		printf("Invalid input\n");
	else
		printf("%.4lf\n",s);
}

double sqare(double a,double b,double c,double d,double angle)
{
	double sq,s,alfa;
	alfa=PI*angle/360;
	s=(a+b+c+d)/2;
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(alfa),2))<0)
		return -1;
	else
	{
		sq=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(alfa),2));
		return sq;
	}
}
