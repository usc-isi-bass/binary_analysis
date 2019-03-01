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
	double a,b,c,d,e,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	e=3.1415926*e/360;
	e=cos(e);
	s=(a+b+c+d)/2;
	s=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e;
	if(s<0)
		printf("Invalid input");
	else{
		s=sqrt(s);
		printf("%.4lf",s);
	}
	return 0;
}