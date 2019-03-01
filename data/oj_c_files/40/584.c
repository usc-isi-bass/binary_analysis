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

int main(int argc, char* argv[])
{
	double a,b,c,d,t,s,p;
	scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&t);
	p=(0.5*(a+b+c+d)-a)*(0.5*(a+b+c+d)-b)*(0.5*(a+b+c+d)-c)*(0.5*(a+b+c+d)-d) - a*b*c*d*cos(t/360*3.1415926)*cos(t/360*3.1415926);
	if(p>=0)
	{
	s=sqrt(p);
	printf("%.4lf\n",s);
	}
	else 
		printf("Invalid input\n");
	return 0;
}