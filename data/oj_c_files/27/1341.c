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
	int i,j;
	double a,b,c,d,e,f,m,n,h;
	scanf ("%d\n",&j);
	for (i=1;i<=j;i++)
	{
		scanf ("%lf%lf%lf",&a,&b,&c);
	    h=b*b-4*a*c;
	    if (h>0)
		{
		d=(-b+sqrt(h))/(2*a);
	    e=(-b-sqrt(h))/(2*a);
		printf("x1=%.5lf;x2=%.5lf\n",d,e);}
		if (h==0)
		{
		f=(-b)/(2*a);
		printf ("x1=x2=%.5lf\n",f);}
		if (h<0)
		{
		m=(-b)/(2*a);	n=sqrt(-h)/(2*a);
	    printf ("x1=%.5lf+%.5lfi;",m,n);
        printf ("x2=%.5lf-%.5lfi\n",m,n);
		}}
		return 0;
}