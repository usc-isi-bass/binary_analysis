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
	int n,a,b,c,d;
	scanf("%d",&n);
	if(n<10)
	{
		printf("%d",n);
	}
	if((n>9)&&(n<100))
	{
		a=n/10;
		b=n%10;
		printf("%d%d",b,a);
	}
	if((n>99)&&(n<1000))
	{
		a=n/100;
		b=(n-a*100)/10;
		c=n%10;
		printf("%d%d%d",c,b,a);
	}
	if(n>999)
	{
		a=n/1000;
		b=(n-a*1000)/100;
		c=(n-a*1000-b*100)/10;
		d=n%10;
		printf("%d%d%d%d",d,c,b,a);
	}
	return 0;
}
		
