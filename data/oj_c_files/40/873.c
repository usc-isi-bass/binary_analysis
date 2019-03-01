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
	double a,b,c,d,e,s,S;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&e);
	if(0<=e&&e<=360)
	{
		s = (a+b+c+d)/2;
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e*PI)/(180*2))*cos((e*PI)/(180*2))); 
		if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e*PI)/(180*2))*cos((e*PI)/(180*2))<0)
		{printf("Invalid input");}
		else
		{	printf("%.4lf",S);}
	}
	return 0;
}
