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

double f(double A);
void main()
{
	double a,b,c,d,s,A,S;
	scanf("%lf""%lf""%lf""%lf""%lf",&a,&b,&c,&d,&A);
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*f(A/2)*f(A/2);

	if(S<0)
		printf("Invalid input");
	else
		printf("%.4lf",sqrt(S));
}

double f(double A)
{
	double z,PI;
	PI = 3.1415926;
	z=(double)cos(A/180*PI);
	return(z);
}
