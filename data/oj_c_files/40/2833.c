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

double S(double x,double y,double z,double w,double m);
int main()
{
double a,b,c,d,e,f,genhaonei,mianji;
scanf ("%lf",&a);
scanf ("%lf",&b);
scanf ("%lf",&c);
scanf ("%lf",&d);
scanf ("%lf",&e);
genhaonei=S(a,b,c,d,e);
if (genhaonei<0)
{
	printf("Invalid input");
}
else 
{
	mianji=sqrt(genhaonei);
    printf ("%.4lf\n",mianji);
}
return 0;
}
double S(double x,double y,double z,double w,double m)
{
	double s,genxia,ff;
	s=0.5000*(x+y+z+w);
	ff=0.5000*m/180.0000*PI;
	genxia=(s-x)*(s-y)*(s-z)*(s-w)-x*y*z*w*cos(ff)*cos(ff);
	return genxia;
}