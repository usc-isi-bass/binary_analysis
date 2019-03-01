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
	int x;
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d%d",&x,&a,&b,&c,&d,&e,&f);
	a=x/100;
	b=x%100/50;
	c=x%50/20;
	d=(x%50)%20/10;
	e=x%10/5;
	f=x%5;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}
