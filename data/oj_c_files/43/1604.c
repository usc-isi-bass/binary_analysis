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
	int m,n,a,b,c;
	scanf("%d",&m);
	n=3;

	while(n<=(m/2))
	{
		b=2;
		c=2;
		while(c<n)
		{
			if((n%c)==0)
				break;
			else
				c++;
		}
		if(c==n)
		{
			a=m-n;
		}
		else
		{
			n=n+2;
			continue;
		}
		while(b<a)
		{
			if((a%b)==0)
				break;
			else
				b++;
		}
		if(b==a)
		{
			printf("%d %d\n",n,a);
		}
		n=n+2;
	}
	return 0;
}
