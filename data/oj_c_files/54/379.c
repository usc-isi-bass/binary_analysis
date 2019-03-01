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

main()
{
	int n,k,m,i,j,a,b,c;
	scanf("%d%d",&n,&k);
	a=1;
	b=1;
	if(n>=3)
	{
		for(i=1;i<=n;i++)
		{
			if(c%(n-1)==0)
			{
				a=c/(n-1);
				c=a*n+k;
			}
			else
			{
				a=b+1;
				b=a;
				i=1;
				c=n*a+k;
			}
		}
		printf("%d",c);
	}
	else printf("7");
}


