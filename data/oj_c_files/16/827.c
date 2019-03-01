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
	int n,a,b,c,d,i;
	scanf("%d",&n);
	a=n/1000;
	b=(n/100)%10;
	c=(n/10)%10;
	d=n%10;
	if(a)
		printf("%d%d%d%d\n",d,c,b,a);
	else if(b)
			printf("%d%d%d\n",d,c,b);
	else if(c)
		printf("%d%d\n",d,c);
	else printf("%d\n",d);	
}
