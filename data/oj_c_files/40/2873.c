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

double area(double a,double b,double c,double d,double angle)
{double s,sum;
	s=(a+b+c+d)/2; 
	sum=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(3.1415926*angle/360)*cos(3.1415926*angle/360)); 
return sum;
}

int main(int argc, char* argv[])
{double a,b,c,d,angle,k;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
k=area(a,b,c,d,angle);
if(k>=0)
	printf("%.4lf\n",k);
else 
	printf("Invalid input");
	
	return 0;
}

