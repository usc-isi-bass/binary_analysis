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
	int a=0,b=0,c=0,d=0,e=0,f=0,n=0;
	scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/50;
	c=(n-100*a-50*b)/20;
	d=(n-100*a-50*b-20*c)/10;
	e=(n-100*a-50*b-20*c-10*d)/5;
    f=n-100*a-50*b-20*c-10*d-5*e;

	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);

	return 0;
}