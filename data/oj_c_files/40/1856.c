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
	double a,b,c,d,s,t,r,o,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&t);
	r=t/360*PI;
	s=(a+b+c+d)/2;
	o=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(r)*cos(r);
	m=sqrt(o);
	if(o<0)printf("Invalid input");
	else printf("%.4lf",m);
}
