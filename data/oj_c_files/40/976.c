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
	double a,b,c,d,e,s,S,y;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    s = (a+b+c+d)/2;
    S = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e/360* 3.1415926)*cos(e/360*3.1415926); 
    y=sqrt(S);
	if (S>=0) {printf("%.4lf",y);
	}else if (S<0) {printf("Invalid input");
	}
	return 0;
}
