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
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=(int)(a/10)%10;
	d=(int)(a/100)%10;
	e=(int)(a/1000)%10;
	if(a>=0&&a<10)
		printf("%d\n",a);
	else if(a>=10&&a<100)
		printf("%d%d\n",b,c);
	else if(a>=100&&a<1000)
		printf("%d%d%d\n",b,c,d);
	else
		printf("%d%d%d%d\n",b,c,d,e);
	return 0;
}