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
	double a,b,c,d,du,s,t;
	scanf("%lf",&a);
    scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&du);
	s=(a+b+c+d)/2;
	t=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(du*3.1415926/360)*cos(du*3.1415926/360);
	if(t<0)
		printf("Invalid input");
	else
		printf("%.4lf",sqrt(t));
	return 0;
}