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
	int n,a,b,c,d,e,f,g,h,i,j;
	scanf("%d",&n);
	a=n%10;
	e=n-a;
	f=e/10;
         b=f%10;
	g=n-10*b-a;
	h=g/100;
	c=h%10;
         i=n-100*c-10*b-a;
	j=i/1000;
	d=j%10;
	if(d==0)
	{
		if(c==0)
		{
			if(b==0)
				printf("%d",a);
			else
				printf("%d%d",a,b);
		}
		else
			printf("%d%d%d",a,b,c);
	}
	else
		printf("%d%d%d%d",a,b,c,d);
	return 0;
}
