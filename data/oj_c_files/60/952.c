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
	int n,i,j,a,b,c=0,p,q;
	scanf("%d",&n);
	for(i=5;i<=n;i++)
	{
		p=i-2;
		q=i;
		a=0;
		b=0;
		for(j=2;j<p;j++)
		{
			if(p%j==0)
			{
				a=1;
				break;
			}
		}
		for(j=2;j<q;j++)
		{
			if(q%j==0)
			{
				b=1;
				break;
			}
		}
		if(a==0&&b==0)
		{
			printf("%d %d\n",i-2,i);
			c=1;
		}
	}
	if(c==0)
	{
		printf("empty");
	}
	return 0;
}