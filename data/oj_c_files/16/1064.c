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
	n=(n-a)/10;
	b=n%10;
	n=(n-b)/10;
	c=n%10;
	n=(n-c)/10;
	d=n%10;
	if (d!=0)
		printf("%d%d%d%d",a,b,c,d);
	else if (c!=0)
		printf("%d%d%d",a,b,c);
	else if (b!=0)
	    printf("%d%d",a,b);
	else
		printf("%d",a);
	return 0;
}