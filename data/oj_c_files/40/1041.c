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
	double a,b,c,d,e,f,s,t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s = (a+b+c+d)/2;
         f=cos(3.1415926*e/360);
	t = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(f,2); 
	if(t<0)
		printf("Invalid input\n");
	else 
	         printf("%.4lf\n",sqrt(t));
	return 0;
}