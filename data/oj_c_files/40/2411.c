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
	double a,b,c,d,angle,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
	s=(a+b+c+d)/2;
	angle=2*PI*angle/360/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*d*c*(double)pow(cos(angle),2);
	if(S<0)
		printf("Invalid input");
	else
	{
		S=sqrt(S);
		printf("%.4lf",S);
	}
	return 0;
}
