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
	double a,b,c,d,s,S,k,t;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&k);
    s = (a+b+c+d)/2;
	t=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*PI/2/180)*cos(k*PI/2/180);
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*PI/2/180)*cos(k*PI/2/180));
	if(t>0)
	{
		printf("%.4lf",S);
	}
	else if(t<0)
	{
		printf("Invalid input");
	}
	return 0;
}