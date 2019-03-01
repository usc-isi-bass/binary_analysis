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
	int i,a,b,c,d,e;
	scanf("%d",&i);
	a=i/10000;
	b=(i-a*10000)/1000;
	c=(i-10000*a-1000*b)/100;
	d=(i-10000*a-1000*b-100*c)/10;
    e=i-10000*a-1000*b-100*c-10*d;
	if(a==0&&b==0&&c==0&&d==0)printf("%d\n",e);
	else if(a==0&&b==0&&c==0)printf("%d%d\n",e,d);
	else if(a==0&&b==0)printf("%d%d%d\n",e,d,c);
	else if(a==0)printf("%d%d%d%d\n",e,d,c,b);
	else printf("%d%d%d%d%d\n",e,d,c,b,a);
}
