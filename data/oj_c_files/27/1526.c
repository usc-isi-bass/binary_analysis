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
	int i,n;
	scanf("%d/n",&n);
	double x1,x2,a,b,c,x,y;
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf%lf\n",&a,&b,&c);
		x=(sqrt(b*b-4*a*c))/(2*a);
		if (x>0)
		{
			x1=-b/(2*a)+x;
			x2=-b/(2*a)-x;
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if (x==0)
		{
			x1=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else 
		{
			
y=(sqrt(-b*b+4*a*c))/(2*a);
x1=-b/(2*a);
			printf("x1=%.5lf",x1);
			printf("+%.5lf",y);
			printf("i;");
			printf("x2=%.5lf",x1);
			printf("-%.5lf",y);
printf("i\n");
		}
	}
}