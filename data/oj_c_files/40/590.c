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

int main(int argc, char* argv[])
{
	double t,a,b,c,d,e,s,S,p=3.1415926;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	s=(double)1/2*(a+b+c+d); 
	S=(double)sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(cos((e/360)*p))*(cos((e/360)*p))); 
	t=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos((e/360)*p)*cos((e/360)*p));
	if(t<0)
	{
		printf("Invalid input\n");
	}
	else
	{
		printf("%.4lf\n",S);
	}
	return 0;
}