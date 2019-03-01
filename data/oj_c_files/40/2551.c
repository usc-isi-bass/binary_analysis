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
	double a,b,c,d;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	double hh;
	scanf("%lf",&hh);
	double s;
	s = (a+b+c+d)/2;
	hh=hh/360*3.141592;
	hh=cos(hh);
	double S;
	double SS=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*hh*hh;
	if (SS<0)
	{
		printf("Invalid input");
		return 0;
	}
	S = sqrt(SS);
	printf ("%0.4lf",S);
	return 0;
	
} 
 