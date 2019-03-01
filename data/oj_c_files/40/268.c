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

float getSqrt(float S);

int main(int argc, char* argv[])
{
	double a,b,c,d,e,s,S,f;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	f=360;
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/f)*cos(e*PI/f));
	if (((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/f)*cos(e*PI/f))>0)
       printf("%.4lf\n",S);
    else
		printf("Invalid input\n");
	
	return 0;
}