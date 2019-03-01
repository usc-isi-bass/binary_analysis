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


void main(int argc,char*argv[])
{
	double a,b,c,d,e,s,area,temp,angle;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	angle=pi*(e/360);
	s=(a+b+c+d)/2;
	temp=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
	if(temp<0)
	  printf("Invalid input");
	else
	{
		area=sqrt(temp);
		printf("%.4f\n",area);
	}
}