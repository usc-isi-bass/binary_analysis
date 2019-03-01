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
	int n,a,b,c,d,e;
	scanf("%d",&n);
	if(n>9999)
	{
		a=n/10000,b=(n-a*10000)/1000,c=(n-a*10000-b*1000)/100,d=(n-a*10000-b*1000-c*100)/10,e=n%10;
		printf("%d%d%d%d%d\n",e,d,c,b,a);
	}
	else if(n>999)
	{
		a=n/1000,b=(n-a*1000)/100,c=(n-a*1000-b*100)/10,d=n%10;
	printf("%d%d%d%d\n",d,c,b,a);
	}
	else if(n>99)
	{
		a=n/100,b=(n-a*100)/10,c=n%10;
	printf("%d%d%d\n",c,b,a);
	}
	else if(n>9)
	{
		a=n/10,b=n%10;
	printf("%d%d\n",b,a);
	}
	else printf("%d",n);
}
