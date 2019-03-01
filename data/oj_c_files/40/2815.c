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
	double a,b,c,d,x;
	double S(double a,double b,double c,double d,double x);
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
	if(S(a,b,c,d,x)>=0)
		printf("%5.4lf",S(a,b,c,d,x));
	else
		printf("Invalid input");
	return 0;	
}
double S(double A,double B,double C,double D,double X)
{
    double s,y,z;
	s=(A+B+C+D)/2;
	y=X*P/360;
	if((s-A)*(s-B)*(s-C)*(s-D)-A*B*C*D*cos(y)*cos(y)<0)
		z=-1.0;
	else 
		z=sqrt((s-A)*(s-B)*(s-C)*(s-D)-A*B*C*D*cos(y)*cos(y));
	return z;
}