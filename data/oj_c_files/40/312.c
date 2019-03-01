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
	double a,b,c,d,s,S;
	double e,x;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
	e=cos(x/720*2*PI);
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e);
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e)<0)
	printf("Invalid input\n");
    if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e)>=0)
	printf("%.4lf\n",S);
	return 1;
}