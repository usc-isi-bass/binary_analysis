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

void main()
{
	double a,b,c,d,j,J,S,s,m,pi=3.1415926;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&j);
	s=(a+b+c+d)/2;
	J=j/360*pi;
	m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(J)*cos(J);
	if(m>0)
		printf("%.4lf",sqrt(m));
	else
		printf("Invalid input");
}

