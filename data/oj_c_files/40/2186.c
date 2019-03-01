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
	double a,b,c,d,e,s,S;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	e=e*PI/360;
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e); 
	if(S<0)
		printf("Invalid input\n");
	else
	{S=sqrt(S);
	    printf("%.4lf\n",S);
	}
	return 0;
}
