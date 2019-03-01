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
    double a,b,c,d,e,s;
	double S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	
    s = 0.5*(a+b+c+d); 
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e/2)/180.00*3.1415926)*cos((e/2)/180.00*3.1415926));
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e/2)/180.00*3.1415926)*cos((e/2)/180.00*3.1415926)>0)
	    printf("%.4lf\n",S);
	else if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e/2)/180.00*3.1415926)*cos((e/2)/180.00*3.1415926)<=0)
		printf("Invalid input\n");



	return 0;
}

