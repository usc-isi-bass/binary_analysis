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
	int n,a,b,c,d,e,x;
	scanf("%d",&n);
	if(n>10000)
	{
		a=n/10000;
	    b=(n-10000*a)/1000;
	    c=(n-a*10000-b*1000)/100;
	    d=(n-a*10000-b*1000-c*100)/10;
	    e=n-a*10000-b*1000-c*100-d*10;
		x=e*10000+d*1000+c*100+b*10+a;
	}
    if(n>10000)
	{
		a=n/10000;
	    b=(n-10000*a)/1000;
	    c=(n-a*10000-b*1000)/100;
	    d=(n-a*10000-b*1000-c*100)/10;
	    e=n-a*10000-b*1000-c*100-d*10;
		x=e*10000+d*1000+c*100+b*10+a;
	}
    if(n>1000&&n<10000)
	{
		b=n/1000;
	    c=(n-b*1000)/100;
	    d=(n-b*1000-c*100)/10;
	    e=n-b*1000-c*100-d*10;
		x=e*1000+d*100+c*10+b;
	}
    if(n>100&&n<1000)
	{
		c=n/100;
	    d=(n-c*100)/10;
	    e=n-c*100-d*10;
		x=e*100+d*10+c;
	}
    if(n>10&&n<100)
	{
	    d=n/10;
	    e=n-d*10;
		x=e*10+d;
	}
	if(n>0&&n<10)
		x=n;
	printf("%d",x);
}
    
