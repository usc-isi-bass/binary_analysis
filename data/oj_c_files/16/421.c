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
	int a,b,c,d,e,f,i;
	scanf("%d",&a);
	i=1+log10(a);
	b=a/10000;
	a=a%10000;
	c=a/1000;
	a=a%1000;
	d=a/100;
	a=a%100;
	e=a/10;
	a=a%10;
	f=a;
	printf("%d",f);
	if(i>1)printf("%d",e);
	if(i>2)printf("%d",d);
	if(i>3)printf("%d",c);
	if(i>4)printf("%d",b);
	return 0;
}