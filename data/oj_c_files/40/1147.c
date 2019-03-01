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

double f(double a, double b, double c, double d, double e)
{
double s, S;
s=(a+b+c+d)/2;
e=e/180*3.1415926;
S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2)*cos(e/2);
return S;
}
void main()
{
	double nun;
	double a,b,c,d,e;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	if(f(a,b,c,d,e)<0) 
	{
		printf("Invalid input");
	}
	else
	{
		nun=sqrt(f(a,b,c,d,e));
		printf("%.4lf",nun);
	}
}