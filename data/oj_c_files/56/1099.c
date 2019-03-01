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
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	if(a!=0)
	n=n-10000*a;
	b=n/1000;
	if(b!=0)
	n=n-1000*b;
	c=n/100;
	if(c!=0)
	n=n-100*c;
	d=n/10;
	if(d!=0)
	e=n-10*d;
	if((a==0)&&(b==0)&&(c==0)&&(d==0))
		printf("%d",n);
	if((a==0)&&(b==0)&&(c==0)&&(d!=0))
		printf("%d%d",e,d);
	if((a==0)&&(b==0)&&(c!=0))
		printf("%d%d%d",e,d,c);
	if((a==0)&&(b!=0))
		printf("%d%d%d%d",e,d,c,b);
	if(a!=0)
		printf("%d%d%d%d%d",e,d,c,b,a);
	return 0;
}

