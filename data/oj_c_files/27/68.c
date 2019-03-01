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

void main ()
{
int n, i;
double a, b, c, d, e;
scanf("%d", &n);
for(i=1;i<=n;i++)
{
scanf("%lf %lf %lf", &a, &b, &c);
if((b*b-4*a*c)<0)
{d=(-(b/(2*a)));
 e=(sqrt(-b*b+4*a*c))/(2*a);
 printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", d, e, d, e);}
else if((b*b-4*a*c)>=0)
{d=(-b+sqrt(b*b-4*a*c))/(2*a);
 e=(-b-sqrt(b*b-4*a*c))/(2*a);
if(d==e)
 printf("x1=x2=%.5f\n", d);
 else if(!(d==e))
	 printf("x1=%.5f;x2=%.5f\n", d, e);}
}
}