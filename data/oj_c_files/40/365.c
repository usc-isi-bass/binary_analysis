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
	double a,b,c,d,e,f,m,s,n;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
		s=(a+b+c+d)/2;
	f=e*PI/360;
m=sqrt(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f)));
n=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
if(n>=0)
	printf("%.4lf\n",m);
	else
printf("Invalid input\n");

	return 0;
}
