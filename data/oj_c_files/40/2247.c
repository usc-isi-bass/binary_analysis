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
	double PI=3.1415926;
	double a, b, c, d, s, x, y, S;
	scanf("%lf\n%lf\n%lf\n%lf\n", &a, &b, &c, &d);
	s=(a+b+c+d)/2;
	scanf("%lf", &x);
	y=x*PI/360;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y)<0)
	{
		printf("Invalid input");
	}
	else
	{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y));
		printf("%.4lf", S);
	}
	return 0;
}