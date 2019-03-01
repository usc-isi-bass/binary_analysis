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
	double a=0,b=0,c=0,d=0,e=0,f=0,s=0,S=0,q=0;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	s=0.5*(a+b+c+d);
	f=PI*e/180;
	q=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(0.5*f),2);
	if(q>=0)
	{
		S=sqrt(q);
	    printf("%.4lf",S);
	}
	else
		printf("Invalid input");
	return 0;
}
