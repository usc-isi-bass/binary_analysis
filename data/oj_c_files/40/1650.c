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

double abc(double x,double y,double z,double w)
{
	double s;
	s=(x+y+z+w)/2;
	return s;
}
double abcd(double x,double y,double z,double w,double e)
{
	double S,d;
	d=abc(x,y,z,w);
	S=sqrt((d-x)*(d-y)*(d-z)*(d-w) - x*y*z*w*cos(e/180*pi)*cos(e/180*pi)); 
	return S;
}
void main()
{
	double a,b,c,d,h,e,j;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&h);
	e=h/2.0;
	
	j=abcd(a,b,c,d,e);
	if(j>=0)
	printf("%.4lf",j);
	else 
	printf("Invalid input");
}