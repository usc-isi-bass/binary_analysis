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

double a,b,c,d,o;
double s(double a,double b,double c,double d,double o)
{
	double y,z,w;
	y=o*PI/360;
	z=(a+b+c+d)/2;
	w=(z-a)*(z-b)*(z-c)*(z-d)-a*b*c*d*cos(y)*cos(y);
	if(w<0) return(-1);
	else return (double)sqrt(w);
}
void main()
{
	double t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&o);
	t=s(a,b,c,d,o);
	if(t==-1) printf("Invalid input");
	else printf("%.4lf",t);
}
