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

double s(double a,double b,double c,double d,double q)
{
	double area,k,w,i;
	w=(a+b+c+d)/2;
	k=q*0.5*3.1415926/180;
	i=(w-a)*(w-b)*(w-c)*(w-d)-a*b*c*d*cos(k)*cos(k);
	if(i<0)
		area=-1;
	else
		area=sqrt(i);
	return (area);
}
int main()
{
    double s(double a,double b,double c,double d,double q);
	double a,b,c,d,q,k;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&q);
	k=s(a,b,c,d,q);
	if(k<0)
	printf("Invalid input");
	else
    printf("%.4lf",k);
}


