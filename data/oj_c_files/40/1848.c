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
{   double S,s,a,b,c,d,e;
    double f;
    scanf ("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    s = (a+b+c+d)/2;
	f=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2*(3.1415926/180))*cos(e/2*(3.1415926/180));
    S = sqrt(f);
	if (f<0)  
    printf("Invalid input");
	else 
		printf("%.4lf",S);
	return 0;

}