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
	double a,b,c,d,v;
	double s,S;
    double P;
	P=3.1415926;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&v);
	s = (double)1/2*(a+b+c+d);
	if((s-a)*(s-b)*(s-c)*(s-d)- a*b*c*d*cos(v*P/360)<0)//CXX0017: Error: symbol "cos" not found

		printf("Invalid input");
	else
	{
        S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(v*P/360)*cos(v*P/360)); 
	    printf("%.4f",S);
	}
	return 0;
}
