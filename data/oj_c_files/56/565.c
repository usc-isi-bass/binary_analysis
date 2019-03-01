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
	int n;
	scanf ("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n-10000*a-1000*b-100*c-10*d;
	if (a!=0){
		printf("%d%d%d%d%d",e,d,c,b,a);
	}
	if ((a==0)&&(b!=0)){
		printf("%d%d%d%d",e,d,c,b);
	}
	if ((a==0)&&(b==0)&&(c!=0)){
		printf("%d%d%d",e,d,c);
	}
	if ((a==0)&&(b==0)&&(c==0)&&(d!=0)){
		printf("%d%d",e,d);
	}
	if ((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e!=0))
		printf("%d",e);
	return 0;
}

