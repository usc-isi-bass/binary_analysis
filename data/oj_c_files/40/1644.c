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
	double a,b,c,d,j,s,S;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&j);
	j=j/360*3.1415926;
	j=cos(j);
	j=j*j*a*b*c*d;
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-j;
	if(S<0) printf("Invalid input");
	else
	{
		S=sqrt(S);
		printf("%.4lf",S);
	}
}