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
	double s,a,b,c,d,e,f,g,h;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=0.5*(a+b+c+d); 
	h=e/360*3.1415926;
	f=cos(h);
	if ((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*f*f<0)
		printf("Invalid input\n");

	else 
	{g=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*f*f);
	printf("%.4lf",g);}
return 0;
}
