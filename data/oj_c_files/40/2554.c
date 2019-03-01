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
	double a,b,c,d,e,s,x;
	scanf("%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d);
	scanf("%lf",&x);
	e=a/2+b/2+c/2+d/2;
	s=sqrt((e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*((cos(x/180*PI)+1)/2));
	if((e-a)*(e-b)*(e-c)*(e-d)-a*b*c*d*((cos(x/180*PI)+1)/2)<0)
		printf("Invalid input");
	else
	printf("%.4lf",s);
	return 0;
}
