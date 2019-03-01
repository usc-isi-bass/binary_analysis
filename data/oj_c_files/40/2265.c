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
	double a,b,c,d,m,n,x,s,S,t;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&m);
	x=m*pi/360;
	n=cos(x);
	s=(a+b+c+d)/2;
	t=(s-a)*(s-b)*(s-c)*(s-d);
	if((t-a*b*c*d*n*n)<0) 
		printf("Invalid input\n");
	else
	{
		S=sqrt(t-a*b*c*d*n*n);
	    printf("%.4lf",S);
	}
	    return 0;
}