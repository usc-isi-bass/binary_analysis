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
	double a,b,c,d,m,n;
	
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&n);
    double s=(a+c+d+b)/2;
	m=(n/360)*p;
	double S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(m)*cos(m));
         if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(m)*cos(m)>=0)
            {
	     printf("%.4f",S);
            }
         else
            {
            printf("Invalid input");
            }
	return 0;
}
