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
	int a,b,c,d,e,f;
	scanf("%d",&a);

	if(a>=0&&a<10)
	{
		printf("%d\n",a);
	}
	else if(a>=10&&a<100) 
	{
		b=a%10;
		c=(a-b)/10;
		d=b*10+c;
		printf("%02d\n",d);
	}
	else if(a>=100&&a<1000)
	{
		b=a%10;
		c=(a-b)%100;
		d=(a-b-c)/100;
		e=b*100+c+d;
		printf("%03d\n",e);
	}
	else if(a>=1000&&a<10000)
	{
		b=a%10;
		c=(a-b)%100;
		d=(a-b-c)%1000;
		e=(a-b-c-d)/1000;
		f=b*1000+c*10+d/10+e;
		printf("%04d\n",f);
	}
    printf("\n");
	return 0;
}