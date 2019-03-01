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

void main()
{
	double a,b,c,d,s,x,pi=3.1415926,t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
	x=x/360*2*pi;
	x=x/2;
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x);
	if(t<0)
	{
		printf("Invalid input\n");
	}
	if(t>0)
	{
		t=sqrt(t);
		printf("%.4lf\n",t);
	}
}