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
	double s,S;
	double a,b,c,d,A,aerfa;
	double kaifang(double a,double b,double c,double d,double aerfa);
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&A);
	aerfa=A/180*PI/2;
	s=(a+b+c+d)/2;
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(aerfa)*cos(aerfa))<0)
		printf("Invalid input");
	else
	{
		S=kaifang(a,b,c,d,aerfa);
		printf("%.4lf\n",S);
	}
	return 0;
}

double kaifang(double a,double b,double c,double d,double aerfa)
{
	double s,S;
	s=(a+b+c+d)/2;
	while(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(aerfa)*cos(aerfa))>=0)
	{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(aerfa)*cos(aerfa));
		break;
	}
	return S;
}
