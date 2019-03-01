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
	double a,b,c,d,w,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&w);
	w=3.1415926*w/180/2;
	s = 1.0/2*(a+b+c+d);
    s = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(w)*cos(w);
	if (s<0)
		printf("Invalid input");
    else
	    printf("%.4f\n",sqrt(s));
	return 0;
}