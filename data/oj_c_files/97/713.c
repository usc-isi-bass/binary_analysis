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

int main ()
{
    int n,a,b,c,d,e,f,x;
	scanf("%d",&n);
	a=n/100;
	x=n%100;
	b=x/50;
	x=x%50;
	c=x/20;
    x=x%20;
	d=x/10;
	x=x%10;
	e=x/5;
	f=x%5;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}