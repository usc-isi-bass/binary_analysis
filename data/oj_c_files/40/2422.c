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
	double a;
	double b;
	double c;
	double d;
	double e;
	double S;
	double s;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	e=e/180*3.1415926;
	s = (a+b+c+d)/2;

	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(pow(cos(e/2),2)));
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(pow(cos(e/2),2)))<0)
	{
		printf("Invalid input");
	}
	else
	{
		
		printf("%.4lf",S);
	}
	return 0;
}


