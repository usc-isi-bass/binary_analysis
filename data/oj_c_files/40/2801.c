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


int pd=0;

double S(double a,double b,double c,double d,double angle)
{
	double s,t;
	s = (a+b+c+d)/2;
	t = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(angle)*cos(angle);
	if (t<0)
	{
		pd = 1;
		return 0;
	}
	else
		return (sqrt(t));
}

int main()
{
	double a,b,c,d,angle,ans;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
	angle = angle * PI / 360;
	ans = S(a,b,c,d,angle);

	if (pd)
		printf("Invalid input");
	else
		printf("%.4lf",ans);

	return 0;
}
