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
	int p(long x);
	long n,m,i;
	scanf("%d",&n);
    for(i=3;2*i<=n;i++)
	{
		for(m=3;m<=i;m++)
			if(p(m)==1&&p(2*i-m)==1)
			{
				printf("%ld=%ld+%ld\n",2*i,m,2*i-m);
				break;
			}
	}
}
int p(long x)
{
	long i,c=1;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			c=0;
			break;
		}
	}
	return(c);
}
