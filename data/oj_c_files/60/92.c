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
	int i,j,n,b,a,c;
	scanf("%d",&n);
	if(n<=4)
		printf("empty\n");
	else
	{
	for(i=3;i<=n-2;i++)
	{
		a=i;
		for(j=2;j<=a;j++)
		{
			b=a%j;
			if(b==0) break;
		}
		if(j==a)
		{
			c=a+2;
			for(j=2;j<=c;j++)
			{
				b=c%j;
				if(b==0) break;
			}
			if(j==c)
				printf("%d %d\n",a,c);
		}

	}
	}
}