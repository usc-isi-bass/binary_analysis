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
	double a,b,c,d,sum;
	double s,S;
	scanf ("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&sum);
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(sum*3.1415926/360)*cos(sum*3.1415926/360);
	if(S>0)
	{
		printf("%.4lf",sqrt(S));
	}
	else
	{
		printf("Invalid input");
	}
}