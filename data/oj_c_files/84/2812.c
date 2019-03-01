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
	int a,b,c,n,i,e;
	scanf("%d",&n);
	scanf("%d",&b);
	scanf("%d",&c);
	if(b>c)
	{
		e=b;
		b=c;
		c=e;
	}

	for(i=3;i<=n;i++)
	{
		scanf("%d",&a);

		if(a>c)
		{
			e=c;
			c=a;
			b=e;
		}
		else if((a>b)&&(a<=c))
		{
			b=a;
		}
		else
		{
			continue;
		}

	}

	printf("%d\n%d\n",c,b);
	return 0;
}