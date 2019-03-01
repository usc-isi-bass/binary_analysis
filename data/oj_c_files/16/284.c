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
	int a,b,c,d,e,z,y;
	scanf("%d",&a);
	if(a<10)
		printf("%d",a);
	else if(a<100)
	{
		b=a/10;
		c=a%10;
		printf("%d%d",c,b);
	}
	else if(a<1000)
	{
		b=a/100;
		z=a%100;
		c=z/10;
		d=z%10;
		printf("%d%d%d",d,c,b);
	}
	else if(a<10000)
	{
		b=a/1000;
		z=a%1000;
		c=z/100;
		y=z%100;
		d=y/10;
		e=y%10;
		printf("%d%d%d%d",e,d,c,b);
	}
	else
		printf("00001");
	return 0;
}
