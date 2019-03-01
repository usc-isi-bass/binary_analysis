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
	double a,b,c,d,e,z,s,S,L;
	double cos(double x);
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	z=e*PI/360;
	s=(a+b+c+d)/2;
	L=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(z)*cos(z);
	if(L<0)
	{
		printf("Invalid input\n");
    }
	else
	{
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(z)*cos(z));
	printf("%.4f\n",S);
	}
}

