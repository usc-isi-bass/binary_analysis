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
	double a,b,c,d,pi=3.1415926,S,s,j,m;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&j);
	j=pi*j/360;
	s=(a+b+c+d)/2;
	m=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(j)*cos(j);
	if(m<0)printf("Invalid input");
	else
		{
			S=sqrt(m);
			printf("%.4lf\n",S);
		}
	return 0;
}