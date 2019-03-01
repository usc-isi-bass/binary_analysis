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
	double a,b,c,d,angle,s,area;
	double m;

	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
	
	s = (a+b+c+d)/2;
	angle=angle/720*2*PI;
	m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);

	if(m<0)
		printf("Invalid input");
	else
	{
		area=sqrt(m);
		printf("%.4lf\n",area);
	}

	return 0;
}