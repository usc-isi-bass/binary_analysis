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

long prime(long x)
{
	long i;
	for (i=2;i<=sqrt(x);i++)
	{
		if (x%i==0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

void main()
{
	long n,j;
	long i=6;
	scanf("%ld",&n);
		while (i!=(n+2))
		{  
			for(j=3;j<=i/2;j++)
			{
				if(prime(j)==1&&prime(i-j)==1)
				{
					break;
				}
			}
			printf("%ld=%ld+%ld\n",i,j,(i-j));
			i=i+2;
		}
}