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
	float a,b,c,d,e;
	double t,n,m;
	scanf("%f %f %f %f\n",&a,&b,&c,&d);
	scanf("%lf",&t);
	e= (a+b+c+d)/2;
	n = sqrt((e-a)*(e-b)*(e-c)*(e-d) - a*b*c*d*cos(t*PI/360)*cos(t*PI/360));
    m=(e-a)*(e-b)*(e-c)*(e-d) - a*b*c*d*cos(t*PI/360)*cos(t*PI/360);
	if(m<0)
	{
		printf("Invalid input");
	}
	if(m>=0)
	{ 
		printf("%.4lf",n);
	}
	return 0;
}
