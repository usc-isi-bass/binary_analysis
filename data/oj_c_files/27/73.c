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
	int n;
	double a,b,c,x1,x2,e,f,g;
     scanf("%d\n",&n);
while(n--)
	{
	scanf("%lf %lf %lf\n",&a,&b,&c);
	e=b*b-4*a*c;
	if(e>0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	}
	else if(e==0)
	{
		x1=(-b)/(2*a);
		printf("x1=x2=%.5lf\n",x1);
	}
	if(e<0)
	{
		f=(-b)/(2*a);
		g=sqrt(-(b*b-4*a*c))/(2*a);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",f,g,f,g);
	}
}
return 0;
}