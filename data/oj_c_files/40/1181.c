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
	double a,b,c,d,ag,s,sq;
	
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%lf\n",&c);
	scanf("%lf\n",&d);
	scanf("%lf\n",&ag);

	s=(a+b+c+d)/2;
	ag=ag/360 * PI;
	sq=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(ag),2);

	if(sq<0)
	{
		printf("Invalid input");
		return 0;
	}

	printf("%.4lf",sqrt(sq));

	return 0;
}