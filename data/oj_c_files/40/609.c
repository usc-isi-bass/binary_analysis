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

int main ()
{
    double a, b, c, d,  m, s;
	scanf("%lf%lf%lf%lf%lf",  &a, &b, &c, &d, &m); 
    m=m/360*3.1415926;
	s=1.0/2*(a+b+c+d); 
	s= (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m);
	if (s<0)
		printf("Invalid input\n");
		else printf("%.4f\n", sqrt(s));
	return 0;
}

