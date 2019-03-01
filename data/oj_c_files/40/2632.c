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

double area(double a,double b,double c,double d,double e)
{
	double s=(a+b+c+d)/2;
	double x=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(e*PI/360),2); 
	return x;
}
int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	if(area(a,b,c,d,e)<0)
	{
		printf("Invalid input");
	}
	else
	{
	     double S=sqrt(area(a,b,c,d,e));
			 printf("%.4lf",S);
	}
	return 0;
}