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
	int a,b,c,d,e,f,g;
	scanf ("%d",&f);
	if (f>=10000)
	{
		a=(f-f%10000)/10000;
		f=f-a*10000;
		b=(f-f%1000)/1000;
		f=f-b*1000;
		c=(f-f%100)/100;
		f=f-c*100;
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*10000+d*1000+c*100+b*10+a;
	    printf ("%d",g);
	}
	else if (f>=1000)
	{
		b=(f-f%1000)/1000;
		f=f-b*1000;
		c=(f-f%100)/100;
		f=f-c*100;
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*1000+d*100+c*10+b*1;
    	printf ("%d",g);
	}
	else if (f>=100)
	{
		c=(f-f%100)/100;
		f=f-c*100;
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*100+d*10+c*1;
    	printf ("%d",g);
	}
	else if (f>=10)
	{
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*10+d*1;
    	printf ("%d",g);
	}
	else
	{
		e=f;
    	g=e;
    	printf ("%d",g);
	}
}
