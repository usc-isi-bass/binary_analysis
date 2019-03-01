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
	int x,a,b,c,d;
	scanf("%d",&x);
	a=x/1000;
	b=x/100%10;
	c=x/10%10;
	d=x%10;
	if(a==0)
		if(b==0)
			if(c==0)
				printf("%d",d);
			else printf("%d%d",d,c);
		else printf("%d%d%d",d,c,b);
	else printf("%d%d%d%d",d,c,b,a);
}

