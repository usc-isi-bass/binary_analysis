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
    double a,b,c,d,t,s,S,h;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&t);
	s = 0.5*(a+b+c+d); 
    h=(t/180.0)*3.1415926;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h/2)*cos(h/2)<0)
	    printf("Invalid input\n");
	else
	{
	    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h/2)*cos(h/2));
	    printf("%.4f",S);
	}
	return 0;
}

