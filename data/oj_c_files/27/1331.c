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
	scanf("%d",&n);
	int i;
	double a,b,c;
	for (i=0;i<n;i++)
	{scanf("%lf%lf%lf",&a,&b,&c);

	double x1,x2;
	if((b*b-4*a*c)>0)
	{x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%.5lf;",x1);
	printf("x2=%.5lf\n",x2);}

	
	if((b*b-4*a*c)==0)
	{x1=(-b/(2*a));
	printf("x1=x2=%.5lf\n",x1);}
	
	if((b*b-4*a*c)<0)
	{x1=(sqrt(4*a*c-b*b))/(2*a);
	x2=(sqrt(4*a*c-b*b))/(2*a);
	printf("x1=%.5lf+%.5lfi;",-b/(2*a),x1);
	printf("x2=%.5lf-%.5lfi\n",-b/(2*a),x2);}
	}
	return 0;
}
