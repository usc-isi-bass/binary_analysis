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


double a,b,c,d,angle,S,s;
int main(int argc, char* argv[])
{
	double square(double x1,double x2,double x3,double x4,double beta);
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
    angle=angle/180*PI;
	s=(a+b+c+d)/2; 
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle/2)*cos(angle/2)<0){
	printf("Invalid input");}
	else printf("%.4lf",square(a,b,c,d,angle));

	return 0;
}
double square(double x1,double x2,double x3,double x4,double beta){
	S=sqrt((s-x1)*(s-x2)*(s-x3)*(s-x4)-x1*x2*x3*x4*cos(beta/2)*cos(beta/2));
	return S;
}