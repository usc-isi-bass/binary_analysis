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

void main()
{
	double a,b,c,d,x,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
    x=3.1415926*x/360;
	s=(a+b+c+d)/2;
	
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x)<0)
		printf("Invalid input");
	else
	printf("%.4f",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x)) );
}

	
  