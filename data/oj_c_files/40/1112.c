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

double f(double a,double b,double c,double d,double pr)
{
	double s,area,r,PI;
	PI=3.1415926;
	r=pr*PI/180;
	s=(a+b+c+d)/2;
	area=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(r/2)*cos(r/2)); 
	return(area);
}
void main()
{
	double a,b,c,d,pr,s,PI=3.1415926,r;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&pr);
	s=(a+b+c+d)/2;
	r=pr*PI/180;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(r/2)*cos(r/2)<0)
		printf("Invalid input");
	else
		printf("%.4lf",f(a,b,c,d,pr));
}
