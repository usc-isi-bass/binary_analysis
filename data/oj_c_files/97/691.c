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
	int n,a,b,c,d,e,f,x;
	scanf("%d",&n);
    a=(int)(n/100);
	x=n-100*a;
	if(x>=50)
	{
		b=1;
		x-=50;
	}
	else b=0;
    c=(int)(x/20);
	x-=c*20;
    d=(int)(x/10);
	x-=d*10;
	if(x>=5)
	{
		e=1;
		x-=5;
	}
	else e=0;
	f=x;
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
    return 0;
}