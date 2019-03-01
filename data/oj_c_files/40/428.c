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

double space(double l1,double l2,double l3,double l4,double a)
{
	double l0,pi=3.1415926;
	l0=(l1+l2+l3+l4)/2;
	return (sqrt((l0-l1)*(l0-l2)*(l0-l3)*(l0-l4)-l1*l2*l3*l4*cos(a*pi/360)*cos(a*pi/360)) );
}

int main ( )
{
	double l1,l2,l3,l4,a,l0,pi=3.1415926;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&l1,&l2,&l3,&l4,&a);
	l0=(l1+l2+l3+l4)/2;
	if((l0-l1)*(l0-l2)*(l0-l3)*(l0-l4)-l1*l2*l3*l4*cos(a*pi/360)*cos(a*pi/360)>0)
		printf("%.4lf\n",space(l1,l2,l3,l4,a));
	else
		printf("Invalid input\n");
	return 0;
}