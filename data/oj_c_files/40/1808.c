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

void main()
{
	double square(double a,double b,double c,double d,double angle);	
	double a,b,c,d,angle,s,S,ang;

	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&angle);
	s=(a+b+c+d)/2;
	ang=(angle/(double)360)*3.1415926;
	{	
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(ang)*cos(ang))<0)
		printf("Invalid input");
		else
		{
S=square(a,b,c,d,angle);
	printf("%.4lf",S);
		}
	}
}
double square(double a,double b,double c,double d,double angle)
{
	double S,s,ang;
	s=(a+b+c+d)/2;
	ang=(angle/(double)360)*3.1415926;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(ang)*cos(ang));
return(S);}