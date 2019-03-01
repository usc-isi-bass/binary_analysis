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
	unsigned i,n;
	int checkN(unsigned);
	scanf("%u",&n);
	for(i=6; i<=n; i+=2)
	{
		unsigned j=0,k=0;
		for(j=3; j<=i-3;j++)
		{
			if(checkN(j)==1 && checkN(i-j)==1)
			{
				printf("%u=%u+%u\n",i,j,i-j);
				break;
			}
		}
	}
}
int checkN(unsigned n)
{
	if(n%2==0)
		return 0;
	else
	{
		unsigned i;
		for(i=3; i<=sqrt(n); i+=2)
		{
			if(n%i==0)
			{
				return 0;
				break;
			}
		}
		if(i>sqrt(n))
			return 1;
	}
}
