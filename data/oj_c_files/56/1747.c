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
	int n,a,b,c,d,e,m;
	scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n%10;
	m=10000*e+1000*d+100*c+10*b+a;

	if(m%10000==0) m=m/10000;
	else if(m%1000==0) m=m/1000;
	else if(m%100==0) m=m/100;
	else if(m%10==0) m=m/10;

	printf("%d\n",m);
}


