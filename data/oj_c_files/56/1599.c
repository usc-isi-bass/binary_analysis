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
	unsigned long a;
	int b,c,d,e,f;
    scanf("%ld",&a);
	b=(a/10000)%10;
	c=(a/1000)%10;
		d=(a/100)%10;
		e=(a/10)%10;
		f=a%10;

		if (a>10000)
			printf("%d%d%d%d%d\n",f,e,d,c,b);
		else if (1000<a&&a<10000)
			printf("%d%d%d%d\n",f,e,d,c);
		else if (100<a&&a<1000)
			printf("%d%d%d\n",f,e,d);
		else if(10<a&&a<100)
			printf("%d%d\n",f,e);
		else printf("%d\n",f);
}