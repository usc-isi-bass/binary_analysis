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
	int t,a,b,c,d,e;
	scanf("%d",&t);
	a=t/10000;
	b=t/1000-10*a;
	c=t/100-100*a-10*b;
	d=t/10-1000*a-100*b-10*c;
	e=t%10;
	if(a) printf("%d%d%d%d%d",e,d,c,b,a);
	else 
		if(b) printf("%d%d%d%d",e,d,c,b);
		else
			if(c) printf("%d%d%d",e,d,c);
			else
				if(b) printf("%d%d",e,d);
				else
					printf("%d",e);
	return 0;
}
