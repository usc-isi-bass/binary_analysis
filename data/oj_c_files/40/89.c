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
	double pai=3.1415926;
	double a,b,c,d,A,s=0,h;
	double S;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	scanf("%lf",&A);
    h=A/180*pai;
    s =(a+b+c+d)*0.5; 
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(h/2)*cos(h/2)>=0)
	{
		S= sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(h/2)*cos(h/2));
		printf("%.4lf",S);
	}
	else
		printf("Invalid input");
	return 0;
}