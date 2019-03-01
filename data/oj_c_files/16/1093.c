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

main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/1000;
	b=(n-1000*a)/100;
	c=(n-1000*a-100*b)/10;
	d=n%10;
	if(n<10)
		printf("%d\n",n);
	else if(n<100)
		printf("%d%d\n",d,c);
	else if(n<1000)
		printf("%d%d%d\n",d,c,b);
	else if(n<10000)
		printf("%d%d%d%d\n",d,c,b,a);
}