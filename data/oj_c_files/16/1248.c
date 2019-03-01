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
	a=n%10;
	b=((n%100)-a)/10;
	c=((n%1000)-(10*b+a))/100;
	d=(n-100*c-10*b-a)/1000;
	if(d)
		printf("%d%d%d%d",a,b,c,d);
	else if(c)
		printf("%d%d%d",a,b,c);
	else if(b)
		printf("%d%d",a,b);
	else
		printf("%d",a);
	return 0;
}
