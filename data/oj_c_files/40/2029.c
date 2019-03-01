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
	double a,b,c,d,e,A,s,S;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	scanf("%lf",&A);
	A=A/2/180*PI;
	e=cos(A);
	s = (a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*e*e<0)
		printf("Invalid input\n");
	else 
	{
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*e*e); 
		printf("%.4f",S);
	}	
	return 0;
}