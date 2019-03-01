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
	double a,b,c,d,s,e,S1;
	scanf("%lf",&a);
	scanf("%lf",&b);
    scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	s=(a+b+c+d)/2;
    S1=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*PI)*cos(e/360*PI));
	if(S1>=0)
	     printf("%.4lf",sqrt(S1));
             else
              printf("Invalid input");
	
}

