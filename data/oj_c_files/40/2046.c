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
	double S,s,a,b,c,d,e,f(double a,double b,double c,double d,double e);
	int m,n,i,j,k,t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	S=f(a,b,c,d,e);
	if(S!=0)
	printf("%.4lf",S);
	else
		printf("Invalid input");
}
double f(double a,double b,double c,double d,double e)
{
	double s,n,m;
	s=(a+b+c+d)/2;m=e/2/360*2*P;
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m))>0)
	n=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m)); 
	else
		n=0;
	return(n);
}