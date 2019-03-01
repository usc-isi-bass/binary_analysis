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
	int n,b,c,i=1;
	scanf("%d",&n);
	b=0;
	c=0;
	do
	{
		int a;
		scanf("%d",&a);
		if(a>b)
		{
			c=b;
			b=a;
		}
		else
			if(a>c)
			{
				c=a;
				b=b;
			}
			else
			{
				c=c;
				b=b;
			}
		i=i+1;
	}
	while(i<=n);
	printf("%d\n%d",b,c);
}

