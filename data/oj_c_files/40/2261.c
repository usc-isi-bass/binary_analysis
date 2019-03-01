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
	double a,b,c,d,e,f,s;
	double squar;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=(double)(a+b+c+d)/2;
	f=(double)e/360*PI;
	squar=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(f),2));
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(e),2))>=0)
	{
	printf("%.4lf\n",squar);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
    
}