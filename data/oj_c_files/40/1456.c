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
	double S(double a,double b,double c, double d,double e);
	double a,b,c,d,e,t,g,s;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	t=S(a,b,c,d,e);	
	e=e/180*3.1415926;
    s=(a+b+c+d)/2;
    g=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(cos(e/2)*cos(e/2));
    if(g<0)
	{
		printf("Invalid input");
	}else{
		printf("%.4lf",t);
	
	}
	return 0;
}

	double S(double a,double b,double c, double d,double e)
	{
		double s,g;
		e=e/180*3.1415926;
		s=(a+b+c+d)/2;
		g=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(cos(e/2)*cos(e/2)));
		return(g);
	}




