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
	int i,a,b,c,d,e,g;
	scanf("%d ",&i);
	if ((i>=10)&&(i<100))
	{
		a=i/1000;
	b=i%10;
	g=10*b+a;
printf("%d",b);
printf("%d",a);
	}
	if ((i>0)&&(i<10))
	{
		g=i;
printf("%d",i);
	}
	if ((i>=100)&&(i<1000))
	{
		a=i/100;
	    b=(i/10)%10;
		c=i%10;
		g=100*c+10*b+a;
printf("%d",c);
printf("%d",b);
printf("%d",a);
	}
	if ((i>=1000)&&(i<10000))
	{
		
		a=i/1000;
		b=(i/100)%10;
		c=(i/10)%10;
		d=i%10;
		printf("%d",d);
printf("%d",c);
printf("%d",b);
printf("%d",a);
	}
	
	
	return 0;
}





