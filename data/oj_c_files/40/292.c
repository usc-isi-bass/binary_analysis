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
	double a,b,c,d,A,s,S;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&A);
    s = (a+b+c+d)/2;
	if((s-a)<0||(s-b)<0||(s-c)<0||(s-d)<0)
		printf("Invalid input",s);
	else
	{
         S = sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(A*3.1415926/360)*cos(A*3.1415926/360));
	printf("%.4lf\n",S);
	}
	return 0;
}
