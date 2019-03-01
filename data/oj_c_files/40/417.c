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
	double a,b,c,d,s,x,y,S;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&x);
	s=1.0/2.0*(a+b+c+d);
	y = x/360*3.1415926;
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(y)*cos(y)));
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(y)*cos(y))<0)
		printf("Invalid input");
	else
		printf("%.4lf",S);
	return 0;
}