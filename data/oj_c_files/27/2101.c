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
	double a, b, c,d,g,x1,x2;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
			d=(-b)/(2*a) ;
		    g=(sqrt(fabs(4*a*c-b*b)))/(2*a);
		    
	if((b*b-4*a*c)>0)
	{
		x1=d+g;
		x2=d-g;
			printf("x1=%.5lf;",x1);
			printf("x2=%.5lf\n",x2);
	}
    else if((b*b-4*a*c)==0)
	{
			x1=x2=d;
			printf("x1=x2=%.5lf\n",d);
	}
	else if((4*a*c-b*b)>0)
	{
		    printf("x1=%.5lf+%.5lfi;",d,g);
		    printf("x2=%.5lf-%.5lfi\n",d,g);
	}
	}
	return 0;
}
