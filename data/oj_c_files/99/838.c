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
	int a[1000],n,i,q,w,e,r;
	double z,x,c,v;
	scanf("%d\n",&n);
	q=0;
	w=0;
	e=0;
	r=0;
    for(i=0;i<n;i++)
	{   scanf("%d",&a[i]);
		if(a[i]<=18)
		{q++;}
		if(18<a[i] && a[i]<36)
		{w++;}
		if(35<a[i] && a[i]<61)
		{e++;}
		if(a[i]>60)
		{r++;}
	}
	z=100.00*q/n;
	x=100.00*w/n;
	c=100.00*e/n;
	v=100.00*r/n;
	printf("1-18: ");
	printf("%.2lf",z);
	printf("%%\n");
	printf("19-35: ");
	printf("%.2lf",x);
	printf("%%\n");
	printf("36-60: ");
	printf("%.2lf",c);
	printf("%%\n");
	printf("60??: ");
	printf("%.2lf",v);
	printf("%%\n");
return 0;
}