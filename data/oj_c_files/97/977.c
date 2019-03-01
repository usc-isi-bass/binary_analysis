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
	int a,b,c,d,e,f,g,h,i,j,k;
	scanf("%d",&a);
	b=(int)(a/100);
	c=a%100;
	d=(int)(c/50);
	e=c%50;
	f=(int)(e/20);
	g=e%20;
	h=(int)(g/10);
	i=g%10;
	j=(int)(i/5);
	k=i%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,d,f,h,j,k);
	return 0;
}