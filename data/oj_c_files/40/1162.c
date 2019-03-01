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

double s(double a,double b,double c,double d,double du); 
int main()
{
	double a,b,c,d,du,s2;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&du);
	s2=s(a,b,c,d,du);
	if(s2==0)
		printf("Invalid input");
	else
		printf("%.4f",s2);
	return 0;
}
double s(double a,double b,double c,double d,double du)
{
	double ps,ss,rad;
	rad=du*PI/360;
	ss=(a+b+c+d)/2;
	if(((ss-a)*(ss-b)*(ss-c)*(ss-d)-a*b*c*d*cos(rad)*cos(rad))<0)
		return 0;
	else
	{
		ps=sqrt((ss-a)*(ss-b)*(ss-c)*(ss-d)-a*b*c*d*cos(rad)*cos(rad));
		return ps;
	}

}