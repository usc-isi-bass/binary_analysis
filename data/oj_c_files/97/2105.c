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
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=(a-a%100)/100;
	a=a-100*b;
	
	c=(a-a%50)/50;
	a=a-50*c;
	
	d=(a-a%20)/20;
	a=a-20*d;
	
	e=(a-a%10)/10;
	a=a-10*e;

	f=(a-a%5)/5;
	a=a-5*f;

	g=a;

	printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);

	return 0;
}