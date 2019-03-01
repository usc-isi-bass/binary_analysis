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
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	scanf("%d",&n);
	a=(n-n%100)/100;
	n=n-100*a;
	b=(n-n%50)/50;
	n=n-50*b;
	c=(n-n%20)/20;
	n=n-20*c;
	d=(n-n%10)/10;
	n=n-10*d;
	e=(n-n%5)/5;
	n=n-5*e;
	f=n;
	printf("%d\n",a);
    printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
    printf("%d\n",f);
    return 0;
}