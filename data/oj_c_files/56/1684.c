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
	long n;
	int a,b,c,d,e;
	scanf("%d",&n);	
		if (n<10)
		printf("%d",n);
	 
		else if (n<100)
		{
			a=n%10;
			n=n-a;
			b=n/10;
			printf("%d%d",a,b);
		}
		else if (n<1000)
		{
			a=n%10;
			n=n-a;
			b=(n%100)/10;
			n=n-10*b;
			c=n/100;
			printf("%d%d%d",a,b,c);
		}
		 
		else if (n<10000)
		{
			a=n%10;
			n=n-a;
			b=(n%100)/10;
			n=n-10*b;
			c=(n%1000)/100;
			n=n-100*c;
			d=n/1000;
			printf("%d%d%d%d",a,b,c,d);
		}
		
		else
		{
			a=n%10;
			n=n-a;
			b=(n%100)/10;
			n=n-10*b;
			c=(n%1000)/100;
			n=n-100*c;
			d=(n%10000)/1000;
			n=n-1000*d;
			e=n/10000;
			printf("%d%d%d%d%d",a,b,c,d,e);
		}
	
}