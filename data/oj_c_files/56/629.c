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
	long int a,b,c,d,e,x,y;
	scanf("%5ld",&x);
	if(x>9999)
	{
		a=x/10000;
		b=x/1000%10;
		c=x/100%10;
		d=x/10%10;
		e=x%10;
		y=10000*e+1000*d+100*c+10*b+a;
		printf("%ld\n",y);
	}
	if(x>999&&x<=9999)
	{
		a=x/1000;
		b=x/100%10;
		c=x/10%10;
		d=x%10;
		y=1000*d+100*c+10*b+a;
		printf("%ld\n",y);
	}
	if(x>99&&x<=999)
	{
		a=x/100;
		b=x/10%10;
		c=x%10;
		y=100*c+10*b+a;
		printf("%ld\n",y);
	}
		if(x>9&&x<=99)
	{
		a=x/10;
		b=x%10;
		y=10*b+a;
		printf("%ld\n",y);
	}
		if(x>0&&x<=9)
	{
		a=x;
		y=a;
		printf("%ld\n",y);
	}
}